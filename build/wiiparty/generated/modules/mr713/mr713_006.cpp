#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr713_bases[17];
void f_80007530(wp::Cpu& c);
void f_80007570(wp::Cpu& c);
void f_800075a0(wp::Cpu& c);
void f_80007f20(wp::Cpu& c);
void f_8000a7f0(wp::Cpu& c);
void f_8000b780(wp::Cpu& c);
void f_8000dc30(wp::Cpu& c);
void f_8000dd00(wp::Cpu& c);
void f_8000dd30(wp::Cpu& c);
void f_8000dd70(wp::Cpu& c);
void f_8000e070(wp::Cpu& c);
void f_8000e080(wp::Cpu& c);
void f_8000e240(wp::Cpu& c);
void f_8000fc20(wp::Cpu& c);
void f_8000fc40(wp::Cpu& c);
void f_8000fc60(wp::Cpu& c);
void f_800104d0(wp::Cpu& c);
void f_80011270(wp::Cpu& c);
void f_8001a890(wp::Cpu& c);
void f_8001aac0(wp::Cpu& c);
void f_8001b020(wp::Cpu& c);
void f_8001b0c0(wp::Cpu& c);
void f_80029270(wp::Cpu& c);
void f_80029330(wp::Cpu& c);
void f_800293c0(wp::Cpu& c);
void f_8002d270(wp::Cpu& c);
void f_80034ac0(wp::Cpu& c);
void f_80034b10(wp::Cpu& c);
void f_80034f00(wp::Cpu& c);
void f_80034f20(wp::Cpu& c);
void f_8003d6b0(wp::Cpu& c);
void f_800402c0(wp::Cpu& c);
void f_80041c20(wp::Cpu& c);
void f_80041f70(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004aa80(wp::Cpu& c);
void f_8004abf0(wp::Cpu& c);
void f_80051600(wp::Cpu& c);
void f_80052170(wp::Cpu& c);
void f_80052190(wp::Cpu& c);
void f_80065040(wp::Cpu& c);
void f_800656f0(wp::Cpu& c);
void f_80066250(wp::Cpu& c);
void f_80066cd0(wp::Cpu& c);
void f_80066db0(wp::Cpu& c);
void f_80066e70(wp::Cpu& c);
void f_800699d0(wp::Cpu& c);
void f_80069af0(wp::Cpu& c);
void f_80069c40(wp::Cpu& c);
void f_8006a800(wp::Cpu& c);
void f_8006a8f0(wp::Cpu& c);
void f_8006a940(wp::Cpu& c);
void f_8006b760(wp::Cpu& c);
void f_8006c8b0(wp::Cpu& c);
void f_80071fe0(wp::Cpu& c);
void f_80072020(wp::Cpu& c);
void f_80075ed0(wp::Cpu& c);
void f_80075f20(wp::Cpu& c);
void f_800760f0(wp::Cpu& c);
void f_80076100(wp::Cpu& c);
void f_80076130(wp::Cpu& c);
void f_80076140(wp::Cpu& c);
void f_800e95b0(wp::Cpu& c);
void f_800ee3c0(wp::Cpu& c);
void f_80126450(wp::Cpu& c);
void f_8014b090(wp::Cpu& c);
void f_8014b7e0(wp::Cpu& c);
void f_8014c050(wp::Cpu& c);
void f_8014e9e0(wp::Cpu& c);
void f_8014f020(wp::Cpu& c);
void f_8014f200(wp::Cpu& c);
void f_8014f780(wp::Cpu& c);
void f_8014f9d0(wp::Cpu& c);
void f_80150560(wp::Cpu& c);
void f_80150850(wp::Cpu& c);
void f_80151a30(wp::Cpu& c);
void f_80151a60(wp::Cpu& c);
void f_80153320(wp::Cpu& c);
void f_80153360(wp::Cpu& c);
void f_801533a0(wp::Cpu& c);
void f_80153400(wp::Cpu& c);
void f_80153530(wp::Cpu& c);
void f_80153590(wp::Cpu& c);
void f_801535e0(wp::Cpu& c);
void f_801536f0(wp::Cpu& c);
void f_801537c0(wp::Cpu& c);
void f_80153920(wp::Cpu& c);
void f_80153df0(wp::Cpu& c);
void f_80153e40(wp::Cpu& c);
void f_80153e90(wp::Cpu& c);
void f_80153ee0(wp::Cpu& c);
void f_80153f20(wp::Cpu& c);
void f_80154c30(wp::Cpu& c);
void f_80154d30(wp::Cpu& c);
void f_80154e50(wp::Cpu& c);
void f_80154e70(wp::Cpu& c);
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c83b4(wp::Cpu& c);
void f_801c83b8(wp::Cpu& c);
void f_801c8400(wp::Cpu& c);
void f_801c8404(wp::Cpu& c);
void f_mr713_01028330(wp::Cpu& c);
void f_mr713_01029870(wp::Cpu& c);
void f_mr713_01029910(wp::Cpu& c);
void f_mr713_01029990(wp::Cpu& c);
void f_mr713_010299a0(wp::Cpu& c);
void f_mr713_010299b0(wp::Cpu& c);
void f_mr713_010299c0(wp::Cpu& c);
void f_mr713_010299e0(wp::Cpu& c);
void f_mr713_0102e6e0(wp::Cpu& c);
void f_mr713_0102e8b0(wp::Cpu& c);
void f_mr713_0102e930(wp::Cpu& c);
void f_mr713_0102e940(wp::Cpu& c);
void f_mr713_01037cb0(wp::Cpu& c);
void f_mr713_010481e0(wp::Cpu& c);
void f_mr713_01049220(wp::Cpu& c);
void f_mr713_01049e20(wp::Cpu& c);
void f_mr713_01060af0(wp::Cpu& c);
void f_mr713_0107c4e0(wp::Cpu& c);
void f_mr713_0107e460(wp::Cpu& c);
void f_mr713_0107e550(wp::Cpu& c);
void f_mr713_0107e7c0(wp::Cpu& c);
void f_mr713_0107e9e0(wp::Cpu& c);
void f_mr713_0107ed10(wp::Cpu& c);
void f_mr713_0107eeb0(wp::Cpu& c);
void f_mr713_0107ef50(wp::Cpu& c);
void f_mr713_0107f000(wp::Cpu& c);
void f_mr713_0107f010(wp::Cpu& c);
void f_mr713_0107f020(wp::Cpu& c);
void f_mr713_0107f040(wp::Cpu& c);
void f_mr713_0107f050(wp::Cpu& c);
void f_mr713_0107f1b0(wp::Cpu& c);
void f_mr713_0107f360(wp::Cpu& c);
void f_mr713_0107f5f0(wp::Cpu& c);
void f_mr713_0107f6b0(wp::Cpu& c);
void f_mr713_0107f6c0(wp::Cpu& c);
void f_mr713_0107f6d0(wp::Cpu& c);
void f_mr713_0107fcf0(wp::Cpu& c);
void f_mr713_0107ff30(wp::Cpu& c);
void f_mr713_01080180(wp::Cpu& c);
void f_mr713_010804c0(wp::Cpu& c);
void f_mr713_010805e0(wp::Cpu& c);
void f_mr713_01080780(wp::Cpu& c);
void f_mr713_01080830(wp::Cpu& c);
void f_mr713_010808d0(wp::Cpu& c);

void f_mr713_0107e9e0(wp::Cpu& c) {
    WP_ENTER(0x107e9e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107e9f4u: goto R_0107e9f4;
        case 0x107ea20u: goto R_0107ea20;
        case 0x107ea3cu: goto R_0107ea3c;
        case 0x107ea54u: goto R_0107ea54;
        case 0x107ea70u: goto R_0107ea70;
        case 0x107ea7cu: goto R_0107ea7c;
        case 0x107ea90u: goto R_0107ea90;
        case 0x107eaa8u: goto R_0107eaa8;
        case 0x107eac4u: goto R_0107eac4;
        case 0x107eadcu: goto R_0107eadc;
        case 0x107eaf4u: goto R_0107eaf4;
        case 0x107eb10u: goto R_0107eb10;
        case 0x107eb2cu: goto R_0107eb2c;
        case 0x107eb44u: goto R_0107eb44;
        case 0x107eb60u: goto R_0107eb60;
        case 0x107eb78u: goto R_0107eb78;
        case 0x107eb94u: goto R_0107eb94;
        case 0x107ebb0u: goto R_0107ebb0;
        case 0x107ebccu: goto R_0107ebcc;
        case 0x107ebe0u: goto R_0107ebe0;
        case 0x107ec04u: goto R_0107ec04;
        case 0x107ec20u: goto R_0107ec20;
        case 0x107ec38u: goto R_0107ec38;
        case 0x107ec54u: goto R_0107ec54;
        case 0x107ec7cu: goto R_0107ec7c;
        case 0x107ec90u: goto R_0107ec90;
        case 0x107eca8u: goto R_0107eca8;
        case 0x107ecc4u: goto R_0107ecc4;
        case 0x107ecdcu: goto R_0107ecdc;
        case 0x107ecf8u: goto R_0107ecf8;
        case 0x107ed00u: goto R_0107ed00;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x107e9f4u;
    f_801c83b4(c);
R_0107e9f4:
    c.r[0] = wp::cntlzw(c.r[4]);
    c.r[26] = c.r[3] | c.r[3];
    c.r[6] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = c.r[6] + 0x1u;
    c.r[27] = c.r[5] | c.r[5];
    c.r[28] = c.r[0] & 0xffu;
    c.r[30] = c.r[28] + c.r[3];
    c.r[0] = c.r[30] + c.r[5];
    c.r[3] = c.r[0] & 0xffu;
    c.lr = 0x107ea20u;
    f_80153920(c);
R_0107ea20:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107eac8;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0xffu;
    c.lr = 0x107ea3cu;
    f_801537c0(c);
R_0107ea3c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x107ea54u;
    f_80153360(c);
R_0107ea54:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107ea70u;
    f_80153400(c);
R_0107ea70:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.lr = 0x107ea7cu;
    f_801535e0(c);
R_0107ea7c:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x107ea90u;
    f_801537c0(c);
R_0107ea90:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x6u;
    c.r[6] = 0x0u;
    c.r[7] = 0x7u;
    c.lr = 0x107eaa8u;
    f_80153360(c);
R_0107eaa8:
    c.r[3] = 0x1u;
    c.r[4] = 0xfu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107eac4u;
    f_80153400(c);
R_0107eac4:
    goto L_0107eb10;
L_0107eac8:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x107eadcu;
    f_801537c0(c);
R_0107eadc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x107eaf4u;
    f_80153360(c);
R_0107eaf4:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107eb10u;
    f_80153400(c);
L_0107eb10:
R_0107eb10:
    wp::compare_signed(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 1)) goto L_0107eb98;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x107eb2cu;
    f_801537c0(c);
R_0107eb2c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x8u;
    c.lr = 0x107eb44u;
    f_80153320(c);
R_0107eb44:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107eb60u;
    f_801533a0(c);
R_0107eb60:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x107eb78u;
    f_80153360(c);
R_0107eb78:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107eb94u;
    f_80153400(c);
R_0107eb94:
    goto L_0107ec68;
L_0107eb98:
    c.r[5] = ((((g_mr713_bases[4] + 0x2a00u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr713_bases[4] + 0x2a00u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107ebb0u;
    f_80153530(c);
R_0107ebb0:
    c.r[31] = ((((g_mr713_bases[4] + 0x2a08u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr713_bases[4] + 0x2a08u) & 0xFFFFu);
    goto L_0107ec60;
L_0107ebc0:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x107ebccu;
    f_80153590(c);
R_0107ebcc:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] + 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x107ebe0u;
    f_801537c0(c);
R_0107ebe0:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0107ebf4;
    c.r[4] = 0xfu;
L_0107ebf4:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x107ec04u;
    f_80153320(c);
R_0107ec04:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107ec20u;
    f_801533a0(c);
R_0107ec20:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x107ec38u;
    f_80153360(c);
R_0107ec38:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107ec54u;
    f_80153400(c);
R_0107ec54:
    c.r[28] = c.r[28] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_0107ec60:
    wp::compare_signed(c, 0, c.r[29], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107ebc0;
    }
L_0107ec68:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ecf8;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x107ec7cu;
    f_801535e0(c);
R_0107ec7c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x107ec90u;
    f_801537c0(c);
R_0107ec90:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x1u;
    c.lr = 0x107eca8u;
    f_80153320(c);
R_0107eca8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107ecc4u;
    f_801533a0(c);
R_0107ecc4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x6u;
    c.lr = 0x107ecdcu;
    f_80153360(c);
R_0107ecdc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107ecf8u;
    f_80153400(c);
L_0107ecf8:
R_0107ecf8:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x107ed00u;
    f_801c8400(c);
R_0107ed00:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr713_0107ed10(wp::Cpu& c) {
    WP_ENTER(0x107ed10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107ed44u: goto R_0107ed44;
        case 0x107ed4cu: goto R_0107ed4c;
        case 0x107ed54u: goto R_0107ed54;
        case 0x107ed5cu: goto R_0107ed5c;
        case 0x107ed6cu: goto R_0107ed6c;
        case 0x107ed84u: goto R_0107ed84;
        case 0x107ed98u: goto R_0107ed98;
        case 0x107ed9cu: goto R_0107ed9c;
        case 0x107eda8u: goto R_0107eda8;
        case 0x107edb8u: goto R_0107edb8;
        case 0x107edbcu: goto R_0107edbc;
        case 0x107edc0u: goto R_0107edc0;
        case 0x107ede4u: goto R_0107ede4;
        case 0x107ee2cu: goto R_0107ee2c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x58u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0x38u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[28]);
    ea = c.r[1] + 0x28u;
    wp::store_quantized(c, 28, ea, 0, 0, q);
    c.r[3] = 0x0u;
    c.lr = 0x107ed44u;
    f_80150850(c);
R_0107ed44:
    c.r[3] = 0x1u;
    c.lr = 0x107ed4cu;
    f_80153e40(c);
R_0107ed4c:
    c.r[3] = 0x0u;
    c.lr = 0x107ed54u;
    f_80153e90(c);
R_0107ed54:
    c.r[3] = 0x1u;
    c.lr = 0x107ed5cu;
    f_80153f20(c);
R_0107ed5c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x107ed6cu;
    f_80153ee0(c);
R_0107ed6c:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.r[7] = 0xffu;
    c.lr = 0x107ed84u;
    f_801536f0(c);
R_0107ed84:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x5u;
    c.r[6] = 0x5u;
    c.lr = 0x107ed98u;
    f_80153df0(c);
R_0107ed98:
    c.lr = 0x107ed9cu;
    f_8014f020(c);
R_0107ed9c:
    c.r[3] = ((((g_mr713_bases[4] + 0x2a28u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr713_bases[4] + 0x2a28u) & 0xFFFFu);
    c.lr = 0x107eda8u;
    f_8014e9e0(c);
R_0107eda8:
    c.r[4] = ((((g_mr713_bases[4] + 0x2a40u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr713_bases[4] + 0x2a40u) & 0xFFFFu);
    c.lr = 0x107edb8u;
    f_8014f200(c);
R_0107edb8:
    c.lr = 0x107edbcu;
    f_8004aa80(c);
R_0107edbc:
    c.lr = 0x107edc0u;
    f_800ee3c0(c);
R_0107edc0:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x107ede4u;
    f_800e95b0(c);
R_0107ede4:
    ea = c.r[1] + 0x14u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    c.r[4] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x10u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[3] = 0x80u;
    ea = c.r[4] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    c.f[1] = wp::round_single(c.f[5] + c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[31] = wp::round_single(c.f[5] / c.f[4]);
    c.ps1[31] = c.f[31];
    c.r[5] = 0x4u;
    c.f[0] = wp::round_single(c.f[3] + c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[30] = wp::round_single(c.f[3] / c.f[2]);
    c.ps1[30] = c.f[30];
    c.f[29] = wp::round_single(c.f[1] / c.f[4]);
    c.ps1[29] = c.f[29];
    c.f[28] = wp::round_single(c.f[0] / c.f[2]);
    c.ps1[28] = c.f[28];
    c.lr = 0x107ee2cu;
    f_80150560(c);
R_0107ee2c:
    c.r[3] = 0xcc010000u;
    c.r[4] = 0x0u;
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[29]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[29]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[28]));
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[28]));
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x50u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x38u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0x28u;
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    c.f[28] = wp::rdf64(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr713_0107eeb0(wp::Cpu& c) {
    WP_ENTER(0x107eeb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107eeecu: goto R_0107eeec;
        case 0x107ef00u: goto R_0107ef00;
        case 0x107ef0cu: goto R_0107ef0c;
        case 0x107ef1cu: goto R_0107ef1c;
        case 0x107ef28u: goto R_0107ef28;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107eeecu;
    f_8003d6b0(c);
R_0107eeec:
    c.r[4] = ((((g_mr713_bases[5] + 0x28b08u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr713_bases[5] + 0x28b08u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107ef00u;
    f_801c79a4(c);
R_0107ef00:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ef0c;
    c.lr = 0x107ef0cu;
    f_mr713_0107e460(c);
L_0107ef0c:
R_0107ef0c:
    ea = c.r[29] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x107ef1cu;
    f_80052170(c);
R_0107ef1c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x107ef28u;
    f_80052190(c);
R_0107ef28:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_0107ef50(wp::Cpu& c) {
    WP_ENTER(0x107ef50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107ef98u: goto R_0107ef98;
        case 0x107efa4u: goto R_0107efa4;
        case 0x107efb0u: goto R_0107efb0;
        case 0x107efb8u: goto R_0107efb8;
        case 0x107efccu: goto R_0107efcc;
        case 0x107efdcu: goto R_0107efdc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107efdc;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107efb8;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107efb8;
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x107ef98u;
    f_80034b10(c);
R_0107ef98:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x107efa4u;
    f_80034b10(c);
R_0107efa4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x107efb0u;
    f_80034b10(c);
R_0107efb0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x107efb8u;
    f_801c7a8c(c);
L_0107efb8:
R_0107efb8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107efcc;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x107efccu;
    f_80051600(c);
L_0107efcc:
R_0107efcc:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107efdc;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107efdcu;
    f_801c7a8c(c);
L_0107efdc:
R_0107efdc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_0107f000(wp::Cpu& c) {
    WP_ENTER(0x107f000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr713_0107f010(wp::Cpu& c) {
    WP_ENTER(0x107f010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr713_0107f020(wp::Cpu& c) {
    WP_ENTER(0x107f020u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x18u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr713_0107f040(wp::Cpu& c) {
    WP_ENTER(0x107f040u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr713_0107f050(wp::Cpu& c) {
    WP_ENTER(0x107f050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f074u: goto R_0107f074;
        case 0x107f078u: goto R_0107f078;
        case 0x107f094u: goto R_0107f094;
        case 0x107f0bcu: goto R_0107f0bc;
        case 0x107f0c8u: goto R_0107f0c8;
        case 0x107f0d0u: goto R_0107f0d0;
        case 0x107f0dcu: goto R_0107f0dc;
        case 0x107f0e4u: goto R_0107f0e4;
        case 0x107f0ecu: goto R_0107f0ec;
        case 0x107f10cu: goto R_0107f10c;
        case 0x107f12cu: goto R_0107f12c;
        case 0x107f134u: goto R_0107f134;
        case 0x107f140u: goto R_0107f140;
        case 0x107f154u: goto R_0107f154;
        case 0x107f160u: goto R_0107f160;
        case 0x107f168u: goto R_0107f168;
        case 0x107f174u: goto R_0107f174;
        case 0x107f180u: goto R_0107f180;
        case 0x107f190u: goto R_0107f190;
        case 0x107f194u: goto R_0107f194;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[3] + 0x144u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f194;
    c.lr = 0x107f074u;
    f_8004aa80(c);
R_0107f074:
    c.lr = 0x107f078u;
    f_800ee3c0(c);
R_0107f078:
    ea = c.r[31] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f094;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[31] + 0x1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107f094u;
    f_mr713_0107e550(c);
L_0107f094:
R_0107f094:
    c.r[3] = ((((g_mr713_bases[4] + 0x29a4u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr713_bases[4] + 0x29a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr713_bases[4] + 0x29a4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[4] + wp::sign_extend16((g_mr713_bases[4] + 0x29a8u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[3] = c.f[1];
    c.f[4] = c.f[2];
    c.f[5] = c.f[1];
    c.f[6] = c.f[2];
    c.lr = 0x107f0bcu;
    f_8014c050(c);
R_0107f0bc:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x107f0c8u;
    f_80154c30(c);
R_0107f0c8:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x107f0d0u;
    f_8014b090(c);
R_0107f0d0:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x107f0dcu;
    f_80154d30(c);
R_0107f0dc:
    c.r[3] = 0x0u;
    c.lr = 0x107f0e4u;
    f_80154e50(c);
R_0107f0e4:
    c.r[3] = 0x0u;
    c.lr = 0x107f0ecu;
    f_80151a30(c);
R_0107f0ec:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x107f10cu;
    f_80151a60(c);
R_0107f10c:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x107f12cu;
    f_80151a60(c);
R_0107f12c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x107f134u;
    f_80034f00(c);
R_0107f134:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x107f140u;
    f_80034f20(c);
R_0107f140:
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107f160;
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x107f154u;
    f_80034f00(c);
R_0107f154:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x1u;
    c.lr = 0x107f160u;
    f_80034f20(c);
L_0107f160:
R_0107f160:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x107f168u;
    f_80034f00(c);
R_0107f168:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x107f174u;
    f_80034f20(c);
R_0107f174:
    ea = c.r[31] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x107f180u;
    f_mr713_0107e7c0(c);
R_0107f180:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[5] = wp::rd8(ea);
    c.lr = 0x107f190u;
    f_mr713_0107e9e0(c);
R_0107f190:
    c.lr = 0x107f194u;
    f_mr713_0107ed10(c);
L_0107f194:
R_0107f194:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr713_0107f1b0(wp::Cpu& c) {
    WP_ENTER(0x107f1b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f1d0u: goto R_0107f1d0;
        case 0x107f1f4u: goto R_0107f1f4;
        case 0x107f22cu: goto R_0107f22c;
        case 0x107f240u: goto R_0107f240;
        case 0x107f254u: goto R_0107f254;
        case 0x107f264u: goto R_0107f264;
        case 0x107f270u: goto R_0107f270;
        case 0x107f2a0u: goto R_0107f2a0;
        case 0x107f2c0u: goto R_0107f2c0;
        case 0x107f2c8u: goto R_0107f2c8;
        case 0x107f2d0u: goto R_0107f2d0;
        case 0x107f2d8u: goto R_0107f2d8;
        case 0x107f2dcu: goto R_0107f2dc;
        case 0x107f2e4u: goto R_0107f2e4;
        case 0x107f2f0u: goto R_0107f2f0;
        case 0x107f320u: goto R_0107f320;
        case 0x107f328u: goto R_0107f328;
        case 0x107f32cu: goto R_0107f32c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.lr = 0x107f1d0u;
    f_80069af0(c);
R_0107f1d0:
    c.r[3] = ((((g_mr713_bases[6] + 0x28u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr713_bases[5] + 0x28b40u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr713_bases[6] + 0x28u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr713_bases[5] + 0x28b40u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x107f1f4u;
    f_801c79a4(c);
R_0107f1f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f210;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[30]);
L_0107f210:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x107f22cu;
    f_801c79a4(c);
R_0107f22c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107f2a4;
    c.r[29] = 0x0u;
    c.lr = 0x107f240u;
    f_8000dd70(c);
R_0107f240:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0107f260;
    c.r[3] = 0xffffffffu;
    c.lr = 0x107f254u;
    f_8000e240(c);
R_0107f254:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107f260;
    c.r[29] = 0x1u;
L_0107f260:
    c.lr = 0x107f264u;
    f_8000dd70(c);
R_0107f264:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107f270u;
    f_80007570(c);
R_0107f270:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_0107f290;
    c.r[4] = c.r[1] + 0xcu;
L_0107f290:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x107f2a0u;
    f_mr713_0102e6e0(c);
R_0107f2a0:
    c.r[30] = c.r[3] | c.r[3];
L_0107f2a4:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f2c0;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x107f2c0u;
    f_mr713_0102e8b0(c);
L_0107f2c0:
R_0107f2c0:
    c.r[3] = 0x0u;
    c.lr = 0x107f2c8u;
    f_8006a800(c);
R_0107f2c8:
    c.r[3] = 0x0u;
    c.lr = 0x107f2d0u;
    f_80065040(c);
R_0107f2d0:
    c.r[3] = 0x0u;
    c.lr = 0x107f2d8u;
    f_8006c8b0(c);
R_0107f2d8:
    c.lr = 0x107f2dcu;
    f_80066250(c);
R_0107f2dc:
    c.r[3] = 0x128u;
    c.lr = 0x107f2e4u;
    f_801c79a4(c);
R_0107f2e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f2f0;
    c.lr = 0x107f2f0u;
    f_mr713_0107c4e0(c);
L_0107f2f0:
R_0107f2f0:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107f320;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f320;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f320u;
    wp::call(c, c.ctr);
L_0107f320:
R_0107f320:
    c.r[3] = 0x1u;
    c.lr = 0x107f328u;
    f_8001b020(c);
R_0107f328:
    c.lr = 0x107f32cu;
    f_8000dd30(c);
R_0107f32c:
    c.r[5] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffceu;
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = c.r[4] & c.r[0];
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_0107f360(wp::Cpu& c) {
    WP_ENTER(0x107f360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f39cu: goto R_0107f39c;
        case 0x107f3c8u: goto R_0107f3c8;
        case 0x107f3ccu: goto R_0107f3cc;
        case 0x107f3dcu: goto R_0107f3dc;
        case 0x107f3e0u: goto R_0107f3e0;
        case 0x107f3e4u: goto R_0107f3e4;
        case 0x107f410u: goto R_0107f410;
        case 0x107f424u: goto R_0107f424;
        case 0x107f44cu: goto R_0107f44c;
        case 0x107f474u: goto R_0107f474;
        case 0x107f49cu: goto R_0107f49c;
        case 0x107f4a4u: goto R_0107f4a4;
        case 0x107f4a8u: goto R_0107f4a8;
        case 0x107f4acu: goto R_0107f4ac;
        case 0x107f4b4u: goto R_0107f4b4;
        case 0x107f4b8u: goto R_0107f4b8;
        case 0x107f4bcu: goto R_0107f4bc;
        case 0x107f4e4u: goto R_0107f4e4;
        case 0x107f4f8u: goto R_0107f4f8;
        case 0x107f520u: goto R_0107f520;
        case 0x107f548u: goto R_0107f548;
        case 0x107f570u: goto R_0107f570;
        case 0x107f578u: goto R_0107f578;
        case 0x107f5a0u: goto R_0107f5a0;
        case 0x107f5c0u: goto R_0107f5c0;
        case 0x107f5d0u: goto R_0107f5d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_0107f5d0;
    c.r[4] = ((((g_mr713_bases[5] + 0x28b40u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr713_bases[5] + 0x28b40u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x107f39cu;
    f_mr713_0102e940(c);
R_0107f39c:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f3c8;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107f3c8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f3c8u;
    wp::call(c, c.ctr);
L_0107f3c8:
R_0107f3c8:
    c.lr = 0x107f3ccu;
    f_8001aac0(c);
R_0107f3cc:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107f3dc;
    c.lr = 0x107f3dcu;
    f_8001b0c0(c);
L_0107f3dc:
R_0107f3dc:
    c.lr = 0x107f3e0u;
    f_8004abf0(c);
R_0107f3e0:
    c.lr = 0x107f3e4u;
    f_80066250(c);
R_0107f3e4:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f4a4;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107f4a4;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f410;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107f410u;
    f_mr713_01029910(c);
L_0107f410:
R_0107f410:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f424;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107f424u;
    f_mr713_0102e8b0(c);
L_0107f424:
R_0107f424:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f44c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f44c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f44cu;
    wp::call(c, c.ctr);
L_0107f44c:
R_0107f44c:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f474;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f474;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f474u;
    wp::call(c, c.ctr);
L_0107f474:
R_0107f474:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f49c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f49c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f49cu;
    wp::call(c, c.ctr);
L_0107f49c:
R_0107f49c:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107f4a4u;
    f_801c7a8c(c);
L_0107f4a4:
R_0107f4a4:
    c.lr = 0x107f4a8u;
    f_80041c20(c);
R_0107f4a8:
    c.lr = 0x107f4acu;
    f_8002d270(c);
R_0107f4ac:
    c.r[3] = 0x0u;
    c.lr = 0x107f4b4u;
    f_80076130(c);
R_0107f4b4:
    c.lr = 0x107f4b8u;
    f_800656f0(c);
R_0107f4b8:
    c.lr = 0x107f4bcu;
    f_80011270(c);
R_0107f4bc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f578;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f578;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f4e4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107f4e4u;
    f_mr713_01029910(c);
L_0107f4e4:
R_0107f4e4:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f4f8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107f4f8u;
    f_mr713_0102e8b0(c);
L_0107f4f8:
R_0107f4f8:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f520;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f520;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f520u;
    wp::call(c, c.ctr);
L_0107f520:
R_0107f520:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f548;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f548;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f548u;
    wp::call(c, c.ctr);
L_0107f548:
R_0107f548:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f570;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f570;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f570u;
    wp::call(c, c.ctr);
L_0107f570:
R_0107f570:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107f578u;
    f_801c7a8c(c);
L_0107f578:
R_0107f578:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f5a0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f5a0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f5a0u;
    wp::call(c, c.ctr);
L_0107f5a0:
R_0107f5a0:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107f5b4;
    c.r[3] = ((((g_mr713_bases[6] + 0x28u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr713_bases[6] + 0x28u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_0107f5b4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x107f5c0u;
    f_80069c40(c);
R_0107f5c0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f5d0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f5d0u;
    f_801c7a8c(c);
L_0107f5d0:
R_0107f5d0:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_0107f5f0(wp::Cpu& c) {
    WP_ENTER(0x107f5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f61cu: goto R_0107f61c;
        case 0x107f624u: goto R_0107f624;
        case 0x107f63cu: goto R_0107f63c;
        case 0x107f670u: goto R_0107f670;
        case 0x107f690u: goto R_0107f690;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107f690;
    c.r[3] = 0x0u;
    c.lr = 0x107f61cu;
    f_mr713_0102e930(c);
R_0107f61c:
    c.r[3] = 0x1a8u;
    c.lr = 0x107f624u;
    f_801c79a4(c);
R_0107f624:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f63c;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x107f63cu;
    f_mr713_01037cb0(c);
L_0107f63c:
R_0107f63c:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107f670;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f670;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f670u;
    wp::call(c, c.ctr);
L_0107f670:
R_0107f670:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f690u;
    wp::call(c, c.ctr);
L_0107f690:
R_0107f690:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr713_0107f6b0(wp::Cpu& c) {
    WP_ENTER(0x107f6b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr713_0107f6c0(wp::Cpu& c) {
    WP_ENTER(0x107f6c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr713_0107f6d0(wp::Cpu& c) {
    WP_ENTER(0x107f6d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f71cu: goto R_0107f71c;
        case 0x107f720u: goto R_0107f720;
        case 0x107f730u: goto R_0107f730;
        case 0x107f758u: goto R_0107f758;
        case 0x107f760u: goto R_0107f760;
        case 0x107f774u: goto R_0107f774;
        case 0x107f79cu: goto R_0107f79c;
        case 0x107f7a4u: goto R_0107f7a4;
        case 0x107f7acu: goto R_0107f7ac;
        case 0x107f7c0u: goto R_0107f7c0;
        case 0x107f7dcu: goto R_0107f7dc;
        case 0x107f7e4u: goto R_0107f7e4;
        case 0x107f7f8u: goto R_0107f7f8;
        case 0x107f814u: goto R_0107f814;
        case 0x107f828u: goto R_0107f828;
        case 0x107f830u: goto R_0107f830;
        case 0x107f83cu: goto R_0107f83c;
        case 0x107f854u: goto R_0107f854;
        case 0x107f858u: goto R_0107f858;
        case 0x107f860u: goto R_0107f860;
        case 0x107f86cu: goto R_0107f86c;
        case 0x107f874u: goto R_0107f874;
        case 0x107f878u: goto R_0107f878;
        case 0x107f880u: goto R_0107f880;
        case 0x107f88cu: goto R_0107f88c;
        case 0x107f89cu: goto R_0107f89c;
        case 0x107f8a4u: goto R_0107f8a4;
        case 0x107f8c0u: goto R_0107f8c0;
        case 0x107f8c4u: goto R_0107f8c4;
        case 0x107f8d4u: goto R_0107f8d4;
        case 0x107f8dcu: goto R_0107f8dc;
        case 0x107f8ecu: goto R_0107f8ec;
        case 0x107f908u: goto R_0107f908;
        case 0x107f934u: goto R_0107f934;
        case 0x107f950u: goto R_0107f950;
        case 0x107f984u: goto R_0107f984;
        case 0x107f990u: goto R_0107f990;
        case 0x107f9b0u: goto R_0107f9b0;
        case 0x107f9e4u: goto R_0107f9e4;
        case 0x107f9f0u: goto R_0107f9f0;
        case 0x107fa0cu: goto R_0107fa0c;
        case 0x107fa40u: goto R_0107fa40;
        case 0x107fa5cu: goto R_0107fa5c;
        case 0x107fa74u: goto R_0107fa74;
        case 0x107fa84u: goto R_0107fa84;
        case 0x107faa4u: goto R_0107faa4;
        case 0x107fad8u: goto R_0107fad8;
        case 0x107faf0u: goto R_0107faf0;
        case 0x107fb1cu: goto R_0107fb1c;
        case 0x107fb50u: goto R_0107fb50;
        case 0x107fb54u: goto R_0107fb54;
        case 0x107fb6cu: goto R_0107fb6c;
        case 0x107fba4u: goto R_0107fba4;
        case 0x107fbacu: goto R_0107fbac;
        case 0x107fbb8u: goto R_0107fbb8;
        case 0x107fbd8u: goto R_0107fbd8;
        case 0x107fbe4u: goto R_0107fbe4;
        case 0x107fbf0u: goto R_0107fbf0;
        case 0x107fbfcu: goto R_0107fbfc;
        case 0x107fc14u: goto R_0107fc14;
        case 0x107fc50u: goto R_0107fc50;
        case 0x107fc54u: goto R_0107fc54;
        case 0x107fc58u: goto R_0107fc58;
        case 0x107fc6cu: goto R_0107fc6c;
        case 0x107fca0u: goto R_0107fca0;
        case 0x107fca4u: goto R_0107fca4;
        case 0x107fcb0u: goto R_0107fcb0;
        case 0x107fcc0u: goto R_0107fcc0;
        case 0x107fcc8u: goto R_0107fcc8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    goto L_0107f720;
L_0107f6fc:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107f71c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f71cu;
    wp::call(c, c.ctr);
L_0107f71c:
R_0107f71c:
    c.lr = 0x107f720u;
    f_8006a940(c);
L_0107f720:
R_0107f720:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107f6fc;
    }
    c.lr = 0x107f730u;
    f_800760f0(c);
R_0107f730:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107f6fc;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f758;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x107f758u;
    f_mr713_0102e8b0(c);
L_0107f758:
R_0107f758:
    c.r[3] = 0x1u;
    c.lr = 0x107f760u;
    f_80076130(c);
R_0107f760:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f774u;
    wp::call(c, c.ctr);
R_0107f774:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f7fc;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107f79cu;
    f_800104d0(c);
R_0107f79c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107f7a4u;
    f_8000a7f0(c);
R_0107f7a4:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107f7acu;
    f_8000e240(c);
R_0107f7ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107f7ec;
    c.r[30] = 0x0u;
    goto L_0107f7e0;
L_0107f7bc:
    c.lr = 0x107f7c0u;
    f_8000dd70(c);
R_0107f7c0:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x107f7dcu;
    f_8000fc60(c);
R_0107f7dc:
    c.r[30] = c.r[30] + 0x1u;
L_0107f7e0:
    c.lr = 0x107f7e4u;
    f_80007570(c);
R_0107f7e4:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107f7bc;
    }
L_0107f7ec:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x107f7f8u;
    f_800293c0(c);
R_0107f7f8:
    goto L_0107fcc0;
L_0107f7fc:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107f840;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107f814u;
    f_8000e070(c);
R_0107f814:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_0107f824;
    c.r[3] = 0x6u;
L_0107f824:
    c.lr = 0x107f828u;
    f_8000e080(c);
R_0107f828:
    c.r[3] = 0x1u;
    c.lr = 0x107f830u;
    f_80029330(c);
R_0107f830:
    c.r[3] = ((((g_mr713_bases[5] + 0x28b30u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr713_bases[5] + 0x28b30u) & 0xFFFFu);
    c.lr = 0x107f83cu;
    f_80029270(c);
R_0107f83c:
    goto L_0107fcc0;
L_0107f840:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107f884;
    c.r[29] = ((((g_mr713_bases[4] + 0x2a70u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr713_bases[4] + 0x2a70u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107f854u;
    f_80071fe0(c);
R_0107f854:
    c.lr = 0x107f858u;
    f_8001a890(c);
R_0107f858:
    c.r[3] = 0x0u;
    c.lr = 0x107f860u;
    f_80076130(c);
R_0107f860:
    ea = c.r[29] + wp::sign_extend16((g_mr713_bases[4] + 0x2a70u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x107f86cu;
    f_80075f20(c);
R_0107f86c:
    c.r[3] = 0x1u;
    c.lr = 0x107f874u;
    f_80076130(c);
R_0107f874:
    c.lr = 0x107f878u;
    f_80076100(c);
R_0107f878:
    c.r[3] = 0x1u;
    c.lr = 0x107f880u;
    f_80029330(c);
R_0107f880:
    goto L_0107fcc0;
L_0107f884:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107f88cu;
    f_80007f20(c);
R_0107f88c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x107f89cu;
    f_mr713_0107fcf0(c);
R_0107f89c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x107f8a4u;
    f_80041f70(c);
R_0107f8a4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f8c0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107f8c0u;
    f_800402c0(c);
L_0107f8c0:
R_0107f8c0:
    c.lr = 0x107f8c4u;
    f_80076140(c);
R_0107f8c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f8f4;
    c.r[3] = 0x0u;
    c.lr = 0x107f8d4u;
    f_8004a100(c);
R_0107f8d4:
    c.r[3] = 0x1u;
    c.lr = 0x107f8dcu;
    f_80072020(c);
R_0107f8dc:
    c.r[4] = ((((g_mr713_bases[4] + 0x2a74u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr713_bases[4] + 0x2a74u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107f8ecu;
    f_80075ed0(c);
R_0107f8ec:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_0107f8f4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107faf0;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x107f908u;
    f_80007530(c);
R_0107f908:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0107f92c;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_0107f988;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_0107f9e8;
    goto L_0107fa5c;
L_0107f92c:
    c.r[3] = 0x1acu;
    c.lr = 0x107f934u;
    f_801c79a4(c);
R_0107f934:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f950;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x107f950u;
    f_mr713_010481e0(c);
L_0107f950:
R_0107f950:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fa5c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107fa5c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f984u;
    wp::call(c, c.ctr);
R_0107f984:
    goto L_0107fa5c;
L_0107f988:
    c.r[3] = 0x1acu;
    c.lr = 0x107f990u;
    f_801c79a4(c);
R_0107f990:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f9b0;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x107f9b0u;
    f_mr713_01049220(c);
L_0107f9b0:
R_0107f9b0:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fa5c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107fa5c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f9e4u;
    wp::call(c, c.ctr);
R_0107f9e4:
    goto L_0107fa5c;
L_0107f9e8:
    c.r[3] = 0x1bcu;
    c.lr = 0x107f9f0u;
    f_801c79a4(c);
R_0107f9f0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fa0c;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x107fa0cu;
    f_mr713_01049e20(c);
L_0107fa0c:
R_0107fa0c:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fa40;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107fa40;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fa40u;
    wp::call(c, c.ctr);
L_0107fa40:
R_0107fa40:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fa5cu;
    wp::call(c, c.ctr);
L_0107fa5c:
R_0107fa5c:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fad8;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107fa74u;
    f_mr713_0107ff30(c);
R_0107fa74:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_0107fad8;
    c.r[3] = 0x1acu;
    c.lr = 0x107fa84u;
    f_801c79a4(c);
R_0107fa84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107faa4;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x107faa4u;
    f_mr713_01049220(c);
L_0107faa4:
R_0107faa4:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fad8;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107fad8;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fad8u;
    wp::call(c, c.ctr);
L_0107fad8:
R_0107fad8:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107faf0;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107faf0u;
    f_mr713_0107ff30(c);
L_0107faf0:
R_0107faf0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fba4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fb1cu;
    wp::call(c, c.ctr);
R_0107fb1c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107fb54;
L_0107fb24:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107fb50;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fb50;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fb50u;
    wp::call(c, c.ctr);
L_0107fb50:
R_0107fb50:
    c.lr = 0x107fb54u;
    f_8006a940(c);
L_0107fb54:
R_0107fb54:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fb6cu;
    wp::call(c, c.ctr);
R_0107fb6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107fb24;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fba4;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fba4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fba4u;
    wp::call(c, c.ctr);
L_0107fba4:
R_0107fba4:
    c.r[3] = 0x4u;
    c.lr = 0x107fbacu;
    f_801c79a4(c);
R_0107fbac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fbb8;
    c.lr = 0x107fbb8u;
    f_mr713_01029870(c);
L_0107fbb8:
R_0107fbb8:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fbd8;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x107fbd8u;
    f_mr713_01029910(c);
L_0107fbd8:
R_0107fbd8:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fbe4u;
    f_mr713_010299b0(c);
R_0107fbe4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fbf0u;
    f_mr713_010299a0(c);
R_0107fbf0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fbfcu;
    f_mr713_01029990(c);
R_0107fbfc:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107fc60;
    c.r[3] = 0x1u;
    c.lr = 0x107fc14u;
    f_mr713_01028330(c);
R_0107fc14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107fc60;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107fc54;
L_0107fc24:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107fc50;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fc50;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fc50u;
    wp::call(c, c.ctr);
L_0107fc50:
R_0107fc50:
    c.lr = 0x107fc54u;
    f_8006a940(c);
L_0107fc54:
R_0107fc54:
    c.lr = 0x107fc58u;
    f_8006b760(c);
R_0107fc58:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107fc24;
    }
L_0107fc60:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fc6cu;
    f_mr713_010299c0(c);
R_0107fc6c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107fca4;
L_0107fc74:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107fca0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fca0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fca0u;
    wp::call(c, c.ctr);
L_0107fca0:
R_0107fca0:
    c.lr = 0x107fca4u;
    f_8006a940(c);
L_0107fca4:
R_0107fca4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fcb0u;
    f_mr713_010299e0(c);
R_0107fcb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107fc74;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107fcc0u;
    f_mr713_01080180(c);
L_0107fcc0:
R_0107fcc0:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107fcc8u;
    f_8006a8f0(c);
R_0107fcc8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_0107fcf0(wp::Cpu& c) {
    WP_ENTER(0x107fcf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fd04u: goto R_0107fd04;
        case 0x107fd14u: goto R_0107fd14;
        case 0x107fd20u: goto R_0107fd20;
        case 0x107fd3cu: goto R_0107fd3c;
        case 0x107fd44u: goto R_0107fd44;
        case 0x107fd4cu: goto R_0107fd4c;
        case 0x107fdb0u: goto R_0107fdb0;
        case 0x107fdccu: goto R_0107fdcc;
        case 0x107fde8u: goto R_0107fde8;
        case 0x107fe20u: goto R_0107fe20;
        case 0x107fe3cu: goto R_0107fe3c;
        case 0x107fe58u: goto R_0107fe58;
        case 0x107fe74u: goto R_0107fe74;
        case 0x107fe8cu: goto R_0107fe8c;
        case 0x107fec4u: goto R_0107fec4;
        case 0x107fee0u: goto R_0107fee0;
        case 0x107fefcu: goto R_0107fefc;
        case 0x107ff18u: goto R_0107ff18;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x107fd04u;
    f_801c83b8(c);
R_0107fd04:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x107fd14u;
    f_8000fc40(c);
R_0107fd14:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x107fd20u;
    f_8000fc40(c);
R_0107fd20:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fd38;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fd38;
    c.r[3] = 0x0u;
    goto L_0107ff10;
L_0107fd38:
    c.lr = 0x107fd3cu;
    f_80007530(c);
R_0107fd3c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x107fd44u;
    f_800075a0(c);
R_0107fd44:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x107fd4cu;
    f_8000dd00(c);
R_0107fd4c:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fd80;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_0107fdf0;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_0107fe60;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_0107fe94;
    goto L_0107ff04;
L_0107fd80:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fd9c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107fdb8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107fdd4;
    goto L_0107ff0c;
L_0107fd9c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fdb0u;
    f_8000b780(c);
R_0107fdb0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fdb8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fdccu;
    f_8000b780(c);
R_0107fdcc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fdd4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fde8u;
    f_8000b780(c);
R_0107fde8:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fdf0:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fe0c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107fe28;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107fe44;
    goto L_0107ff0c;
L_0107fe0c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fe20u;
    f_8000b780(c);
R_0107fe20:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fe28:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fe3cu;
    f_8000b780(c);
R_0107fe3c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fe44:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fe58u;
    f_8000b780(c);
R_0107fe58:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fe60:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fe74u;
    f_8000b780(c);
R_0107fe74:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fe8cu;
    f_8000b780(c);
R_0107fe8c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fe94:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107feb0;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107fecc;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107fee8;
    goto L_0107ff0c;
L_0107feb0:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fec4u;
    f_8000b780(c);
R_0107fec4:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fecc:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fee0u;
    f_8000b780(c);
R_0107fee0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107fee8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107fefcu;
    f_8000b780(c);
R_0107fefc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107ff0c;
L_0107ff04:
    c.r[3] = 0x0u;
    goto L_0107ff10;
L_0107ff0c:
    c.r[3] = 0x1u;
L_0107ff10:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x107ff18u;
    f_801c8404(c);
R_0107ff18:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_0107ff30(wp::Cpu& c) {
    WP_ENTER(0x107ff30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107ff44u: goto R_0107ff44;
        case 0x107ff68u: goto R_0107ff68;
        case 0x107ffa0u: goto R_0107ffa0;
        case 0x107ffa4u: goto R_0107ffa4;
        case 0x107ffbcu: goto R_0107ffbc;
        case 0x107fff4u: goto R_0107fff4;
        case 0x108000cu: goto R_0108000c;
        case 0x1080010u: goto R_01080010;
        case 0x1080018u: goto R_01080018;
        case 0x1080064u: goto R_01080064;
        case 0x1080068u: goto R_01080068;
        case 0x10800a4u: goto R_010800a4;
        case 0x10800c4u: goto R_010800c4;
        case 0x10800fcu: goto R_010800fc;
        case 0x1080100u: goto R_01080100;
        case 0x1080118u: goto R_01080118;
        case 0x108015cu: goto R_0108015c;
        case 0x1080164u: goto R_01080164;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x107ff44u;
    f_801c83b8(c);
R_0107ff44:
    ea = c.r[3] + 0x1bcu;
    c.r[6] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[6] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ff68u;
    wp::call(c, c.ctr);
R_0107ff68:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107ffa4;
L_0107ff74:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ffa0;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ffa0;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ffa0u;
    wp::call(c, c.ctr);
L_0107ffa0:
R_0107ffa0:
    c.lr = 0x107ffa4u;
    f_8006a940(c);
L_0107ffa4:
R_0107ffa4:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ffbcu;
    wp::call(c, c.ctr);
R_0107ffbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ffd0;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107ff74;
    }
L_0107ffd0:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01080068;
L_0107ffe4:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_0107ffec:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x107fff4u;
    f_8000fc40(c);
R_0107fff4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080004;
    c.r[0] = 0x0u;
    goto L_01080024;
L_01080004:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x108000cu;
    f_8000fc20(c);
R_0108000c:
    c.lr = 0x1080010u;
    f_800699d0(c);
R_01080010:
    c.r[4] = 0x800u;
    c.lr = 0x1080018u;
    f_80066cd0(c);
R_01080018:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_01080024:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107ffec;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080064;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080064;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080064u;
    wp::call(c, c.ctr);
L_01080064:
R_01080064:
    c.lr = 0x1080068u;
    f_8006a940(c);
L_01080068:
R_01080068:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108008c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108008c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107ffe4;
    }
L_0108008c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10800a4u;
    wp::call(c, c.ctr);
R_010800a4:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10800c4u;
    wp::call(c, c.ctr);
R_010800c4:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01080100;
L_010800d0:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010800fc;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010800fc;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10800fcu;
    wp::call(c, c.ctr);
L_010800fc:
R_010800fc:
    c.lr = 0x1080100u;
    f_8006a940(c);
L_01080100:
R_01080100:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080118u;
    wp::call(c, c.ctr);
R_01080118:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108012c;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010800d0;
    }
L_0108012c:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108015c;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108015c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108015cu;
    wp::call(c, c.ctr);
L_0108015c:
R_0108015c:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x1080164u;
    f_801c8404(c);
R_01080164:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr713_01080180(wp::Cpu& c) {
    WP_ENTER(0x1080180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080194u: goto R_01080194;
        case 0x10801acu: goto R_010801ac;
        case 0x10801b8u: goto R_010801b8;
        case 0x10801c8u: goto R_010801c8;
        case 0x10801d4u: goto R_010801d4;
        case 0x10801e4u: goto R_010801e4;
        case 0x10801fcu: goto R_010801fc;
        case 0x1080218u: goto R_01080218;
        case 0x1080234u: goto R_01080234;
        case 0x1080264u: goto R_01080264;
        case 0x108029cu: goto R_0108029c;
        case 0x10802a0u: goto R_010802a0;
        case 0x1080330u: goto R_01080330;
        case 0x108035cu: goto R_0108035c;
        case 0x1080364u: goto R_01080364;
        case 0x1080370u: goto R_01080370;
        case 0x1080378u: goto R_01080378;
        case 0x108037cu: goto R_0108037c;
        case 0x1080384u: goto R_01080384;
        case 0x1080398u: goto R_01080398;
        case 0x10803b4u: goto R_010803b4;
        case 0x10803bcu: goto R_010803bc;
        case 0x10803d0u: goto R_010803d0;
        case 0x10803dcu: goto R_010803dc;
        case 0x10803e4u: goto R_010803e4;
        case 0x10803f0u: goto R_010803f0;
        case 0x10803f8u: goto R_010803f8;
        case 0x10803fcu: goto R_010803fc;
        case 0x1080400u: goto R_01080400;
        case 0x1080414u: goto R_01080414;
        case 0x108041cu: goto R_0108041c;
        case 0x1080428u: goto R_01080428;
        case 0x108042cu: goto R_0108042c;
        case 0x1080434u: goto R_01080434;
        case 0x1080440u: goto R_01080440;
        case 0x1080448u: goto R_01080448;
        case 0x108044cu: goto R_0108044c;
        case 0x1080454u: goto R_01080454;
        case 0x108045cu: goto R_0108045c;
        case 0x1080468u: goto R_01080468;
        case 0x108046cu: goto R_0108046c;
        case 0x1080474u: goto R_01080474;
        case 0x1080480u: goto R_01080480;
        case 0x1080488u: goto R_01080488;
        case 0x108048cu: goto R_0108048c;
        case 0x1080494u: goto R_01080494;
        case 0x108049cu: goto R_0108049c;
        case 0x10804a4u: goto R_010804a4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1080194u;
    f_801c83b4(c);
R_01080194:
    c.r[27] = ((((g_mr713_bases[4] + 0x2a70u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr713_bases[4] + 0x2a70u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x10801acu;
    f_800699d0(c);
R_010801ac:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x10801b8u;
    f_80066e70(c);
R_010801b8:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x10801c8u;
    f_80066db0(c);
R_010801c8:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x10801d4u;
    f_801c79a4(c);
R_010801d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01080238;
    c.lr = 0x10801e4u;
    f_80007530(c);
R_010801e4:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010801f8;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_01080210;
L_010801f8:
    c.lr = 0x10801fcu;
    f_8000dc30(c);
R_010801fc:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_01080214;
L_01080210:
    c.r[26] = 0x0u;
L_01080214:
    c.lr = 0x1080218u;
    f_8000e070(c);
R_01080218:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x1080234u;
    f_mr713_01060af0(c);
R_01080234:
    c.r[29] = c.r[3] | c.r[3];
L_01080238:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080264;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01080264;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080264u;
    wp::call(c, c.ctr);
L_01080264:
R_01080264:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010802a0;
L_01080270:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108029c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108029c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108029cu;
    wp::call(c, c.ctr);
L_0108029c:
R_0108029c:
    c.lr = 0x10802a0u;
    f_8006a940(c);
L_010802a0:
R_010802a0:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_010802c0;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01080270;
    }
L_010802c0:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010802e8;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010802f0;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010802f8;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01080300;
    goto L_01080304;
L_010802e8:
    c.r[31] = 0x0u;
    goto L_01080304;
L_010802f0:
    c.r[31] = 0x1u;
    goto L_01080304;
L_010802f8:
    c.r[31] = 0x2u;
    goto L_01080304;
L_01080300:
    c.r[31] = 0x3u;
L_01080304:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080330;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080330;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080330u;
    wp::call(c, c.ctr);
L_01080330:
R_01080330:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080354;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010803d4;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01080420;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01080460;
    goto L_0108049c;
L_01080354:
    c.r[3] = 0x5u;
    c.lr = 0x108035cu;
    f_8001a890(c);
R_0108035c:
    c.r[3] = 0x0u;
    c.lr = 0x1080364u;
    f_80076130(c);
R_01080364:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1080370u;
    f_80075f20(c);
R_01080370:
    c.r[3] = 0x1u;
    c.lr = 0x1080378u;
    f_80076130(c);
R_01080378:
    c.lr = 0x108037cu;
    f_80076100(c);
R_0108037c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1080384u;
    f_8000e240(c);
R_01080384:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010803c4;
    c.r[26] = 0x0u;
    goto L_010803b8;
L_01080394:
    c.lr = 0x1080398u;
    f_8000dd70(c);
R_01080398:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x10803b4u;
    f_8000fc60(c);
R_010803b4:
    c.r[26] = c.r[26] + 0x1u;
L_010803b8:
    c.lr = 0x10803bcu;
    f_80007570(c);
R_010803bc:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080394;
    }
L_010803c4:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10803d0u;
    f_800293c0(c);
R_010803d0:
    goto L_0108049c;
L_010803d4:
    c.r[3] = 0x5u;
    c.lr = 0x10803dcu;
    f_8001a890(c);
R_010803dc:
    c.r[3] = 0x0u;
    c.lr = 0x10803e4u;
    f_80076130(c);
R_010803e4:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10803f0u;
    f_80075f20(c);
R_010803f0:
    c.r[3] = 0x1u;
    c.lr = 0x10803f8u;
    f_80076130(c);
R_010803f8:
    c.lr = 0x10803fcu;
    f_80076100(c);
R_010803fc:
    c.lr = 0x1080400u;
    f_8000e070(c);
R_01080400:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_01080410;
    c.r[3] = 0x6u;
L_01080410:
    c.lr = 0x1080414u;
    f_8000e080(c);
R_01080414:
    c.r[3] = 0x1u;
    c.lr = 0x108041cu;
    f_80029330(c);
R_0108041c:
    goto L_0108049c;
L_01080420:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080428u;
    f_80071fe0(c);
R_01080428:
    c.lr = 0x108042cu;
    f_8001a890(c);
R_0108042c:
    c.r[3] = 0x0u;
    c.lr = 0x1080434u;
    f_80076130(c);
R_01080434:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1080440u;
    f_80075f20(c);
R_01080440:
    c.r[3] = 0x1u;
    c.lr = 0x1080448u;
    f_80076130(c);
R_01080448:
    c.lr = 0x108044cu;
    f_80076100(c);
R_0108044c:
    c.r[3] = 0x4u;
    c.lr = 0x1080454u;
    f_8000e080(c);
R_01080454:
    c.r[3] = 0x1u;
    c.lr = 0x108045cu;
    f_80029330(c);
R_0108045c:
    goto L_0108049c;
L_01080460:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080468u;
    f_80071fe0(c);
R_01080468:
    c.lr = 0x108046cu;
    f_8001a890(c);
R_0108046c:
    c.r[3] = 0x0u;
    c.lr = 0x1080474u;
    f_80076130(c);
R_01080474:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1080480u;
    f_80075f20(c);
R_01080480:
    c.r[3] = 0x1u;
    c.lr = 0x1080488u;
    f_80076130(c);
R_01080488:
    c.lr = 0x108048cu;
    f_80076100(c);
R_0108048c:
    c.r[3] = 0x8u;
    c.lr = 0x1080494u;
    f_8000e080(c);
R_01080494:
    c.r[3] = 0x1u;
    c.lr = 0x108049cu;
    f_80029330(c);
L_0108049c:
R_0108049c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10804a4u;
    f_801c8400(c);
R_010804a4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_010804c0(wp::Cpu& c) {
    WP_ENTER(0x10804c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10804f0u: goto R_010804f0;
        case 0x10804f8u: goto R_010804f8;
        case 0x1080524u: goto R_01080524;
        case 0x1080530u: goto R_01080530;
        case 0x1080554u: goto R_01080554;
        case 0x108057cu: goto R_0108057c;
        case 0x1080594u: goto R_01080594;
        case 0x10805b0u: goto R_010805b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr713_bases[4] + 0x2aa8u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr713_bases[4] + 0x2aa8u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10804f0u;
    f_80153530(c);
R_010804f0:
    c.r[3] = 0x6u;
    c.lr = 0x10804f8u;
    f_80153920(c);
R_010804f8:
    c.r[31] = ((((g_mr713_bases[4] + 0x2ab0u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr713_bases[4] + 0x2ab0u) & 0xFFFFu);
L_01080504:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1080524u;
    f_801537c0(c);
R_01080524:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1080530u;
    f_80153590(c);
R_01080530:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_01080544;
    c.r[4] = 0xfu;
L_01080544:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x1080554u;
    f_80153320(c);
R_01080554:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01080570;
    c.r[6] = 0x3u;
L_01080570:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108057cu;
    f_801533a0(c);
R_0108057c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x1080594u;
    f_80153360(c);
R_01080594:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10805b0u;
    f_80153400(c);
R_010805b0:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080504;
    }
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_010805e0(wp::Cpu& c) {
    WP_ENTER(0x10805e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080614u: goto R_01080614;
        case 0x108061cu: goto R_0108061c;
        case 0x1080624u: goto R_01080624;
        case 0x108062cu: goto R_0108062c;
        case 0x108063cu: goto R_0108063c;
        case 0x1080654u: goto R_01080654;
        case 0x1080668u: goto R_01080668;
        case 0x108066cu: goto R_0108066c;
        case 0x1080678u: goto R_01080678;
        case 0x1080688u: goto R_01080688;
        case 0x108068cu: goto R_0108068c;
        case 0x1080690u: goto R_01080690;
        case 0x10806b4u: goto R_010806b4;
        case 0x10806fcu: goto R_010806fc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x58u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0x38u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[28]);
    ea = c.r[1] + 0x28u;
    wp::store_quantized(c, 28, ea, 0, 0, q);
    c.r[3] = 0x0u;
    c.lr = 0x1080614u;
    f_80150850(c);
R_01080614:
    c.r[3] = 0x1u;
    c.lr = 0x108061cu;
    f_80153e40(c);
R_0108061c:
    c.r[3] = 0x0u;
    c.lr = 0x1080624u;
    f_80153e90(c);
R_01080624:
    c.r[3] = 0x1u;
    c.lr = 0x108062cu;
    f_80153f20(c);
R_0108062c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x108063cu;
    f_80153ee0(c);
R_0108063c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x1080654u;
    f_801536f0(c);
R_01080654:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x1080668u;
    f_80153df0(c);
R_01080668:
    c.lr = 0x108066cu;
    f_8014f020(c);
R_0108066c:
    c.r[3] = ((((g_mr713_bases[4] + 0x2ad0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr713_bases[4] + 0x2ad0u) & 0xFFFFu);
    c.lr = 0x1080678u;
    f_8014e9e0(c);
R_01080678:
    c.r[4] = ((((g_mr713_bases[4] + 0x2ae8u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr713_bases[4] + 0x2ae8u) & 0xFFFFu);
    c.lr = 0x1080688u;
    f_8014f200(c);
R_01080688:
    c.lr = 0x108068cu;
    f_8004aa80(c);
R_0108068c:
    c.lr = 0x1080690u;
    f_800ee3c0(c);
R_01080690:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x10806b4u;
    f_800e95b0(c);
R_010806b4:
    ea = c.r[1] + 0x14u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    c.r[4] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x10u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[3] = 0x80u;
    ea = c.r[4] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    c.f[1] = wp::round_single(c.f[5] + c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[31] = wp::round_single(c.f[5] / c.f[4]);
    c.ps1[31] = c.f[31];
    c.r[5] = 0x4u;
    c.f[0] = wp::round_single(c.f[3] + c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[30] = wp::round_single(c.f[3] / c.f[2]);
    c.ps1[30] = c.f[30];
    c.f[29] = wp::round_single(c.f[1] / c.f[4]);
    c.ps1[29] = c.f[29];
    c.f[28] = wp::round_single(c.f[0] / c.f[2]);
    c.ps1[28] = c.f[28];
    c.lr = 0x10806fcu;
    f_80150560(c);
R_010806fc:
    c.r[3] = 0xcc010000u;
    c.r[4] = 0x0u;
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[29]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[29]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[28]));
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0xffff8000u;
    wp::wrf32(ea, static_cast<float>(c.f[28]));
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x50u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x38u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0x28u;
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    c.f[28] = wp::rdf64(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr713_01080780(wp::Cpu& c) {
    WP_ENTER(0x1080780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10807c0u: goto R_010807c0;
        case 0x10807d4u: goto R_010807d4;
        case 0x10807e4u: goto R_010807e4;
        case 0x10807f4u: goto R_010807f4;
        case 0x1080800u: goto R_01080800;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10807c0u;
    f_8003d6b0(c);
R_010807c0:
    c.r[4] = ((((g_mr713_bases[5] + 0x28b58u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr713_bases[5] + 0x28b58u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10807d4u;
    f_801c79a4(c);
R_010807d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010807e4;
    c.lr = 0x10807e4u;
    f_80034ac0(c);
L_010807e4:
R_010807e4:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10807f4u;
    f_80052170(c);
R_010807f4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x1080800u;
    f_80052190(c);
R_01080800:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_01080830(wp::Cpu& c) {
    WP_ENTER(0x1080830u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080878u: goto R_01080878;
        case 0x1080880u: goto R_01080880;
        case 0x1080894u: goto R_01080894;
        case 0x10808a4u: goto R_010808a4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010808a4;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080880;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080880;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080878u;
    f_80034b10(c);
R_01080878:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1080880u;
    f_801c7a8c(c);
L_01080880:
R_01080880:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080894;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1080894u;
    f_80051600(c);
L_01080894:
R_01080894:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010808a4;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10808a4u;
    f_801c7a8c(c);
L_010808a4:
R_010808a4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr713_010808d0(wp::Cpu& c) {
    WP_ENTER(0x10808d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080914u: goto R_01080914;
        case 0x1080940u: goto R_01080940;
        case 0x108094cu: goto R_0108094c;
        case 0x1080954u: goto R_01080954;
        case 0x1080960u: goto R_01080960;
        case 0x1080968u: goto R_01080968;
        case 0x1080970u: goto R_01080970;
        case 0x1080990u: goto R_01080990;
        case 0x10809b0u: goto R_010809b0;
        case 0x10809b8u: goto R_010809b8;
        case 0x10809c4u: goto R_010809c4;
        case 0x10809f4u: goto R_010809f4;
        case 0x1080a10u: goto R_01080a10;
        case 0x1080a58u: goto R_01080a58;
        case 0x1080a74u: goto R_01080a74;
        case 0x1080a8cu: goto R_01080a8c;
        case 0x1080aa8u: goto R_01080aa8;
        case 0x1080ab8u: goto R_01080ab8;
        case 0x1080abcu: goto R_01080abc;
        case 0x1080af4u: goto R_01080af4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffed0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x134u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xd0u;
    ea = c.r[1] + 0x120u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x128u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x110u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x118u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x100u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0x108u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0xf0u;
    wp::wrf64(ea, c.f[28]);
    ea = c.r[1] + 0xf8u;
    wp::store_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0xe0u;
    wp::wrf64(ea, c.f[27]);
    ea = c.r[1] + 0xe8u;
    wp::store_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0xd0u;
    wp::wrf64(ea, c.f[26]);
    ea = c.r[1] + 0xd8u;
    wp::store_quantized(c, 26, ea, 0, 0, q);
    c.lr = 0x1080914u;
    f_801c83b8(c);
R_01080914:
    c.r[29] = ((((g_mr713_bases[4] + 0x2a88u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr713_bases[4] + 0x2a88u) & 0xFFFFu);
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[29] + 0x90u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x94u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[3] = c.f[1];
    c.f[4] = c.f[2];
    c.f[5] = c.f[1];
    c.f[6] = c.f[2];
    c.lr = 0x1080940u;
    f_8014c050(c);
R_01080940:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x108094cu;
    f_80154c30(c);
R_0108094c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1080954u;
    f_8014b090(c);
R_01080954:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1080960u;
    f_80154d30(c);
R_01080960:
    c.r[3] = 0x0u;
    c.lr = 0x1080968u;
    f_80154e50(c);
R_01080968:
    c.r[3] = 0x0u;
    c.lr = 0x1080970u;
    f_80151a30(c);
R_01080970:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1080990u;
    f_80151a60(c);
R_01080990:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10809b0u;
    f_80151a60(c);
R_010809b0:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10809b8u;
    f_80034f00(c);
R_010809b8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x10809c4u;
    f_80034f20(c);
R_010809c4:
    c.r[3] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = (((0x802f5684u + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x98u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[3] = 0x6u;
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[2] = wp::round_single(c.f[3] / c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + wp::sign_extend16(0x802f5684u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[26] = wp::round_single(c.f[3] / c.f[0]);
    c.ps1[26] = c.f[26];
    c.f[27] = wp::round_single(c.f[1] * wp::force25(c.f[2]));
    c.ps1[27] = c.f[27];
    c.lr = 0x10809f4u;
    f_8014f9d0(c);
R_010809f4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1080a10u;
    f_8014f780(c);
R_01080a10:
    ea = c.r[29] + 0xa8u;
    c.f[28] = wp::rdf64(ea);
    c.r[31] = c.r[29] + 0x0u;
    ea = c.r[29] + 0xa0u;
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    c.r[28] = 0x1u;
    ea = c.r[29] + 0x9cu;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[30] = 0x43300000u;
    ea = c.r[29] + 0xa4u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
L_01080a2c:
    c.r[0] = c.r[28] & 0xffu;
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xb0u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0xb0u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = wp::round_single(c.f[0] - c.f[28]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] / c.f[29]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[30] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.lr = 0x1080a58u;
    f_80126450(c);
R_01080a58:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[27]));
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x90u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[26]));
    c.ps1[2] = c.f[2];
    c.lr = 0x1080a74u;
    f_8014b7e0(c);
R_01080a74:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x1080a8cu;
    f_80154e70(c);
R_01080a8c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1080aa8u;
    f_8014f780(c);
R_01080aa8:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080a2c;
    }
    c.lr = 0x1080ab8u;
    f_mr713_010804c0(c);
R_01080ab8:
    c.lr = 0x1080abcu;
    f_mr713_010805e0(c);
R_01080abc:
    c.r[11] = c.r[1] + 0xd0u;
    ea = c.r[1] + 0x128u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x120u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x118u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x110u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x108u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x100u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0xf8u;
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0xf0u;
    c.f[28] = wp::rdf64(ea);
    ea = c.r[1] + 0xe8u;
    wp::load_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0xe0u;
    c.f[27] = wp::rdf64(ea);
    ea = c.r[1] + 0xd8u;
    wp::load_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0xd0u;
    c.f[26] = wp::rdf64(ea);
    c.lr = 0x1080af4u;
    f_801c8404(c);
R_01080af4:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

