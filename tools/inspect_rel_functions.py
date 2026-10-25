#!/usr/bin/env python3
"""Inspecte les fonctions candidates à partir de leurs offsets de section."""

import sys

import recomp_rel
import rel
from ppc.module_emit import split

# Adresses virtuelles d'origine, converties en offsets relatifs
# en retirant la base 0x01000000.
CANDIDATES = {
    "mr001": {
        0x802C0: "0x010802c0",
        0xA6F14: "0x010a6f14",
    },
    "mr701": {
        0x4FD20: "0x0104fd20",
        0x76264: "0x01076264",
    },
}

def main():
    for name, wanted in CANDIDATES.items():
        path = recomp_rel.MODULES / f"{name}.rel"
        if not path.exists():
            print(f"\n[{name}] Fichier absent : {path}")
            continue

        module = rel.parse(path.read_bytes())
        relocations = module.relocations()
        by_site = recomp_rel.relocation_map(relocations)
        entries, bodies = recomp_rel.discover(
            module, relocations, by_site
        )

        print(f"\n{'=' * 72}")
        print(f"MODULE {name}: {len(bodies)} blocs décodés")

        found = set()

        for address, instrs in bodies.items():
            section, offset = split(address)

            if offset not in wanted:
                continue

            found.add(offset)
            print(
                f"\n--- {name} adresse virtuelle "
                f"{wanted[offset]}, section={section}, "
                f"offset=0x{offset:x} ---"
            )

            for i, instr in enumerate(instrs):
                print(
                    f"{instr.addr:08x}: {instr.word:08x} "
                    f"{instr.mn or 'unknown'}"
                )

                site_offset = offset + i * 4
                relocation = by_site.get((section, site_offset))
                if relocation is not None:
                    print(
                        f"    RELOC module={relocation.module} "
                        f"type={relocation.kind} "
                        f"section_cible={relocation.target_section} "
                        f"addend=0x{relocation.addend:x}"
                    )

        for offset, virtual_address in wanted.items():
            if offset not in found:
                print(
                    f"\n{virtual_address}: offset 0x{offset:x} "
                    "toujours introuvable."
                )

if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"ERREUR : {type(exc).__name__}: {exc}", file=sys.stderr)
        raise
