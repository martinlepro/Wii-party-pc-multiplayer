import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "recompiler"))

import rel
import recomp_rel
from ppc.module_emit import split

KEYWORDS = (
    b"dice_number",
    b"dice_num",
    b"1st_dice",
    b"2nd_dice",
    b"3rd_dice",
    b"glow_dice",
    b"necessary boards",
)

def main():
    for name in ("mr001", "mr701"):
        path = recomp_rel.MODULES / f"{name}.rel"
        if not path.exists():
            print("Module absent :", path)
            continue

        module = rel.parse(path.read_bytes())
        relocations = module.relocations()
        by_site = recomp_rel.relocation_map(relocations)
        _, bodies = recomp_rel.discover(module, relocations, by_site)

        print(f"\n=== {name} : {len(bodies)} fonctions candidates ===")
        strings = []

        for sec_index, section in enumerate(module.sections):
            if not section.offset or not section.size:
                continue
            data = module.data[section.offset:section.offset + section.size]
            pos = 0
            while pos < len(data):
                end = data.find(b"\0", pos)
                if end < 0:
                    break
                value = data[pos:end]
                if any(k in value.lower() for k in KEYWORDS):
                    strings.append((sec_index, pos, value))
                pos = end + 1

        printed = set()
        for target_sec, target_off, value in strings:
            for r in relocations:
                if r.target_section != target_sec:
                    continue
                if not target_off <= r.addend <= target_off + len(value):
                    continue
                if r.site_section >= len(module.sections):
                    continue
                if not module.sections[r.site_section].executable:
                    continue

                for start, instrs in bodies.items():
                    sec, off = split(start)
                    if sec != r.site_section:
                        continue
                    if not off <= r.site_offset < off + 4 * len(instrs):
                        continue

                    key = (name, start, r.site_offset, value)
                    if key in printed:
                        continue
                    printed.add(key)

                    print(f"\nRessource : {value!r}")
                    print(f"  Fonction : section {sec}, offset {off:#x}")
                    print(f"  Référence : {r.site_offset:#x}")
                    index = (r.site_offset - off) // 4
                    for i in range(max(0, index - 3),
                                   min(len(instrs), index + 4)):
                        marker = ">>" if i == index else "  "
                        print(f"  {marker} {instrs[i].addr:#010x}  {instrs[i].mn}  [word={instrs[i].word:#010x}]")

        print(f"\nRéférences affichées : {len(printed)}")

if __name__ == "__main__":
    main()
