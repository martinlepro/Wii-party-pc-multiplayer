#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr711_bases[17];
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
void f_80019f20(wp::Cpu& c);
void f_8001a890(wp::Cpu& c);
void f_8001aac0(wp::Cpu& c);
void f_8001b020(wp::Cpu& c);
void f_8001b0c0(wp::Cpu& c);
void f_8001bfe0(wp::Cpu& c);
void f_80022df0(wp::Cpu& c);
void f_80029270(wp::Cpu& c);
void f_80029330(wp::Cpu& c);
void f_800293c0(wp::Cpu& c);
void f_8002d270(wp::Cpu& c);
void f_80034ac0(wp::Cpu& c);
void f_80034b10(wp::Cpu& c);
void f_80034c10(wp::Cpu& c);
void f_80034df0(wp::Cpu& c);
void f_80034e10(wp::Cpu& c);
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
void f_800e9070(wp::Cpu& c);
void f_800e95b0(wp::Cpu& c);
void f_800e9850(wp::Cpu& c);
void f_800ee3c0(wp::Cpu& c);
void f_8011bd40(wp::Cpu& c);
void f_8011bd50(wp::Cpu& c);
void f_8011bd90(wp::Cpu& c);
void f_8011bec0(wp::Cpu& c);
void f_8011e9e0(wp::Cpu& c);
void f_8011ea40(wp::Cpu& c);
void f_8011eaa0(wp::Cpu& c);
void f_8011eeb0(wp::Cpu& c);
void f_80121cf0(wp::Cpu& c);
void f_801225e0(wp::Cpu& c);
void f_80122d80(wp::Cpu& c);
void f_80126360(wp::Cpu& c);
void f_801263e0(wp::Cpu& c);
void f_80126450(wp::Cpu& c);
void f_8012be60(wp::Cpu& c);
void f_80132a30(wp::Cpu& c);
void f_80132ab0(wp::Cpu& c);
void f_8014b090(wp::Cpu& c);
void f_8014b100(wp::Cpu& c);
void f_8014b7e0(wp::Cpu& c);
void f_8014b820(wp::Cpu& c);
void f_8014b8a0(wp::Cpu& c);
void f_8014c050(wp::Cpu& c);
void f_8014e770(wp::Cpu& c);
void f_8014e9e0(wp::Cpu& c);
void f_8014f020(wp::Cpu& c);
void f_8014f060(wp::Cpu& c);
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
void f_801c83ac(wp::Cpu& c);
void f_801c83b0(wp::Cpu& c);
void f_801c83b4(wp::Cpu& c);
void f_801c83b8(wp::Cpu& c);
void f_801c83f8(wp::Cpu& c);
void f_801c83fc(wp::Cpu& c);
void f_801c8400(wp::Cpu& c);
void f_801c8404(wp::Cpu& c);
void f_mr711_01029d80(wp::Cpu& c);
void f_mr711_0102b2c0(wp::Cpu& c);
void f_mr711_0102b360(wp::Cpu& c);
void f_mr711_0102b3e0(wp::Cpu& c);
void f_mr711_0102b3f0(wp::Cpu& c);
void f_mr711_0102b400(wp::Cpu& c);
void f_mr711_0102b410(wp::Cpu& c);
void f_mr711_0102b430(wp::Cpu& c);
void f_mr711_01030130(wp::Cpu& c);
void f_mr711_01030300(wp::Cpu& c);
void f_mr711_01030380(wp::Cpu& c);
void f_mr711_01030390(wp::Cpu& c);
void f_mr711_01039650(wp::Cpu& c);
void f_mr711_01049b80(wp::Cpu& c);
void f_mr711_0104abc0(wp::Cpu& c);
void f_mr711_0104b7c0(wp::Cpu& c);
void f_mr711_010621b0(wp::Cpu& c);
void f_mr711_01076020(wp::Cpu& c);
void f_mr711_01079e60(wp::Cpu& c);
void f_mr711_0107bae0(wp::Cpu& c);
void f_mr711_0107c0b0(wp::Cpu& c);
void f_mr711_0107ca90(wp::Cpu& c);
void f_mr711_0107d780(wp::Cpu& c);
void f_mr711_0107db80(wp::Cpu& c);
void f_mr711_0107de60(wp::Cpu& c);
void f_mr711_0107e500(wp::Cpu& c);
void f_mr711_0107eaa0(wp::Cpu& c);
void f_mr711_0107eae0(wp::Cpu& c);
void f_mr711_0107ecb0(wp::Cpu& c);
void f_mr711_0107ecd0(wp::Cpu& c);
void f_mr711_0107ed00(wp::Cpu& c);
void f_mr711_0107ed30(wp::Cpu& c);
void f_mr711_0107ed60(wp::Cpu& c);
void f_mr711_0107ed90(wp::Cpu& c);
void f_mr711_0107edb0(wp::Cpu& c);
void f_mr711_0107ede0(wp::Cpu& c);
void f_mr711_0107ee00(wp::Cpu& c);
void f_mr711_0107ee20(wp::Cpu& c);
void f_mr711_0107ee30(wp::Cpu& c);
void f_mr711_0107ee40(wp::Cpu& c);
void f_mr711_0107ee50(wp::Cpu& c);
void f_mr711_0107ee70(wp::Cpu& c);
void f_mr711_0107eee0(wp::Cpu& c);
void f_mr711_0107eef0(wp::Cpu& c);
void f_mr711_0107ef00(wp::Cpu& c);
void f_mr711_0107ef10(wp::Cpu& c);
void f_mr711_0107ef20(wp::Cpu& c);
void f_mr711_0107ef30(wp::Cpu& c);
void f_mr711_0107ef40(wp::Cpu& c);
void f_mr711_0107ef50(wp::Cpu& c);
void f_mr711_0107ef60(wp::Cpu& c);
void f_mr711_0107ef70(wp::Cpu& c);
void f_mr711_0107ef80(wp::Cpu& c);
void f_mr711_0107ef90(wp::Cpu& c);
void f_mr711_0107eff0(wp::Cpu& c);
void f_mr711_0107f050(wp::Cpu& c);
void f_mr711_0107f400(wp::Cpu& c);
void f_mr711_0107f650(wp::Cpu& c);
void f_mr711_0107fae0(wp::Cpu& c);
void f_mr711_0107faf0(wp::Cpu& c);
void f_mr711_0107fb00(wp::Cpu& c);
void f_mr711_0107fbf0(wp::Cpu& c);
void f_mr711_0107fe60(wp::Cpu& c);
void f_mr711_01080080(wp::Cpu& c);
void f_mr711_010803b0(wp::Cpu& c);
void f_mr711_01080550(wp::Cpu& c);
void f_mr711_010805f0(wp::Cpu& c);
void f_mr711_010806a0(wp::Cpu& c);
void f_mr711_010806b0(wp::Cpu& c);
void f_mr711_010806c0(wp::Cpu& c);
void f_mr711_010806d0(wp::Cpu& c);
void f_mr711_01080830(wp::Cpu& c);
void f_mr711_010809e0(wp::Cpu& c);
void f_mr711_01080c70(wp::Cpu& c);
void f_mr711_01080d30(wp::Cpu& c);
void f_mr711_01080d40(wp::Cpu& c);
void f_mr711_01080d50(wp::Cpu& c);
void f_mr711_01081370(wp::Cpu& c);
void f_mr711_010815b0(wp::Cpu& c);
void f_mr711_01081800(wp::Cpu& c);
void f_mr711_01081b40(wp::Cpu& c);
void f_mr711_01081c60(wp::Cpu& c);
void f_mr711_01081e00(wp::Cpu& c);
void f_mr711_01081eb0(wp::Cpu& c);
void f_mr711_01081f50(wp::Cpu& c);

void f_mr711_0107eaa0(wp::Cpu& c) {
    WP_ENTER(0x107eaa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr711_bases[4] + 0x2a38u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr711_bases[4] + 0x2a38u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_0107ead0;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ead0;
    c.r[4] = 0x1u;
L_0107ead0:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr711_0107eae0(wp::Cpu& c) {
    WP_ENTER(0x107eae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107eb18u: goto R_0107eb18;
        case 0x107eb30u: goto R_0107eb30;
        case 0x107eb38u: goto R_0107eb38;
        case 0x107eb64u: goto R_0107eb64;
        case 0x107eb7cu: goto R_0107eb7c;
        case 0x107eb84u: goto R_0107eb84;
        case 0x107ebb0u: goto R_0107ebb0;
        case 0x107ebc8u: goto R_0107ebc8;
        case 0x107ebd0u: goto R_0107ebd0;
        case 0x107ebfcu: goto R_0107ebfc;
        case 0x107ec14u: goto R_0107ec14;
        case 0x107ec1cu: goto R_0107ec1c;
        case 0x107ec2cu: goto R_0107ec2c;
        case 0x107ec44u: goto R_0107ec44;
        case 0x107ec5cu: goto R_0107ec5c;
        case 0x107ec74u: goto R_0107ec74;
        case 0x107ec8cu: goto R_0107ec8c;
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
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107eb38;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107eb18u;
    wp::call(c, c.ctr);
R_0107eb18:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107eb30u;
    wp::call(c, c.ctr);
R_0107eb30:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x107eb38u;
    f_80019f20(c);
L_0107eb38:
R_0107eb38:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ec78;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107eb84;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107eb64u;
    wp::call(c, c.ctr);
R_0107eb64:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107eb7cu;
    wp::call(c, c.ctr);
R_0107eb7c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x107eb84u;
    f_80019f20(c);
L_0107eb84:
R_0107eb84:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ec60;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ebd0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ebb0u;
    wp::call(c, c.ctr);
R_0107ebb0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ebc8u;
    wp::call(c, c.ctr);
R_0107ebc8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x107ebd0u;
    f_80019f20(c);
L_0107ebd0:
R_0107ebd0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ec48;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ec1c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ebfcu;
    wp::call(c, c.ctr);
R_0107ebfc:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ec14u;
    wp::call(c, c.ctr);
R_0107ec14:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x107ec1cu;
    f_80019f20(c);
L_0107ec1c:
R_0107ec1c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ec30;
    c.lr = 0x107ec2cu;
    f_mr711_0107c0b0(c);
R_0107ec2c:
    goto L_0107ec8c;
L_0107ec30:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ec44u;
    wp::call(c, c.ctr);
R_0107ec44:
    goto L_0107ec8c;
L_0107ec48:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ec5cu;
    wp::call(c, c.ctr);
R_0107ec5c:
    goto L_0107ec8c;
L_0107ec60:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ec74u;
    wp::call(c, c.ctr);
R_0107ec74:
    goto L_0107ec8c;
L_0107ec78:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ec8cu;
    wp::call(c, c.ctr);
L_0107ec8c:
R_0107ec8c:
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

void f_mr711_0107ecb0(wp::Cpu& c) {
    WP_ENTER(0x107ecb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr711_bases[5] + 0x29028u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x29028u) & 0xFFFFu);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ecd0(wp::Cpu& c) {
    WP_ENTER(0x107ecd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107ece0u: goto R_0107ece0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107ece0u;
    f_mr711_01076020(c);
R_0107ece0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr711_0107ed00(wp::Cpu& c) {
    WP_ENTER(0x107ed00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr711_bases[5] + 0x29020u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x29020u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ed30(wp::Cpu& c) {
    WP_ENTER(0x107ed30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr711_bases[5] + 0x29008u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x29008u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ed60(wp::Cpu& c) {
    WP_ENTER(0x107ed60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr711_bases[5] + 0x29010u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x29010u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ed90(wp::Cpu& c) {
    WP_ENTER(0x107ed90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr711_bases[5] + 0x28ff0u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x258u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr711_bases[5] + 0x28ff0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107edb0(wp::Cpu& c) {
    WP_ENTER(0x107edb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr711_bases[5] + 0x28ff8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x28ff8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ede0(wp::Cpu& c) {
    WP_ENTER(0x107ede0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr711_bases[5] + 0x28fe8u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr711_bases[5] + 0x28fe8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ee00(wp::Cpu& c) {
    WP_ENTER(0x107ee00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x250u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ee20(wp::Cpu& c) {
    WP_ENTER(0x107ee20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ee30(wp::Cpu& c) {
    WP_ENTER(0x107ee30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ee40(wp::Cpu& c) {
    WP_ENTER(0x107ee40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x160u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x164u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr711_0107ee50(wp::Cpu& c) {
    WP_ENTER(0x107ee50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr711_0107ee70(wp::Cpu& c) {
    WP_ENTER(0x107ee70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107eeb4u: goto R_0107eeb4;
        case 0x107eec4u: goto R_0107eec4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107eec4;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107eea8;
    c.r[3] = ((((g_mr711_bases[6] + 0x4e7cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[6] + 0x4e7cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_0107eea8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x107eeb4u;
    f_8001bfe0(c);
R_0107eeb4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107eec4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107eec4u;
    f_801c7a8c(c);
L_0107eec4:
R_0107eec4:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr711_0107eee0(wp::Cpu& c) {
    WP_ENTER(0x107eee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr711_0107bae0(c);
    return;
}

void f_mr711_0107eef0(wp::Cpu& c) {
    WP_ENTER(0x107eef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr711_01079e60(c);
    return;
}

void f_mr711_0107ef00(wp::Cpu& c) {
    WP_ENTER(0x107ef00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mr711_0107ef10(wp::Cpu& c) {
    WP_ENTER(0x107ef10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mr711_0107ee70(c);
    return;
}

void f_mr711_0107ef20(wp::Cpu& c) {
    WP_ENTER(0x107ef20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mr711_0107ca90(c);
    return;
}

void f_mr711_0107ef30(wp::Cpu& c) {
    WP_ENTER(0x107ef30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mr711_0107ca90(c);
    return;
}

void f_mr711_0107ef40(wp::Cpu& c) {
    WP_ENTER(0x107ef40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mr711_0107ca90(c);
    return;
}

void f_mr711_0107ef50(wp::Cpu& c) {
    WP_ENTER(0x107ef50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr711_0107d780(c);
    return;
}

void f_mr711_0107ef60(wp::Cpu& c) {
    WP_ENTER(0x107ef60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr711_0107ca90(c);
    return;
}

void f_mr711_0107ef70(wp::Cpu& c) {
    WP_ENTER(0x107ef70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr711_0107e500(c);
    return;
}

void f_mr711_0107ef80(wp::Cpu& c) {
    WP_ENTER(0x107ef80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr711_0107de60(c);
    return;
}

void f_mr711_0107ef90(wp::Cpu& c) {
    WP_ENTER(0x107ef90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107efb0u: goto R_0107efb0;
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
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x107efb0u;
    f_8011bd40(c);
R_0107efb0:
    c.r[3] = ((((g_mr711_bases[4] + 0x2a40u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr711_bases[5] + 0x290c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[4] + 0x2a40u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x290c0u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x4u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[30] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr711_0107eff0(wp::Cpu& c) {
    WP_ENTER(0x107eff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f01cu: goto R_0107f01c;
        case 0x107f02cu: goto R_0107f02c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107f02c;
    c.r[4] = 0x0u;
    c.lr = 0x107f01cu;
    f_8011bd50(c);
R_0107f01c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f02c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f02cu;
    f_801c7a8c(c);
L_0107f02c:
R_0107f02c:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr711_0107f050(wp::Cpu& c) {
    WP_ENTER(0x107f050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f084u: goto R_0107f084;
        case 0x107f15cu: goto R_0107f15c;
        case 0x107f2dcu: goto R_0107f2dc;
        case 0x107f2f0u: goto R_0107f2f0;
        case 0x107f350u: goto R_0107f350;
        case 0x107f35cu: goto R_0107f35c;
        case 0x107f384u: goto R_0107f384;
        case 0x107f39cu: goto R_0107f39c;
        case 0x107f3bcu: goto R_0107f3bc;
        case 0x107f3c8u: goto R_0107f3c8;
        case 0x107f3f0u: goto R_0107f3f0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff10u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xf4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xb0u;
    ea = c.r[1] + 0xe0u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xe8u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xd0u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0xd8u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0xc0u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0xc8u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    wp::wrf64(ea, c.f[28]);
    ea = c.r[1] + 0xb8u;
    wp::store_quantized(c, 28, ea, 0, 0, q);
    c.lr = 0x107f084u;
    f_801c83ac(c);
R_0107f084:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mr711_bases[4] + 0x2a40u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr711_bases[4] + 0x2a40u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_0107f0a4;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_0107f170;
    goto L_0107f3c4;
L_0107f0a4:
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd16(ea);
    ea = c.r[6] + 0x2u;
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    c.r[0] = wp::rotl(c.r[4], 24) & 0xffu;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[6], 24) & 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0xeu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xfu;
    wp::wr8(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_0107f120;
    ea = c.r[7] + 0xb9u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = 0x43300000u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[6] & 0xffu;
    ea = c.r[31] + 0x20u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x78u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[4]);
    c.f[1] = wp::round_single(c.f[1] / c.f[0]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x80u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[0] = c.f[0];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x88u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x8cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xfu;
    wp::wr8(ea, c.r[0]);
L_0107f120:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107f15c;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x18u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x19u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x1au;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xbu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x1bu;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x107f15cu;
    f_8011eeb0(c);
L_0107f15c:
R_0107f15c:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_0107f3c8;
L_0107f170:
    ea = c.r[5] + 0x0u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[29] + 0x4cu;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    ea = c.r[29] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[5] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107f19c;
    ea = c.r[29] + 0x50u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] + c.f[1]);
    c.ps1[0] = c.f[0];
    ea = c.r[29] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_0107f19c:
    ea = c.r[5] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x2cu;
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[4] + 0x0u;
    c.r[6] = wp::rd16(ea);
    c.r[26] = c.r[4] + 0x2u;
    ea = c.r[29] + 0x5cu;
    c.r[30] = wp::rd32(ea);
    ea = c.r[29] + 0x30u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[5] = wp::rotl(c.r[6], 25) & 0x1feu;
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[25] = c.r[26] + c.r[5];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[27] = c.r[6] & 0xffu;
    c.r[28] = wp::rotl(c.r[6], 24) & 0xffu;
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[29] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    c.r[5] = c.r[27] | c.r[27];
    ea = c.r[29] + 0x8u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0xcu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x10u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x14u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x18u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x20u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x24u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[29] + 0x28u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x38u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[29] + 0x2cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[29] + 0x30u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[29] + 0x34u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x38u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[29] + 0x3cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[29] + 0x40u;
    c.r[6] = wp::rd16(ea);
    ea = c.r[1] + 0x50u;
    wp::wr16(ea, c.r[6]);
    ea = c.r[29] + 0x42u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[1] + 0x52u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[29] + 0x43u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[1] + 0x53u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[29] + 0x44u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[29] + 0x48u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x4cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[29] + 0x50u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x60u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[29] + 0x54u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x64u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[29] + 0x58u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x5cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x60u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x60u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x64u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[29] | c.r[29];
    c.f[1] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[3]));
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x107f2dcu;
    f_801225e0(c);
R_0107f2dc:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x107f2f0u;
    f_801225e0(c);
R_0107f2f0:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_0107f330;
    c.r[3] = c.r[28] ^ 0x80000000u;
    c.r[0] = 0x43300000u;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x28u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x88u;
    c.f[1] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    c.f[1] = wp::round_single(c.f[3] / c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x60u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    c.f[0] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_0107f330:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_0107f348;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_0107f348:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x107f350u;
    f_8011eaa0(c);
R_0107f350:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107f35cu;
    f_8011ea40(c);
R_0107f35c:
    c.f[1] = wp::round_single(c.f[1] + c.f[28]);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x18u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x3cu;
    wp::wrf32(ea, static_cast<float>(c.f[29]));
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.f[0] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[30] - c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x40u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x107f384u;
    f_80122d80(c);
R_0107f384:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x107f39cu;
    f_80122d80(c);
R_0107f39c:
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[30]);
    c.r[0] = wp::rotl(c.r[27], 1) & 0x1feu;
    c.r[0] = c.r[25] + c.r[0];
    c.r[3] = c.r[1] + 0x10u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0xffffffffu;
    ea = c.r[29] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    c.lr = 0x107f3bcu;
    f_80121cf0(c);
R_0107f3bc:
    c.r[3] = 0x2u;
    goto L_0107f3c8;
L_0107f3c4:
    c.lr = 0x107f3c8u;
    f_8011bd90(c);
L_0107f3c8:
R_0107f3c8:
    c.r[11] = c.r[1] + 0xb0u;
    ea = c.r[1] + 0xe8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xe0u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0xd8u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0xd0u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0xc8u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0xc0u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0xb8u;
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    c.f[28] = wp::rdf64(ea);
    c.lr = 0x107f3f0u;
    f_801c83f8(c);
R_0107f3f0:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mr711_0107f400(wp::Cpu& c) {
    WP_ENTER(0x107f400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f41cu: goto R_0107f41c;
        case 0x107f5a0u: goto R_0107f5a0;
        case 0x107f5f4u: goto R_0107f5f4;
        case 0x107f618u: goto R_0107f618;
        case 0x107f624u: goto R_0107f624;
        case 0x107f634u: goto R_0107f634;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x90u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x98u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x107f41cu;
    f_801c83b0(c);
R_0107f41c:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_0107f438;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_0107f44c;
    goto L_0107f620;
L_0107f438:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_0107f624;
L_0107f44c:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mr711_bases[4] + 0x2a4cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mr711_bases[4] + 0x2a50u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x0u;
    c.r[8] = wp::rd16(ea);
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = wp::rotl(c.r[8], 25) & 0x1feu;
    c.r[5] = c.r[5] + c.r[4];
    c.r[30] = c.r[8] & 0xffu;
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[29] = c.r[5] + 0x2u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[7] + wp::sign_extend16((g_mr711_bases[4] + 0x2a4cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mr711_bases[4] + 0x2a50u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0xcu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x10u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x14u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x18u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x1cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x20u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x24u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[31] + 0x28u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x30u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[31] + 0x2cu;
    c.r[8] = wp::rd32(ea);
    ea = c.r[31] + 0x30u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[31] + 0x34u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x38u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[31] + 0x3cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[31] + 0x40u;
    c.r[7] = wp::rd16(ea);
    ea = c.r[1] + 0x48u;
    wp::wr16(ea, c.r[7]);
    ea = c.r[31] + 0x42u;
    c.r[7] = wp::rd8(ea);
    ea = c.r[1] + 0x4au;
    wp::wr8(ea, c.r[7]);
    ea = c.r[31] + 0x43u;
    c.r[7] = wp::rd8(ea);
    ea = c.r[1] + 0x4bu;
    wp::wr8(ea, c.r[7]);
    ea = c.r[31] + 0x44u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[31] + 0x48u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x4cu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x54u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[31] + 0x50u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x58u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[31] + 0x54u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x5cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[31] + 0x58u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x5cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[31] + 0x60u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.f[2] = wp::round_single(c.f[1] * wp::force25(c.f[3]));
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x54u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[4]));
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x4cu;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    ea = c.r[31] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[6] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    c.r[25] = c.r[0] ^ 0x1u;
    c.lr = 0x107f5a0u;
    f_801225e0(c);
R_0107f5a0:
    ea = c.r[26] + wp::sign_extend16((g_mr711_bases[4] + 0x2a50u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_0107f5b0;
    goto L_0107f5b4;
L_0107f5b0:
    c.f[2] = c.f[1];
L_0107f5b4:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f5c4;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_0107f5cc;
L_0107f5c4:
    c.r[3] = ((((g_mr711_bases[4] + 0x2a50u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[4] + 0x2a50u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_0107f5cc:
    ea = c.r[31] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    c.f[1] = wp::round_single(c.f[2] + c.f[0]);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] + c.f[1]);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[27] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] + c.f[1]);
    c.ps1[0] = c.f[0];
    ea = c.r[27] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x107f5f4u;
    f_8011e9e0(c);
R_0107f5f4:
    ea = c.r[27] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = wp::rotl(c.r[30], 1) & 0x1feu;
    c.r[0] = c.r[29] + c.r[0];
    c.r[3] = c.r[1] + 0x8u;
    c.f[0] = wp::round_single(c.f[0] + c.f[1]);
    c.ps1[0] = c.f[0];
    c.r[4] = 0xffffffffu;
    ea = c.r[27] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107f618u;
    f_80121cf0(c);
R_0107f618:
    c.r[3] = 0x2u;
    goto L_0107f624;
L_0107f620:
    c.lr = 0x107f624u;
    f_8011bec0(c);
L_0107f624:
R_0107f624:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x107f634u;
    f_801c83fc(c);
R_0107f634:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr711_0107f650(wp::Cpu& c) {
    WP_ENTER(0x107f650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f664u: goto R_0107f664;
        case 0x107f694u: goto R_0107f694;
        case 0x107f7acu: goto R_0107f7ac;
        case 0x107f834u: goto R_0107f834;
        case 0x107f840u: goto R_0107f840;
        case 0x107f84cu: goto R_0107f84c;
        case 0x107f964u: goto R_0107f964;
        case 0x107faacu: goto R_0107faac;
        case 0x107fac8u: goto R_0107fac8;
        case 0x107fad0u: goto R_0107fad0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffea0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x164u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x107f664u;
    f_801c83b4(c);
R_0107f664:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr711_bases[4] + 0x2a40u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr711_bases[4] + 0x2a40u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_0107f68c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107f844;
    goto L_0107fac8;
L_0107f68c:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x107f694u;
    f_80132a30(c);
R_0107f694:
    ea = c.r[30] + 0x50u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x13cu;
    c.r[3] = wp::rd8(ea);
    c.r[8] = wp::rotl(c.r[0], 26) & 0x1u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x1u;
    c.r[6] = c.r[3] | 0x80u;
    c.r[3] = wp::rotl(c.r[0], 28) & 0x1u;
    c.r[0] = wp::rotl(c.r[0], 25) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[7] = 0u - c.r[8];
    c.r[7] = c.r[7] | c.r[8];
    ea = c.r[30] + 0x4u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[30] + 0x8u;
    c.r[27] = wp::rd32(ea);
    c.r[4] = 0u - c.r[5];
    ea = c.r[30] + 0xcu;
    c.r[26] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    ea = c.r[30] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] | c.r[5];
    ea = c.r[30] + 0x14u;
    c.r[11] = wp::rd32(ea);
    c.r[6] = (wp::rotl(c.r[7], 7) & 0x40u) | (c.r[6] & 0xffffffbfu);
    ea = c.r[30] + 0x18u;
    c.r[10] = wp::rd32(ea);
    c.r[6] = (wp::rotl(c.r[4], 6) & 0x20u) | (c.r[6] & 0xffffffdfu);
    ea = c.r[30] + 0x1cu;
    c.r[9] = wp::rd32(ea);
    c.r[0] = c.r[0] | c.r[3];
    ea = c.r[30] + 0x20u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = (wp::rotl(c.r[0], 5) & 0x10u) | (c.r[6] & 0xffffffefu);
    ea = c.r[30] + 0x24u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[30] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[30] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x34u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[30] + 0x38u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[30] + 0x3cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[30] + 0x40u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x44u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[30] + 0x48u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[30] + 0x4cu;
    c.f[6] = wp::rdf32(ea);
    c.ps1[6] = c.f[6];
    ea = c.r[1] + 0xf0u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0xf4u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[1] + 0xf8u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[1] + 0xfcu;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x100u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x104u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x108u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x10cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x110u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x114u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x120u;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    ea = c.r[1] + 0x124u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[1] + 0x128u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[1] + 0x12cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x130u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x134u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x138u;
    wp::wrf32(ea, static_cast<float>(c.f[6]));
    ea = c.r[1] + 0x13cu;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[27]);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_0107f7ac;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x107f7acu;
    f_8014b090(c);
L_0107f7ac:
R_0107f7ac:
    ea = c.r[1] + 0x74u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x104u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = c.r[1] + 0xecu;
    ea = c.r[1] + 0x84u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] + c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x68u;
    c.r[28] = wp::rd32(ea);
    c.f[0] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x6cu;
    c.r[27] = wp::rd32(ea);
    ea = c.r[1] + 0x74u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x70u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[1] + 0x84u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x74u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    c.r[11] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[1] + 0x84u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x90u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xf0u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0xf4u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[1] + 0xf8u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[1] + 0xfcu;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x100u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x104u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x108u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x10cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x110u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x114u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107f834u;
    f_8012be60(c);
R_0107f834:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x107f840u;
    f_80132ab0(c);
R_0107f840:
    goto L_0107fac8;
L_0107f844:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x107f84cu;
    f_80132a30(c);
R_0107f84c:
    ea = c.r[30] + 0x50u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0xe8u;
    c.r[3] = wp::rd8(ea);
    c.r[8] = wp::rotl(c.r[0], 26) & 0x1u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x1u;
    c.r[6] = c.r[3] | 0x80u;
    c.r[3] = wp::rotl(c.r[0], 28) & 0x1u;
    c.r[0] = wp::rotl(c.r[0], 25) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[7] = 0u - c.r[8];
    c.r[7] = c.r[7] | c.r[8];
    ea = c.r[30] + 0x4u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[30] + 0x8u;
    c.r[27] = wp::rd32(ea);
    c.r[4] = 0u - c.r[5];
    ea = c.r[30] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    ea = c.r[30] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] | c.r[5];
    ea = c.r[30] + 0x14u;
    c.r[11] = wp::rd32(ea);
    c.r[6] = (wp::rotl(c.r[7], 7) & 0x40u) | (c.r[6] & 0xffffffbfu);
    ea = c.r[30] + 0x18u;
    c.r[10] = wp::rd32(ea);
    c.r[6] = (wp::rotl(c.r[4], 6) & 0x20u) | (c.r[6] & 0xffffffdfu);
    ea = c.r[30] + 0x1cu;
    c.r[9] = wp::rd32(ea);
    c.r[0] = c.r[0] | c.r[3];
    ea = c.r[30] + 0x20u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = (wp::rotl(c.r[0], 5) & 0x10u) | (c.r[6] & 0xffffffefu);
    ea = c.r[30] + 0x24u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[30] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[30] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x34u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[30] + 0x38u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[30] + 0x3cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[30] + 0x40u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x44u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[30] + 0x48u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[30] + 0x4cu;
    c.f[6] = wp::rdf32(ea);
    c.ps1[6] = c.f[6];
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[26]);
    ea = c.r[1] + 0xa0u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0xa8u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0xacu;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0xb0u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0xb8u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0xbcu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xc0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xc4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xccu;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    ea = c.r[1] + 0xd0u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[1] + 0xd4u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[1] + 0xd8u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0xdcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0xe0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0xe4u;
    wp::wrf32(ea, static_cast<float>(c.f[6]));
    ea = c.r[1] + 0xe8u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[27]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_0107f964;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x107f964u;
    f_8014b090(c);
L_0107f964:
R_0107f964:
    c.r[5] = ((((g_mr711_bases[6] + 0x4e80u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr711_bases[6] + 0x4e80u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107f9d0;
    c.r[4] = ((((g_mr711_bases[6] + 0x4e88u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr711_bases[6] + 0x4e88u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr711_bases[6] + 0x4e88u) & 0xFFFFu);
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x20u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x28u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x3cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[5] + wp::sign_extend16((g_mr711_bases[6] + 0x4e80u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_0107f9d0:
    c.r[26] = ((((g_mr711_bases[6] + 0x4e88u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr711_bases[6] + 0x4e88u) & 0xFFFFu);
L_0107f9dc:
    ea = c.r[1] + 0x44u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x98u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x104u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[26] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[26] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[3] = wp::round_single(c.f[4] * wp::force25(c.f[1]));
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0x14u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = wp::round_single(c.f[4] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x38u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[30] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[2] + c.f[3]);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x48u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    c.r[11] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[1] + 0x5cu;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x60u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x64u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    c.f[0] = wp::round_single(c.f[0] + c.f[1]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0xa0u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0xa8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xacu;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0xb0u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0xb8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xbcu;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0xc0u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0xc4u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[6]);
    c.lr = 0x107faacu;
    f_8012be60(c);
R_0107faac:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107f9dc;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x107fac8u;
    f_80132ab0(c);
L_0107fac8:
R_0107fac8:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x107fad0u;
    f_801c8400(c);
R_0107fad0:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mr711_0107fae0(wp::Cpu& c) {
    WP_ENTER(0x107fae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mr711_0107faf0(wp::Cpu& c) {
    WP_ENTER(0x107faf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr711_0107fb00(wp::Cpu& c) {
    WP_ENTER(0x107fb00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fb18u: goto R_0107fb18;
        case 0x107fb20u: goto R_0107fb20;
        case 0x107fb28u: goto R_0107fb28;
        case 0x107fb64u: goto R_0107fb64;
        case 0x107fb70u: goto R_0107fb70;
        case 0x107fb80u: goto R_0107fb80;
        case 0x107fb8cu: goto R_0107fb8c;
        case 0x107fb98u: goto R_0107fb98;
        case 0x107fba8u: goto R_0107fba8;
        case 0x107fbb4u: goto R_0107fbb4;
        case 0x107fbc0u: goto R_0107fbc0;
        case 0x107fbd0u: goto R_0107fbd0;
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
    c.lr = 0x107fb18u;
    f_80034ac0(c);
R_0107fb18:
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x107fb20u;
    f_80034ac0(c);
R_0107fb20:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x107fb28u;
    f_80034ac0(c);
R_0107fb28:
    c.r[4] = ((((g_mr711_bases[4] + 0x2a78u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr711_bases[4] + 0x2a7cu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr711_bases[4] + 0x2a78u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[4] + 0x2a7cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = 0x2u;
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x11u;
    ea = c.r[31] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x18u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[31] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x107fb64u;
    f_80034c10(c);
R_0107fb64:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x107fb70u;
    f_80034df0(c);
R_0107fb70:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x107fb80u;
    f_80034e10(c);
R_0107fb80:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x39u;
    c.lr = 0x107fb8cu;
    f_80034c10(c);
R_0107fb8c:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x0u;
    c.lr = 0x107fb98u;
    f_80034df0(c);
R_0107fb98:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x107fba8u;
    f_80034e10(c);
R_0107fba8:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x4u;
    c.lr = 0x107fbb4u;
    f_80034c10(c);
R_0107fbb4:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x1u;
    c.lr = 0x107fbc0u;
    f_80034df0(c);
R_0107fbc0:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x107fbd0u;
    f_80034e10(c);
R_0107fbd0:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr711_0107fbf0(wp::Cpu& c) {
    WP_ENTER(0x107fbf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fc18u: goto R_0107fc18;
        case 0x107fc24u: goto R_0107fc24;
        case 0x107fc30u: goto R_0107fc30;
        case 0x107fc5cu: goto R_0107fc5c;
        case 0x107fc74u: goto R_0107fc74;
        case 0x107fc84u: goto R_0107fc84;
        case 0x107fc90u: goto R_0107fc90;
        case 0x107fc98u: goto R_0107fc98;
        case 0x107fca0u: goto R_0107fca0;
        case 0x107fcc0u: goto R_0107fcc0;
        case 0x107fce0u: goto R_0107fce0;
        case 0x107fce8u: goto R_0107fce8;
        case 0x107fcf0u: goto R_0107fcf0;
        case 0x107fd04u: goto R_0107fd04;
        case 0x107fd1cu: goto R_0107fd1c;
        case 0x107fd38u: goto R_0107fd38;
        case 0x107fd50u: goto R_0107fd50;
        case 0x107fd6cu: goto R_0107fd6c;
        case 0x107fd74u: goto R_0107fd74;
        case 0x107fd7cu: goto R_0107fd7c;
        case 0x107fd84u: goto R_0107fd84;
        case 0x107fd8cu: goto R_0107fd8c;
        case 0x107fd9cu: goto R_0107fd9c;
        case 0x107fdb4u: goto R_0107fdb4;
        case 0x107fdc8u: goto R_0107fdc8;
        case 0x107fdccu: goto R_0107fdcc;
        case 0x107fdd8u: goto R_0107fdd8;
        case 0x107fdf0u: goto R_0107fdf0;
        case 0x107fe00u: goto R_0107fe00;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x90u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x98u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x107fc18u;
    f_800e9850(c);
R_0107fc18:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x14u;
    c.lr = 0x107fc24u;
    f_800e9070(c);
R_0107fc24:
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    c.r[3] = c.r[1] + 0x20u;
    c.lr = 0x107fc30u;
    f_8014b090(c);
R_0107fc30:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = ((((g_mr711_bases[4] + 0x2a80u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[4] + 0x2a80u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[1] + 0x20u;
    ea = c.r[4] + 0xb8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    c.f[3] = c.f[1];
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    c.lr = 0x107fc5cu;
    f_8014b8a0(c);
R_0107fc5c:
    c.r[3] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x1cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.lr = 0x107fc74u;
    f_8014b820(c);
R_0107fc74:
    c.r[4] = c.r[1] + 0x20u;
    c.r[3] = c.r[1] + 0x50u;
    c.r[5] = c.r[4] | c.r[4];
    c.lr = 0x107fc84u;
    f_8014b100(c);
R_0107fc84:
    c.r[3] = c.r[1] + 0x20u;
    c.r[4] = 0x0u;
    c.lr = 0x107fc90u;
    f_80154d30(c);
R_0107fc90:
    c.r[3] = 0x0u;
    c.lr = 0x107fc98u;
    f_80154e50(c);
R_0107fc98:
    c.r[3] = 0x1u;
    c.lr = 0x107fca0u;
    f_80151a30(c);
R_0107fca0:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x107fcc0u;
    f_80151a60(c);
R_0107fcc0:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x107fce0u;
    f_80151a60(c);
R_0107fce0:
    c.r[3] = 0x0u;
    c.lr = 0x107fce8u;
    f_8014f9d0(c);
R_0107fce8:
    c.r[3] = 0x1u;
    c.lr = 0x107fcf0u;
    f_80153920(c);
R_0107fcf0:
    c.r[3] = 0x0u;
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x107fd04u;
    f_801537c0(c);
R_0107fd04:
    c.r[3] = 0x0u;
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0xfu;
    c.lr = 0x107fd1cu;
    f_80153320(c);
R_0107fd1c:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107fd38u;
    f_801533a0(c);
R_0107fd38:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x107fd50u;
    f_80153360(c);
R_0107fd50:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107fd6cu;
    f_80153400(c);
R_0107fd6c:
    c.r[3] = 0x2u;
    c.lr = 0x107fd74u;
    f_80150850(c);
R_0107fd74:
    c.r[3] = 0x0u;
    c.lr = 0x107fd7cu;
    f_80153e40(c);
R_0107fd7c:
    c.r[3] = 0x0u;
    c.lr = 0x107fd84u;
    f_80153e90(c);
R_0107fd84:
    c.r[3] = 0x1u;
    c.lr = 0x107fd8cu;
    f_80153f20(c);
R_0107fd8c:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x107fd9cu;
    f_80153ee0(c);
R_0107fd9c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x107fdb4u;
    f_801536f0(c);
R_0107fdb4:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x5u;
    c.lr = 0x107fdc8u;
    f_80153df0(c);
R_0107fdc8:
    c.lr = 0x107fdccu;
    f_8014f020(c);
R_0107fdcc:
    c.r[3] = 0x9u;
    c.r[4] = 0x1u;
    c.lr = 0x107fdd8u;
    f_8014e770(c);
R_0107fdd8:
    c.r[3] = 0x0u;
    c.r[4] = 0x9u;
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    c.r[7] = 0x0u;
    c.lr = 0x107fdf0u;
    f_8014f060(c);
R_0107fdf0:
    c.r[3] = 0x80u;
    c.r[4] = 0x0u;
    c.r[5] = 0x4u;
    c.lr = 0x107fe00u;
    f_80150560(c);
R_0107fe00:
    c.r[4] = 0xcc010000u;
    c.r[5] = 0xffffffffu;
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[5]);
    c.r[3] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[4] + 0xffff8000u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr711_0107fe60(wp::Cpu& c) {
    WP_ENTER(0x107fe60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107feb4u: goto R_0107feb4;
        case 0x107fed4u: goto R_0107fed4;
        case 0x107fef0u: goto R_0107fef0;
        case 0x107ff0cu: goto R_0107ff0c;
        case 0x107ff1cu: goto R_0107ff1c;
        case 0x107ff38u: goto R_0107ff38;
        case 0x107ffc0u: goto R_0107ffc0;
        case 0x107ffccu: goto R_0107ffcc;
        case 0x107ffe0u: goto R_0107ffe0;
        case 0x107fff0u: goto R_0107fff0;
        case 0x108000cu: goto R_0108000c;
        case 0x1080064u: goto R_01080064;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff20u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xe4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x60u;
    ea = c.r[1] + 0xd0u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xd8u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xc0u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0xc8u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0xb8u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    wp::wrf64(ea, c.f[28]);
    ea = c.r[1] + 0xa8u;
    wp::store_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    wp::wrf64(ea, c.f[27]);
    ea = c.r[1] + 0x98u;
    wp::store_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    wp::wrf64(ea, c.f[26]);
    ea = c.r[1] + 0x88u;
    wp::store_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    wp::wrf64(ea, c.f[25]);
    ea = c.r[1] + 0x78u;
    wp::store_quantized(c, 25, ea, 0, 0, q);
    ea = c.r[1] + 0x60u;
    wp::wrf64(ea, c.f[24]);
    ea = c.r[1] + 0x68u;
    wp::store_quantized(c, 24, ea, 0, 0, q);
    c.lr = 0x107feb4u;
    f_801c83b4(c);
R_0107feb4:
    wp::compare_signed(c, 0, c.r[4], 0x1u);
    c.r[29] = ((((g_mr711_bases[4] + 0x2a78u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr711_bases[4] + 0x2a78u) & 0xFFFFu);
    if (wp::cr_get(c, 1)) goto L_0107ff10;
    c.r[3] = 0x2u;
    c.lr = 0x107fed4u;
    f_8014f9d0(c);
R_0107fed4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x107fef0u;
    f_8014f780(c);
R_0107fef0:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x107ff0cu;
    f_8014f780(c);
R_0107ff0c:
    goto L_0108001c;
L_0107ff10:
    c.r[0] = c.r[4] + 0x1u;
    c.r[3] = c.r[0] & 0xffu;
    c.lr = 0x107ff1cu;
    f_8014f9d0(c);
R_0107ff1c:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x107ff38u;
    f_8014f780(c);
R_0107ff38:
    c.r[5] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    ea = c.r[27] + 0x10u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[5] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[28] = ((((g_mr711_bases[4] + 0x2a88u) + 0x8000u) >> 16) << 16);
    c.f[2] = wp::round_single(c.f[3] / c.f[1]);
    c.ps1[2] = c.f[2];
    c.r[4] = (((0x802f5684u + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5684u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr711_bases[4] + 0x2a88u) & 0xFFFFu);
    ea = c.r[29] + 0x58u;
    c.f[28] = wp::rdf64(ea);
    c.r[31] = c.r[26] ^ 0x80000000u;
    c.f[26] = wp::round_single(c.f[3] / c.f[0]);
    c.ps1[26] = c.f[26];
    ea = c.r[29] + 0x4cu;
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[29] + 0x48u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[27] = 0x0u;
    ea = c.r[29] + 0x50u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[30] = 0x43300000u;
    c.f[27] = wp::round_single(c.f[1] * wp::force25(c.f[2]));
    c.ps1[27] = c.f[27];
    goto L_01080014;
L_0107ff88:
    c.r[0] = c.r[27] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[31]);
    c.f[1] = wp::round_single(c.f[0] - c.f[28]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x40u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[29] + c.f[1]);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] - c.f[28]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] / c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[25] = wp::round_single(c.f[30] * wp::force25(c.f[0]));
    c.ps1[25] = c.f[25];
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[25]));
    c.ps1[1] = c.f[1];
    c.lr = 0x107ffc0u;
    f_80126360(c);
R_0107ffc0:
    c.f[24] = wp::round_single(c.f[27] * wp::force25(c.f[1]));
    c.ps1[24] = c.f[24];
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[25]));
    c.ps1[1] = c.f[1];
    c.lr = 0x107ffccu;
    f_801263e0(c);
R_0107ffcc:
    c.f[2] = wp::round_single(c.f[26] * wp::force25(c.f[1]));
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.f[1] = c.f[24];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x107ffe0u;
    f_8014b7e0(c);
R_0107ffe0:
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = 0x1u;
    c.lr = 0x107fff0u;
    f_80154e70(c);
R_0107fff0:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[28] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x108000cu;
    f_8014f780(c);
R_0108000c:
    c.r[28] = c.r[28] + 0x8u;
    c.r[27] = c.r[27] + 0x1u;
L_01080014:
    wp::compare_signed(c, 0, c.r[27], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107ff88;
    }
L_0108001c:
    c.r[11] = c.r[1] + 0x60u;
    ea = c.r[1] + 0xd8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xd0u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0xc8u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0xc0u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0xb8u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[28] = wp::rdf64(ea);
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[27] = wp::rdf64(ea);
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[26] = wp::rdf64(ea);
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 25, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[25] = wp::rdf64(ea);
    ea = c.r[1] + 0x68u;
    wp::load_quantized(c, 24, ea, 0, 0, q);
    ea = c.r[1] + 0x60u;
    c.f[24] = wp::rdf64(ea);
    c.lr = 0x1080064u;
    f_801c8400(c);
R_01080064:
    ea = c.r[1] + 0xe4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xe0u;
    return;
}

void f_mr711_01080080(wp::Cpu& c) {
    WP_ENTER(0x1080080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080094u: goto R_01080094;
        case 0x10800c0u: goto R_010800c0;
        case 0x10800dcu: goto R_010800dc;
        case 0x10800f4u: goto R_010800f4;
        case 0x1080110u: goto R_01080110;
        case 0x108011cu: goto R_0108011c;
        case 0x1080130u: goto R_01080130;
        case 0x1080148u: goto R_01080148;
        case 0x1080164u: goto R_01080164;
        case 0x108017cu: goto R_0108017c;
        case 0x1080194u: goto R_01080194;
        case 0x10801b0u: goto R_010801b0;
        case 0x10801ccu: goto R_010801cc;
        case 0x10801e4u: goto R_010801e4;
        case 0x1080200u: goto R_01080200;
        case 0x1080218u: goto R_01080218;
        case 0x1080234u: goto R_01080234;
        case 0x1080250u: goto R_01080250;
        case 0x108026cu: goto R_0108026c;
        case 0x1080280u: goto R_01080280;
        case 0x10802a4u: goto R_010802a4;
        case 0x10802c0u: goto R_010802c0;
        case 0x10802d8u: goto R_010802d8;
        case 0x10802f4u: goto R_010802f4;
        case 0x108031cu: goto R_0108031c;
        case 0x1080330u: goto R_01080330;
        case 0x1080348u: goto R_01080348;
        case 0x1080364u: goto R_01080364;
        case 0x108037cu: goto R_0108037c;
        case 0x1080398u: goto R_01080398;
        case 0x10803a0u: goto R_010803a0;
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
    c.lr = 0x1080094u;
    f_801c83b4(c);
R_01080094:
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
    c.lr = 0x10800c0u;
    f_80153920(c);
R_010800c0:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080168;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0xffu;
    c.lr = 0x10800dcu;
    f_801537c0(c);
R_010800dc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x10800f4u;
    f_80153360(c);
R_010800f4:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1080110u;
    f_80153400(c);
R_01080110:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.lr = 0x108011cu;
    f_801535e0(c);
R_0108011c:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x1080130u;
    f_801537c0(c);
R_01080130:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x6u;
    c.r[6] = 0x0u;
    c.r[7] = 0x7u;
    c.lr = 0x1080148u;
    f_80153360(c);
R_01080148:
    c.r[3] = 0x1u;
    c.r[4] = 0xfu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1080164u;
    f_80153400(c);
R_01080164:
    goto L_010801b0;
L_01080168:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x108017cu;
    f_801537c0(c);
R_0108017c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x1080194u;
    f_80153360(c);
R_01080194:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10801b0u;
    f_80153400(c);
L_010801b0:
R_010801b0:
    wp::compare_signed(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 1)) goto L_01080238;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x10801ccu;
    f_801537c0(c);
R_010801cc:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x8u;
    c.lr = 0x10801e4u;
    f_80153320(c);
R_010801e4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1080200u;
    f_801533a0(c);
R_01080200:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x1080218u;
    f_80153360(c);
R_01080218:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1080234u;
    f_80153400(c);
R_01080234:
    goto L_01080308;
L_01080238:
    c.r[5] = ((((g_mr711_bases[4] + 0x2ad8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr711_bases[4] + 0x2ad8u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080250u;
    f_80153530(c);
R_01080250:
    c.r[31] = ((((g_mr711_bases[4] + 0x2ae0u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr711_bases[4] + 0x2ae0u) & 0xFFFFu);
    goto L_01080300;
L_01080260:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x108026cu;
    f_80153590(c);
R_0108026c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] + 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x1080280u;
    f_801537c0(c);
R_01080280:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_01080294;
    c.r[4] = 0xfu;
L_01080294:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x10802a4u;
    f_80153320(c);
R_010802a4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10802c0u;
    f_801533a0(c);
R_010802c0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x10802d8u;
    f_80153360(c);
R_010802d8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10802f4u;
    f_80153400(c);
R_010802f4:
    c.r[28] = c.r[28] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_01080300:
    wp::compare_signed(c, 0, c.r[29], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080260;
    }
L_01080308:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080398;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x108031cu;
    f_801535e0(c);
R_0108031c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x1080330u;
    f_801537c0(c);
R_01080330:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x1u;
    c.lr = 0x1080348u;
    f_80153320(c);
R_01080348:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1080364u;
    f_801533a0(c);
R_01080364:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x6u;
    c.lr = 0x108037cu;
    f_80153360(c);
R_0108037c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1080398u;
    f_80153400(c);
L_01080398:
R_01080398:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10803a0u;
    f_801c8400(c);
R_010803a0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr711_010803b0(wp::Cpu& c) {
    WP_ENTER(0x10803b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10803e4u: goto R_010803e4;
        case 0x10803ecu: goto R_010803ec;
        case 0x10803f4u: goto R_010803f4;
        case 0x10803fcu: goto R_010803fc;
        case 0x108040cu: goto R_0108040c;
        case 0x1080424u: goto R_01080424;
        case 0x1080438u: goto R_01080438;
        case 0x108043cu: goto R_0108043c;
        case 0x1080448u: goto R_01080448;
        case 0x1080458u: goto R_01080458;
        case 0x108045cu: goto R_0108045c;
        case 0x1080460u: goto R_01080460;
        case 0x1080484u: goto R_01080484;
        case 0x10804ccu: goto R_010804cc;
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
    c.lr = 0x10803e4u;
    f_80150850(c);
R_010803e4:
    c.r[3] = 0x1u;
    c.lr = 0x10803ecu;
    f_80153e40(c);
R_010803ec:
    c.r[3] = 0x0u;
    c.lr = 0x10803f4u;
    f_80153e90(c);
R_010803f4:
    c.r[3] = 0x1u;
    c.lr = 0x10803fcu;
    f_80153f20(c);
R_010803fc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x108040cu;
    f_80153ee0(c);
R_0108040c:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.r[7] = 0xffu;
    c.lr = 0x1080424u;
    f_801536f0(c);
R_01080424:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x5u;
    c.r[6] = 0x5u;
    c.lr = 0x1080438u;
    f_80153df0(c);
R_01080438:
    c.lr = 0x108043cu;
    f_8014f020(c);
R_0108043c:
    c.r[3] = ((((g_mr711_bases[4] + 0x2b00u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr711_bases[4] + 0x2b00u) & 0xFFFFu);
    c.lr = 0x1080448u;
    f_8014e9e0(c);
R_01080448:
    c.r[4] = ((((g_mr711_bases[4] + 0x2b18u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[4] + 0x2b18u) & 0xFFFFu);
    c.lr = 0x1080458u;
    f_8014f200(c);
R_01080458:
    c.lr = 0x108045cu;
    f_8004aa80(c);
R_0108045c:
    c.lr = 0x1080460u;
    f_800ee3c0(c);
R_01080460:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1080484u;
    f_800e95b0(c);
R_01080484:
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
    c.lr = 0x10804ccu;
    f_80150560(c);
R_010804cc:
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

void f_mr711_01080550(wp::Cpu& c) {
    WP_ENTER(0x1080550u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108058cu: goto R_0108058c;
        case 0x10805a0u: goto R_010805a0;
        case 0x10805acu: goto R_010805ac;
        case 0x10805bcu: goto R_010805bc;
        case 0x10805c8u: goto R_010805c8;
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
    c.lr = 0x108058cu;
    f_8003d6b0(c);
R_0108058c:
    c.r[4] = ((((g_mr711_bases[5] + 0x290e0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x290e0u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10805a0u;
    f_801c79a4(c);
R_010805a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010805ac;
    c.lr = 0x10805acu;
    f_mr711_0107fb00(c);
L_010805ac:
R_010805ac:
    ea = c.r[29] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10805bcu;
    f_80052170(c);
R_010805bc:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10805c8u;
    f_80052190(c);
R_010805c8:
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

void f_mr711_010805f0(wp::Cpu& c) {
    WP_ENTER(0x10805f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080638u: goto R_01080638;
        case 0x1080644u: goto R_01080644;
        case 0x1080650u: goto R_01080650;
        case 0x1080658u: goto R_01080658;
        case 0x108066cu: goto R_0108066c;
        case 0x108067cu: goto R_0108067c;
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
    if (wp::cr_get(c, 2)) goto L_0108067c;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080658;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080658;
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080638u;
    f_80034b10(c);
R_01080638:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080644u;
    f_80034b10(c);
R_01080644:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080650u;
    f_80034b10(c);
R_01080650:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1080658u;
    f_801c7a8c(c);
L_01080658:
R_01080658:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108066c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108066cu;
    f_80051600(c);
L_0108066c:
R_0108066c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108067c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108067cu;
    f_801c7a8c(c);
L_0108067c:
R_0108067c:
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

void f_mr711_010806a0(wp::Cpu& c) {
    WP_ENTER(0x10806a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr711_010806b0(wp::Cpu& c) {
    WP_ENTER(0x10806b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr711_010806c0(wp::Cpu& c) {
    WP_ENTER(0x10806c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr711_010806d0(wp::Cpu& c) {
    WP_ENTER(0x10806d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10806f4u: goto R_010806f4;
        case 0x10806f8u: goto R_010806f8;
        case 0x1080714u: goto R_01080714;
        case 0x108073cu: goto R_0108073c;
        case 0x1080748u: goto R_01080748;
        case 0x1080750u: goto R_01080750;
        case 0x108075cu: goto R_0108075c;
        case 0x1080764u: goto R_01080764;
        case 0x108076cu: goto R_0108076c;
        case 0x108078cu: goto R_0108078c;
        case 0x10807acu: goto R_010807ac;
        case 0x10807b4u: goto R_010807b4;
        case 0x10807c0u: goto R_010807c0;
        case 0x10807d4u: goto R_010807d4;
        case 0x10807e0u: goto R_010807e0;
        case 0x10807e8u: goto R_010807e8;
        case 0x10807f4u: goto R_010807f4;
        case 0x1080800u: goto R_01080800;
        case 0x1080810u: goto R_01080810;
        case 0x1080814u: goto R_01080814;
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
    if (!wp::cr_get(c, 1)) goto L_01080814;
    c.lr = 0x10806f4u;
    f_8004aa80(c);
R_010806f4:
    c.lr = 0x10806f8u;
    f_800ee3c0(c);
R_010806f8:
    ea = c.r[31] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080714;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[31] + 0x1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080714u;
    f_mr711_0107fbf0(c);
L_01080714:
R_01080714:
    c.r[3] = ((((g_mr711_bases[4] + 0x2a7cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr711_bases[4] + 0x2a80u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[4] + 0x2a7cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[4] + wp::sign_extend16((g_mr711_bases[4] + 0x2a80u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[3] = c.f[1];
    c.f[4] = c.f[2];
    c.f[5] = c.f[1];
    c.f[6] = c.f[2];
    c.lr = 0x108073cu;
    f_8014c050(c);
R_0108073c:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x1080748u;
    f_80154c30(c);
R_01080748:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1080750u;
    f_8014b090(c);
R_01080750:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x108075cu;
    f_80154d30(c);
R_0108075c:
    c.r[3] = 0x0u;
    c.lr = 0x1080764u;
    f_80154e50(c);
R_01080764:
    c.r[3] = 0x0u;
    c.lr = 0x108076cu;
    f_80151a30(c);
R_0108076c:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x108078cu;
    f_80151a60(c);
R_0108078c:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10807acu;
    f_80151a60(c);
R_010807ac:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10807b4u;
    f_80034f00(c);
R_010807b4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x10807c0u;
    f_80034f20(c);
R_010807c0:
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010807e0;
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x10807d4u;
    f_80034f00(c);
R_010807d4:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x1u;
    c.lr = 0x10807e0u;
    f_80034f20(c);
L_010807e0:
R_010807e0:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x10807e8u;
    f_80034f00(c);
R_010807e8:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10807f4u;
    f_80034f20(c);
R_010807f4:
    ea = c.r[31] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1080800u;
    f_mr711_0107fe60(c);
R_01080800:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[5] = wp::rd8(ea);
    c.lr = 0x1080810u;
    f_mr711_01080080(c);
R_01080810:
    c.lr = 0x1080814u;
    f_mr711_010803b0(c);
L_01080814:
R_01080814:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr711_01080830(wp::Cpu& c) {
    WP_ENTER(0x1080830u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080850u: goto R_01080850;
        case 0x1080874u: goto R_01080874;
        case 0x10808acu: goto R_010808ac;
        case 0x10808c0u: goto R_010808c0;
        case 0x10808d4u: goto R_010808d4;
        case 0x10808e4u: goto R_010808e4;
        case 0x10808f0u: goto R_010808f0;
        case 0x1080920u: goto R_01080920;
        case 0x1080940u: goto R_01080940;
        case 0x1080948u: goto R_01080948;
        case 0x1080950u: goto R_01080950;
        case 0x1080958u: goto R_01080958;
        case 0x108095cu: goto R_0108095c;
        case 0x1080964u: goto R_01080964;
        case 0x1080970u: goto R_01080970;
        case 0x10809a0u: goto R_010809a0;
        case 0x10809a8u: goto R_010809a8;
        case 0x10809acu: goto R_010809ac;
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
    c.lr = 0x1080850u;
    f_80069af0(c);
R_01080850:
    c.r[3] = ((((g_mr711_bases[6] + 0x24u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr711_bases[5] + 0x29118u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[6] + 0x24u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x29118u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x1080874u;
    f_801c79a4(c);
R_01080874:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080890;
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
L_01080890:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10808acu;
    f_801c79a4(c);
R_010808ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01080924;
    c.r[29] = 0x0u;
    c.lr = 0x10808c0u;
    f_8000dd70(c);
R_010808c0:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010808e0;
    c.r[3] = 0xffffffffu;
    c.lr = 0x10808d4u;
    f_8000e240(c);
R_010808d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010808e0;
    c.r[29] = 0x1u;
L_010808e0:
    c.lr = 0x10808e4u;
    f_8000dd70(c);
R_010808e4:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10808f0u;
    f_80007570(c);
R_010808f0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_01080910;
    c.r[4] = c.r[1] + 0xcu;
L_01080910:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x1080920u;
    f_mr711_01030130(c);
R_01080920:
    c.r[30] = c.r[3] | c.r[3];
L_01080924:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080940;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x1080940u;
    f_mr711_01030300(c);
L_01080940:
R_01080940:
    c.r[3] = 0x0u;
    c.lr = 0x1080948u;
    f_8006a800(c);
R_01080948:
    c.r[3] = 0x0u;
    c.lr = 0x1080950u;
    f_80065040(c);
R_01080950:
    c.r[3] = 0x0u;
    c.lr = 0x1080958u;
    f_8006c8b0(c);
R_01080958:
    c.lr = 0x108095cu;
    f_80066250(c);
R_0108095c:
    c.r[3] = 0x128u;
    c.lr = 0x1080964u;
    f_801c79a4(c);
R_01080964:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080970;
    c.lr = 0x1080970u;
    f_mr711_0107db80(c);
L_01080970:
R_01080970:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010809a0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010809a0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10809a0u;
    wp::call(c, c.ctr);
L_010809a0:
R_010809a0:
    c.r[3] = 0x1u;
    c.lr = 0x10809a8u;
    f_8001b020(c);
R_010809a8:
    c.lr = 0x10809acu;
    f_8000dd30(c);
R_010809ac:
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

void f_mr711_010809e0(wp::Cpu& c) {
    WP_ENTER(0x10809e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080a1cu: goto R_01080a1c;
        case 0x1080a48u: goto R_01080a48;
        case 0x1080a4cu: goto R_01080a4c;
        case 0x1080a5cu: goto R_01080a5c;
        case 0x1080a60u: goto R_01080a60;
        case 0x1080a64u: goto R_01080a64;
        case 0x1080a90u: goto R_01080a90;
        case 0x1080aa4u: goto R_01080aa4;
        case 0x1080accu: goto R_01080acc;
        case 0x1080af4u: goto R_01080af4;
        case 0x1080b1cu: goto R_01080b1c;
        case 0x1080b24u: goto R_01080b24;
        case 0x1080b28u: goto R_01080b28;
        case 0x1080b2cu: goto R_01080b2c;
        case 0x1080b34u: goto R_01080b34;
        case 0x1080b38u: goto R_01080b38;
        case 0x1080b3cu: goto R_01080b3c;
        case 0x1080b64u: goto R_01080b64;
        case 0x1080b78u: goto R_01080b78;
        case 0x1080ba0u: goto R_01080ba0;
        case 0x1080bc8u: goto R_01080bc8;
        case 0x1080bf0u: goto R_01080bf0;
        case 0x1080bf8u: goto R_01080bf8;
        case 0x1080c20u: goto R_01080c20;
        case 0x1080c40u: goto R_01080c40;
        case 0x1080c50u: goto R_01080c50;
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
    if (wp::cr_get(c, 2)) goto L_01080c50;
    c.r[4] = ((((g_mr711_bases[5] + 0x29118u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x29118u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x1080a1cu;
    f_mr711_01030390(c);
R_01080a1c:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080a48;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080a48;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080a48u;
    wp::call(c, c.ctr);
L_01080a48:
R_01080a48:
    c.lr = 0x1080a4cu;
    f_8001aac0(c);
R_01080a4c:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080a5c;
    c.lr = 0x1080a5cu;
    f_8001b0c0(c);
L_01080a5c:
R_01080a5c:
    c.lr = 0x1080a60u;
    f_8004abf0(c);
R_01080a60:
    c.lr = 0x1080a64u;
    f_80066250(c);
R_01080a64:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080b24;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080b24;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080a90;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1080a90u;
    f_mr711_0102b360(c);
L_01080a90:
R_01080a90:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080aa4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1080aa4u;
    f_mr711_01030300(c);
L_01080aa4:
R_01080aa4:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080acc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080acc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080accu;
    wp::call(c, c.ctr);
L_01080acc:
R_01080acc:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080af4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080af4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080af4u;
    wp::call(c, c.ctr);
L_01080af4:
R_01080af4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080b1c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080b1c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080b1cu;
    wp::call(c, c.ctr);
L_01080b1c:
R_01080b1c:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1080b24u;
    f_801c7a8c(c);
L_01080b24:
R_01080b24:
    c.lr = 0x1080b28u;
    f_80041c20(c);
R_01080b28:
    c.lr = 0x1080b2cu;
    f_8002d270(c);
R_01080b2c:
    c.r[3] = 0x0u;
    c.lr = 0x1080b34u;
    f_80076130(c);
R_01080b34:
    c.lr = 0x1080b38u;
    f_800656f0(c);
R_01080b38:
    c.lr = 0x1080b3cu;
    f_80011270(c);
R_01080b3c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080bf8;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080bf8;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080b64;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1080b64u;
    f_mr711_0102b360(c);
L_01080b64:
R_01080b64:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080b78;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1080b78u;
    f_mr711_01030300(c);
L_01080b78:
R_01080b78:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080ba0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080ba0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080ba0u;
    wp::call(c, c.ctr);
L_01080ba0:
R_01080ba0:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080bc8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080bc8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080bc8u;
    wp::call(c, c.ctr);
L_01080bc8:
R_01080bc8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080bf0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080bf0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080bf0u;
    wp::call(c, c.ctr);
L_01080bf0:
R_01080bf0:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1080bf8u;
    f_801c7a8c(c);
L_01080bf8:
R_01080bf8:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080c20;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080c20;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080c20u;
    wp::call(c, c.ctr);
L_01080c20:
R_01080c20:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080c34;
    c.r[3] = ((((g_mr711_bases[6] + 0x24u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr711_bases[6] + 0x24u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_01080c34:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1080c40u;
    f_80069c40(c);
R_01080c40:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01080c50;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1080c50u;
    f_801c7a8c(c);
L_01080c50:
R_01080c50:
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

void f_mr711_01080c70(wp::Cpu& c) {
    WP_ENTER(0x1080c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080c9cu: goto R_01080c9c;
        case 0x1080ca4u: goto R_01080ca4;
        case 0x1080cbcu: goto R_01080cbc;
        case 0x1080cf0u: goto R_01080cf0;
        case 0x1080d10u: goto R_01080d10;
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
    if (!wp::cr_get(c, 2)) goto L_01080d10;
    c.r[3] = 0x0u;
    c.lr = 0x1080c9cu;
    f_mr711_01030380(c);
R_01080c9c:
    c.r[3] = 0x1a8u;
    c.lr = 0x1080ca4u;
    f_801c79a4(c);
R_01080ca4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080cbc;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x1080cbcu;
    f_mr711_01039650(c);
L_01080cbc:
R_01080cbc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080cf0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080cf0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080cf0u;
    wp::call(c, c.ctr);
L_01080cf0:
R_01080cf0:
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
    c.lr = 0x1080d10u;
    wp::call(c, c.ctr);
L_01080d10:
R_01080d10:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr711_01080d30(wp::Cpu& c) {
    WP_ENTER(0x1080d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr711_01080d40(wp::Cpu& c) {
    WP_ENTER(0x1080d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr711_01080d50(wp::Cpu& c) {
    WP_ENTER(0x1080d50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080d9cu: goto R_01080d9c;
        case 0x1080da0u: goto R_01080da0;
        case 0x1080db0u: goto R_01080db0;
        case 0x1080dd8u: goto R_01080dd8;
        case 0x1080de0u: goto R_01080de0;
        case 0x1080df4u: goto R_01080df4;
        case 0x1080e1cu: goto R_01080e1c;
        case 0x1080e24u: goto R_01080e24;
        case 0x1080e2cu: goto R_01080e2c;
        case 0x1080e40u: goto R_01080e40;
        case 0x1080e5cu: goto R_01080e5c;
        case 0x1080e64u: goto R_01080e64;
        case 0x1080e78u: goto R_01080e78;
        case 0x1080e94u: goto R_01080e94;
        case 0x1080ea8u: goto R_01080ea8;
        case 0x1080eb0u: goto R_01080eb0;
        case 0x1080ebcu: goto R_01080ebc;
        case 0x1080ed4u: goto R_01080ed4;
        case 0x1080ed8u: goto R_01080ed8;
        case 0x1080ee0u: goto R_01080ee0;
        case 0x1080eecu: goto R_01080eec;
        case 0x1080ef4u: goto R_01080ef4;
        case 0x1080ef8u: goto R_01080ef8;
        case 0x1080f00u: goto R_01080f00;
        case 0x1080f0cu: goto R_01080f0c;
        case 0x1080f1cu: goto R_01080f1c;
        case 0x1080f24u: goto R_01080f24;
        case 0x1080f40u: goto R_01080f40;
        case 0x1080f44u: goto R_01080f44;
        case 0x1080f54u: goto R_01080f54;
        case 0x1080f5cu: goto R_01080f5c;
        case 0x1080f6cu: goto R_01080f6c;
        case 0x1080f88u: goto R_01080f88;
        case 0x1080fb4u: goto R_01080fb4;
        case 0x1080fd0u: goto R_01080fd0;
        case 0x1081004u: goto R_01081004;
        case 0x1081010u: goto R_01081010;
        case 0x1081030u: goto R_01081030;
        case 0x1081064u: goto R_01081064;
        case 0x1081070u: goto R_01081070;
        case 0x108108cu: goto R_0108108c;
        case 0x10810c0u: goto R_010810c0;
        case 0x10810dcu: goto R_010810dc;
        case 0x10810f4u: goto R_010810f4;
        case 0x1081104u: goto R_01081104;
        case 0x1081124u: goto R_01081124;
        case 0x1081158u: goto R_01081158;
        case 0x1081170u: goto R_01081170;
        case 0x108119cu: goto R_0108119c;
        case 0x10811d0u: goto R_010811d0;
        case 0x10811d4u: goto R_010811d4;
        case 0x10811ecu: goto R_010811ec;
        case 0x1081224u: goto R_01081224;
        case 0x108122cu: goto R_0108122c;
        case 0x1081238u: goto R_01081238;
        case 0x1081258u: goto R_01081258;
        case 0x1081264u: goto R_01081264;
        case 0x1081270u: goto R_01081270;
        case 0x108127cu: goto R_0108127c;
        case 0x1081294u: goto R_01081294;
        case 0x10812d0u: goto R_010812d0;
        case 0x10812d4u: goto R_010812d4;
        case 0x10812d8u: goto R_010812d8;
        case 0x10812ecu: goto R_010812ec;
        case 0x1081320u: goto R_01081320;
        case 0x1081324u: goto R_01081324;
        case 0x1081330u: goto R_01081330;
        case 0x1081340u: goto R_01081340;
        case 0x1081348u: goto R_01081348;
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
    goto L_01080da0;
L_01080d7c:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080d9c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080d9cu;
    wp::call(c, c.ctr);
L_01080d9c:
R_01080d9c:
    c.lr = 0x1080da0u;
    f_8006a940(c);
L_01080da0:
R_01080da0:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01080d7c;
    }
    c.lr = 0x1080db0u;
    f_800760f0(c);
R_01080db0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01080d7c;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080dd8;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x1080dd8u;
    f_mr711_01030300(c);
L_01080dd8:
R_01080dd8:
    c.r[3] = 0x1u;
    c.lr = 0x1080de0u;
    f_80076130(c);
R_01080de0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080df4u;
    wp::call(c, c.ctr);
R_01080df4:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080e7c;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080e1cu;
    f_800104d0(c);
R_01080e1c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1080e24u;
    f_8000a7f0(c);
R_01080e24:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1080e2cu;
    f_8000e240(c);
R_01080e2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080e6c;
    c.r[30] = 0x0u;
    goto L_01080e60;
L_01080e3c:
    c.lr = 0x1080e40u;
    f_8000dd70(c);
R_01080e40:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x1080e5cu;
    f_8000fc60(c);
R_01080e5c:
    c.r[30] = c.r[30] + 0x1u;
L_01080e60:
    c.lr = 0x1080e64u;
    f_80007570(c);
R_01080e64:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080e3c;
    }
L_01080e6c:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1080e78u;
    f_800293c0(c);
R_01080e78:
    goto L_01081340;
L_01080e7c:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080ec0;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080e94u;
    f_8000e070(c);
R_01080e94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_01080ea4;
    c.r[3] = 0x6u;
L_01080ea4:
    c.lr = 0x1080ea8u;
    f_8000e080(c);
R_01080ea8:
    c.r[3] = 0x1u;
    c.lr = 0x1080eb0u;
    f_80029330(c);
R_01080eb0:
    c.r[3] = ((((g_mr711_bases[5] + 0x29108u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr711_bases[5] + 0x29108u) & 0xFFFFu);
    c.lr = 0x1080ebcu;
    f_80029270(c);
R_01080ebc:
    goto L_01081340;
L_01080ec0:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080f04;
    c.r[29] = ((((g_mr711_bases[4] + 0x2b48u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr711_bases[4] + 0x2b48u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080ed4u;
    f_80071fe0(c);
R_01080ed4:
    c.lr = 0x1080ed8u;
    f_8001a890(c);
R_01080ed8:
    c.r[3] = 0x0u;
    c.lr = 0x1080ee0u;
    f_80076130(c);
R_01080ee0:
    ea = c.r[29] + wp::sign_extend16((g_mr711_bases[4] + 0x2b48u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1080eecu;
    f_80075f20(c);
R_01080eec:
    c.r[3] = 0x1u;
    c.lr = 0x1080ef4u;
    f_80076130(c);
R_01080ef4:
    c.lr = 0x1080ef8u;
    f_80076100(c);
R_01080ef8:
    c.r[3] = 0x1u;
    c.lr = 0x1080f00u;
    f_80029330(c);
R_01080f00:
    goto L_01081340;
L_01080f04:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1080f0cu;
    f_80007f20(c);
R_01080f0c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x1080f1cu;
    f_mr711_01081370(c);
R_01080f1c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x1080f24u;
    f_80041f70(c);
R_01080f24:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080f40;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1080f40u;
    f_800402c0(c);
L_01080f40:
R_01080f40:
    c.lr = 0x1080f44u;
    f_80076140(c);
R_01080f44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080f74;
    c.r[3] = 0x0u;
    c.lr = 0x1080f54u;
    f_8004a100(c);
R_01080f54:
    c.r[3] = 0x1u;
    c.lr = 0x1080f5cu;
    f_80072020(c);
R_01080f5c:
    c.r[4] = ((((g_mr711_bases[4] + 0x2b4cu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr711_bases[4] + 0x2b4cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080f6cu;
    f_80075ed0(c);
R_01080f6c:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_01080f74:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081170;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x1080f88u;
    f_80007530(c);
R_01080f88:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01080fac;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_01081008;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01081068;
    goto L_010810dc;
L_01080fac:
    c.r[3] = 0x1acu;
    c.lr = 0x1080fb4u;
    f_801c79a4(c);
R_01080fb4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080fd0;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x1080fd0u;
    f_mr711_01049b80(c);
L_01080fd0:
R_01080fd0:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010810dc;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010810dc;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081004u;
    wp::call(c, c.ctr);
R_01081004:
    goto L_010810dc;
L_01081008:
    c.r[3] = 0x1acu;
    c.lr = 0x1081010u;
    f_801c79a4(c);
R_01081010:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081030;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1081030u;
    f_mr711_0104abc0(c);
L_01081030:
R_01081030:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010810dc;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010810dc;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081064u;
    wp::call(c, c.ctr);
R_01081064:
    goto L_010810dc;
L_01081068:
    c.r[3] = 0x1bcu;
    c.lr = 0x1081070u;
    f_801c79a4(c);
R_01081070:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108108c;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x108108cu;
    f_mr711_0104b7c0(c);
L_0108108c:
R_0108108c:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010810c0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010810c0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10810c0u;
    wp::call(c, c.ctr);
L_010810c0:
R_010810c0:
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
    c.lr = 0x10810dcu;
    wp::call(c, c.ctr);
L_010810dc:
R_010810dc:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081158;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10810f4u;
    f_mr711_010815b0(c);
R_010810f4:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_01081158;
    c.r[3] = 0x1acu;
    c.lr = 0x1081104u;
    f_801c79a4(c);
R_01081104:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081124;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1081124u;
    f_mr711_0104abc0(c);
L_01081124:
R_01081124:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081158;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01081158;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081158u;
    wp::call(c, c.ctr);
L_01081158:
R_01081158:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081170;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1081170u;
    f_mr711_010815b0(c);
L_01081170:
R_01081170:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081224;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108119cu;
    wp::call(c, c.ctr);
R_0108119c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010811d4;
L_010811a4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010811d0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010811d0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10811d0u;
    wp::call(c, c.ctr);
L_010811d0:
R_010811d0:
    c.lr = 0x10811d4u;
    f_8006a940(c);
L_010811d4:
R_010811d4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10811ecu;
    wp::call(c, c.ctr);
R_010811ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010811a4;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081224;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081224;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081224u;
    wp::call(c, c.ctr);
L_01081224:
R_01081224:
    c.r[3] = 0x4u;
    c.lr = 0x108122cu;
    f_801c79a4(c);
R_0108122c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081238;
    c.lr = 0x1081238u;
    f_mr711_0102b2c0(c);
L_01081238:
R_01081238:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081258;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x1081258u;
    f_mr711_0102b360(c);
L_01081258:
R_01081258:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1081264u;
    f_mr711_0102b400(c);
R_01081264:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1081270u;
    f_mr711_0102b3f0(c);
R_01081270:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108127cu;
    f_mr711_0102b3e0(c);
R_0108127c:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010812e0;
    c.r[3] = 0x1u;
    c.lr = 0x1081294u;
    f_mr711_01029d80(c);
R_01081294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010812e0;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010812d4;
L_010812a4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010812d0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010812d0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10812d0u;
    wp::call(c, c.ctr);
L_010812d0:
R_010812d0:
    c.lr = 0x10812d4u;
    f_8006a940(c);
L_010812d4:
R_010812d4:
    c.lr = 0x10812d8u;
    f_8006b760(c);
R_010812d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010812a4;
    }
L_010812e0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10812ecu;
    f_mr711_0102b410(c);
R_010812ec:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01081324;
L_010812f4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081320;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081320;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081320u;
    wp::call(c, c.ctr);
L_01081320:
R_01081320:
    c.lr = 0x1081324u;
    f_8006a940(c);
L_01081324:
R_01081324:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1081330u;
    f_mr711_0102b430(c);
R_01081330:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010812f4;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1081340u;
    f_mr711_01081800(c);
L_01081340:
R_01081340:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1081348u;
    f_8006a8f0(c);
R_01081348:
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

void f_mr711_01081370(wp::Cpu& c) {
    WP_ENTER(0x1081370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081384u: goto R_01081384;
        case 0x1081394u: goto R_01081394;
        case 0x10813a0u: goto R_010813a0;
        case 0x10813bcu: goto R_010813bc;
        case 0x10813c4u: goto R_010813c4;
        case 0x10813ccu: goto R_010813cc;
        case 0x1081430u: goto R_01081430;
        case 0x108144cu: goto R_0108144c;
        case 0x1081468u: goto R_01081468;
        case 0x10814a0u: goto R_010814a0;
        case 0x10814bcu: goto R_010814bc;
        case 0x10814d8u: goto R_010814d8;
        case 0x10814f4u: goto R_010814f4;
        case 0x108150cu: goto R_0108150c;
        case 0x1081544u: goto R_01081544;
        case 0x1081560u: goto R_01081560;
        case 0x108157cu: goto R_0108157c;
        case 0x1081598u: goto R_01081598;
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
    c.lr = 0x1081384u;
    f_801c83b8(c);
R_01081384:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x1081394u;
    f_8000fc40(c);
R_01081394:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x10813a0u;
    f_8000fc40(c);
R_010813a0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010813b8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010813b8;
    c.r[3] = 0x0u;
    goto L_01081590;
L_010813b8:
    c.lr = 0x10813bcu;
    f_80007530(c);
R_010813bc:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10813c4u;
    f_800075a0(c);
R_010813c4:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10813ccu;
    f_8000dd00(c);
R_010813cc:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081400;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_01081470;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_010814e0;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01081514;
    goto L_01081584;
L_01081400:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108141c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01081438;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01081454;
    goto L_0108158c;
L_0108141c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1081430u;
    f_8000b780(c);
R_01081430:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_01081438:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108144cu;
    f_8000b780(c);
R_0108144c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_01081454:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1081468u;
    f_8000b780(c);
R_01081468:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_01081470:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108148c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010814a8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010814c4;
    goto L_0108158c;
L_0108148c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10814a0u;
    f_8000b780(c);
R_010814a0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_010814a8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10814bcu;
    f_8000b780(c);
R_010814bc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_010814c4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10814d8u;
    f_8000b780(c);
R_010814d8:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_010814e0:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10814f4u;
    f_8000b780(c);
R_010814f4:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108150cu;
    f_8000b780(c);
R_0108150c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_01081514:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081530;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108154c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01081568;
    goto L_0108158c;
L_01081530:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1081544u;
    f_8000b780(c);
R_01081544:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_0108154c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1081560u;
    f_8000b780(c);
R_01081560:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_01081568:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108157cu;
    f_8000b780(c);
R_0108157c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108158c;
L_01081584:
    c.r[3] = 0x0u;
    goto L_01081590;
L_0108158c:
    c.r[3] = 0x1u;
L_01081590:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1081598u;
    f_801c8404(c);
R_01081598:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr711_010815b0(wp::Cpu& c) {
    WP_ENTER(0x10815b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10815c4u: goto R_010815c4;
        case 0x10815e8u: goto R_010815e8;
        case 0x1081620u: goto R_01081620;
        case 0x1081624u: goto R_01081624;
        case 0x108163cu: goto R_0108163c;
        case 0x1081674u: goto R_01081674;
        case 0x108168cu: goto R_0108168c;
        case 0x1081690u: goto R_01081690;
        case 0x1081698u: goto R_01081698;
        case 0x10816e4u: goto R_010816e4;
        case 0x10816e8u: goto R_010816e8;
        case 0x1081724u: goto R_01081724;
        case 0x1081744u: goto R_01081744;
        case 0x108177cu: goto R_0108177c;
        case 0x1081780u: goto R_01081780;
        case 0x1081798u: goto R_01081798;
        case 0x10817dcu: goto R_010817dc;
        case 0x10817e4u: goto R_010817e4;
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
    c.lr = 0x10815c4u;
    f_801c83b8(c);
R_010815c4:
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
    c.lr = 0x10815e8u;
    wp::call(c, c.ctr);
R_010815e8:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01081624;
L_010815f4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081620;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081620;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081620u;
    wp::call(c, c.ctr);
L_01081620:
R_01081620:
    c.lr = 0x1081624u;
    f_8006a940(c);
L_01081624:
R_01081624:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108163cu;
    wp::call(c, c.ctr);
R_0108163c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081650;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010815f4;
    }
L_01081650:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010816e8;
L_01081664:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_0108166c:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1081674u;
    f_8000fc40(c);
R_01081674:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081684;
    c.r[0] = 0x0u;
    goto L_010816a4;
L_01081684:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x108168cu;
    f_8000fc20(c);
R_0108168c:
    c.lr = 0x1081690u;
    f_800699d0(c);
R_01081690:
    c.r[4] = 0x800u;
    c.lr = 0x1081698u;
    f_80066cd0(c);
R_01081698:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_010816a4:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108166c;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010816e4;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010816e4;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10816e4u;
    wp::call(c, c.ctr);
L_010816e4:
R_010816e4:
    c.lr = 0x10816e8u;
    f_8006a940(c);
L_010816e8:
R_010816e8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108170c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108170c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01081664;
    }
L_0108170c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081724u;
    wp::call(c, c.ctr);
R_01081724:
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
    c.lr = 0x1081744u;
    wp::call(c, c.ctr);
R_01081744:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01081780;
L_01081750:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108177c;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108177c;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108177cu;
    wp::call(c, c.ctr);
L_0108177c:
R_0108177c:
    c.lr = 0x1081780u;
    f_8006a940(c);
L_01081780:
R_01081780:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081798u;
    wp::call(c, c.ctr);
R_01081798:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010817ac;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01081750;
    }
L_010817ac:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010817dc;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010817dc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10817dcu;
    wp::call(c, c.ctr);
L_010817dc:
R_010817dc:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10817e4u;
    f_801c8404(c);
R_010817e4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr711_01081800(wp::Cpu& c) {
    WP_ENTER(0x1081800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081814u: goto R_01081814;
        case 0x108182cu: goto R_0108182c;
        case 0x1081838u: goto R_01081838;
        case 0x1081848u: goto R_01081848;
        case 0x1081854u: goto R_01081854;
        case 0x1081864u: goto R_01081864;
        case 0x108187cu: goto R_0108187c;
        case 0x1081898u: goto R_01081898;
        case 0x10818b4u: goto R_010818b4;
        case 0x10818e4u: goto R_010818e4;
        case 0x108191cu: goto R_0108191c;
        case 0x1081920u: goto R_01081920;
        case 0x10819b0u: goto R_010819b0;
        case 0x10819dcu: goto R_010819dc;
        case 0x10819e4u: goto R_010819e4;
        case 0x10819f0u: goto R_010819f0;
        case 0x10819f8u: goto R_010819f8;
        case 0x10819fcu: goto R_010819fc;
        case 0x1081a04u: goto R_01081a04;
        case 0x1081a18u: goto R_01081a18;
        case 0x1081a34u: goto R_01081a34;
        case 0x1081a3cu: goto R_01081a3c;
        case 0x1081a50u: goto R_01081a50;
        case 0x1081a5cu: goto R_01081a5c;
        case 0x1081a64u: goto R_01081a64;
        case 0x1081a70u: goto R_01081a70;
        case 0x1081a78u: goto R_01081a78;
        case 0x1081a7cu: goto R_01081a7c;
        case 0x1081a80u: goto R_01081a80;
        case 0x1081a94u: goto R_01081a94;
        case 0x1081a9cu: goto R_01081a9c;
        case 0x1081aa8u: goto R_01081aa8;
        case 0x1081aacu: goto R_01081aac;
        case 0x1081ab4u: goto R_01081ab4;
        case 0x1081ac0u: goto R_01081ac0;
        case 0x1081ac8u: goto R_01081ac8;
        case 0x1081accu: goto R_01081acc;
        case 0x1081ad4u: goto R_01081ad4;
        case 0x1081adcu: goto R_01081adc;
        case 0x1081ae8u: goto R_01081ae8;
        case 0x1081aecu: goto R_01081aec;
        case 0x1081af4u: goto R_01081af4;
        case 0x1081b00u: goto R_01081b00;
        case 0x1081b08u: goto R_01081b08;
        case 0x1081b0cu: goto R_01081b0c;
        case 0x1081b14u: goto R_01081b14;
        case 0x1081b1cu: goto R_01081b1c;
        case 0x1081b24u: goto R_01081b24;
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
    c.lr = 0x1081814u;
    f_801c83b4(c);
R_01081814:
    c.r[27] = ((((g_mr711_bases[4] + 0x2b48u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr711_bases[4] + 0x2b48u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x108182cu;
    f_800699d0(c);
R_0108182c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x1081838u;
    f_80066e70(c);
R_01081838:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x1081848u;
    f_80066db0(c);
R_01081848:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x1081854u;
    f_801c79a4(c);
R_01081854:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010818b8;
    c.lr = 0x1081864u;
    f_80007530(c);
R_01081864:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01081878;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_01081890;
L_01081878:
    c.lr = 0x108187cu;
    f_8000dc30(c);
R_0108187c:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_01081894;
L_01081890:
    c.r[26] = 0x0u;
L_01081894:
    c.lr = 0x1081898u;
    f_8000e070(c);
R_01081898:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x10818b4u;
    f_mr711_010621b0(c);
R_010818b4:
    c.r[29] = c.r[3] | c.r[3];
L_010818b8:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010818e4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010818e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10818e4u;
    wp::call(c, c.ctr);
L_010818e4:
R_010818e4:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01081920;
L_010818f0:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108191c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108191c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108191cu;
    wp::call(c, c.ctr);
L_0108191c:
R_0108191c:
    c.lr = 0x1081920u;
    f_8006a940(c);
L_01081920:
R_01081920:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_01081940;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010818f0;
    }
L_01081940:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081968;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01081970;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01081978;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01081980;
    goto L_01081984;
L_01081968:
    c.r[31] = 0x0u;
    goto L_01081984;
L_01081970:
    c.r[31] = 0x1u;
    goto L_01081984;
L_01081978:
    c.r[31] = 0x2u;
    goto L_01081984;
L_01081980:
    c.r[31] = 0x3u;
L_01081984:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010819b0;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010819b0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10819b0u;
    wp::call(c, c.ctr);
L_010819b0:
R_010819b0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010819d4;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01081a54;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01081aa0;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01081ae0;
    goto L_01081b1c;
L_010819d4:
    c.r[3] = 0x5u;
    c.lr = 0x10819dcu;
    f_8001a890(c);
R_010819dc:
    c.r[3] = 0x0u;
    c.lr = 0x10819e4u;
    f_80076130(c);
R_010819e4:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10819f0u;
    f_80075f20(c);
R_010819f0:
    c.r[3] = 0x1u;
    c.lr = 0x10819f8u;
    f_80076130(c);
R_010819f8:
    c.lr = 0x10819fcu;
    f_80076100(c);
R_010819fc:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1081a04u;
    f_8000e240(c);
R_01081a04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081a44;
    c.r[26] = 0x0u;
    goto L_01081a38;
L_01081a14:
    c.lr = 0x1081a18u;
    f_8000dd70(c);
R_01081a18:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x1081a34u;
    f_8000fc60(c);
R_01081a34:
    c.r[26] = c.r[26] + 0x1u;
L_01081a38:
    c.lr = 0x1081a3cu;
    f_80007570(c);
R_01081a3c:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01081a14;
    }
L_01081a44:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1081a50u;
    f_800293c0(c);
R_01081a50:
    goto L_01081b1c;
L_01081a54:
    c.r[3] = 0x5u;
    c.lr = 0x1081a5cu;
    f_8001a890(c);
R_01081a5c:
    c.r[3] = 0x0u;
    c.lr = 0x1081a64u;
    f_80076130(c);
R_01081a64:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1081a70u;
    f_80075f20(c);
R_01081a70:
    c.r[3] = 0x1u;
    c.lr = 0x1081a78u;
    f_80076130(c);
R_01081a78:
    c.lr = 0x1081a7cu;
    f_80076100(c);
R_01081a7c:
    c.lr = 0x1081a80u;
    f_8000e070(c);
R_01081a80:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_01081a90;
    c.r[3] = 0x6u;
L_01081a90:
    c.lr = 0x1081a94u;
    f_8000e080(c);
R_01081a94:
    c.r[3] = 0x1u;
    c.lr = 0x1081a9cu;
    f_80029330(c);
R_01081a9c:
    goto L_01081b1c;
L_01081aa0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1081aa8u;
    f_80071fe0(c);
R_01081aa8:
    c.lr = 0x1081aacu;
    f_8001a890(c);
R_01081aac:
    c.r[3] = 0x0u;
    c.lr = 0x1081ab4u;
    f_80076130(c);
R_01081ab4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1081ac0u;
    f_80075f20(c);
R_01081ac0:
    c.r[3] = 0x1u;
    c.lr = 0x1081ac8u;
    f_80076130(c);
R_01081ac8:
    c.lr = 0x1081accu;
    f_80076100(c);
R_01081acc:
    c.r[3] = 0x4u;
    c.lr = 0x1081ad4u;
    f_8000e080(c);
R_01081ad4:
    c.r[3] = 0x1u;
    c.lr = 0x1081adcu;
    f_80029330(c);
R_01081adc:
    goto L_01081b1c;
L_01081ae0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1081ae8u;
    f_80071fe0(c);
R_01081ae8:
    c.lr = 0x1081aecu;
    f_8001a890(c);
R_01081aec:
    c.r[3] = 0x0u;
    c.lr = 0x1081af4u;
    f_80076130(c);
R_01081af4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1081b00u;
    f_80075f20(c);
R_01081b00:
    c.r[3] = 0x1u;
    c.lr = 0x1081b08u;
    f_80076130(c);
R_01081b08:
    c.lr = 0x1081b0cu;
    f_80076100(c);
R_01081b0c:
    c.r[3] = 0x8u;
    c.lr = 0x1081b14u;
    f_8000e080(c);
R_01081b14:
    c.r[3] = 0x1u;
    c.lr = 0x1081b1cu;
    f_80029330(c);
L_01081b1c:
R_01081b1c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1081b24u;
    f_801c8400(c);
R_01081b24:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr711_01081b40(wp::Cpu& c) {
    WP_ENTER(0x1081b40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081b70u: goto R_01081b70;
        case 0x1081b78u: goto R_01081b78;
        case 0x1081ba4u: goto R_01081ba4;
        case 0x1081bb0u: goto R_01081bb0;
        case 0x1081bd4u: goto R_01081bd4;
        case 0x1081bfcu: goto R_01081bfc;
        case 0x1081c14u: goto R_01081c14;
        case 0x1081c30u: goto R_01081c30;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr711_bases[4] + 0x2b80u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr711_bases[4] + 0x2b80u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1081b70u;
    f_80153530(c);
R_01081b70:
    c.r[3] = 0x6u;
    c.lr = 0x1081b78u;
    f_80153920(c);
R_01081b78:
    c.r[31] = ((((g_mr711_bases[4] + 0x2b88u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr711_bases[4] + 0x2b88u) & 0xFFFFu);
L_01081b84:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1081ba4u;
    f_801537c0(c);
R_01081ba4:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1081bb0u;
    f_80153590(c);
R_01081bb0:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_01081bc4;
    c.r[4] = 0xfu;
L_01081bc4:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x1081bd4u;
    f_80153320(c);
R_01081bd4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01081bf0;
    c.r[6] = 0x3u;
L_01081bf0:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1081bfcu;
    f_801533a0(c);
R_01081bfc:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x1081c14u;
    f_80153360(c);
R_01081c14:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1081c30u;
    f_80153400(c);
R_01081c30:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01081b84;
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

void f_mr711_01081c60(wp::Cpu& c) {
    WP_ENTER(0x1081c60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081c94u: goto R_01081c94;
        case 0x1081c9cu: goto R_01081c9c;
        case 0x1081ca4u: goto R_01081ca4;
        case 0x1081cacu: goto R_01081cac;
        case 0x1081cbcu: goto R_01081cbc;
        case 0x1081cd4u: goto R_01081cd4;
        case 0x1081ce8u: goto R_01081ce8;
        case 0x1081cecu: goto R_01081cec;
        case 0x1081cf8u: goto R_01081cf8;
        case 0x1081d08u: goto R_01081d08;
        case 0x1081d0cu: goto R_01081d0c;
        case 0x1081d10u: goto R_01081d10;
        case 0x1081d34u: goto R_01081d34;
        case 0x1081d7cu: goto R_01081d7c;
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
    c.lr = 0x1081c94u;
    f_80150850(c);
R_01081c94:
    c.r[3] = 0x1u;
    c.lr = 0x1081c9cu;
    f_80153e40(c);
R_01081c9c:
    c.r[3] = 0x0u;
    c.lr = 0x1081ca4u;
    f_80153e90(c);
R_01081ca4:
    c.r[3] = 0x1u;
    c.lr = 0x1081cacu;
    f_80153f20(c);
R_01081cac:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x1081cbcu;
    f_80153ee0(c);
R_01081cbc:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x1081cd4u;
    f_801536f0(c);
R_01081cd4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x1081ce8u;
    f_80153df0(c);
R_01081ce8:
    c.lr = 0x1081cecu;
    f_8014f020(c);
R_01081cec:
    c.r[3] = ((((g_mr711_bases[4] + 0x2ba8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr711_bases[4] + 0x2ba8u) & 0xFFFFu);
    c.lr = 0x1081cf8u;
    f_8014e9e0(c);
R_01081cf8:
    c.r[4] = ((((g_mr711_bases[4] + 0x2bc0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[4] + 0x2bc0u) & 0xFFFFu);
    c.lr = 0x1081d08u;
    f_8014f200(c);
R_01081d08:
    c.lr = 0x1081d0cu;
    f_8004aa80(c);
R_01081d0c:
    c.lr = 0x1081d10u;
    f_800ee3c0(c);
R_01081d10:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1081d34u;
    f_800e95b0(c);
R_01081d34:
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
    c.lr = 0x1081d7cu;
    f_80150560(c);
R_01081d7c:
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

void f_mr711_01081e00(wp::Cpu& c) {
    WP_ENTER(0x1081e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081e40u: goto R_01081e40;
        case 0x1081e54u: goto R_01081e54;
        case 0x1081e64u: goto R_01081e64;
        case 0x1081e74u: goto R_01081e74;
        case 0x1081e80u: goto R_01081e80;
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
    c.lr = 0x1081e40u;
    f_8003d6b0(c);
R_01081e40:
    c.r[4] = ((((g_mr711_bases[5] + 0x29130u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr711_bases[5] + 0x29130u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1081e54u;
    f_801c79a4(c);
R_01081e54:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01081e64;
    c.lr = 0x1081e64u;
    f_80034ac0(c);
L_01081e64:
R_01081e64:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x1081e74u;
    f_80052170(c);
R_01081e74:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x1081e80u;
    f_80052190(c);
R_01081e80:
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

void f_mr711_01081eb0(wp::Cpu& c) {
    WP_ENTER(0x1081eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081ef8u: goto R_01081ef8;
        case 0x1081f00u: goto R_01081f00;
        case 0x1081f14u: goto R_01081f14;
        case 0x1081f24u: goto R_01081f24;
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
    if (wp::cr_get(c, 2)) goto L_01081f24;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01081f00;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081f00;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x1081ef8u;
    f_80034b10(c);
R_01081ef8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1081f00u;
    f_801c7a8c(c);
L_01081f00:
R_01081f00:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081f14;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1081f14u;
    f_80051600(c);
L_01081f14:
R_01081f14:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01081f24;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1081f24u;
    f_801c7a8c(c);
L_01081f24:
R_01081f24:
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

void f_mr711_01081f50(wp::Cpu& c) {
    WP_ENTER(0x1081f50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081f94u: goto R_01081f94;
        case 0x1081fc0u: goto R_01081fc0;
        case 0x1081fccu: goto R_01081fcc;
        case 0x1081fd4u: goto R_01081fd4;
        case 0x1081fe0u: goto R_01081fe0;
        case 0x1081fe8u: goto R_01081fe8;
        case 0x1081ff0u: goto R_01081ff0;
        case 0x1082010u: goto R_01082010;
        case 0x1082030u: goto R_01082030;
        case 0x1082038u: goto R_01082038;
        case 0x1082044u: goto R_01082044;
        case 0x1082074u: goto R_01082074;
        case 0x1082090u: goto R_01082090;
        case 0x10820d8u: goto R_010820d8;
        case 0x10820f4u: goto R_010820f4;
        case 0x108210cu: goto R_0108210c;
        case 0x1082128u: goto R_01082128;
        case 0x1082138u: goto R_01082138;
        case 0x108213cu: goto R_0108213c;
        case 0x1082174u: goto R_01082174;
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
    c.lr = 0x1081f94u;
    f_801c83b8(c);
R_01081f94:
    c.r[29] = ((((g_mr711_bases[4] + 0x2b60u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr711_bases[4] + 0x2b60u) & 0xFFFFu);
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
    c.lr = 0x1081fc0u;
    f_8014c050(c);
R_01081fc0:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x1081fccu;
    f_80154c30(c);
R_01081fcc:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1081fd4u;
    f_8014b090(c);
R_01081fd4:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1081fe0u;
    f_80154d30(c);
R_01081fe0:
    c.r[3] = 0x0u;
    c.lr = 0x1081fe8u;
    f_80154e50(c);
R_01081fe8:
    c.r[3] = 0x0u;
    c.lr = 0x1081ff0u;
    f_80151a30(c);
R_01081ff0:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1082010u;
    f_80151a60(c);
R_01082010:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1082030u;
    f_80151a60(c);
R_01082030:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1082038u;
    f_80034f00(c);
R_01082038:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1082044u;
    f_80034f20(c);
R_01082044:
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
    c.lr = 0x1082074u;
    f_8014f9d0(c);
R_01082074:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1082090u;
    f_8014f780(c);
R_01082090:
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
L_010820ac:
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
    c.lr = 0x10820d8u;
    f_80126450(c);
R_010820d8:
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
    c.lr = 0x10820f4u;
    f_8014b7e0(c);
R_010820f4:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x108210cu;
    f_80154e70(c);
R_0108210c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1082128u;
    f_8014f780(c);
R_01082128:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010820ac;
    }
    c.lr = 0x1082138u;
    f_mr711_01081b40(c);
R_01082138:
    c.lr = 0x108213cu;
    f_mr711_01081c60(c);
R_0108213c:
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
    c.lr = 0x1082174u;
    f_801c8404(c);
R_01082174:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

