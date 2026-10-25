#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr001_bases[17];
void f_800043c4(wp::Cpu& c);
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
void f_80010060(wp::Cpu& c);
void f_800104d0(wp::Cpu& c);
void f_80011270(wp::Cpu& c);
void f_8001a890(wp::Cpu& c);
void f_8001aac0(wp::Cpu& c);
void f_8001b020(wp::Cpu& c);
void f_8001b0c0(wp::Cpu& c);
void f_8001bfe0(wp::Cpu& c);
void f_80029270(wp::Cpu& c);
void f_80029330(wp::Cpu& c);
void f_800293c0(wp::Cpu& c);
void f_8002d270(wp::Cpu& c);
void f_80030b40(wp::Cpu& c);
void f_800315f0(wp::Cpu& c);
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
void f_8006c450(wp::Cpu& c);
void f_8006c460(wp::Cpu& c);
void f_8006c4e0(wp::Cpu& c);
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
void f_8011bd40(wp::Cpu& c);
void f_8011bd50(wp::Cpu& c);
void f_8011bd90(wp::Cpu& c);
void f_8011bec0(wp::Cpu& c);
void f_8011c260(wp::Cpu& c);
void f_8011c2d0(wp::Cpu& c);
void f_8011c320(wp::Cpu& c);
void f_8011e9e0(wp::Cpu& c);
void f_8011ea40(wp::Cpu& c);
void f_8011eaa0(wp::Cpu& c);
void f_8011eeb0(wp::Cpu& c);
void f_80121cf0(wp::Cpu& c);
void f_801225e0(wp::Cpu& c);
void f_80122d80(wp::Cpu& c);
void f_80126450(wp::Cpu& c);
void f_8012be60(wp::Cpu& c);
void f_80132a30(wp::Cpu& c);
void f_80132ab0(wp::Cpu& c);
void f_80143290(wp::Cpu& c);
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
void f_801c7860(wp::Cpu& c);
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
void f_801d34c4(wp::Cpu& c);
void f_801d3590(wp::Cpu& c);
void f_mr001_01052270(wp::Cpu& c);
void f_mr001_01052430(wp::Cpu& c);
void f_mr001_01066cc0(wp::Cpu& c);
void f_mr001_010681d0(wp::Cpu& c);
void f_mr001_01068270(wp::Cpu& c);
void f_mr001_010682f0(wp::Cpu& c);
void f_mr001_01068300(wp::Cpu& c);
void f_mr001_01068310(wp::Cpu& c);
void f_mr001_01068320(wp::Cpu& c);
void f_mr001_01068340(wp::Cpu& c);
void f_mr001_0106d040(wp::Cpu& c);
void f_mr001_0106d210(wp::Cpu& c);
void f_mr001_0106d290(wp::Cpu& c);
void f_mr001_0106d2b0(wp::Cpu& c);
void f_mr001_01078510(wp::Cpu& c);
void f_mr001_01089080(wp::Cpu& c);
void f_mr001_0108a0c0(wp::Cpu& c);
void f_mr001_0108acc0(wp::Cpu& c);
void f_mr001_010a1120(wp::Cpu& c);
void f_mr001_010b5a40(wp::Cpu& c);
void f_mr001_010b7e90(wp::Cpu& c);
void f_mr001_010b8d90(wp::Cpu& c);
void f_mr001_010b9880(wp::Cpu& c);
void f_mr001_010bc4a0(wp::Cpu& c);
void f_mr001_010bd190(wp::Cpu& c);
void f_mr001_010bd590(wp::Cpu& c);
void f_mr001_010bd870(wp::Cpu& c);
void f_mr001_010bdf10(wp::Cpu& c);
void f_mr001_010bdf40(wp::Cpu& c);
void f_mr001_010bdf60(wp::Cpu& c);
void f_mr001_010bdfc0(wp::Cpu& c);
void f_mr001_010be240(wp::Cpu& c);
void f_mr001_010be260(wp::Cpu& c);
void f_mr001_010be280(wp::Cpu& c);
void f_mr001_010be2f0(wp::Cpu& c);
void f_mr001_010be370(wp::Cpu& c);
void f_mr001_010be390(wp::Cpu& c);
void f_mr001_010be3b0(wp::Cpu& c);
void f_mr001_010be3d0(wp::Cpu& c);
void f_mr001_010be410(wp::Cpu& c);
void f_mr001_010be430(wp::Cpu& c);
void f_mr001_010be450(wp::Cpu& c);
void f_mr001_010be470(wp::Cpu& c);
void f_mr001_010be490(wp::Cpu& c);
void f_mr001_010be4b0(wp::Cpu& c);
void f_mr001_010be4f0(wp::Cpu& c);
void f_mr001_010be560(wp::Cpu& c);
void f_mr001_010be570(wp::Cpu& c);
void f_mr001_010be580(wp::Cpu& c);
void f_mr001_010be590(wp::Cpu& c);
void f_mr001_010be5a0(wp::Cpu& c);
void f_mr001_010be5b0(wp::Cpu& c);
void f_mr001_010be5c0(wp::Cpu& c);
void f_mr001_010be5d0(wp::Cpu& c);
void f_mr001_010be5e0(wp::Cpu& c);
void f_mr001_010be5f0(wp::Cpu& c);
void f_mr001_010be650(wp::Cpu& c);
void f_mr001_010be6b0(wp::Cpu& c);
void f_mr001_010bea60(wp::Cpu& c);
void f_mr001_010becb0(wp::Cpu& c);
void f_mr001_010bf140(wp::Cpu& c);
void f_mr001_010bf150(wp::Cpu& c);
void f_mr001_010bf160(wp::Cpu& c);
void f_mr001_010bf310(wp::Cpu& c);
void f_mr001_010bf5a0(wp::Cpu& c);
void f_mr001_010bf660(wp::Cpu& c);
void f_mr001_010bf670(wp::Cpu& c);
void f_mr001_010bf680(wp::Cpu& c);
void f_mr001_010bfca0(wp::Cpu& c);
void f_mr001_010bfee0(wp::Cpu& c);
void f_mr001_010c0130(wp::Cpu& c);
void f_mr001_010c0470(wp::Cpu& c);
void f_mr001_010c04c0(wp::Cpu& c);
void f_mr001_010c04d0(wp::Cpu& c);
void f_mr001_010c0580(wp::Cpu& c);
void f_mr001_010c0620(wp::Cpu& c);
void f_mr001_010c0630(wp::Cpu& c);
void f_mr001_010c0640(wp::Cpu& c);
void f_mr001_010c0650(wp::Cpu& c);
void f_mr001_010c0660(wp::Cpu& c);
void f_mr001_010c06d0(wp::Cpu& c);
void f_mr001_010c0750(wp::Cpu& c);
void f_mr001_010c0760(wp::Cpu& c);
void f_mr001_010c07e0(wp::Cpu& c);
void f_mr001_010c07f0(wp::Cpu& c);
void f_mr001_010c0800(wp::Cpu& c);
void f_mr001_010c0810(wp::Cpu& c);
void f_mr001_010c0820(wp::Cpu& c);
void f_mr001_010c0830(wp::Cpu& c);
void f_mr001_010c0840(wp::Cpu& c);
void f_mr001_010c0850(wp::Cpu& c);
void f_mr001_010c08c0(wp::Cpu& c);
void f_mr001_010c09e0(wp::Cpu& c);
void f_mr001_010c0b80(wp::Cpu& c);
void f_mr001_010c0c30(wp::Cpu& c);
void f_mr001_010c0cd0(wp::Cpu& c);

void f_mr001_010bdf40(wp::Cpu& c) {
    WP_ENTER(0x10bdf40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010bdf60(wp::Cpu& c) {
    WP_ENTER(0x10bdf60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bdf84u: goto R_010bdf84;
        case 0x10bdfa8u: goto R_010bdfa8;
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
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[4] | c.r[4];
    c.lr = 0x10bdf84u;
    f_80010060(c);
R_010bdf84:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr001_bases[5] + 0x2e55cu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e55cu) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10bdfa8u;
    wp::call(c, c.ctr);
R_010bdfa8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr001_010bdfc0(wp::Cpu& c) {
    WP_ENTER(0x10bdfc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bdfd4u: goto R_010bdfd4;
        case 0x10bdfe8u: goto R_010bdfe8;
        case 0x10bdffcu: goto R_010bdffc;
        case 0x10be024u: goto R_010be024;
        case 0x10be034u: goto R_010be034;
        case 0x10be058u: goto R_010be058;
        case 0x10be0b8u: goto R_010be0b8;
        case 0x10be138u: goto R_010be138;
        case 0x10be1a0u: goto R_010be1a0;
        case 0x10be1d8u: goto R_010be1d8;
        case 0x10be1ecu: goto R_010be1ec;
        case 0x10be1fcu: goto R_010be1fc;
        case 0x10be220u: goto R_010be220;
        case 0x10be228u: goto R_010be228;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10bdfd4u;
    f_801c83b4(c);
R_010bdfd4:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10bdfe8u;
    f_8006c450(c);
R_010bdfe8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010be1f0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10bdffcu;
    f_8006c460(c);
R_010bdffc:
    c.r[27] = ((((g_mr001_bases[5] + 0x2d390u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr001_bases[5] + 0x2d390u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10be024u;
    f_801c7860(c);
R_010be024:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10be034u;
    f_mr001_01052270(c);
R_010be034:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[27] | c.r[27];
    c.r[7] = c.r[27] + c.r[26];
    c.r[8] = c.r[1] + 0xcu;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10be058u;
    f_mr001_01052430(c);
R_010be058:
    c.r[3] = 0x51ec0000u;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[31] & 0xffffu;
    c.r[3] = c.r[3] + 0xffff851fu;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[0] = wp::mulhw(c.r[3], c.r[4]);
    c.r[0] = wp::sraw(c, c.r[0], 5);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] + c.r[3];
    c.r[0] = c.r[3] + 0x30u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010be094;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010be098;
L_010be094:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010be098:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10be0b8u;
    f_mr001_01052430(c);
R_010be0b8:
    c.r[4] = 0x51ec0000u;
    c.r[3] = 0x66660000u;
    c.r[5] = c.r[31] & 0xffffu;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xffff851fu;
    c.r[6] = c.r[3] + 0x6667u;
    c.r[3] = wp::mulhw(c.r[4], c.r[5]);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[0] = wp::sraw(c, c.r[3], 5);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[0] = c.r[0] * 0x64u;
    c.r[0] = c.r[5] - c.r[0];
    c.r[0] = wp::mulhw(c.r[6], c.r[0]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] + c.r[3];
    c.r[0] = c.r[3] + 0x30u;
    ea = c.r[1] + 0x1cu;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010be114;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010be118;
L_010be114:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010be118:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10be138u;
    f_mr001_01052430(c);
R_010be138:
    c.r[3] = 0x66660000u;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[31] & 0xffffu;
    c.r[3] = c.r[3] + 0x6667u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[0] = wp::mulhw(c.r[3], c.r[4]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[0] = c.r[0] * 0xau;
    c.r[3] = c.r[4] - c.r[0];
    c.r[0] = c.r[3] + 0x30u;
    ea = c.r[1] + 0x28u;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010be17c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010be180;
L_010be17c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010be180:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10be1a0u;
    f_mr001_01052430(c);
R_010be1a0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr001_bases[5] + 0x2e568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e568u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_010be1c0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010be1c4;
L_010be1c0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010be1c4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10be1d8u;
    wp::call(c, c.ctr);
R_010be1d8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010be220;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10be1ecu;
    f_801c7a8c(c);
R_010be1ec:
    goto L_010be220;
L_010be1f0:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10be1fcu;
    f_8006c4e0(c);
R_010be1fc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr001_bases[5] + 0x2e568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e568u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10be220u;
    wp::call(c, c.ctr);
L_010be220:
R_010be220:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10be228u;
    f_801c8400(c);
R_010be228:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr001_010be240(wp::Cpu& c) {
    WP_ENTER(0x10be240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be260(wp::Cpu& c) {
    WP_ENTER(0x10be260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be280(wp::Cpu& c) {
    WP_ENTER(0x10be280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10be2acu: goto R_010be2ac;
        case 0x10be2c4u: goto R_010be2c4;
        case 0x10be2d4u: goto R_010be2d4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr001_bases[5] + 0x2e544u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr001_bases[5] + 0x2e544u) & 0xFFFFu);
    c.lr = 0x10be2acu;
    f_mr001_010b5a40(c);
R_010be2ac:
    c.r[5] = ((((g_mr001_bases[5] + 0x2d3c0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr001_bases[5] + 0x2d3c0u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10be2c4u;
    f_801d34c4(c);
R_010be2c4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10be2d4u;
    f_mr001_010b8d90(c);
R_010be2d4:
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

void f_mr001_010be2f0(wp::Cpu& c) {
    WP_ENTER(0x10be2f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10be328u: goto R_010be328;
        case 0x10be34cu: goto R_010be34c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mr001_bases[5] + 0x2d388u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr001_bases[5] + 0x2d388u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10be328u;
    f_801d3590(c);
R_010be328:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr001_bases[5] + 0x2e550u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e550u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10be34cu;
    wp::call(c, c.ctr);
R_010be34c:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr001_010be370(wp::Cpu& c) {
    WP_ENTER(0x10be370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x228u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be390(wp::Cpu& c) {
    WP_ENTER(0x10be390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x22cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be3b0(wp::Cpu& c) {
    WP_ENTER(0x10be3b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be3d0(wp::Cpu& c) {
    WP_ENTER(0x10be3d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10be3f0u: goto R_010be3f0;
        case 0x10be3f8u: goto R_010be3f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr001_bases[5] + 0x2e52cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mr001_bases[5] + 0x2e52cu) & 0xFFFFu);
    c.lr = 0x10be3f0u;
    f_mr001_010b5a40(c);
R_010be3f0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10be3f8u;
    f_mr001_010b7e90(c);
R_010be3f8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr001_010be410(wp::Cpu& c) {
    WP_ENTER(0x10be410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x220u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be430(wp::Cpu& c) {
    WP_ENTER(0x10be430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x224u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be450(wp::Cpu& c) {
    WP_ENTER(0x10be450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr001_010be470(wp::Cpu& c) {
    WP_ENTER(0x10be470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[4] | c.r[4];
    ea = c.r[4] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[4] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[4] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    return;
}

void f_mr001_010be490(wp::Cpu& c) {
    WP_ENTER(0x10be490u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[4] | c.r[4];
    ea = c.r[4] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[4] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[4] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    return;
}

void f_mr001_010be4b0(wp::Cpu& c) {
    WP_ENTER(0x10be4b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr001_bases[4] + 0x3388u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr001_bases[4] + 0x3388u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010be4e0;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010be4e0;
    c.r[4] = 0x1u;
L_010be4e0:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr001_010be4f0(wp::Cpu& c) {
    WP_ENTER(0x10be4f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10be534u: goto R_010be534;
        case 0x10be544u: goto R_010be544;
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
    if (wp::cr_get(c, 2)) goto L_010be544;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010be528;
    c.r[3] = ((((g_mr001_bases[6] + 0x500cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr001_bases[6] + 0x500cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010be528:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10be534u;
    f_8001bfe0(c);
R_010be534:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010be544;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10be544u;
    f_801c7a8c(c);
L_010be544:
R_010be544:
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

void f_mr001_010be560(wp::Cpu& c) {
    WP_ENTER(0x10be560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr001_010b9880(c);
    return;
}

void f_mr001_010be570(wp::Cpu& c) {
    WP_ENTER(0x10be570u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mr001_010be4f0(c);
    return;
}

void f_mr001_010be580(wp::Cpu& c) {
    WP_ENTER(0x10be580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mr001_010bc4a0(c);
    return;
}

void f_mr001_010be590(wp::Cpu& c) {
    WP_ENTER(0x10be590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mr001_010bc4a0(c);
    return;
}

void f_mr001_010be5a0(wp::Cpu& c) {
    WP_ENTER(0x10be5a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mr001_010bc4a0(c);
    return;
}

void f_mr001_010be5b0(wp::Cpu& c) {
    WP_ENTER(0x10be5b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr001_010bd190(c);
    return;
}

void f_mr001_010be5c0(wp::Cpu& c) {
    WP_ENTER(0x10be5c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr001_010bc4a0(c);
    return;
}

void f_mr001_010be5d0(wp::Cpu& c) {
    WP_ENTER(0x10be5d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr001_010bdf10(c);
    return;
}

void f_mr001_010be5e0(wp::Cpu& c) {
    WP_ENTER(0x10be5e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr001_010bd870(c);
    return;
}

void f_mr001_010be5f0(wp::Cpu& c) {
    WP_ENTER(0x10be5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10be610u: goto R_010be610;
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
    c.lr = 0x10be610u;
    f_8011bd40(c);
R_010be610:
    c.r[3] = ((((g_mr001_bases[4] + 0x3390u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr001_bases[5] + 0x2e670u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr001_bases[4] + 0x3390u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e670u) & 0xFFFFu);
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

void f_mr001_010be650(wp::Cpu& c) {
    WP_ENTER(0x10be650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10be67cu: goto R_010be67c;
        case 0x10be68cu: goto R_010be68c;
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
    if (wp::cr_get(c, 2)) goto L_010be68c;
    c.r[4] = 0x0u;
    c.lr = 0x10be67cu;
    f_8011bd50(c);
R_010be67c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010be68c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10be68cu;
    f_801c7a8c(c);
L_010be68c:
R_010be68c:
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

void f_mr001_010be6b0(wp::Cpu& c) {
    WP_ENTER(0x10be6b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10be6e4u: goto R_010be6e4;
        case 0x10be7bcu: goto R_010be7bc;
        case 0x10be93cu: goto R_010be93c;
        case 0x10be950u: goto R_010be950;
        case 0x10be9b0u: goto R_010be9b0;
        case 0x10be9bcu: goto R_010be9bc;
        case 0x10be9e4u: goto R_010be9e4;
        case 0x10be9fcu: goto R_010be9fc;
        case 0x10bea1cu: goto R_010bea1c;
        case 0x10bea28u: goto R_010bea28;
        case 0x10bea50u: goto R_010bea50;
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
    c.lr = 0x10be6e4u;
    f_801c83ac(c);
R_010be6e4:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mr001_bases[4] + 0x3390u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr001_bases[4] + 0x3390u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010be704;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010be7d0;
    goto L_010bea24;
L_010be704:
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
    if (wp::cr_get(c, 2)) goto L_010be780;
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
L_010be780:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010be7bc;
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
    c.lr = 0x10be7bcu;
    f_8011eeb0(c);
L_010be7bc:
R_010be7bc:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010bea28;
L_010be7d0:
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
    if (!wp::cr_get(c, 2)) goto L_010be7fc;
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
L_010be7fc:
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
    c.lr = 0x10be93cu;
    f_801225e0(c);
R_010be93c:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10be950u;
    f_801225e0(c);
R_010be950:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010be990;
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
L_010be990:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_010be9a8;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_010be9a8:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10be9b0u;
    f_8011eaa0(c);
R_010be9b0:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10be9bcu;
    f_8011ea40(c);
R_010be9bc:
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
    c.lr = 0x10be9e4u;
    f_80122d80(c);
R_010be9e4:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x10be9fcu;
    f_80122d80(c);
R_010be9fc:
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
    c.lr = 0x10bea1cu;
    f_80121cf0(c);
R_010bea1c:
    c.r[3] = 0x2u;
    goto L_010bea28;
L_010bea24:
    c.lr = 0x10bea28u;
    f_8011bd90(c);
L_010bea28:
R_010bea28:
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
    c.lr = 0x10bea50u;
    f_801c83f8(c);
R_010bea50:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mr001_010bea60(wp::Cpu& c) {
    WP_ENTER(0x10bea60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bea7cu: goto R_010bea7c;
        case 0x10bec00u: goto R_010bec00;
        case 0x10bec54u: goto R_010bec54;
        case 0x10bec78u: goto R_010bec78;
        case 0x10bec84u: goto R_010bec84;
        case 0x10bec94u: goto R_010bec94;
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
    c.lr = 0x10bea7cu;
    f_801c83b0(c);
R_010bea7c:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010bea98;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010beaac;
    goto L_010bec80;
L_010bea98:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010bec84;
L_010beaac:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mr001_bases[4] + 0x339cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mr001_bases[4] + 0x33a0u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mr001_bases[4] + 0x339cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mr001_bases[4] + 0x33a0u) & 0xFFFFu);
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
    c.lr = 0x10bec00u;
    f_801225e0(c);
R_010bec00:
    ea = c.r[26] + wp::sign_extend16((g_mr001_bases[4] + 0x33a0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_010bec10;
    goto L_010bec14;
L_010bec10:
    c.f[2] = c.f[1];
L_010bec14:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bec24;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_010bec2c;
L_010bec24:
    c.r[3] = ((((g_mr001_bases[4] + 0x33a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr001_bases[4] + 0x33a0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_010bec2c:
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
    c.lr = 0x10bec54u;
    f_8011e9e0(c);
R_010bec54:
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
    c.lr = 0x10bec78u;
    f_80121cf0(c);
R_010bec78:
    c.r[3] = 0x2u;
    goto L_010bec84;
L_010bec80:
    c.lr = 0x10bec84u;
    f_8011bec0(c);
L_010bec84:
R_010bec84:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10bec94u;
    f_801c83fc(c);
R_010bec94:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr001_010becb0(wp::Cpu& c) {
    WP_ENTER(0x10becb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10becc4u: goto R_010becc4;
        case 0x10becf4u: goto R_010becf4;
        case 0x10bee0cu: goto R_010bee0c;
        case 0x10bee94u: goto R_010bee94;
        case 0x10beea0u: goto R_010beea0;
        case 0x10beeacu: goto R_010beeac;
        case 0x10befc4u: goto R_010befc4;
        case 0x10bf10cu: goto R_010bf10c;
        case 0x10bf128u: goto R_010bf128;
        case 0x10bf130u: goto R_010bf130;
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
    c.lr = 0x10becc4u;
    f_801c83b4(c);
R_010becc4:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr001_bases[4] + 0x3390u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr001_bases[4] + 0x3390u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010becec;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010beea4;
    goto L_010bf128;
L_010becec:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x10becf4u;
    f_80132a30(c);
R_010becf4:
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
    if (!wp::cr_get(c, 2)) goto L_010bee0c;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x10bee0cu;
    f_8014b090(c);
L_010bee0c:
R_010bee0c:
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
    c.lr = 0x10bee94u;
    f_8012be60(c);
R_010bee94:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10beea0u;
    f_80132ab0(c);
R_010beea0:
    goto L_010bf128;
L_010beea4:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x10beeacu;
    f_80132a30(c);
R_010beeac:
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
    if (!wp::cr_get(c, 2)) goto L_010befc4;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x10befc4u;
    f_8014b090(c);
L_010befc4:
R_010befc4:
    c.r[5] = ((((g_mr001_bases[6] + 0x5010u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr001_bases[6] + 0x5010u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010bf030;
    c.r[4] = ((((g_mr001_bases[6] + 0x5018u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr001_bases[6] + 0x5018u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr001_bases[6] + 0x5018u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mr001_bases[6] + 0x5010u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_010bf030:
    c.r[26] = ((((g_mr001_bases[6] + 0x5018u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr001_bases[6] + 0x5018u) & 0xFFFFu);
L_010bf03c:
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
    c.lr = 0x10bf10cu;
    f_8012be60(c);
R_010bf10c:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010bf03c;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10bf128u;
    f_80132ab0(c);
L_010bf128:
R_010bf128:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x10bf130u;
    f_801c8400(c);
R_010bf130:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mr001_010bf140(wp::Cpu& c) {
    WP_ENTER(0x10bf140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mr001_010bf150(wp::Cpu& c) {
    WP_ENTER(0x10bf150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr001_010bf160(wp::Cpu& c) {
    WP_ENTER(0x10bf160u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bf180u: goto R_010bf180;
        case 0x10bf1a4u: goto R_010bf1a4;
        case 0x10bf1dcu: goto R_010bf1dc;
        case 0x10bf1f0u: goto R_010bf1f0;
        case 0x10bf204u: goto R_010bf204;
        case 0x10bf214u: goto R_010bf214;
        case 0x10bf220u: goto R_010bf220;
        case 0x10bf250u: goto R_010bf250;
        case 0x10bf270u: goto R_010bf270;
        case 0x10bf278u: goto R_010bf278;
        case 0x10bf280u: goto R_010bf280;
        case 0x10bf288u: goto R_010bf288;
        case 0x10bf28cu: goto R_010bf28c;
        case 0x10bf294u: goto R_010bf294;
        case 0x10bf2a0u: goto R_010bf2a0;
        case 0x10bf2d0u: goto R_010bf2d0;
        case 0x10bf2d8u: goto R_010bf2d8;
        case 0x10bf2dcu: goto R_010bf2dc;
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
    c.lr = 0x10bf180u;
    f_80069af0(c);
R_010bf180:
    c.r[3] = ((((g_mr001_bases[6] + 0x5058u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr001_bases[5] + 0x2e6a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr001_bases[6] + 0x5058u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e6a0u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x10bf1a4u;
    f_801c79a4(c);
R_010bf1a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf1c0;
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
L_010bf1c0:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10bf1dcu;
    f_801c79a4(c);
R_010bf1dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010bf254;
    c.r[29] = 0x0u;
    c.lr = 0x10bf1f0u;
    f_8000dd70(c);
R_010bf1f0:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010bf210;
    c.r[3] = 0xffffffffu;
    c.lr = 0x10bf204u;
    f_8000e240(c);
R_010bf204:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bf210;
    c.r[29] = 0x1u;
L_010bf210:
    c.lr = 0x10bf214u;
    f_8000dd70(c);
R_010bf214:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10bf220u;
    f_80007570(c);
R_010bf220:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_010bf240;
    c.r[4] = c.r[1] + 0xcu;
L_010bf240:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x10bf250u;
    f_mr001_0106d040(c);
R_010bf250:
    c.r[30] = c.r[3] | c.r[3];
L_010bf254:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf270;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x10bf270u;
    f_mr001_0106d210(c);
L_010bf270:
R_010bf270:
    c.r[3] = 0x0u;
    c.lr = 0x10bf278u;
    f_8006a800(c);
R_010bf278:
    c.r[3] = 0x0u;
    c.lr = 0x10bf280u;
    f_80065040(c);
R_010bf280:
    c.r[3] = 0x0u;
    c.lr = 0x10bf288u;
    f_8006c8b0(c);
R_010bf288:
    c.lr = 0x10bf28cu;
    f_80066250(c);
R_010bf28c:
    c.r[3] = 0x128u;
    c.lr = 0x10bf294u;
    f_801c79a4(c);
R_010bf294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf2a0;
    c.lr = 0x10bf2a0u;
    f_mr001_010bd590(c);
L_010bf2a0:
R_010bf2a0:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf2d0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf2d0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf2d0u;
    wp::call(c, c.ctr);
L_010bf2d0:
R_010bf2d0:
    c.r[3] = 0x1u;
    c.lr = 0x10bf2d8u;
    f_8001b020(c);
R_010bf2d8:
    c.lr = 0x10bf2dcu;
    f_8000dd30(c);
R_010bf2dc:
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

void f_mr001_010bf310(wp::Cpu& c) {
    WP_ENTER(0x10bf310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bf34cu: goto R_010bf34c;
        case 0x10bf378u: goto R_010bf378;
        case 0x10bf37cu: goto R_010bf37c;
        case 0x10bf38cu: goto R_010bf38c;
        case 0x10bf390u: goto R_010bf390;
        case 0x10bf394u: goto R_010bf394;
        case 0x10bf3c0u: goto R_010bf3c0;
        case 0x10bf3d4u: goto R_010bf3d4;
        case 0x10bf3fcu: goto R_010bf3fc;
        case 0x10bf424u: goto R_010bf424;
        case 0x10bf44cu: goto R_010bf44c;
        case 0x10bf454u: goto R_010bf454;
        case 0x10bf458u: goto R_010bf458;
        case 0x10bf45cu: goto R_010bf45c;
        case 0x10bf464u: goto R_010bf464;
        case 0x10bf468u: goto R_010bf468;
        case 0x10bf46cu: goto R_010bf46c;
        case 0x10bf494u: goto R_010bf494;
        case 0x10bf4a8u: goto R_010bf4a8;
        case 0x10bf4d0u: goto R_010bf4d0;
        case 0x10bf4f8u: goto R_010bf4f8;
        case 0x10bf520u: goto R_010bf520;
        case 0x10bf528u: goto R_010bf528;
        case 0x10bf550u: goto R_010bf550;
        case 0x10bf570u: goto R_010bf570;
        case 0x10bf580u: goto R_010bf580;
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
    if (wp::cr_get(c, 2)) goto L_010bf580;
    c.r[4] = ((((g_mr001_bases[5] + 0x2e6a0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e6a0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x10bf34cu;
    f_mr001_0106d2b0(c);
R_010bf34c:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf378;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf378;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf378u;
    wp::call(c, c.ctr);
L_010bf378:
R_010bf378:
    c.lr = 0x10bf37cu;
    f_8001aac0(c);
R_010bf37c:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bf38c;
    c.lr = 0x10bf38cu;
    f_8001b0c0(c);
L_010bf38c:
R_010bf38c:
    c.lr = 0x10bf390u;
    f_8004abf0(c);
R_010bf390:
    c.lr = 0x10bf394u;
    f_80066250(c);
R_010bf394:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf454;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf454;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf3c0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10bf3c0u;
    f_mr001_01068270(c);
L_010bf3c0:
R_010bf3c0:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf3d4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10bf3d4u;
    f_mr001_0106d210(c);
L_010bf3d4:
R_010bf3d4:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf3fc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf3fc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf3fcu;
    wp::call(c, c.ctr);
L_010bf3fc:
R_010bf3fc:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf424;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf424;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf424u;
    wp::call(c, c.ctr);
L_010bf424:
R_010bf424:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf44c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf44c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf44cu;
    wp::call(c, c.ctr);
L_010bf44c:
R_010bf44c:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10bf454u;
    f_801c7a8c(c);
L_010bf454:
R_010bf454:
    c.lr = 0x10bf458u;
    f_80041c20(c);
R_010bf458:
    c.lr = 0x10bf45cu;
    f_8002d270(c);
R_010bf45c:
    c.r[3] = 0x0u;
    c.lr = 0x10bf464u;
    f_80076130(c);
R_010bf464:
    c.lr = 0x10bf468u;
    f_800656f0(c);
R_010bf468:
    c.lr = 0x10bf46cu;
    f_80011270(c);
R_010bf46c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf528;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf528;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf494;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10bf494u;
    f_mr001_01068270(c);
L_010bf494:
R_010bf494:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf4a8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10bf4a8u;
    f_mr001_0106d210(c);
L_010bf4a8:
R_010bf4a8:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf4d0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf4d0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf4d0u;
    wp::call(c, c.ctr);
L_010bf4d0:
R_010bf4d0:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf4f8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf4f8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf4f8u;
    wp::call(c, c.ctr);
L_010bf4f8:
R_010bf4f8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf520;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf520;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf520u;
    wp::call(c, c.ctr);
L_010bf520:
R_010bf520:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10bf528u;
    f_801c7a8c(c);
L_010bf528:
R_010bf528:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf550;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf550;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf550u;
    wp::call(c, c.ctr);
L_010bf550:
R_010bf550:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf564;
    c.r[3] = ((((g_mr001_bases[6] + 0x5058u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr001_bases[6] + 0x5058u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010bf564:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10bf570u;
    f_80069c40(c);
R_010bf570:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010bf580;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10bf580u;
    f_801c7a8c(c);
L_010bf580:
R_010bf580:
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

void f_mr001_010bf5a0(wp::Cpu& c) {
    WP_ENTER(0x10bf5a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bf5ccu: goto R_010bf5cc;
        case 0x10bf5d4u: goto R_010bf5d4;
        case 0x10bf5ecu: goto R_010bf5ec;
        case 0x10bf620u: goto R_010bf620;
        case 0x10bf640u: goto R_010bf640;
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
    if (!wp::cr_get(c, 2)) goto L_010bf640;
    c.r[3] = 0x0u;
    c.lr = 0x10bf5ccu;
    f_mr001_0106d290(c);
R_010bf5cc:
    c.r[3] = 0x1a8u;
    c.lr = 0x10bf5d4u;
    f_801c79a4(c);
R_010bf5d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf5ec;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x10bf5ecu;
    f_mr001_01078510(c);
L_010bf5ec:
R_010bf5ec:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf620;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf620;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf620u;
    wp::call(c, c.ctr);
L_010bf620:
R_010bf620:
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
    c.lr = 0x10bf640u;
    wp::call(c, c.ctr);
L_010bf640:
R_010bf640:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr001_010bf660(wp::Cpu& c) {
    WP_ENTER(0x10bf660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr001_010bf670(wp::Cpu& c) {
    WP_ENTER(0x10bf670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr001_010bf680(wp::Cpu& c) {
    WP_ENTER(0x10bf680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bf6ccu: goto R_010bf6cc;
        case 0x10bf6d0u: goto R_010bf6d0;
        case 0x10bf6e0u: goto R_010bf6e0;
        case 0x10bf708u: goto R_010bf708;
        case 0x10bf710u: goto R_010bf710;
        case 0x10bf724u: goto R_010bf724;
        case 0x10bf74cu: goto R_010bf74c;
        case 0x10bf754u: goto R_010bf754;
        case 0x10bf75cu: goto R_010bf75c;
        case 0x10bf770u: goto R_010bf770;
        case 0x10bf78cu: goto R_010bf78c;
        case 0x10bf794u: goto R_010bf794;
        case 0x10bf7a8u: goto R_010bf7a8;
        case 0x10bf7c4u: goto R_010bf7c4;
        case 0x10bf7d8u: goto R_010bf7d8;
        case 0x10bf7e0u: goto R_010bf7e0;
        case 0x10bf7ecu: goto R_010bf7ec;
        case 0x10bf804u: goto R_010bf804;
        case 0x10bf808u: goto R_010bf808;
        case 0x10bf810u: goto R_010bf810;
        case 0x10bf81cu: goto R_010bf81c;
        case 0x10bf824u: goto R_010bf824;
        case 0x10bf828u: goto R_010bf828;
        case 0x10bf830u: goto R_010bf830;
        case 0x10bf83cu: goto R_010bf83c;
        case 0x10bf84cu: goto R_010bf84c;
        case 0x10bf854u: goto R_010bf854;
        case 0x10bf870u: goto R_010bf870;
        case 0x10bf874u: goto R_010bf874;
        case 0x10bf884u: goto R_010bf884;
        case 0x10bf88cu: goto R_010bf88c;
        case 0x10bf89cu: goto R_010bf89c;
        case 0x10bf8b8u: goto R_010bf8b8;
        case 0x10bf8e4u: goto R_010bf8e4;
        case 0x10bf900u: goto R_010bf900;
        case 0x10bf934u: goto R_010bf934;
        case 0x10bf940u: goto R_010bf940;
        case 0x10bf960u: goto R_010bf960;
        case 0x10bf994u: goto R_010bf994;
        case 0x10bf9a0u: goto R_010bf9a0;
        case 0x10bf9bcu: goto R_010bf9bc;
        case 0x10bf9f0u: goto R_010bf9f0;
        case 0x10bfa0cu: goto R_010bfa0c;
        case 0x10bfa24u: goto R_010bfa24;
        case 0x10bfa34u: goto R_010bfa34;
        case 0x10bfa54u: goto R_010bfa54;
        case 0x10bfa88u: goto R_010bfa88;
        case 0x10bfaa0u: goto R_010bfaa0;
        case 0x10bfaccu: goto R_010bfacc;
        case 0x10bfb00u: goto R_010bfb00;
        case 0x10bfb04u: goto R_010bfb04;
        case 0x10bfb1cu: goto R_010bfb1c;
        case 0x10bfb54u: goto R_010bfb54;
        case 0x10bfb5cu: goto R_010bfb5c;
        case 0x10bfb68u: goto R_010bfb68;
        case 0x10bfb88u: goto R_010bfb88;
        case 0x10bfb94u: goto R_010bfb94;
        case 0x10bfba0u: goto R_010bfba0;
        case 0x10bfbacu: goto R_010bfbac;
        case 0x10bfbc4u: goto R_010bfbc4;
        case 0x10bfc00u: goto R_010bfc00;
        case 0x10bfc04u: goto R_010bfc04;
        case 0x10bfc08u: goto R_010bfc08;
        case 0x10bfc1cu: goto R_010bfc1c;
        case 0x10bfc50u: goto R_010bfc50;
        case 0x10bfc54u: goto R_010bfc54;
        case 0x10bfc60u: goto R_010bfc60;
        case 0x10bfc70u: goto R_010bfc70;
        case 0x10bfc78u: goto R_010bfc78;
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
    goto L_010bf6d0;
L_010bf6ac:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bf6cc;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf6ccu;
    wp::call(c, c.ctr);
L_010bf6cc:
R_010bf6cc:
    c.lr = 0x10bf6d0u;
    f_8006a940(c);
L_010bf6d0:
R_010bf6d0:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010bf6ac;
    }
    c.lr = 0x10bf6e0u;
    f_800760f0(c);
R_010bf6e0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010bf6ac;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf708;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10bf708u;
    f_mr001_0106d210(c);
L_010bf708:
R_010bf708:
    c.r[3] = 0x1u;
    c.lr = 0x10bf710u;
    f_80076130(c);
R_010bf710:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf724u;
    wp::call(c, c.ctr);
R_010bf724:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf7ac;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10bf74cu;
    f_800104d0(c);
R_010bf74c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10bf754u;
    f_8000a7f0(c);
R_010bf754:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10bf75cu;
    f_8000e240(c);
R_010bf75c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bf79c;
    c.r[30] = 0x0u;
    goto L_010bf790;
L_010bf76c:
    c.lr = 0x10bf770u;
    f_8000dd70(c);
R_010bf770:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x10bf78cu;
    f_8000fc60(c);
R_010bf78c:
    c.r[30] = c.r[30] + 0x1u;
L_010bf790:
    c.lr = 0x10bf794u;
    f_80007570(c);
R_010bf794:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010bf76c;
    }
L_010bf79c:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10bf7a8u;
    f_800293c0(c);
R_010bf7a8:
    goto L_010bfc70;
L_010bf7ac:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf7f0;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10bf7c4u;
    f_8000e070(c);
R_010bf7c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_010bf7d4;
    c.r[3] = 0x6u;
L_010bf7d4:
    c.lr = 0x10bf7d8u;
    f_8000e080(c);
R_010bf7d8:
    c.r[3] = 0x1u;
    c.lr = 0x10bf7e0u;
    f_80029330(c);
R_010bf7e0:
    c.r[3] = ((((g_mr001_bases[5] + 0x2e690u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr001_bases[5] + 0x2e690u) & 0xFFFFu);
    c.lr = 0x10bf7ecu;
    f_80029270(c);
R_010bf7ec:
    goto L_010bfc70;
L_010bf7f0:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf834;
    c.r[29] = ((((g_mr001_bases[4] + 0x33c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr001_bases[4] + 0x33c8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10bf804u;
    f_80071fe0(c);
R_010bf804:
    c.lr = 0x10bf808u;
    f_8001a890(c);
R_010bf808:
    c.r[3] = 0x0u;
    c.lr = 0x10bf810u;
    f_80076130(c);
R_010bf810:
    ea = c.r[29] + wp::sign_extend16((g_mr001_bases[4] + 0x33c8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10bf81cu;
    f_80075f20(c);
R_010bf81c:
    c.r[3] = 0x1u;
    c.lr = 0x10bf824u;
    f_80076130(c);
R_010bf824:
    c.lr = 0x10bf828u;
    f_80076100(c);
R_010bf828:
    c.r[3] = 0x1u;
    c.lr = 0x10bf830u;
    f_80029330(c);
R_010bf830:
    goto L_010bfc70;
L_010bf834:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10bf83cu;
    f_80007f20(c);
R_010bf83c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x10bf84cu;
    f_mr001_010bfca0(c);
R_010bf84c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10bf854u;
    f_80041f70(c);
R_010bf854:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf870;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10bf870u;
    f_800402c0(c);
L_010bf870:
R_010bf870:
    c.lr = 0x10bf874u;
    f_80076140(c);
R_010bf874:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf8a4;
    c.r[3] = 0x0u;
    c.lr = 0x10bf884u;
    f_8004a100(c);
R_010bf884:
    c.r[3] = 0x1u;
    c.lr = 0x10bf88cu;
    f_80072020(c);
R_010bf88c:
    c.r[4] = ((((g_mr001_bases[4] + 0x33ccu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr001_bases[4] + 0x33ccu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10bf89cu;
    f_80075ed0(c);
R_010bf89c:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_010bf8a4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfaa0;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x10bf8b8u;
    f_80007530(c);
R_010bf8b8:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010bf8dc;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_010bf938;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_010bf998;
    goto L_010bfa0c;
L_010bf8dc:
    c.r[3] = 0x1acu;
    c.lr = 0x10bf8e4u;
    f_801c79a4(c);
R_010bf8e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf900;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x10bf900u;
    f_mr001_01089080(c);
L_010bf900:
R_010bf900:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfa0c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bfa0c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf934u;
    wp::call(c, c.ctr);
R_010bf934:
    goto L_010bfa0c;
L_010bf938:
    c.r[3] = 0x1acu;
    c.lr = 0x10bf940u;
    f_801c79a4(c);
R_010bf940:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf960;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x10bf960u;
    f_mr001_0108a0c0(c);
L_010bf960:
R_010bf960:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfa0c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bfa0c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf994u;
    wp::call(c, c.ctr);
R_010bf994:
    goto L_010bfa0c;
L_010bf998:
    c.r[3] = 0x1bcu;
    c.lr = 0x10bf9a0u;
    f_801c79a4(c);
R_010bf9a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bf9bc;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x10bf9bcu;
    f_mr001_0108acc0(c);
L_010bf9bc:
R_010bf9bc:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bf9f0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bf9f0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bf9f0u;
    wp::call(c, c.ctr);
L_010bf9f0:
R_010bf9f0:
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
    c.lr = 0x10bfa0cu;
    wp::call(c, c.ctr);
L_010bfa0c:
R_010bfa0c:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfa88;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10bfa24u;
    f_mr001_010bfee0(c);
R_010bfa24:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_010bfa88;
    c.r[3] = 0x1acu;
    c.lr = 0x10bfa34u;
    f_801c79a4(c);
R_010bfa34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfa54;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x10bfa54u;
    f_mr001_0108a0c0(c);
L_010bfa54:
R_010bfa54:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfa88;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010bfa88;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bfa88u;
    wp::call(c, c.ctr);
L_010bfa88:
R_010bfa88:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfaa0;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10bfaa0u;
    f_mr001_010bfee0(c);
L_010bfaa0:
R_010bfaa0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfb54;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bfaccu;
    wp::call(c, c.ctr);
R_010bfacc:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010bfb04;
L_010bfad4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bfb00;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfb00;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bfb00u;
    wp::call(c, c.ctr);
L_010bfb00:
R_010bfb00:
    c.lr = 0x10bfb04u;
    f_8006a940(c);
L_010bfb04:
R_010bfb04:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bfb1cu;
    wp::call(c, c.ctr);
R_010bfb1c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010bfad4;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfb54;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfb54;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bfb54u;
    wp::call(c, c.ctr);
L_010bfb54:
R_010bfb54:
    c.r[3] = 0x4u;
    c.lr = 0x10bfb5cu;
    f_801c79a4(c);
R_010bfb5c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfb68;
    c.lr = 0x10bfb68u;
    f_mr001_010681d0(c);
L_010bfb68:
R_010bfb68:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfb88;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x10bfb88u;
    f_mr001_01068270(c);
L_010bfb88:
R_010bfb88:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10bfb94u;
    f_mr001_01068310(c);
R_010bfb94:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10bfba0u;
    f_mr001_01068300(c);
R_010bfba0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10bfbacu;
    f_mr001_010682f0(c);
R_010bfbac:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010bfc10;
    c.r[3] = 0x1u;
    c.lr = 0x10bfbc4u;
    f_mr001_01066cc0(c);
R_010bfbc4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bfc10;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010bfc04;
L_010bfbd4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bfc00;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfc00;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bfc00u;
    wp::call(c, c.ctr);
L_010bfc00:
R_010bfc00:
    c.lr = 0x10bfc04u;
    f_8006a940(c);
L_010bfc04:
R_010bfc04:
    c.lr = 0x10bfc08u;
    f_8006b760(c);
R_010bfc08:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010bfbd4;
    }
L_010bfc10:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10bfc1cu;
    f_mr001_01068320(c);
R_010bfc1c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010bfc54;
L_010bfc24:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bfc50;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfc50;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bfc50u;
    wp::call(c, c.ctr);
L_010bfc50:
R_010bfc50:
    c.lr = 0x10bfc54u;
    f_8006a940(c);
L_010bfc54:
R_010bfc54:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10bfc60u;
    f_mr001_01068340(c);
R_010bfc60:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010bfc24;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10bfc70u;
    f_mr001_010c0130(c);
L_010bfc70:
R_010bfc70:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10bfc78u;
    f_8006a8f0(c);
R_010bfc78:
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

void f_mr001_010bfca0(wp::Cpu& c) {
    WP_ENTER(0x10bfca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bfcb4u: goto R_010bfcb4;
        case 0x10bfcc4u: goto R_010bfcc4;
        case 0x10bfcd0u: goto R_010bfcd0;
        case 0x10bfcecu: goto R_010bfcec;
        case 0x10bfcf4u: goto R_010bfcf4;
        case 0x10bfcfcu: goto R_010bfcfc;
        case 0x10bfd60u: goto R_010bfd60;
        case 0x10bfd7cu: goto R_010bfd7c;
        case 0x10bfd98u: goto R_010bfd98;
        case 0x10bfdd0u: goto R_010bfdd0;
        case 0x10bfdecu: goto R_010bfdec;
        case 0x10bfe08u: goto R_010bfe08;
        case 0x10bfe24u: goto R_010bfe24;
        case 0x10bfe3cu: goto R_010bfe3c;
        case 0x10bfe74u: goto R_010bfe74;
        case 0x10bfe90u: goto R_010bfe90;
        case 0x10bfeacu: goto R_010bfeac;
        case 0x10bfec8u: goto R_010bfec8;
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
    c.lr = 0x10bfcb4u;
    f_801c83b8(c);
R_010bfcb4:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x10bfcc4u;
    f_8000fc40(c);
R_010bfcc4:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x10bfcd0u;
    f_8000fc40(c);
R_010bfcd0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfce8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bfce8;
    c.r[3] = 0x0u;
    goto L_010bfec0;
L_010bfce8:
    c.lr = 0x10bfcecu;
    f_80007530(c);
R_010bfcec:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10bfcf4u;
    f_800075a0(c);
R_010bfcf4:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10bfcfcu;
    f_8000dd00(c);
R_010bfcfc:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfd30;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_010bfda0;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_010bfe10;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_010bfe44;
    goto L_010bfeb4;
L_010bfd30:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfd4c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010bfd68;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010bfd84;
    goto L_010bfebc;
L_010bfd4c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfd60u;
    f_8000b780(c);
R_010bfd60:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfd68:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfd7cu;
    f_8000b780(c);
R_010bfd7c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfd84:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfd98u;
    f_8000b780(c);
R_010bfd98:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfda0:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfdbc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010bfdd8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010bfdf4;
    goto L_010bfebc;
L_010bfdbc:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfdd0u;
    f_8000b780(c);
R_010bfdd0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfdd8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfdecu;
    f_8000b780(c);
R_010bfdec:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfdf4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfe08u;
    f_8000b780(c);
R_010bfe08:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfe10:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfe24u;
    f_8000b780(c);
R_010bfe24:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfe3cu;
    f_8000b780(c);
R_010bfe3c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfe44:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010bfe60;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010bfe7c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010bfe98;
    goto L_010bfebc;
L_010bfe60:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfe74u;
    f_8000b780(c);
R_010bfe74:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfe7c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfe90u;
    f_8000b780(c);
R_010bfe90:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfe98:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10bfeacu;
    f_8000b780(c);
R_010bfeac:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010bfebc;
L_010bfeb4:
    c.r[3] = 0x0u;
    goto L_010bfec0;
L_010bfebc:
    c.r[3] = 0x1u;
L_010bfec0:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10bfec8u;
    f_801c8404(c);
R_010bfec8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr001_010bfee0(wp::Cpu& c) {
    WP_ENTER(0x10bfee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10bfef4u: goto R_010bfef4;
        case 0x10bff18u: goto R_010bff18;
        case 0x10bff50u: goto R_010bff50;
        case 0x10bff54u: goto R_010bff54;
        case 0x10bff6cu: goto R_010bff6c;
        case 0x10bffa4u: goto R_010bffa4;
        case 0x10bffbcu: goto R_010bffbc;
        case 0x10bffc0u: goto R_010bffc0;
        case 0x10bffc8u: goto R_010bffc8;
        case 0x10c0014u: goto R_010c0014;
        case 0x10c0018u: goto R_010c0018;
        case 0x10c0054u: goto R_010c0054;
        case 0x10c0074u: goto R_010c0074;
        case 0x10c00acu: goto R_010c00ac;
        case 0x10c00b0u: goto R_010c00b0;
        case 0x10c00c8u: goto R_010c00c8;
        case 0x10c010cu: goto R_010c010c;
        case 0x10c0114u: goto R_010c0114;
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
    c.lr = 0x10bfef4u;
    f_801c83b8(c);
R_010bfef4:
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
    c.lr = 0x10bff18u;
    wp::call(c, c.ctr);
R_010bff18:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010bff54;
L_010bff24:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010bff50;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bff50;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bff50u;
    wp::call(c, c.ctr);
L_010bff50:
R_010bff50:
    c.lr = 0x10bff54u;
    f_8006a940(c);
L_010bff54:
R_010bff54:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10bff6cu;
    wp::call(c, c.ctr);
R_010bff6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bff80;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010bff24;
    }
L_010bff80:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010c0018;
L_010bff94:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_010bff9c:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10bffa4u;
    f_8000fc40(c);
R_010bffa4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010bffb4;
    c.r[0] = 0x0u;
    goto L_010bffd4;
L_010bffb4:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10bffbcu;
    f_8000fc20(c);
R_010bffbc:
    c.lr = 0x10bffc0u;
    f_800699d0(c);
R_010bffc0:
    c.r[4] = 0x800u;
    c.lr = 0x10bffc8u;
    f_80066cd0(c);
R_010bffc8:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_010bffd4:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010bff9c;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010c0014;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c0014;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c0014u;
    wp::call(c, c.ctr);
L_010c0014:
R_010c0014:
    c.lr = 0x10c0018u;
    f_8006a940(c);
L_010c0018:
R_010c0018:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010c003c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010c003c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010bff94;
    }
L_010c003c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c0054u;
    wp::call(c, c.ctr);
R_010c0054:
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
    c.lr = 0x10c0074u;
    wp::call(c, c.ctr);
R_010c0074:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010c00b0;
L_010c0080:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010c00ac;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c00ac;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c00acu;
    wp::call(c, c.ctr);
L_010c00ac:
R_010c00ac:
    c.lr = 0x10c00b0u;
    f_8006a940(c);
L_010c00b0:
R_010c00b0:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c00c8u;
    wp::call(c, c.ctr);
R_010c00c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c00dc;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010c0080;
    }
L_010c00dc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c010c;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010c010c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c010cu;
    wp::call(c, c.ctr);
L_010c010c:
R_010c010c:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10c0114u;
    f_801c8404(c);
R_010c0114:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr001_010c0130(wp::Cpu& c) {
    WP_ENTER(0x10c0130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0144u: goto R_010c0144;
        case 0x10c015cu: goto R_010c015c;
        case 0x10c0168u: goto R_010c0168;
        case 0x10c0178u: goto R_010c0178;
        case 0x10c0184u: goto R_010c0184;
        case 0x10c0194u: goto R_010c0194;
        case 0x10c01acu: goto R_010c01ac;
        case 0x10c01c8u: goto R_010c01c8;
        case 0x10c01e4u: goto R_010c01e4;
        case 0x10c0214u: goto R_010c0214;
        case 0x10c024cu: goto R_010c024c;
        case 0x10c0250u: goto R_010c0250;
        case 0x10c02e0u: goto R_010c02e0;
        case 0x10c030cu: goto R_010c030c;
        case 0x10c0314u: goto R_010c0314;
        case 0x10c0320u: goto R_010c0320;
        case 0x10c0328u: goto R_010c0328;
        case 0x10c032cu: goto R_010c032c;
        case 0x10c0334u: goto R_010c0334;
        case 0x10c0348u: goto R_010c0348;
        case 0x10c0364u: goto R_010c0364;
        case 0x10c036cu: goto R_010c036c;
        case 0x10c0380u: goto R_010c0380;
        case 0x10c038cu: goto R_010c038c;
        case 0x10c0394u: goto R_010c0394;
        case 0x10c03a0u: goto R_010c03a0;
        case 0x10c03a8u: goto R_010c03a8;
        case 0x10c03acu: goto R_010c03ac;
        case 0x10c03b0u: goto R_010c03b0;
        case 0x10c03c4u: goto R_010c03c4;
        case 0x10c03ccu: goto R_010c03cc;
        case 0x10c03d8u: goto R_010c03d8;
        case 0x10c03dcu: goto R_010c03dc;
        case 0x10c03e4u: goto R_010c03e4;
        case 0x10c03f0u: goto R_010c03f0;
        case 0x10c03f8u: goto R_010c03f8;
        case 0x10c03fcu: goto R_010c03fc;
        case 0x10c0404u: goto R_010c0404;
        case 0x10c040cu: goto R_010c040c;
        case 0x10c0418u: goto R_010c0418;
        case 0x10c041cu: goto R_010c041c;
        case 0x10c0424u: goto R_010c0424;
        case 0x10c0430u: goto R_010c0430;
        case 0x10c0438u: goto R_010c0438;
        case 0x10c043cu: goto R_010c043c;
        case 0x10c0444u: goto R_010c0444;
        case 0x10c044cu: goto R_010c044c;
        case 0x10c0454u: goto R_010c0454;
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
    c.lr = 0x10c0144u;
    f_801c83b4(c);
R_010c0144:
    c.r[27] = ((((g_mr001_bases[4] + 0x33c8u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr001_bases[4] + 0x33c8u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x10c015cu;
    f_800699d0(c);
R_010c015c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x10c0168u;
    f_80066e70(c);
R_010c0168:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x10c0178u;
    f_80066db0(c);
R_010c0178:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x10c0184u;
    f_801c79a4(c);
R_010c0184:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010c01e8;
    c.lr = 0x10c0194u;
    f_80007530(c);
R_010c0194:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010c01a8;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_010c01c0;
L_010c01a8:
    c.lr = 0x10c01acu;
    f_8000dc30(c);
R_010c01ac:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_010c01c4;
L_010c01c0:
    c.r[26] = 0x0u;
L_010c01c4:
    c.lr = 0x10c01c8u;
    f_8000e070(c);
R_010c01c8:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x10c01e4u;
    f_mr001_010a1120(c);
R_010c01e4:
    c.r[29] = c.r[3] | c.r[3];
L_010c01e8:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010c0214;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010c0214;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c0214u;
    wp::call(c, c.ctr);
L_010c0214:
R_010c0214:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010c0250;
L_010c0220:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010c024c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c024c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c024cu;
    wp::call(c, c.ctr);
L_010c024c:
R_010c024c:
    c.lr = 0x10c0250u;
    f_8006a940(c);
L_010c0250:
R_010c0250:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_010c0270;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010c0220;
    }
L_010c0270:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c0298;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010c02a0;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010c02a8;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010c02b0;
    goto L_010c02b4;
L_010c0298:
    c.r[31] = 0x0u;
    goto L_010c02b4;
L_010c02a0:
    c.r[31] = 0x1u;
    goto L_010c02b4;
L_010c02a8:
    c.r[31] = 0x2u;
    goto L_010c02b4;
L_010c02b0:
    c.r[31] = 0x3u;
L_010c02b4:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c02e0;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010c02e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c02e0u;
    wp::call(c, c.ctr);
L_010c02e0:
R_010c02e0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c0304;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010c0384;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010c03d0;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010c0410;
    goto L_010c044c;
L_010c0304:
    c.r[3] = 0x5u;
    c.lr = 0x10c030cu;
    f_8001a890(c);
R_010c030c:
    c.r[3] = 0x0u;
    c.lr = 0x10c0314u;
    f_80076130(c);
R_010c0314:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10c0320u;
    f_80075f20(c);
R_010c0320:
    c.r[3] = 0x1u;
    c.lr = 0x10c0328u;
    f_80076130(c);
R_010c0328:
    c.lr = 0x10c032cu;
    f_80076100(c);
R_010c032c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10c0334u;
    f_8000e240(c);
R_010c0334:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010c0374;
    c.r[26] = 0x0u;
    goto L_010c0368;
L_010c0344:
    c.lr = 0x10c0348u;
    f_8000dd70(c);
R_010c0348:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x10c0364u;
    f_8000fc60(c);
R_010c0364:
    c.r[26] = c.r[26] + 0x1u;
L_010c0368:
    c.lr = 0x10c036cu;
    f_80007570(c);
R_010c036c:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010c0344;
    }
L_010c0374:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10c0380u;
    f_800293c0(c);
R_010c0380:
    goto L_010c044c;
L_010c0384:
    c.r[3] = 0x5u;
    c.lr = 0x10c038cu;
    f_8001a890(c);
R_010c038c:
    c.r[3] = 0x0u;
    c.lr = 0x10c0394u;
    f_80076130(c);
R_010c0394:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10c03a0u;
    f_80075f20(c);
R_010c03a0:
    c.r[3] = 0x1u;
    c.lr = 0x10c03a8u;
    f_80076130(c);
R_010c03a8:
    c.lr = 0x10c03acu;
    f_80076100(c);
R_010c03ac:
    c.lr = 0x10c03b0u;
    f_8000e070(c);
R_010c03b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_010c03c0;
    c.r[3] = 0x6u;
L_010c03c0:
    c.lr = 0x10c03c4u;
    f_8000e080(c);
R_010c03c4:
    c.r[3] = 0x1u;
    c.lr = 0x10c03ccu;
    f_80029330(c);
R_010c03cc:
    goto L_010c044c;
L_010c03d0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10c03d8u;
    f_80071fe0(c);
R_010c03d8:
    c.lr = 0x10c03dcu;
    f_8001a890(c);
R_010c03dc:
    c.r[3] = 0x0u;
    c.lr = 0x10c03e4u;
    f_80076130(c);
R_010c03e4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10c03f0u;
    f_80075f20(c);
R_010c03f0:
    c.r[3] = 0x1u;
    c.lr = 0x10c03f8u;
    f_80076130(c);
R_010c03f8:
    c.lr = 0x10c03fcu;
    f_80076100(c);
R_010c03fc:
    c.r[3] = 0x4u;
    c.lr = 0x10c0404u;
    f_8000e080(c);
R_010c0404:
    c.r[3] = 0x1u;
    c.lr = 0x10c040cu;
    f_80029330(c);
R_010c040c:
    goto L_010c044c;
L_010c0410:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10c0418u;
    f_80071fe0(c);
R_010c0418:
    c.lr = 0x10c041cu;
    f_8001a890(c);
R_010c041c:
    c.r[3] = 0x0u;
    c.lr = 0x10c0424u;
    f_80076130(c);
R_010c0424:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10c0430u;
    f_80075f20(c);
R_010c0430:
    c.r[3] = 0x1u;
    c.lr = 0x10c0438u;
    f_80076130(c);
R_010c0438:
    c.lr = 0x10c043cu;
    f_80076100(c);
R_010c043c:
    c.r[3] = 0x8u;
    c.lr = 0x10c0444u;
    f_8000e080(c);
R_010c0444:
    c.r[3] = 0x1u;
    c.lr = 0x10c044cu;
    f_80029330(c);
L_010c044c:
R_010c044c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10c0454u;
    f_801c8400(c);
R_010c0454:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr001_010c0470(wp::Cpu& c) {
    WP_ENTER(0x10c0470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c04a8u: goto R_010c04a8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr001_bases[5] + 0x2e6b8u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr001_bases[6] + 0x24u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e6b8u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr001_bases[6] + 0x24u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    c.lr = 0x10c04a8u;
    f_80030b40(c);
R_010c04a8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr001_010c04c0(wp::Cpu& c) {
    WP_ENTER(0x10c04c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    f_800315f0(c);
    return;
}

void f_mr001_010c04d0(wp::Cpu& c) {
    WP_ENTER(0x10c04d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0524u: goto R_010c0524;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] & 0x10u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010c04f4;
    c.r[3] = 0x0u;
    goto L_010c0568;
L_010c04f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010c050c;
    c.r[0] = c.r[4] & 0x100u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010c050c;
    c.r[3] = 0x0u;
    goto L_010c0568;
L_010c050c:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x400u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10c0524u;
    f_801c79a4(c);
R_010c0524:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c0568;
    c.r[6] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[6]);
    c.r[5] = ((((g_mr001_bases[5] + 0x2e6c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[6]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr001_bases[5] + 0x2e6c8u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16(0x80231d68u & 0xFFFFu);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + 0x11u;
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x18u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[0]);
L_010c0568:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr001_010c0580(wp::Cpu& c) {
    WP_ENTER(0x10c0580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c05c4u: goto R_010c05c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] & 0x400u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010c05a8;
    c.r[3] = 0x0u;
    goto L_010c0604;
L_010c05a8:
    c.r[3] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[4] & 0xfffffbffu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80231d68u & 0xFFFFu);
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[31] = c.r[3] + 0x11u;
    c.r[3] = 0x24u;
    c.lr = 0x10c05c4u;
    f_801c79a4(c);
R_010c05c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c0604;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[4] = ((((g_mr001_bases[5] + 0x2e6c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e6c8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[3] + 0x18u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[0]);
L_010c0604:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr001_010c0620(wp::Cpu& c) {
    WP_ENTER(0x10c0620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr001_010c0630(wp::Cpu& c) {
    WP_ENTER(0x10c0630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr001_010c0640(wp::Cpu& c) {
    WP_ENTER(0x10c0640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr001_010c0650(wp::Cpu& c) {
    WP_ENTER(0x10c0650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f6050u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f6050u & 0xFFFFu);
    return;
}

void f_mr001_010c0660(wp::Cpu& c) {
    WP_ENTER(0x10c0660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c06a4u: goto R_010c06a4;
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
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c06a8;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c06a8;
    ea = c.r[3] + 0x14u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x10c06a4u;
    f_80143290(c);
R_010c06a4:
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_010c06a8:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x4u;
    wp::wr8(ea, c.r[0]);
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

void f_mr001_010c06d0(wp::Cpu& c) {
    WP_ENTER(0x10c06d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0704u: goto R_010c0704;
        case 0x10c071cu: goto R_010c071c;
        case 0x10c0728u: goto R_010c0728;
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
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c0704u;
    wp::call(c, c.ctr);
R_010c0704:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[0] + c.r[3];
    c.r[3] = c.r[3] + 0x8u;
    c.lr = 0x10c071cu;
    f_800043c4(c);
R_010c071c:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x10c0728u;
    f_8011c2d0(c);
R_010c0728:
    c.r[3] = c.r[31] | c.r[31];
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

void f_mr001_010c0750(wp::Cpu& c) {
    WP_ENTER(0x10c0750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr001_010c0760(wp::Cpu& c) {
    WP_ENTER(0x10c0760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0794u: goto R_010c0794;
        case 0x10c07acu: goto R_010c07ac;
        case 0x10c07b8u: goto R_010c07b8;
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
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c0794u;
    wp::call(c, c.ctr);
R_010c0794:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = c.r[0] + c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + 0x8u;
    c.lr = 0x10c07acu;
    f_800043c4(c);
R_010c07ac:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x10c07b8u;
    f_8011c260(c);
R_010c07b8:
    c.r[3] = c.r[31] | c.r[31];
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

void f_mr001_010c07e0(wp::Cpu& c) {
    WP_ENTER(0x10c07e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0x1cu;
    f_8011c320(c);
    return;
}

void f_mr001_010c07f0(wp::Cpu& c) {
    WP_ENTER(0x10c07f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr001_010c0800(wp::Cpu& c) {
    WP_ENTER(0x10c0800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr001_010c0810(wp::Cpu& c) {
    WP_ENTER(0x10c0810u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr001_010c0820(wp::Cpu& c) {
    WP_ENTER(0x10c0820u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr001_010c0830(wp::Cpu& c) {
    WP_ENTER(0x10c0830u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_mr001_010c0840(wp::Cpu& c) {
    WP_ENTER(0x10c0840u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr001_010c0850(wp::Cpu& c) {
    WP_ENTER(0x10c0850u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c088cu: goto R_010c088c;
        case 0x10c089cu: goto R_010c089c;
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
    if (wp::cr_get(c, 2)) goto L_010c089c;
    c.r[12] = ((((g_mr001_bases[5] + 0x2e6c8u) + 0x8000u) >> 16) << 16);
    c.r[12] = c.r[12] + wp::sign_extend16((g_mr001_bases[5] + 0x2e6c8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10c088cu;
    wp::call(c, c.ctr);
R_010c088c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010c089c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10c089cu;
    f_801c7a8c(c);
L_010c089c:
R_010c089c:
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

void f_mr001_010c08c0(wp::Cpu& c) {
    WP_ENTER(0x10c08c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c08f0u: goto R_010c08f0;
        case 0x10c08f8u: goto R_010c08f8;
        case 0x10c0924u: goto R_010c0924;
        case 0x10c0930u: goto R_010c0930;
        case 0x10c0954u: goto R_010c0954;
        case 0x10c097cu: goto R_010c097c;
        case 0x10c0994u: goto R_010c0994;
        case 0x10c09b0u: goto R_010c09b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr001_bases[4] + 0x3400u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr001_bases[4] + 0x3400u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10c08f0u;
    f_80153530(c);
R_010c08f0:
    c.r[3] = 0x6u;
    c.lr = 0x10c08f8u;
    f_80153920(c);
R_010c08f8:
    c.r[31] = ((((g_mr001_bases[4] + 0x3408u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr001_bases[4] + 0x3408u) & 0xFFFFu);
L_010c0904:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x10c0924u;
    f_801537c0(c);
R_010c0924:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10c0930u;
    f_80153590(c);
R_010c0930:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_010c0944;
    c.r[4] = 0xfu;
L_010c0944:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x10c0954u;
    f_80153320(c);
R_010c0954:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010c0970;
    c.r[6] = 0x3u;
L_010c0970:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10c097cu;
    f_801533a0(c);
R_010c097c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x10c0994u;
    f_80153360(c);
R_010c0994:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10c09b0u;
    f_80153400(c);
R_010c09b0:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010c0904;
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

void f_mr001_010c09e0(wp::Cpu& c) {
    WP_ENTER(0x10c09e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0a14u: goto R_010c0a14;
        case 0x10c0a1cu: goto R_010c0a1c;
        case 0x10c0a24u: goto R_010c0a24;
        case 0x10c0a2cu: goto R_010c0a2c;
        case 0x10c0a3cu: goto R_010c0a3c;
        case 0x10c0a54u: goto R_010c0a54;
        case 0x10c0a68u: goto R_010c0a68;
        case 0x10c0a6cu: goto R_010c0a6c;
        case 0x10c0a78u: goto R_010c0a78;
        case 0x10c0a88u: goto R_010c0a88;
        case 0x10c0a8cu: goto R_010c0a8c;
        case 0x10c0a90u: goto R_010c0a90;
        case 0x10c0ab4u: goto R_010c0ab4;
        case 0x10c0afcu: goto R_010c0afc;
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
    c.lr = 0x10c0a14u;
    f_80150850(c);
R_010c0a14:
    c.r[3] = 0x1u;
    c.lr = 0x10c0a1cu;
    f_80153e40(c);
R_010c0a1c:
    c.r[3] = 0x0u;
    c.lr = 0x10c0a24u;
    f_80153e90(c);
R_010c0a24:
    c.r[3] = 0x1u;
    c.lr = 0x10c0a2cu;
    f_80153f20(c);
R_010c0a2c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x10c0a3cu;
    f_80153ee0(c);
R_010c0a3c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x10c0a54u;
    f_801536f0(c);
R_010c0a54:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x10c0a68u;
    f_80153df0(c);
R_010c0a68:
    c.lr = 0x10c0a6cu;
    f_8014f020(c);
R_010c0a6c:
    c.r[3] = ((((g_mr001_bases[4] + 0x3428u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr001_bases[4] + 0x3428u) & 0xFFFFu);
    c.lr = 0x10c0a78u;
    f_8014e9e0(c);
R_010c0a78:
    c.r[4] = ((((g_mr001_bases[4] + 0x3440u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[4] + 0x3440u) & 0xFFFFu);
    c.lr = 0x10c0a88u;
    f_8014f200(c);
R_010c0a88:
    c.lr = 0x10c0a8cu;
    f_8004aa80(c);
R_010c0a8c:
    c.lr = 0x10c0a90u;
    f_800ee3c0(c);
R_010c0a90:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x10c0ab4u;
    f_800e95b0(c);
R_010c0ab4:
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
    c.lr = 0x10c0afcu;
    f_80150560(c);
R_010c0afc:
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

void f_mr001_010c0b80(wp::Cpu& c) {
    WP_ENTER(0x10c0b80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0bc0u: goto R_010c0bc0;
        case 0x10c0bd4u: goto R_010c0bd4;
        case 0x10c0be4u: goto R_010c0be4;
        case 0x10c0bf4u: goto R_010c0bf4;
        case 0x10c0c00u: goto R_010c0c00;
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
    c.lr = 0x10c0bc0u;
    f_8003d6b0(c);
R_010c0bc0:
    c.r[4] = ((((g_mr001_bases[5] + 0x2e728u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr001_bases[5] + 0x2e728u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10c0bd4u;
    f_801c79a4(c);
R_010c0bd4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010c0be4;
    c.lr = 0x10c0be4u;
    f_80034ac0(c);
L_010c0be4:
R_010c0be4:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10c0bf4u;
    f_80052170(c);
R_010c0bf4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10c0c00u;
    f_80052190(c);
R_010c0c00:
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

void f_mr001_010c0c30(wp::Cpu& c) {
    WP_ENTER(0x10c0c30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0c78u: goto R_010c0c78;
        case 0x10c0c80u: goto R_010c0c80;
        case 0x10c0c94u: goto R_010c0c94;
        case 0x10c0ca4u: goto R_010c0ca4;
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
    if (wp::cr_get(c, 2)) goto L_010c0ca4;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010c0c80;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c0c80;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10c0c78u;
    f_80034b10(c);
R_010c0c78:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10c0c80u;
    f_801c7a8c(c);
L_010c0c80:
R_010c0c80:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010c0c94;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10c0c94u;
    f_80051600(c);
L_010c0c94:
R_010c0c94:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010c0ca4;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10c0ca4u;
    f_801c7a8c(c);
L_010c0ca4:
R_010c0ca4:
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

void f_mr001_010c0cd0(wp::Cpu& c) {
    WP_ENTER(0x10c0cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10c0d14u: goto R_010c0d14;
        case 0x10c0d40u: goto R_010c0d40;
        case 0x10c0d4cu: goto R_010c0d4c;
        case 0x10c0d54u: goto R_010c0d54;
        case 0x10c0d60u: goto R_010c0d60;
        case 0x10c0d68u: goto R_010c0d68;
        case 0x10c0d70u: goto R_010c0d70;
        case 0x10c0d90u: goto R_010c0d90;
        case 0x10c0db0u: goto R_010c0db0;
        case 0x10c0db8u: goto R_010c0db8;
        case 0x10c0dc4u: goto R_010c0dc4;
        case 0x10c0df4u: goto R_010c0df4;
        case 0x10c0e10u: goto R_010c0e10;
        case 0x10c0e58u: goto R_010c0e58;
        case 0x10c0e74u: goto R_010c0e74;
        case 0x10c0e8cu: goto R_010c0e8c;
        case 0x10c0ea8u: goto R_010c0ea8;
        case 0x10c0eb8u: goto R_010c0eb8;
        case 0x10c0ebcu: goto R_010c0ebc;
        case 0x10c0ef4u: goto R_010c0ef4;
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
    c.lr = 0x10c0d14u;
    f_801c83b8(c);
R_010c0d14:
    c.r[29] = ((((g_mr001_bases[4] + 0x33e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr001_bases[4] + 0x33e0u) & 0xFFFFu);
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
    c.lr = 0x10c0d40u;
    f_8014c050(c);
R_010c0d40:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x10c0d4cu;
    f_80154c30(c);
R_010c0d4c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10c0d54u;
    f_8014b090(c);
R_010c0d54:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x10c0d60u;
    f_80154d30(c);
R_010c0d60:
    c.r[3] = 0x0u;
    c.lr = 0x10c0d68u;
    f_80154e50(c);
R_010c0d68:
    c.r[3] = 0x0u;
    c.lr = 0x10c0d70u;
    f_80151a30(c);
R_010c0d70:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10c0d90u;
    f_80151a60(c);
R_010c0d90:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10c0db0u;
    f_80151a60(c);
R_010c0db0:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10c0db8u;
    f_80034f00(c);
R_010c0db8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x10c0dc4u;
    f_80034f20(c);
R_010c0dc4:
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
    c.lr = 0x10c0df4u;
    f_8014f9d0(c);
R_010c0df4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10c0e10u;
    f_8014f780(c);
R_010c0e10:
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
L_010c0e2c:
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
    c.lr = 0x10c0e58u;
    f_80126450(c);
R_010c0e58:
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
    c.lr = 0x10c0e74u;
    f_8014b7e0(c);
R_010c0e74:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x10c0e8cu;
    f_80154e70(c);
R_010c0e8c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10c0ea8u;
    f_8014f780(c);
R_010c0ea8:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010c0e2c;
    }
    c.lr = 0x10c0eb8u;
    f_mr001_010c08c0(c);
R_010c0eb8:
    c.lr = 0x10c0ebcu;
    f_mr001_010c09e0(c);
R_010c0ebc:
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
    c.lr = 0x10c0ef4u;
    f_801c8404(c);
R_010c0ef4:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

