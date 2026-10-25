import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "recompiler"))

import game
import rel

GAME = game.load()
PATTERN = re.compile(
    rb"dice|saikoro|sugoroku|board|player|turn|move|"
    rb"mr001|mr701|necessary boards",
    re.IGNORECASE,
)

def main():
    for name in ("mr001", "mr701"):
        path = GAME.modules / f"{name}.rel"
        if not path.exists():
            print(f"\n{name}: fichier absent : {path}")
            continue

        module = rel.parse(path.read_bytes())
        relocations = module.relocations()
        print(f"\n{'=' * 65}\n{name}: module_id={module.module_id}")
        print(f"Sections : {len(module.sections)}")
        for i, section in enumerate(module.sections):
            print(
                f"  section {i}: offset fichier={section.offset:#x}, "
                f"taille={section.size:#x}, executable={section.executable}"
            )

        for i, section in enumerate(module.sections):
            if section.offset == 0 or section.size == 0:
                continue
            data = module.data[section.offset:section.offset + section.size]
            for match in PATTERN.finditer(data):
                start = max(0, match.start() - 45)
                end = min(len(data), match.end() + 45)
                snippet = data[start:end].split(b"\0")
                snippet = next(
                    (s for s in snippet if match.group().lower() in s.lower()),
                    match.group(),
                )
                print(
                    f"\n  TEXTE section={i} offset={match.start():#x}: "
                    f"{snippet[:140]!r}"
                )
                # Relocations whose target falls near the string.
                for r in relocations:
                    if r.module == module.module_id and r.target_section == i:
                        if match.start() - 16 <= r.addend <= match.end() + 16:
                            print(
                                f"    ref: site section={r.site_section} "
                                f"offset={r.site_offset:#x}, "
                                f"kind={r.kind}, cible={r.target_section}:"
                                f"{r.addend:#x}"
                            )

if __name__ == "__main__":
    main()
