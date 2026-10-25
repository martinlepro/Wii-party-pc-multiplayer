import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "recompiler"))

import game
import rel
import recomp_rel
from ppc.module_emit import split

KEYWORDS = (
    b"dice",
    b"saikoro",
    b"sugoroku",
    b"necessary boards",
    b"map.brres",
)

def main():
    for name in ("mr001", "mr701"):
        path = recomp_rel.MODULES / f"{name}.rel"
        if not path.exists():
            continue

        module = rel.parse(path.read_bytes())
        relocations = module.relocations()
        by_site = recomp_rel.relocation_map(relocations)
        entries, bodies = recomp_rel.discover(
            module, relocations, by_site
        )

        print(f"\n{'=' * 72}\nMODULE {name}")

        strings = []
        for sec_index, section in enumerate(module.sections):
            if not section.offset or not section.size:
                continue
            data = module.data[
                section.offset:section.offset + section.size
            ]
            pos = 0
            while pos < len(data):
                end = data.find(b"\0", pos)
                if end < 0:
                    break
                value = data[pos:end]
                if any(k in value.lower() for k in KEYWORDS):
                    strings.append((sec_index, pos, value))
                pos = end + 1

        seen = set()
        for target_section, target_offset, value in strings:
            refs = [
                r for r in relocations
                if r.target_section == target_section
                and target_offset <= r.addend <= target_offset + len(value)
            ]
            for r in refs:
                if r.site_section >= len(module.sections):
                    continue
                if not module.sections[r.site_section].executable:
                    continue

                for start, instrs in bodies.items():
                    sec, off = split(start)
                    if sec != r.site_section:
                        continue
                    if not (off <= r.site_offset < off + 4 * len(instrs)):
                        continue

                    key = (start, r.site_offset, value)
                    if key in seen:
                        continue
                    seen.add(key)

                    print(
                        f"\nRessource {value!r} "
                        f"(section {target_section}, {target_offset:#x})"
                    )
                    print(
                        f"  Fonction candidate: section {sec}, "
                        f"offset {off:#x}, fin {off + 4 * len(instrs):#x}"
                    )
                    print(f"  Référence à l'offset {r.site_offset:#x}")
                    index = (r.site_offset - off) // 4
                    for i in range(max(0, index - 5),
                                   min(len(instrs), index + 6)):
                        marker = ">>" if i == index else "  "
                        instr = instrs[i]
                        mnemonic = instr.mn or "unknown"
                        print(f"  {marker} 0x{instr.addr:08x}: 0x{instr.word:08x} {mnemonic}")

if __name__ == "__main__":
    main()
