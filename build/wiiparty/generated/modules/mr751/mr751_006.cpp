#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr751_bases[17];
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
void f_8000e2a0(wp::Cpu& c);
void f_8000fc20(wp::Cpu& c);
void f_8000fc40(wp::Cpu& c);
void f_8000fc60(wp::Cpu& c);
void f_80010060(wp::Cpu& c);
void f_800104d0(wp::Cpu& c);
void f_80011270(wp::Cpu& c);
void f_80018e30(wp::Cpu& c);
void f_80019f20(wp::Cpu& c);
void f_80019fa0(wp::Cpu& c);
void f_8001a010(wp::Cpu& c);
void f_8001a890(wp::Cpu& c);
void f_8001aac0(wp::Cpu& c);
void f_8001b020(wp::Cpu& c);
void f_8001b0c0(wp::Cpu& c);
void f_8001b910(wp::Cpu& c);
void f_8001bfe0(wp::Cpu& c);
void f_8001c510(wp::Cpu& c);
void f_8001c520(wp::Cpu& c);
void f_8001e440(wp::Cpu& c);
void f_8001eb90(wp::Cpu& c);
void f_8001fb40(wp::Cpu& c);
void f_80022df0(wp::Cpu& c);
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
void f_800374b0(wp::Cpu& c);
void f_80038a00(wp::Cpu& c);
void f_8003b480(wp::Cpu& c);
void f_8003d6b0(wp::Cpu& c);
void f_8003f8f0(wp::Cpu& c);
void f_8003fb90(wp::Cpu& c);
void f_800402c0(wp::Cpu& c);
void f_800403a0(wp::Cpu& c);
void f_800403b0(wp::Cpu& c);
void f_80041c20(wp::Cpu& c);
void f_80041f70(wp::Cpu& c);
void f_80043060(wp::Cpu& c);
void f_80043120(wp::Cpu& c);
void f_80043290(wp::Cpu& c);
void f_80043490(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004a120(wp::Cpu& c);
void f_8004aa80(wp::Cpu& c);
void f_8004abf0(wp::Cpu& c);
void f_80051600(wp::Cpu& c);
void f_80052170(wp::Cpu& c);
void f_80052190(wp::Cpu& c);
void f_80053d40(wp::Cpu& c);
void f_80055290(wp::Cpu& c);
void f_80055bb0(wp::Cpu& c);
void f_80055d80(wp::Cpu& c);
void f_80063bb0(wp::Cpu& c);
void f_80065040(wp::Cpu& c);
void f_800656f0(wp::Cpu& c);
void f_80066250(wp::Cpu& c);
void f_80066cd0(wp::Cpu& c);
void f_80066db0(wp::Cpu& c);
void f_80066dd0(wp::Cpu& c);
void f_80066e70(wp::Cpu& c);
void f_800699d0(wp::Cpu& c);
void f_80069af0(wp::Cpu& c);
void f_80069c40(wp::Cpu& c);
void f_80069e30(wp::Cpu& c);
void f_80069e40(wp::Cpu& c);
void f_8006a800(wp::Cpu& c);
void f_8006a8f0(wp::Cpu& c);
void f_8006a940(wp::Cpu& c);
void f_8006b460(wp::Cpu& c);
void f_8006b590(wp::Cpu& c);
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
void f_80130cf0(wp::Cpu& c);
void f_80132670(wp::Cpu& c);
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
void f_80151d00(wp::Cpu& c);
void f_801520a0(wp::Cpu& c);
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
void f_801c8390(wp::Cpu& c);
void f_801c83a8(wp::Cpu& c);
void f_801c83ac(wp::Cpu& c);
void f_801c83b0(wp::Cpu& c);
void f_801c83b4(wp::Cpu& c);
void f_801c83b8(wp::Cpu& c);
void f_801c83dc(wp::Cpu& c);
void f_801c83f8(wp::Cpu& c);
void f_801c83fc(wp::Cpu& c);
void f_801c8400(wp::Cpu& c);
void f_801c8404(wp::Cpu& c);
void f_801cee24(wp::Cpu& c);
void f_801cf168(wp::Cpu& c);
void f_801d34c4(wp::Cpu& c);
void f_801d3590(wp::Cpu& c);
void f_801d3940(wp::Cpu& c);
void f_mr751_010117a0(wp::Cpu& c);
void f_mr751_01011f70(wp::Cpu& c);
void f_mr751_01012090(wp::Cpu& c);
void f_mr751_010124c0(wp::Cpu& c);
void f_mr751_01013070(wp::Cpu& c);
void f_mr751_01018560(wp::Cpu& c);
void f_mr751_01018720(wp::Cpu& c);
void f_mr751_01029ce0(wp::Cpu& c);
void f_mr751_0102a240(wp::Cpu& c);
void f_mr751_0102cc10(wp::Cpu& c);
void f_mr751_0102e150(wp::Cpu& c);
void f_mr751_0102e1f0(wp::Cpu& c);
void f_mr751_0102e270(wp::Cpu& c);
void f_mr751_0102e280(wp::Cpu& c);
void f_mr751_0102e290(wp::Cpu& c);
void f_mr751_0102e2a0(wp::Cpu& c);
void f_mr751_0102e2c0(wp::Cpu& c);
void f_mr751_01032fc0(wp::Cpu& c);
void f_mr751_01033190(wp::Cpu& c);
void f_mr751_01033210(wp::Cpu& c);
void f_mr751_01033230(wp::Cpu& c);
void f_mr751_01033b00(wp::Cpu& c);
void f_mr751_0103a490(wp::Cpu& c);
void f_mr751_0103c550(wp::Cpu& c);
void f_mr751_0104ca80(wp::Cpu& c);
void f_mr751_0104dac0(wp::Cpu& c);
void f_mr751_0104e6c0(wp::Cpu& c);
void f_mr751_01064c70(wp::Cpu& c);
void f_mr751_010775a0(wp::Cpu& c);
void f_mr751_01078b40(wp::Cpu& c);
void f_mr751_0107af90(wp::Cpu& c);
void f_mr751_0107be90(wp::Cpu& c);
void f_mr751_0107c980(wp::Cpu& c);
void f_mr751_0107f430(wp::Cpu& c);
void f_mr751_0107f4a0(wp::Cpu& c);
void f_mr751_0107f510(wp::Cpu& c);
void f_mr751_0107f530(wp::Cpu& c);
void f_mr751_0107f5a0(wp::Cpu& c);
void f_mr751_0107f660(wp::Cpu& c);
void f_mr751_0107fba0(wp::Cpu& c);
void f_mr751_0107ff40(wp::Cpu& c);
void f_mr751_0107ff60(wp::Cpu& c);
void f_mr751_01080270(wp::Cpu& c);
void f_mr751_01080280(wp::Cpu& c);
void f_mr751_01080290(wp::Cpu& c);
void f_mr751_01080690(wp::Cpu& c);
void f_mr751_01080760(wp::Cpu& c);
void f_mr751_01080970(wp::Cpu& c);
void f_mr751_01080a80(wp::Cpu& c);
void f_mr751_01080b00(wp::Cpu& c);
void f_mr751_01080b60(wp::Cpu& c);
void f_mr751_01080ca0(wp::Cpu& c);
void f_mr751_01080cb0(wp::Cpu& c);
void f_mr751_01080cc0(wp::Cpu& c);
void f_mr751_01080cd0(wp::Cpu& c);
void f_mr751_01080d90(wp::Cpu& c);
void f_mr751_01081010(wp::Cpu& c);
void f_mr751_01081040(wp::Cpu& c);
void f_mr751_01081060(wp::Cpu& c);
void f_mr751_010810c0(wp::Cpu& c);
void f_mr751_01081340(wp::Cpu& c);
void f_mr751_01081360(wp::Cpu& c);
void f_mr751_01081380(wp::Cpu& c);
void f_mr751_010813f0(wp::Cpu& c);
void f_mr751_01081470(wp::Cpu& c);
void f_mr751_01081490(wp::Cpu& c);
void f_mr751_010814b0(wp::Cpu& c);
void f_mr751_010814d0(wp::Cpu& c);
void f_mr751_01081510(wp::Cpu& c);
void f_mr751_01081530(wp::Cpu& c);
void f_mr751_01081550(wp::Cpu& c);
void f_mr751_01081570(wp::Cpu& c);
void f_mr751_01081590(wp::Cpu& c);
void f_mr751_010815b0(wp::Cpu& c);
void f_mr751_010815f0(wp::Cpu& c);
void f_mr751_01081660(wp::Cpu& c);
void f_mr751_01081670(wp::Cpu& c);
void f_mr751_01081680(wp::Cpu& c);
void f_mr751_01081690(wp::Cpu& c);
void f_mr751_010816a0(wp::Cpu& c);
void f_mr751_010816b0(wp::Cpu& c);
void f_mr751_010816c0(wp::Cpu& c);
void f_mr751_010816d0(wp::Cpu& c);
void f_mr751_010816e0(wp::Cpu& c);
void f_mr751_010816f0(wp::Cpu& c);
void f_mr751_01081700(wp::Cpu& c);
void f_mr751_01081760(wp::Cpu& c);
void f_mr751_010817c0(wp::Cpu& c);
void f_mr751_01081b70(wp::Cpu& c);
void f_mr751_01081dc0(wp::Cpu& c);
void f_mr751_01082250(wp::Cpu& c);
void f_mr751_01082260(wp::Cpu& c);
void f_mr751_01082270(wp::Cpu& c);
void f_mr751_01082420(wp::Cpu& c);
void f_mr751_010826b0(wp::Cpu& c);
void f_mr751_01082770(wp::Cpu& c);
void f_mr751_01082780(wp::Cpu& c);
void f_mr751_01082790(wp::Cpu& c);
void f_mr751_01082db0(wp::Cpu& c);
void f_mr751_01082ff0(wp::Cpu& c);
void f_mr751_01083240(wp::Cpu& c);
void f_mr751_01083580(wp::Cpu& c);
void f_mr751_010835d0(wp::Cpu& c);
void f_mr751_010835e0(wp::Cpu& c);
void f_mr751_01083690(wp::Cpu& c);
void f_mr751_01083730(wp::Cpu& c);
void f_mr751_01083740(wp::Cpu& c);
void f_mr751_01083750(wp::Cpu& c);
void f_mr751_01083760(wp::Cpu& c);
void f_mr751_01083770(wp::Cpu& c);
void f_mr751_010837e0(wp::Cpu& c);
void f_mr751_01083860(wp::Cpu& c);
void f_mr751_01083870(wp::Cpu& c);
void f_mr751_010838f0(wp::Cpu& c);
void f_mr751_01083900(wp::Cpu& c);
void f_mr751_01083910(wp::Cpu& c);
void f_mr751_01083920(wp::Cpu& c);
void f_mr751_01083930(wp::Cpu& c);
void f_mr751_01083940(wp::Cpu& c);
void f_mr751_01083950(wp::Cpu& c);
void f_mr751_01083960(wp::Cpu& c);
void f_mr751_010839d0(wp::Cpu& c);
void f_mr751_01083af0(wp::Cpu& c);
void f_mr751_01083c90(wp::Cpu& c);
void f_mr751_01083d40(wp::Cpu& c);
void f_mr751_01083de0(wp::Cpu& c);
void f_mr751_01084020(wp::Cpu& c);
void f_mr751_010840e0(wp::Cpu& c);
void f_mr751_01084180(wp::Cpu& c);
void f_mr751_010841b0(wp::Cpu& c);
void f_mr751_010841f0(wp::Cpu& c);
void f_mr751_01084200(wp::Cpu& c);
void f_mr751_01084260(wp::Cpu& c);
void f_mr751_01084370(wp::Cpu& c);
void f_mr751_01084580(wp::Cpu& c);
void f_mr751_01084670(wp::Cpu& c);
void f_mr751_010849b0(wp::Cpu& c);
void f_mr751_01084de0(wp::Cpu& c);
void f_mr751_01085060(wp::Cpu& c);
void f_mr751_010853a0(wp::Cpu& c);
void f_mr751_010855b0(wp::Cpu& c);
void f_mr751_010859e0(wp::Cpu& c);
void f_mr751_01085e30(wp::Cpu& c);
void f_mr751_01085e50(wp::Cpu& c);
void f_mr751_01085f40(wp::Cpu& c);
void f_mr751_01085fb0(wp::Cpu& c);
void f_mr751_010860d0(wp::Cpu& c);
void f_mr751_010862d0(wp::Cpu& c);
void f_mr751_01086490(wp::Cpu& c);
void f_mr751_01086c50(wp::Cpu& c);
void f_mr751_01086c90(wp::Cpu& c);
void f_mr751_01086e10(wp::Cpu& c);
void f_mr751_01086e20(wp::Cpu& c);
void f_mr751_01087280(wp::Cpu& c);
void f_mr751_01087290(wp::Cpu& c);
void f_mr751_010873a0(wp::Cpu& c);
void f_mr751_010873b0(wp::Cpu& c);
void f_mr751_01087450(wp::Cpu& c);
void f_mr751_01087470(wp::Cpu& c);
void f_mr751_010874b0(wp::Cpu& c);
void f_mr751_010874d0(wp::Cpu& c);
void f_mr751_01087500(wp::Cpu& c);
void f_mr751_01087530(wp::Cpu& c);
void f_mr751_01087560(wp::Cpu& c);
void f_mr751_01087590(wp::Cpu& c);
void f_mr751_010875c0(wp::Cpu& c);
void f_mr751_010875f0(wp::Cpu& c);
void f_mr751_010876b0(wp::Cpu& c);
void f_mr751_01087750(wp::Cpu& c);
void f_mr751_01087760(wp::Cpu& c);
void f_mr751_01087770(wp::Cpu& c);
void f_mr751_01087790(wp::Cpu& c);
void f_mr751_010877a0(wp::Cpu& c);
void f_mr751_010877b0(wp::Cpu& c);
void f_mr751_010877c0(wp::Cpu& c);
void f_mr751_01087880(wp::Cpu& c);
void f_mr751_01087950(wp::Cpu& c);
void f_mr751_010879f0(wp::Cpu& c);
void f_mr751_01087b00(wp::Cpu& c);
void f_mr751_01087b10(wp::Cpu& c);
void f_mr751_01087b20(wp::Cpu& c);
void f_mr751_01087b30(wp::Cpu& c);
void f_mr751_01087b50(wp::Cpu& c);
void f_mr751_01087c80(wp::Cpu& c);
void f_mr751_01087d80(wp::Cpu& c);
void f_mr751_01087ff0(wp::Cpu& c);
void f_mr751_01088090(wp::Cpu& c);
void f_mr751_010881a0(wp::Cpu& c);
void f_mr751_01088320(wp::Cpu& c);
void f_mr751_01088330(wp::Cpu& c);
void f_mr751_01088340(wp::Cpu& c);
void f_mr751_01088350(wp::Cpu& c);
void f_mr751_01088370(wp::Cpu& c);
void f_mr751_010884a0(wp::Cpu& c);
void f_mr751_01088790(wp::Cpu& c);
void f_mr751_01088b00(wp::Cpu& c);
void f_mr751_01088bd0(wp::Cpu& c);
void f_mr751_01088d20(wp::Cpu& c);
void f_mr751_01088d30(wp::Cpu& c);
void f_mr751_01088dd0(wp::Cpu& c);
void f_mr751_01088ed0(wp::Cpu& c);
void f_mr751_01088fc0(wp::Cpu& c);
void f_mr751_01089030(wp::Cpu& c);
void f_mr751_01089090(wp::Cpu& c);
void f_mr751_010891f0(wp::Cpu& c);
void f_mr751_01089410(wp::Cpu& c);
void f_mr751_01089500(wp::Cpu& c);
void f_mr751_01089600(wp::Cpu& c);
void f_mr751_010896e0(wp::Cpu& c);
void f_mr751_01089760(wp::Cpu& c);
void f_mr751_010897c0(wp::Cpu& c);
void f_mr751_01089920(wp::Cpu& c);
void f_mr751_01089b40(wp::Cpu& c);

void f_mr751_0107f430(wp::Cpu& c) {
    WP_ENTER(0x107f430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f468u: goto R_0107f468;
        case 0x107f478u: goto R_0107f478;
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
    if (wp::cr_get(c, 2)) goto L_0107f478;
    c.r[4] = ((((g_mr751_bases[5] + 0x2bbbcu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bbbcu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107f468u;
    f_8003b480(c);
R_0107f468:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f478;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f478u;
    f_801c7a8c(c);
L_0107f478:
R_0107f478:
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

void f_mr751_0107f4a0(wp::Cpu& c) {
    WP_ENTER(0x107f4a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f4e0u: goto R_0107f4e0;
        case 0x107f4f0u: goto R_0107f4f0;
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
    if (wp::cr_get(c, 2)) goto L_0107f4f0;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0107f4e0;
    c.r[4] = ((((g_mr751_bases[5] + 0x2bbbcu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bbbcu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107f4e0u;
    f_8003b480(c);
L_0107f4e0:
R_0107f4e0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f4f0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f4f0u;
    f_801c7a8c(c);
L_0107f4f0:
R_0107f4f0:
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

void f_mr751_0107f510(wp::Cpu& c) {
    WP_ENTER(0x107f510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    return;
}

void f_mr751_0107f530(wp::Cpu& c) {
    WP_ENTER(0x107f530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f574u: goto R_0107f574;
        case 0x107f584u: goto R_0107f584;
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
    if (wp::cr_get(c, 2)) goto L_0107f584;
    if (wp::cr_get(c, 2)) goto L_0107f574;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0107f574;
    c.r[4] = ((((g_mr751_bases[5] + 0x2bbbcu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bbbcu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107f574u;
    f_8003b480(c);
L_0107f574:
R_0107f574:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f584;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f584u;
    f_801c7a8c(c);
L_0107f584:
R_0107f584:
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

void f_mr751_0107f5a0(wp::Cpu& c) {
    WP_ENTER(0x107f5a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f5f0u: goto R_0107f5f0;
        case 0x107f618u: goto R_0107f618;
        case 0x107f624u: goto R_0107f624;
        case 0x107f630u: goto R_0107f630;
        case 0x107f640u: goto R_0107f640;
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
    if (wp::cr_get(c, 2)) goto L_0107f640;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0107f5f0;
    if (wp::cr_get(c, 2)) goto L_0107f5f0;
    if (wp::cr_get(c, 2)) goto L_0107f5f0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f5f0;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107f5f0u;
    f_801c7a8c(c);
L_0107f5f0:
R_0107f5f0:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f618;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f618;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f618u;
    wp::call(c, c.ctr);
L_0107f618:
R_0107f618:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x107f624u;
    f_80063bb0(c);
R_0107f624:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x107f630u;
    f_mr751_01033b00(c);
R_0107f630:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f640;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f640u;
    f_801c7a8c(c);
L_0107f640:
R_0107f640:
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

void f_mr751_0107f660(wp::Cpu& c) {
    WP_ENTER(0x107f660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f674u: goto R_0107f674;
        case 0x107f694u: goto R_0107f694;
        case 0x107f72cu: goto R_0107f72c;
        case 0x107f774u: goto R_0107f774;
        case 0x107f7d0u: goto R_0107f7d0;
        case 0x107f864u: goto R_0107f864;
        case 0x107f8acu: goto R_0107f8ac;
        case 0x107f908u: goto R_0107f908;
        case 0x107f94cu: goto R_0107f94c;
        case 0x107f984u: goto R_0107f984;
        case 0x107fa20u: goto R_0107fa20;
        case 0x107fa64u: goto R_0107fa64;
        case 0x107fac4u: goto R_0107fac4;
        case 0x107fb08u: goto R_0107fb08;
        case 0x107fb64u: goto R_0107fb64;
        case 0x107fb80u: goto R_0107fb80;
        case 0x107fb88u: goto R_0107fb88;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffe60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x1a4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x107f674u;
    f_801c83ac(c);
R_0107f674:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x107f694u;
    wp::call(c, c.ctr);
R_0107f694:
    c.r[4] = ((((g_mr751_bases[5] + 0x2b010u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2b010u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f6dc;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f6dc;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f6dc;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107f7d0;
L_0107f6dc:
    c.r[3] = ((((g_mr751_bases[5] + 0x2b010u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b010u) & 0xFFFFu);
    c.r[6] = 0x3u;
    c.r[25] = c.r[3] + c.r[30];
    ea = c.r[3] + c.r[30];
    c.r[5] = wp::rd32(ea);
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x158u;
    wp::wr32(ea, c.r[24]);
    c.r[4] = c.r[1] + 0x158u;
    ea = c.r[1] + 0x15cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x160u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x164u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x168u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x16cu;
    wp::wr8(ea, c.r[24]);
    ea = c.r[1] + 0x170u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f72cu;
    wp::call(c, c.ctr);
R_0107f72c:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107f774;
    c.r[5] = 0xffffffffu;
    c.r[0] = 0x2u;
    ea = c.r[1] + 0x13cu;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x13cu;
    ea = c.r[1] + 0x140u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x144u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x148u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x14cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x150u;
    wp::wr8(ea, c.r[24]);
    ea = c.r[1] + 0x154u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f774u;
    wp::call(c, c.ctr);
L_0107f774:
R_0107f774:
    c.r[3] = ((((g_mr751_bases[5] + 0x2b010u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b010u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107f7d0;
    c.r[7] = 0x0u;
    c.r[5] = 0xffffffffu;
    c.r[6] = 0x3u;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x120u;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x120u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x128u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x12cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x130u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x134u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x138u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f7d0u;
    wp::call(c, c.ctr);
L_0107f7d0:
R_0107f7d0:
    c.r[4] = ((((g_mr751_bases[5] + 0x2b070u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2b070u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f810;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f810;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f810;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107f984;
L_0107f810:
    c.r[3] = ((((g_mr751_bases[5] + 0x2b070u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b070u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.r[29] = c.r[3] + c.r[30];
    ea = c.r[3] + c.r[30];
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = 0x3u;
    ea = c.r[1] + 0x104u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x104u;
    ea = c.r[1] + 0x108u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x110u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x114u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x118u;
    wp::wr8(ea, c.r[25]);
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[25]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f864u;
    wp::call(c, c.ctr);
R_0107f864:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107f8ac;
    c.r[5] = 0xffffffffu;
    c.r[0] = 0x2u;
    ea = c.r[1] + 0xe8u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0xe8u;
    ea = c.r[1] + 0xecu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xf0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xf4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xf8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xfcu;
    wp::wr8(ea, c.r[25]);
    ea = c.r[1] + 0x100u;
    wp::wr32(ea, c.r[25]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f8acu;
    wp::call(c, c.ctr);
L_0107f8ac:
R_0107f8ac:
    c.r[3] = ((((g_mr751_bases[5] + 0x2b070u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b070u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107f908;
    c.r[7] = 0x1u;
    c.r[5] = 0xffffffffu;
    c.r[6] = 0x3u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xccu;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0xccu;
    ea = c.r[1] + 0xd0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0xd4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xd8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xdcu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0xe0u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0xe4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f908u;
    wp::call(c, c.ctr);
L_0107f908:
R_0107f908:
    c.r[29] = 0xffffffffu;
    c.r[25] = 0x0u;
    c.r[30] = 0x1u;
    c.r[0] = 0x4u;
    ea = c.r[1] + 0xb0u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0xb0u;
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xb8u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0xbcu;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0xc0u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0xc4u;
    wp::wr8(ea, c.r[25]);
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[25]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f94cu;
    wp::call(c, c.ctr);
R_0107f94c:
    c.r[0] = 0x5u;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x94u;
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0xa0u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0xa8u;
    wp::wr8(ea, c.r[25]);
    ea = c.r[1] + 0xacu;
    wp::wr32(ea, c.r[25]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f984u;
    wp::call(c, c.ctr);
L_0107f984:
R_0107f984:
    c.r[4] = ((((g_mr751_bases[5] + 0x2b0d0u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2b0d0u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f9cc;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f9cc;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107f9cc;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fb08;
L_0107f9cc:
    c.r[4] = ((((g_mr751_bases[5] + 0x2b0d0u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2b0d0u) & 0xFFFFu);
    c.r[25] = 0x2u;
    c.r[31] = c.r[4] + c.r[29];
    ea = c.r[4] + c.r[29];
    c.r[5] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ea;
    c.r[6] = 0x3u;
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[25]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x78u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8cu;
    wp::wr8(ea, c.r[30]);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fa20u;
    wp::call(c, c.ctr);
R_0107fa20:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fa64;
    c.r[0] = 0xffffffffu;
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x5cu;
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[25]);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x70u;
    wp::wr8(ea, c.r[30]);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fa64u;
    wp::call(c, c.ctr);
L_0107fa64:
R_0107fa64:
    c.r[3] = ((((g_mr751_bases[5] + 0x2b0d0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b0d0u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fac4;
    c.r[6] = 0xffffffffu;
    c.r[3] = 0x2u;
    c.r[7] = 0x3u;
    c.r[5] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x54u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fac4u;
    wp::call(c, c.ctr);
L_0107fac4:
R_0107fac4:
    c.r[7] = 0x3u;
    c.r[6] = 0xffffffffu;
    c.r[5] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x24u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x38u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fb08u;
    wp::call(c, c.ctr);
L_0107fb08:
R_0107fb08:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fb64;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fb64;
    c.r[7] = 0x3u;
    c.r[6] = 0xffffffffu;
    c.r[5] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xb8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fb64u;
    wp::call(c, c.ctr);
L_0107fb64:
R_0107fb64:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fb80u;
    wp::call(c, c.ctr);
R_0107fb80:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x107fb88u;
    f_801c83f8(c);
R_0107fb88:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mr751_0107fba0(wp::Cpu& c) {
    WP_ENTER(0x107fba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fc5cu: goto R_0107fc5c;
        case 0x107fc60u: goto R_0107fc60;
        case 0x107fcc0u: goto R_0107fcc0;
        case 0x107fcc4u: goto R_0107fcc4;
        case 0x107fd84u: goto R_0107fd84;
        case 0x107fd88u: goto R_0107fd88;
        case 0x107fd90u: goto R_0107fd90;
        case 0x107fdb8u: goto R_0107fdb8;
        case 0x107fdbcu: goto R_0107fdbc;
        case 0x107ff14u: goto R_0107ff14;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0x304u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x308u;
    c.r[5] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_0107fc2c;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0107fc1c;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0x14u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0107fc1c:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_0107ff14;
L_0107fc2c:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0107fc60;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2ab84u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2ab84u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107fc5cu;
    f_801cee24(c);
R_0107fc5c:
    c.lr = 0x107fc60u;
    f_801d3940(c);
L_0107fc60:
R_0107fc60:
    c.r[5] = 0x0u;
    c.r[4] = c.r[29] + 0x308u;
    c.r[3] = 0x9250000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] + 0xffff9249u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x304u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x308u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0107fcc4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2ab84u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2ab84u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107fcc0u;
    f_801cee24(c);
R_0107fcc0:
    c.lr = 0x107fcc4u;
    f_801d3940(c);
L_0107fcc4:
R_0107fcc4:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107fd14;
    c.r[5] = c.r[31] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107fd08;
    c.r[3] = c.r[1] + 0x10u;
L_0107fd08:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0107fd58;
L_0107fd14:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107fd50;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0107fd44;
    c.r[3] = c.r[1] + 0x10u;
L_0107fd44:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0107fd58;
L_0107fd50:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_0107fd58:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0107fd88;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2ab84u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2ab84u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107fd84u;
    f_801cee24(c);
R_0107fd84:
    c.lr = 0x107fd88u;
    f_801d3940(c);
L_0107fd88:
R_0107fd88:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x107fd90u;
    f_801c79a4(c);
R_0107fd90:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0107fdbc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2bc50u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bc50u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107fdb8u;
    f_801cee24(c);
R_0107fdb8:
    c.lr = 0x107fdbcu;
    f_801d3940(c);
L_0107fdbc:
R_0107fdbc:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = c.r[0] * 0x1cu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[29] + 0x304u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[0] * 0x1cu;
    c.r[0] = c.r[28] + c.r[0];
    c.r[3] = c.r[3] + c.r[0];
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107fe1c;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x14u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0107fe1c:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = 0x1cu;
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[3] * 0x1cu;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[29] + 0x304u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x300u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[5] * 0x1cu;
    c.r[6] = c.r[4] + c.r[3];
    c.r[5] = c.r[7] + c.r[5];
    c.r[3] = c.r[5] + 0x1bu;
    c.r[3] = c.r[3] - c.r[7];
    c.r[3] = wp::divwu(c.r[3], c.r[0]);
    c.ctr = c.r[3];
    wp::compare_unsigned(c, 0, c.r[5], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_0107fec8;
    c.r[0] = c.r[0] | 0x0u;
L_0107fe68:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_0107feac;
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[6] + 0x14u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[5] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0107feac:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0107fe68;
    }
L_0107fec8:
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[29] + 0x308u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[29] + 0x308u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x300u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x304u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0107ff14;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ff14;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107ff14u;
    f_801c7a8c(c);
L_0107ff14:
R_0107ff14:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr751_0107ff40(wp::Cpu& c) {
    WP_ENTER(0x107ff40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x304u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[0] = 0xffffffffu;
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] - c.r[5];
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x2f0u;
    wp::wr32(ea, c.r[4]);
    f_8001a010(c);
    return;
}

void f_mr751_0107ff60(wp::Cpu& c) {
    WP_ENTER(0x107ff60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x304u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x92490000u;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = c.r[4] + 0x2493u;
    c.r[0] = c.r[0] * 0x1cu;
    c.r[6] = c.r[5] + c.r[0];
    c.r[0] = c.r[6] - c.r[5];
    c.r[4] = wp::mulhw(c.r[7], c.r[0]);
    c.r[0] = c.r[4] + c.r[0];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[4];
    c.r[0] = wp::add_carry(c, c.r[0], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080254;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_01080254;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_010801f4;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_01080004;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_0107fff8;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fff8;
    c.r[9] = 0x0u;
L_0107fff8:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080004;
    c.r[7] = 0x1u;
L_01080004:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010801f4;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010801f4;
L_01080028:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0x14u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x30u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0x30u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x38u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x38u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x40u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x48u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x48u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4cu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0x4cu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x50u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x50u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x58u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x58u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x5cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x60u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x60u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x64u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x64u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x68u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0x68u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x6cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x6cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x70u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x70u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x74u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x74u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x78u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x78u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x80u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x80u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x84u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0x84u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x88u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x88u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x8cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x8cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x90u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x90u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x94u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x98u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x98u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x9cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x9cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xa0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0xa0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xa8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xa8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xacu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xacu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xb0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xb0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xb4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xb8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xb8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xbcu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0xbcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0xc0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xc0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xc4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xc4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xc8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xc8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xccu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xccu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xd0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xd0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xd4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xd4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xd8u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0xd8u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0xdcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xe0u;
    ea = c.r[5] + 0xdcu;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + 0xe0u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01080028;
    }
L_010801f4:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01080254;
L_01080210:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[5] + 0x14u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1cu;
    ea = c.r[5] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + 0x1cu;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01080210;
    }
L_01080254:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr751_01080270(wp::Cpu& c) {
    WP_ENTER(0x1080270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr751_01080280(wp::Cpu& c) {
    WP_ENTER(0x1080280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mr751_01080290(wp::Cpu& c) {
    WP_ENTER(0x1080290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080390u: goto R_01080390;
        case 0x10803c0u: goto R_010803c0;
        case 0x10803dcu: goto R_010803dc;
        case 0x10803f8u: goto R_010803f8;
        case 0x1080438u: goto R_01080438;
        case 0x1080440u: goto R_01080440;
        case 0x108044cu: goto R_0108044c;
        case 0x1080450u: goto R_01080450;
        case 0x10804ccu: goto R_010804cc;
        case 0x10804dcu: goto R_010804dc;
        case 0x10804f8u: goto R_010804f8;
        case 0x108050cu: goto R_0108050c;
        case 0x1080554u: goto R_01080554;
        case 0x1080588u: goto R_01080588;
        case 0x108059cu: goto R_0108059c;
        case 0x10805acu: goto R_010805ac;
        case 0x10805c0u: goto R_010805c0;
        case 0x10805e0u: goto R_010805e0;
        case 0x1080610u: goto R_01080610;
        case 0x1080640u: goto R_01080640;
        case 0x1080660u: goto R_01080660;
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
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr751_bases[4] + 0x2de8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr751_bases[4] + 0x2de8u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080324;
    c.r[4] = (((0x802f5ed0u + 0x8000u) >> 16) << 16);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16(0x802f5ed0u & 0xFFFFu);
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] ^ 0x80000000u;
    ea = c.r[31] + 0x70u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x178u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0x30u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[31] + 0x174u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[4] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[4] = c.f[4];
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x2dcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[3] = wp::round_single(c.f[3] / c.f[4]);
    c.ps1[3] = c.f[3];
    c.f[2] = wp::round_single(c.f[2] * wp::force25(c.f[3]));
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[1] + c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01080318;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01080318:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_01080374;
L_01080324:
    c.r[4] = (((0x802f5ed0u + 0x8000u) >> 16) << 16);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16(0x802f5ed0u & 0xFFFFu);
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] ^ 0x80000000u;
    ea = c.r[31] + 0x70u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x178u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0x30u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[31] + 0x174u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[4] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[4] = c.f[4];
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[3] = wp::round_single(c.f[3] / c.f[4]);
    c.ps1[3] = c.f[3];
    c.f[2] = wp::round_single(c.f[2] * wp::force25(c.f[3]));
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01080374;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01080374:
    ea = c.r[3] + 0x2e0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x1080390u;
    f_mr751_0102a240(c);
R_01080390:
    ea = c.r[30] + 0x2dcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x17cu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01080614;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080458;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10803c0u;
    f_80053d40(c);
R_010803c0:
    ea = c.r[3] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10803dcu;
    f_8006b460(c);
R_010803dc:
    ea = c.r[31] + 0x184u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x180u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x24u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[2] * wp::force25(c.f[1]));
    c.ps1[1] = c.f[1];
    c.f[31] = wp::round_single(c.f[0] + c.f[1]);
    c.ps1[31] = c.f[31];
    c.lr = 0x10803f8u;
    f_8006b460(c);
R_010803f8:
    ea = c.r[31] + 0x184u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[31] + 0x170u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[3] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x188u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x20u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.f[2] = wp::round_single(c.f[2] * wp::force25(c.f[3]));
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    c.f[0] = wp::round_single(c.f[1] + c.f[2]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[30] + 0x2d4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080438u;
    wp::call(c, c.ctr);
R_01080438:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080440u;
    f_80071fe0(c);
R_01080440:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x108044cu;
    f_80071fe0(c);
R_0108044c:
    c.lr = 0x1080450u;
    f_8006b590(c);
R_01080450:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_01080458:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010805e0;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_010805e0;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080484;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_01080484:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010804b8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010804c4;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010804fc;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_010805a0;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_010805c4;
    goto L_010805e0;
L_010804b8:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_010805e0;
L_010804c4:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10804ccu;
    f_80055bb0(c);
R_010804cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010805e0;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10804dcu;
    f_80055d80(c);
R_010804dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010805e0;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10804f8u;
    wp::call(c, c.ctr);
R_010804f8:
    goto L_010805e0;
L_010804fc:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108050c;
    c.lr = 0x108050cu;
    f_80019fa0(c);
L_0108050c:
R_0108050c:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080560;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080560;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_01080538;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_0108053c;
L_01080538:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_0108053c:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x1080554u;
    f_80055290(c);
R_01080554:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_01080560:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080588;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080588u;
    wp::call(c, c.ctr);
L_01080588:
R_01080588:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108059cu;
    wp::call(c, c.ctr);
R_0108059c:
    goto L_010805e0;
L_010805a0:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10805acu;
    f_80019f20(c);
R_010805ac:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10805c0u;
    wp::call(c, c.ctr);
R_010805c0:
    goto L_010805e0;
L_010805c4:
    ea = c.r[30] + 0x2fcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10805e0u;
    wp::call(c, c.ctr);
L_010805e0:
R_010805e0:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010805f4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_010805f4:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x1080610u;
    f_mr751_01029ce0(c);
R_01080610:
    goto L_01080664;
L_01080614:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01080664;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080664;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x1080640u;
    f_80055290(c);
R_01080640:
    c.r[31] = 0x1u;
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080660u;
    wp::call(c, c.ctr);
R_01080660:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_01080664:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x50u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr751_01080690(wp::Cpu& c) {
    WP_ENTER(0x1080690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10806b4u: goto R_010806b4;
        case 0x10806dcu: goto R_010806dc;
        case 0x10806ecu: goto R_010806ec;
        case 0x1080704u: goto R_01080704;
        case 0x1080718u: goto R_01080718;
        case 0x1080734u: goto R_01080734;
        case 0x108073cu: goto R_0108073c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1000u;
    c.r[5] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10806b4u;
    f_8001b910(c);
R_010806b4:
    c.r[3] = ((((g_mr751_bases[6] + 0x4ebcu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2b4e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[6] + 0x4ebcu) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2b4e0u) & 0xFFFFu);
    c.r[0] = c.r[4] + 0x14u;
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x1u;
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10806dcu;
    f_8001c510(c);
R_010806dc:
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10806ecu;
    f_8001c520(c);
R_010806ec:
    c.r[31] = ((((g_mr751_bases[4] + 0x2e1cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + wp::sign_extend16((g_mr751_bases[4] + 0x2e1cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x1080704u;
    f_8001e440(c);
R_01080704:
    ea = c.r[31] + wp::sign_extend16((g_mr751_bases[4] + 0x2e1cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x1080718u;
    f_8001eb90(c);
R_01080718:
    c.r[3] = ((((g_mr751_bases[5] + 0x2b130u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[4] + 0x2de8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b130u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x2de8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.lr = 0x1080734u;
    f_8001fb40(c);
R_01080734:
    c.r[3] = 0x1000u;
    c.lr = 0x108073cu;
    f_8004a120(c);
R_0108073c:
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

void f_mr751_01080760(wp::Cpu& c) {
    WP_ENTER(0x1080760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080774u: goto R_01080774;
        case 0x108079cu: goto R_0108079c;
        case 0x10807d8u: goto R_010807d8;
        case 0x1080820u: goto R_01080820;
        case 0x108083cu: goto R_0108083c;
        case 0x10808a0u: goto R_010808a0;
        case 0x10808bcu: goto R_010808bc;
        case 0x10808ecu: goto R_010808ec;
        case 0x1080908u: goto R_01080908;
        case 0x108091cu: goto R_0108091c;
        case 0x108093cu: goto R_0108093c;
        case 0x1080954u: goto R_01080954;
        case 0x1080960u: goto R_01080960;
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
    c.lr = 0x1080774u;
    f_801c83b4(c);
R_01080774:
    c.r[28] = ((((g_mr751_bases[5] + 0x2aaf0u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[5] | c.r[5];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr751_bases[5] + 0x2aaf0u) & 0xFFFFu);
    c.r[26] = c.r[4] | c.r[4];
    c.r[7] = c.r[6] | c.r[6];
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] + 0x644u;
    c.r[4] = c.r[28] + 0x658u;
    c.lr = 0x108079cu;
    f_8003f8f0(c);
R_0108079c:
    c.r[4] = ((((g_mr751_bases[5] + 0x2b9b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x10000u;
    c.r[29] = 0x0u;
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2b9b0u) & 0xFFFFu);
    c.r[0] = c.r[3] + 0xffff8000u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[31] + 0x120u;
    c.r[4] = c.r[0] & 0xffffu;
    c.r[5] = 0x2000u;
    ea = c.r[31] + 0x118u;
    wp::wr32(ea, c.r[29]);
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    ea = c.r[31] + 0x11cu;
    wp::wr32(ea, c.r[29]);
    c.lr = 0x10807d8u;
    f_80069af0(c);
R_010807d8:
    c.r[3] = ((((g_mr751_bases[5] + 0x2b1a0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b1a0u) & 0xFFFFu);
    c.r[30] = 0x1u;
    c.r[4] = c.r[3] + 0x1f8u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x120u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[28] + 0x670u;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x2e4u;
    wp::wr8(ea, c.r[29]);
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[30]);
    ea = c.r[31] + 0x2e6u;
    wp::wr16(ea, c.r[26]);
    ea = c.r[31] + 0x2ecu;
    wp::wr32(ea, c.r[29]);
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080820u;
    wp::call(c, c.ctr);
R_01080820:
    ea = c.r[31] + 0x2d8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] + 0x684u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108083cu;
    wp::call(c, c.ctr);
R_0108083c:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x2e6u;
    c.r[4] = wp::rd16(ea);
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    ea = c.r[31] + 0x2dcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[29] = 0xffffffffu;
    if (!wp::cr_get(c, 2)) goto L_0108085c;
    c.r[29] = 0x0u;
L_0108085c:
    c.r[0] = 0x1u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080870;
    c.r[29] = 0x1u;
L_01080870:
    c.r[0] = 0x2u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080884;
    c.r[29] = 0x2u;
L_01080884:
    c.r[0] = 0x3u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080898;
    c.r[29] = 0x3u;
L_01080898:
    c.r[3] = 0x350u;
    c.lr = 0x10808a0u;
    f_801c79a4(c);
R_010808a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010808bc;
    c.r[0] = c.r[27] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10808bcu;
    f_mr751_0103a490(c);
L_010808bc:
R_010808bc:
    ea = c.r[31] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010808ec;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x2ecu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010808ec;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10808ecu;
    wp::call(c, c.ctr);
L_010808ec:
R_010808ec:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x6a0u;
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x2ecu;
    c.r[28] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080908u;
    wp::call(c, c.ctr);
R_01080908:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = 0x1u;
    c.lr = 0x108091cu;
    f_80043490(c);
R_0108091c:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108093c;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x314u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108093cu;
    wp::call(c, c.ctr);
L_0108093c:
R_0108093c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080954u;
    wp::call(c, c.ctr);
R_01080954:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1080960u;
    f_801c8400(c);
R_01080960:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01080970(wp::Cpu& c) {
    WP_ENTER(0x1080970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10809bcu: goto R_010809bc;
        case 0x10809c8u: goto R_010809c8;
        case 0x1080a00u: goto R_01080a00;
        case 0x1080a3cu: goto R_01080a3c;
        case 0x1080a48u: goto R_01080a48;
        case 0x1080a58u: goto R_01080a58;
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
    if (wp::cr_get(c, 2)) goto L_01080a58;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010809bc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010809bc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10809bcu;
    wp::call(c, c.ctr);
L_010809bc:
R_010809bc:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x10809c8u;
    f_80069c40(c);
R_010809c8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080a48;
    c.r[3] = ((((g_mr751_bases[5] + 0x2b9b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2b9b0u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01080a00;
L_010809e0:
    ea = c.r[30] + 0x114u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x158u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xcu;
    c.ctr = c.r[12];
    c.lr = 0x1080a00u;
    wp::call(c, c.ctr);
L_01080a00:
R_01080a00:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010809e0;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080a3c;
    if (wp::cr_get(c, 2)) goto L_01080a3c;
    if (wp::cr_get(c, 2)) goto L_01080a3c;
    if (wp::cr_get(c, 2)) goto L_01080a3c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080a3c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080a3cu;
    f_801c7a8c(c);
L_01080a3c:
R_01080a3c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1080a48u;
    f_8003fb90(c);
L_01080a48:
R_01080a48:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01080a58;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1080a58u;
    f_801c7a8c(c);
L_01080a58:
R_01080a58:
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

void f_mr751_01080a80(wp::Cpu& c) {
    WP_ENTER(0x1080a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080aacu: goto R_01080aac;
        case 0x1080ab8u: goto R_01080ab8;
        case 0x1080ac4u: goto R_01080ac4;
        case 0x1080ad0u: goto R_01080ad0;
        case 0x1080ae8u: goto R_01080ae8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01080abc;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1080aacu;
    f_80069e30(c);
R_01080aac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1080ab8u;
    f_800403b0(c);
R_01080ab8:
    goto L_01080ad0;
L_01080abc:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1080ac4u;
    f_80069e40(c);
R_01080ac4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1080ad0u;
    f_800403a0(c);
L_01080ad0:
R_01080ad0:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080ae8u;
    wp::call(c, c.ctr);
R_01080ae8:
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

void f_mr751_01080b00(wp::Cpu& c) {
    WP_ENTER(0x1080b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080b20u: goto R_01080b20;
        case 0x1080b40u: goto R_01080b40;
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
    c.lr = 0x1080b20u;
    f_800402c0(c);
R_01080b20:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080b40;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080b40u;
    wp::call(c, c.ctr);
L_01080b40:
R_01080b40:
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

void f_mr751_01080b60(wp::Cpu& c) {
    WP_ENTER(0x1080b60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080bb0u: goto R_01080bb0;
        case 0x1080bccu: goto R_01080bcc;
        case 0x1080c0cu: goto R_01080c0c;
        case 0x1080c24u: goto R_01080c24;
        case 0x1080c2cu: goto R_01080c2c;
        case 0x1080c44u: goto R_01080c44;
        case 0x1080c4cu: goto R_01080c4c;
        case 0x1080c78u: goto R_01080c78;
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
    c.r[31] = ((((g_mr751_bases[4] + 0x2de8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr751_bases[4] + 0x2de8u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080c78;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080bb4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080bb0u;
    f_80071fe0(c);
R_01080bb0:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_01080bb4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080bccu;
    wp::call(c, c.ctr);
R_01080bcc:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080be4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_01080bec;
L_01080be4:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_01080bec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x1080c0cu;
    wp::call(c, c.ctr);
R_01080c0c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080c24u;
    wp::call(c, c.ctr);
R_01080c24:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080c2cu;
    f_80043060(c);
R_01080c2c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080c44u;
    wp::call(c, c.ctr);
R_01080c44:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080c4cu;
    f_80043120(c);
R_01080c4c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080c78;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080c78;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080c78u;
    wp::call(c, c.ctr);
L_01080c78:
R_01080c78:
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

void f_mr751_01080ca0(wp::Cpu& c) {
    WP_ENTER(0x1080ca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mr751_01080cb0(wp::Cpu& c) {
    WP_ENTER(0x1080cb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr751_01080cc0(wp::Cpu& c) {
    WP_ENTER(0x1080cc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr751_01080cd0(wp::Cpu& c) {
    WP_ENTER(0x1080cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080cf8u: goto R_01080cf8;
        case 0x1080d00u: goto R_01080d00;
        case 0x1080d14u: goto R_01080d14;
        case 0x1080d24u: goto R_01080d24;
        case 0x1080d38u: goto R_01080d38;
        case 0x1080d58u: goto R_01080d58;
        case 0x1080d60u: goto R_01080d60;
        case 0x1080d74u: goto R_01080d74;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080cf8u;
    wp::call(c, c.ctr);
R_01080cf8:
    goto L_01080d00;
L_01080cfc:
    c.lr = 0x1080d00u;
    f_8006a940(c);
L_01080d00:
R_01080d00:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080d14u;
    wp::call(c, c.ctr);
R_01080d14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01080cfc;
    }
    goto L_01080d24;
L_01080d20:
    c.lr = 0x1080d24u;
    f_8006a940(c);
L_01080d24:
R_01080d24:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080d38u;
    wp::call(c, c.ctr);
R_01080d38:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01080d20;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080d58u;
    wp::call(c, c.ctr);
R_01080d58:
    goto L_01080d60;
L_01080d5c:
    c.lr = 0x1080d60u;
    f_8006a940(c);
L_01080d60:
R_01080d60:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080d74u;
    wp::call(c, c.ctr);
R_01080d74:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01080d5c;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01080d90(wp::Cpu& c) {
    WP_ENTER(0x1080d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080da4u: goto R_01080da4;
        case 0x1080dc4u: goto R_01080dc4;
        case 0x1080e14u: goto R_01080e14;
        case 0x1080e38u: goto R_01080e38;
        case 0x1080e44u: goto R_01080e44;
        case 0x1080e58u: goto R_01080e58;
        case 0x1080e78u: goto R_01080e78;
        case 0x1080e88u: goto R_01080e88;
        case 0x1080e94u: goto R_01080e94;
        case 0x1080ea4u: goto R_01080ea4;
        case 0x1080ea8u: goto R_01080ea8;
        case 0x1080eb0u: goto R_01080eb0;
        case 0x1080edcu: goto R_01080edc;
        case 0x1080ee8u: goto R_01080ee8;
        case 0x1080ef4u: goto R_01080ef4;
        case 0x1080f04u: goto R_01080f04;
        case 0x1080f08u: goto R_01080f08;
        case 0x1080f10u: goto R_01080f10;
        case 0x1080f40u: goto R_01080f40;
        case 0x1080f68u: goto R_01080f68;
        case 0x1080f74u: goto R_01080f74;
        case 0x1080f84u: goto R_01080f84;
        case 0x1080f88u: goto R_01080f88;
        case 0x1080f90u: goto R_01080f90;
        case 0x1080fccu: goto R_01080fcc;
        case 0x1080fe8u: goto R_01080fe8;
        case 0x1080ff8u: goto R_01080ff8;
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
    c.lr = 0x1080da4u;
    f_801c83b0(c);
R_01080da4:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080dd8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080dc4u;
    wp::call(c, c.ctr);
R_01080dc4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080ff0;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_01080ff0;
L_01080dd8:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080ff0;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01080ff0;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080ff0;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080e14u;
    wp::call(c, c.ctr);
R_01080e14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080e38;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080e38u;
    wp::call(c, c.ctr);
L_01080e38:
R_01080e38:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x1080e44u;
    f_8000e2a0(c);
R_01080e44:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_01080e50:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080e58u;
    f_8000fc20(c);
R_01080e58:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080ebc;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080e80;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080e78u;
    f_8000fc40(c);
R_01080e78:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080ebc;
L_01080e80:
    c.r[26] = 0x0u;
    c.lr = 0x1080e88u;
    f_8000dd70(c);
R_01080e88:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080e94u;
    f_8000fc20(c);
R_01080e94:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01080ebc;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080ea4u;
    f_8000fc20(c);
R_01080ea4:
    c.lr = 0x1080ea8u;
    f_800699d0(c);
R_01080ea8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080eb0u;
    f_80066cd0(c);
R_01080eb0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080ebc;
    c.r[27] = 0x1u;
L_01080ebc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080e50;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080f28;
    c.r[25] = 0x0u;
L_01080ed4:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080edcu;
    f_8000fc40(c);
R_01080edc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080f1c;
    c.lr = 0x1080ee8u;
    f_8000dd70(c);
R_01080ee8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080ef4u;
    f_8000fc20(c);
R_01080ef4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01080f1c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080f04u;
    f_8000fc20(c);
R_01080f04:
    c.lr = 0x1080f08u;
    f_800699d0(c);
R_01080f08:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080f10u;
    f_80066cd0(c);
R_01080f10:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080f1c;
    c.r[27] = 0x1u;
L_01080f1c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080ed4;
    }
L_01080f28:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080fa8;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_01080f38:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1080f40u;
    f_8000fc40(c);
R_01080f40:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080f4c;
    c.r[25] = 0x0u;
L_01080f4c:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080f38;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080fa8;
    c.r[25] = 0x0u;
L_01080f64:
    c.lr = 0x1080f68u;
    f_8000dd70(c);
R_01080f68:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080f74u;
    f_8000fc20(c);
R_01080f74:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01080f9c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080f84u;
    f_8000fc20(c);
R_01080f84:
    c.lr = 0x1080f88u;
    f_800699d0(c);
R_01080f88:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080f90u;
    f_80066cd0(c);
R_01080f90:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080f9c;
    c.r[27] = 0x1u;
L_01080f9c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080f64;
    }
L_01080fa8:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080ff0;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080fccu;
    wp::call(c, c.ctr);
R_01080fcc:
    c.r[3] = ((((g_mr751_bases[4] + 0x2e44u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[4] + 0x2e1cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x2e44u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x2e1cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1080fe8u;
    f_80018e30(c);
R_01080fe8:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_01080ff0:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x1080ff8u;
    f_801c83fc(c);
R_01080ff8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr751_01081010(wp::Cpu& c) {
    WP_ENTER(0x1081010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081038u: goto R_01081038;
        case 0x108103cu: goto R_0108103c;
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
L_01081024:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081038u;
    wp::call(c, c.ctr);
R_01081038:
    c.lr = 0x108103cu;
    f_8006a940(c);
R_0108103c:
    WP_POLL(c);
    goto L_01081024;
}

void f_mr751_01081040(wp::Cpu& c) {
    WP_ENTER(0x1081040u);
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

void f_mr751_01081060(wp::Cpu& c) {
    WP_ENTER(0x1081060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081084u: goto R_01081084;
        case 0x10810a8u: goto R_010810a8;
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
    c.lr = 0x1081084u;
    f_80010060(c);
R_01081084:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr751_bases[5] + 0x2bcc4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bcc4u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10810a8u;
    wp::call(c, c.ctr);
R_010810a8:
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

void f_mr751_010810c0(wp::Cpu& c) {
    WP_ENTER(0x10810c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10810d4u: goto R_010810d4;
        case 0x10810e8u: goto R_010810e8;
        case 0x10810fcu: goto R_010810fc;
        case 0x1081124u: goto R_01081124;
        case 0x1081134u: goto R_01081134;
        case 0x1081158u: goto R_01081158;
        case 0x10811b8u: goto R_010811b8;
        case 0x1081238u: goto R_01081238;
        case 0x10812a0u: goto R_010812a0;
        case 0x10812d8u: goto R_010812d8;
        case 0x10812ecu: goto R_010812ec;
        case 0x10812fcu: goto R_010812fc;
        case 0x1081320u: goto R_01081320;
        case 0x1081328u: goto R_01081328;
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
    c.lr = 0x10810d4u;
    f_801c83b4(c);
R_010810d4:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10810e8u;
    f_8006c450(c);
R_010810e8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010812f0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10810fcu;
    f_8006c460(c);
R_010810fc:
    c.r[27] = ((((g_mr751_bases[5] + 0x2aaf8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr751_bases[5] + 0x2aaf8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1081124u;
    f_801c7860(c);
R_01081124:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x1081134u;
    f_mr751_01018560(c);
R_01081134:
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
    c.lr = 0x1081158u;
    f_mr751_01018720(c);
R_01081158:
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
    if (!wp::cr_get(c, 2)) goto L_01081194;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01081198;
L_01081194:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01081198:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10811b8u;
    f_mr751_01018720(c);
R_010811b8:
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
    if (!wp::cr_get(c, 2)) goto L_01081214;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01081218;
L_01081214:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01081218:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1081238u;
    f_mr751_01018720(c);
R_01081238:
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
    if (!wp::cr_get(c, 2)) goto L_0108127c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01081280;
L_0108127c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01081280:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10812a0u;
    f_mr751_01018720(c);
R_010812a0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr751_bases[5] + 0x2bcd0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bcd0u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_010812c0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010812c4;
L_010812c0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010812c4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10812d8u;
    wp::call(c, c.ctr);
R_010812d8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081320;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10812ecu;
    f_801c7a8c(c);
R_010812ec:
    goto L_01081320;
L_010812f0:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10812fcu;
    f_8006c4e0(c);
R_010812fc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr751_bases[5] + 0x2bcd0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bcd0u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x1081320u;
    wp::call(c, c.ctr);
L_01081320:
R_01081320:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1081328u;
    f_801c8400(c);
R_01081328:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr751_01081340(wp::Cpu& c) {
    WP_ENTER(0x1081340u);
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

void f_mr751_01081360(wp::Cpu& c) {
    WP_ENTER(0x1081360u);
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

void f_mr751_01081380(wp::Cpu& c) {
    WP_ENTER(0x1081380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10813acu: goto R_010813ac;
        case 0x10813c4u: goto R_010813c4;
        case 0x10813d4u: goto R_010813d4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr751_bases[5] + 0x2bcacu) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr751_bases[5] + 0x2bcacu) & 0xFFFFu);
    c.lr = 0x10813acu;
    f_mr751_01078b40(c);
R_010813ac:
    c.r[5] = ((((g_mr751_bases[5] + 0x2ab28u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2ab28u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10813c4u;
    f_801d34c4(c);
R_010813c4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10813d4u;
    f_mr751_0107be90(c);
R_010813d4:
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

void f_mr751_010813f0(wp::Cpu& c) {
    WP_ENTER(0x10813f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081428u: goto R_01081428;
        case 0x108144cu: goto R_0108144c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mr751_bases[5] + 0x2aaf0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr751_bases[5] + 0x2aaf0u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1081428u;
    f_801d3590(c);
R_01081428:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr751_bases[5] + 0x2bcb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bcb8u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x108144cu;
    wp::call(c, c.ctr);
R_0108144c:
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

void f_mr751_01081470(wp::Cpu& c) {
    WP_ENTER(0x1081470u);
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

void f_mr751_01081490(wp::Cpu& c) {
    WP_ENTER(0x1081490u);
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

void f_mr751_010814b0(wp::Cpu& c) {
    WP_ENTER(0x10814b0u);
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

void f_mr751_010814d0(wp::Cpu& c) {
    WP_ENTER(0x10814d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10814f0u: goto R_010814f0;
        case 0x10814f8u: goto R_010814f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr751_bases[5] + 0x2bc94u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2bc94u) & 0xFFFFu);
    c.lr = 0x10814f0u;
    f_mr751_01078b40(c);
R_010814f0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10814f8u;
    f_mr751_0107af90(c);
R_010814f8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01081510(wp::Cpu& c) {
    WP_ENTER(0x1081510u);
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

void f_mr751_01081530(wp::Cpu& c) {
    WP_ENTER(0x1081530u);
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

void f_mr751_01081550(wp::Cpu& c) {
    WP_ENTER(0x1081550u);
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

void f_mr751_01081570(wp::Cpu& c) {
    WP_ENTER(0x1081570u);
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

void f_mr751_01081590(wp::Cpu& c) {
    WP_ENTER(0x1081590u);
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

void f_mr751_010815b0(wp::Cpu& c) {
    WP_ENTER(0x10815b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr751_bases[4] + 0x2f88u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x2f88u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010815e0;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010815e0;
    c.r[4] = 0x1u;
L_010815e0:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr751_010815f0(wp::Cpu& c) {
    WP_ENTER(0x10815f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081634u: goto R_01081634;
        case 0x1081644u: goto R_01081644;
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
    if (wp::cr_get(c, 2)) goto L_01081644;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081628;
    c.r[3] = ((((g_mr751_bases[6] + 0x4ebcu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[6] + 0x4ebcu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_01081628:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1081634u;
    f_8001bfe0(c);
R_01081634:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01081644;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1081644u;
    f_801c7a8c(c);
L_01081644:
R_01081644:
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

void f_mr751_01081660(wp::Cpu& c) {
    WP_ENTER(0x1081660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr751_0107c980(c);
    return;
}

void f_mr751_01081670(wp::Cpu& c) {
    WP_ENTER(0x1081670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mr751_01081680(wp::Cpu& c) {
    WP_ENTER(0x1081680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mr751_010815f0(c);
    return;
}

void f_mr751_01081690(wp::Cpu& c) {
    WP_ENTER(0x1081690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mr751_0107f5a0(c);
    return;
}

void f_mr751_010816a0(wp::Cpu& c) {
    WP_ENTER(0x10816a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mr751_0107f5a0(c);
    return;
}

void f_mr751_010816b0(wp::Cpu& c) {
    WP_ENTER(0x10816b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mr751_0107f5a0(c);
    return;
}

void f_mr751_010816c0(wp::Cpu& c) {
    WP_ENTER(0x10816c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr751_01080290(c);
    return;
}

void f_mr751_010816d0(wp::Cpu& c) {
    WP_ENTER(0x10816d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr751_0107f5a0(c);
    return;
}

void f_mr751_010816e0(wp::Cpu& c) {
    WP_ENTER(0x10816e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr751_01081010(c);
    return;
}

void f_mr751_010816f0(wp::Cpu& c) {
    WP_ENTER(0x10816f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr751_01080970(c);
    return;
}

void f_mr751_01081700(wp::Cpu& c) {
    WP_ENTER(0x1081700u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081720u: goto R_01081720;
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
    c.lr = 0x1081720u;
    f_8011bd40(c);
R_01081720:
    c.r[3] = ((((g_mr751_bases[4] + 0x2f90u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2bdd8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x2f90u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bdd8u) & 0xFFFFu);
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

void f_mr751_01081760(wp::Cpu& c) {
    WP_ENTER(0x1081760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108178cu: goto R_0108178c;
        case 0x108179cu: goto R_0108179c;
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
    if (wp::cr_get(c, 2)) goto L_0108179c;
    c.r[4] = 0x0u;
    c.lr = 0x108178cu;
    f_8011bd50(c);
R_0108178c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108179c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108179cu;
    f_801c7a8c(c);
L_0108179c:
R_0108179c:
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

void f_mr751_010817c0(wp::Cpu& c) {
    WP_ENTER(0x10817c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10817f4u: goto R_010817f4;
        case 0x10818ccu: goto R_010818cc;
        case 0x1081a4cu: goto R_01081a4c;
        case 0x1081a60u: goto R_01081a60;
        case 0x1081ac0u: goto R_01081ac0;
        case 0x1081accu: goto R_01081acc;
        case 0x1081af4u: goto R_01081af4;
        case 0x1081b0cu: goto R_01081b0c;
        case 0x1081b2cu: goto R_01081b2c;
        case 0x1081b38u: goto R_01081b38;
        case 0x1081b60u: goto R_01081b60;
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
    c.lr = 0x10817f4u;
    f_801c83ac(c);
R_010817f4:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mr751_bases[4] + 0x2f90u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr751_bases[4] + 0x2f90u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01081814;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010818e0;
    goto L_01081b34;
L_01081814:
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
    if (wp::cr_get(c, 2)) goto L_01081890;
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
L_01081890:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010818cc;
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
    c.lr = 0x10818ccu;
    f_8011eeb0(c);
L_010818cc:
R_010818cc:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01081b38;
L_010818e0:
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
    if (!wp::cr_get(c, 2)) goto L_0108190c;
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
L_0108190c:
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
    c.lr = 0x1081a4cu;
    f_801225e0(c);
R_01081a4c:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1081a60u;
    f_801225e0(c);
R_01081a60:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01081aa0;
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
L_01081aa0:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01081ab8;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_01081ab8:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1081ac0u;
    f_8011eaa0(c);
R_01081ac0:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1081accu;
    f_8011ea40(c);
R_01081acc:
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
    c.lr = 0x1081af4u;
    f_80122d80(c);
R_01081af4:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x1081b0cu;
    f_80122d80(c);
R_01081b0c:
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
    c.lr = 0x1081b2cu;
    f_80121cf0(c);
R_01081b2c:
    c.r[3] = 0x2u;
    goto L_01081b38;
L_01081b34:
    c.lr = 0x1081b38u;
    f_8011bd90(c);
L_01081b38:
R_01081b38:
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
    c.lr = 0x1081b60u;
    f_801c83f8(c);
R_01081b60:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mr751_01081b70(wp::Cpu& c) {
    WP_ENTER(0x1081b70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081b8cu: goto R_01081b8c;
        case 0x1081d10u: goto R_01081d10;
        case 0x1081d64u: goto R_01081d64;
        case 0x1081d88u: goto R_01081d88;
        case 0x1081d94u: goto R_01081d94;
        case 0x1081da4u: goto R_01081da4;
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
    c.lr = 0x1081b8cu;
    f_801c83b0(c);
R_01081b8c:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_01081ba8;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_01081bbc;
    goto L_01081d90;
L_01081ba8:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01081d94;
L_01081bbc:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mr751_bases[4] + 0x2f9cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mr751_bases[4] + 0x2fa0u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mr751_bases[4] + 0x2f9cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mr751_bases[4] + 0x2fa0u) & 0xFFFFu);
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
    c.lr = 0x1081d10u;
    f_801225e0(c);
R_01081d10:
    ea = c.r[26] + wp::sign_extend16((g_mr751_bases[4] + 0x2fa0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01081d20;
    goto L_01081d24;
L_01081d20:
    c.f[2] = c.f[1];
L_01081d24:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081d34;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_01081d3c;
L_01081d34:
    c.r[3] = ((((g_mr751_bases[4] + 0x2fa0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x2fa0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_01081d3c:
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
    c.lr = 0x1081d64u;
    f_8011e9e0(c);
R_01081d64:
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
    c.lr = 0x1081d88u;
    f_80121cf0(c);
R_01081d88:
    c.r[3] = 0x2u;
    goto L_01081d94;
L_01081d90:
    c.lr = 0x1081d94u;
    f_8011bec0(c);
L_01081d94:
R_01081d94:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1081da4u;
    f_801c83fc(c);
R_01081da4:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr751_01081dc0(wp::Cpu& c) {
    WP_ENTER(0x1081dc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081dd4u: goto R_01081dd4;
        case 0x1081e04u: goto R_01081e04;
        case 0x1081f1cu: goto R_01081f1c;
        case 0x1081fa4u: goto R_01081fa4;
        case 0x1081fb0u: goto R_01081fb0;
        case 0x1081fbcu: goto R_01081fbc;
        case 0x10820d4u: goto R_010820d4;
        case 0x108221cu: goto R_0108221c;
        case 0x1082238u: goto R_01082238;
        case 0x1082240u: goto R_01082240;
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
    c.lr = 0x1081dd4u;
    f_801c83b4(c);
R_01081dd4:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr751_bases[4] + 0x2f90u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr751_bases[4] + 0x2f90u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01081dfc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01081fb4;
    goto L_01082238;
L_01081dfc:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x1081e04u;
    f_80132a30(c);
R_01081e04:
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
    if (!wp::cr_get(c, 2)) goto L_01081f1c;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x1081f1cu;
    f_8014b090(c);
L_01081f1c:
R_01081f1c:
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
    c.lr = 0x1081fa4u;
    f_8012be60(c);
R_01081fa4:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1081fb0u;
    f_80132ab0(c);
R_01081fb0:
    goto L_01082238;
L_01081fb4:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x1081fbcu;
    f_80132a30(c);
R_01081fbc:
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
    if (!wp::cr_get(c, 2)) goto L_010820d4;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x10820d4u;
    f_8014b090(c);
L_010820d4:
R_010820d4:
    c.r[5] = ((((g_mr751_bases[6] + 0x4ec0u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr751_bases[6] + 0x4ec0u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01082140;
    c.r[4] = ((((g_mr751_bases[6] + 0x4ec8u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr751_bases[6] + 0x4ec8u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[6] + 0x4ec8u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mr751_bases[6] + 0x4ec0u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01082140:
    c.r[26] = ((((g_mr751_bases[6] + 0x4ec8u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr751_bases[6] + 0x4ec8u) & 0xFFFFu);
L_0108214c:
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
    c.lr = 0x108221cu;
    f_8012be60(c);
R_0108221c:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108214c;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1082238u;
    f_80132ab0(c);
L_01082238:
R_01082238:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x1082240u;
    f_801c8400(c);
R_01082240:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mr751_01082250(wp::Cpu& c) {
    WP_ENTER(0x1082250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mr751_01082260(wp::Cpu& c) {
    WP_ENTER(0x1082260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr751_01082270(wp::Cpu& c) {
    WP_ENTER(0x1082270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082290u: goto R_01082290;
        case 0x10822b4u: goto R_010822b4;
        case 0x10822ecu: goto R_010822ec;
        case 0x1082300u: goto R_01082300;
        case 0x1082314u: goto R_01082314;
        case 0x1082324u: goto R_01082324;
        case 0x1082330u: goto R_01082330;
        case 0x1082360u: goto R_01082360;
        case 0x1082380u: goto R_01082380;
        case 0x1082388u: goto R_01082388;
        case 0x1082390u: goto R_01082390;
        case 0x1082398u: goto R_01082398;
        case 0x108239cu: goto R_0108239c;
        case 0x10823a4u: goto R_010823a4;
        case 0x10823b0u: goto R_010823b0;
        case 0x10823e0u: goto R_010823e0;
        case 0x10823e8u: goto R_010823e8;
        case 0x10823ecu: goto R_010823ec;
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
    c.lr = 0x1082290u;
    f_80069af0(c);
R_01082290:
    c.r[3] = ((((g_mr751_bases[6] + 0x50u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2be08u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[6] + 0x50u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2be08u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x10822b4u;
    f_801c79a4(c);
R_010822b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010822d0;
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
L_010822d0:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10822ecu;
    f_801c79a4(c);
R_010822ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01082364;
    c.r[29] = 0x0u;
    c.lr = 0x1082300u;
    f_8000dd70(c);
R_01082300:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01082320;
    c.r[3] = 0xffffffffu;
    c.lr = 0x1082314u;
    f_8000e240(c);
R_01082314:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082320;
    c.r[29] = 0x1u;
L_01082320:
    c.lr = 0x1082324u;
    f_8000dd70(c);
R_01082324:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1082330u;
    f_80007570(c);
R_01082330:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_01082350;
    c.r[4] = c.r[1] + 0xcu;
L_01082350:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x1082360u;
    f_mr751_01032fc0(c);
R_01082360:
    c.r[30] = c.r[3] | c.r[3];
L_01082364:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082380;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x1082380u;
    f_mr751_01033190(c);
L_01082380:
R_01082380:
    c.r[3] = 0x0u;
    c.lr = 0x1082388u;
    f_8006a800(c);
R_01082388:
    c.r[3] = 0x0u;
    c.lr = 0x1082390u;
    f_80065040(c);
R_01082390:
    c.r[3] = 0x0u;
    c.lr = 0x1082398u;
    f_8006c8b0(c);
R_01082398:
    c.lr = 0x108239cu;
    f_80066250(c);
R_0108239c:
    c.r[3] = 0x128u;
    c.lr = 0x10823a4u;
    f_801c79a4(c);
R_010823a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010823b0;
    c.lr = 0x10823b0u;
    f_mr751_01080690(c);
L_010823b0:
R_010823b0:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010823e0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010823e0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10823e0u;
    wp::call(c, c.ctr);
L_010823e0:
R_010823e0:
    c.r[3] = 0x1u;
    c.lr = 0x10823e8u;
    f_8001b020(c);
R_010823e8:
    c.lr = 0x10823ecu;
    f_8000dd30(c);
R_010823ec:
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

void f_mr751_01082420(wp::Cpu& c) {
    WP_ENTER(0x1082420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108245cu: goto R_0108245c;
        case 0x1082488u: goto R_01082488;
        case 0x108248cu: goto R_0108248c;
        case 0x108249cu: goto R_0108249c;
        case 0x10824a0u: goto R_010824a0;
        case 0x10824a4u: goto R_010824a4;
        case 0x10824d0u: goto R_010824d0;
        case 0x10824e4u: goto R_010824e4;
        case 0x108250cu: goto R_0108250c;
        case 0x1082534u: goto R_01082534;
        case 0x108255cu: goto R_0108255c;
        case 0x1082564u: goto R_01082564;
        case 0x1082568u: goto R_01082568;
        case 0x108256cu: goto R_0108256c;
        case 0x1082574u: goto R_01082574;
        case 0x1082578u: goto R_01082578;
        case 0x108257cu: goto R_0108257c;
        case 0x10825a4u: goto R_010825a4;
        case 0x10825b8u: goto R_010825b8;
        case 0x10825e0u: goto R_010825e0;
        case 0x1082608u: goto R_01082608;
        case 0x1082630u: goto R_01082630;
        case 0x1082638u: goto R_01082638;
        case 0x1082660u: goto R_01082660;
        case 0x1082680u: goto R_01082680;
        case 0x1082690u: goto R_01082690;
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
    if (wp::cr_get(c, 2)) goto L_01082690;
    c.r[4] = ((((g_mr751_bases[5] + 0x2be08u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2be08u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x108245cu;
    f_mr751_01033230(c);
R_0108245c:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082488;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082488;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082488u;
    wp::call(c, c.ctr);
L_01082488:
R_01082488:
    c.lr = 0x108248cu;
    f_8001aac0(c);
R_0108248c:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108249c;
    c.lr = 0x108249cu;
    f_8001b0c0(c);
L_0108249c:
R_0108249c:
    c.lr = 0x10824a0u;
    f_8004abf0(c);
R_010824a0:
    c.lr = 0x10824a4u;
    f_80066250(c);
R_010824a4:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082564;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082564;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010824d0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10824d0u;
    f_mr751_0102e1f0(c);
L_010824d0:
R_010824d0:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010824e4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10824e4u;
    f_mr751_01033190(c);
L_010824e4:
R_010824e4:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108250c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108250c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108250cu;
    wp::call(c, c.ctr);
L_0108250c:
R_0108250c:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082534;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082534;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082534u;
    wp::call(c, c.ctr);
L_01082534:
R_01082534:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108255c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108255c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108255cu;
    wp::call(c, c.ctr);
L_0108255c:
R_0108255c:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082564u;
    f_801c7a8c(c);
L_01082564:
R_01082564:
    c.lr = 0x1082568u;
    f_80041c20(c);
R_01082568:
    c.lr = 0x108256cu;
    f_8002d270(c);
R_0108256c:
    c.r[3] = 0x0u;
    c.lr = 0x1082574u;
    f_80076130(c);
R_01082574:
    c.lr = 0x1082578u;
    f_800656f0(c);
R_01082578:
    c.lr = 0x108257cu;
    f_80011270(c);
R_0108257c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082638;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082638;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010825a4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10825a4u;
    f_mr751_0102e1f0(c);
L_010825a4:
R_010825a4:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010825b8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10825b8u;
    f_mr751_01033190(c);
L_010825b8:
R_010825b8:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010825e0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010825e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10825e0u;
    wp::call(c, c.ctr);
L_010825e0:
R_010825e0:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082608;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082608;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082608u;
    wp::call(c, c.ctr);
L_01082608:
R_01082608:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082630;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082630;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082630u;
    wp::call(c, c.ctr);
L_01082630:
R_01082630:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082638u;
    f_801c7a8c(c);
L_01082638:
R_01082638:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082660;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082660;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082660u;
    wp::call(c, c.ctr);
L_01082660:
R_01082660:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082674;
    c.r[3] = ((((g_mr751_bases[6] + 0x50u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[6] + 0x50u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_01082674:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1082680u;
    f_80069c40(c);
R_01082680:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01082690;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1082690u;
    f_801c7a8c(c);
L_01082690:
R_01082690:
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

void f_mr751_010826b0(wp::Cpu& c) {
    WP_ENTER(0x10826b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10826dcu: goto R_010826dc;
        case 0x10826e4u: goto R_010826e4;
        case 0x10826fcu: goto R_010826fc;
        case 0x1082730u: goto R_01082730;
        case 0x1082750u: goto R_01082750;
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
    if (!wp::cr_get(c, 2)) goto L_01082750;
    c.r[3] = 0x0u;
    c.lr = 0x10826dcu;
    f_mr751_01033210(c);
R_010826dc:
    c.r[3] = 0x1a8u;
    c.lr = 0x10826e4u;
    f_801c79a4(c);
R_010826e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010826fc;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x10826fcu;
    f_mr751_0103c550(c);
L_010826fc:
R_010826fc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082730;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082730;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082730u;
    wp::call(c, c.ctr);
L_01082730:
R_01082730:
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
    c.lr = 0x1082750u;
    wp::call(c, c.ctr);
L_01082750:
R_01082750:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01082770(wp::Cpu& c) {
    WP_ENTER(0x1082770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr751_01082780(wp::Cpu& c) {
    WP_ENTER(0x1082780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr751_01082790(wp::Cpu& c) {
    WP_ENTER(0x1082790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10827dcu: goto R_010827dc;
        case 0x10827e0u: goto R_010827e0;
        case 0x10827f0u: goto R_010827f0;
        case 0x1082818u: goto R_01082818;
        case 0x1082820u: goto R_01082820;
        case 0x1082834u: goto R_01082834;
        case 0x108285cu: goto R_0108285c;
        case 0x1082864u: goto R_01082864;
        case 0x108286cu: goto R_0108286c;
        case 0x1082880u: goto R_01082880;
        case 0x108289cu: goto R_0108289c;
        case 0x10828a4u: goto R_010828a4;
        case 0x10828b8u: goto R_010828b8;
        case 0x10828d4u: goto R_010828d4;
        case 0x10828e8u: goto R_010828e8;
        case 0x10828f0u: goto R_010828f0;
        case 0x10828fcu: goto R_010828fc;
        case 0x1082914u: goto R_01082914;
        case 0x1082918u: goto R_01082918;
        case 0x1082920u: goto R_01082920;
        case 0x108292cu: goto R_0108292c;
        case 0x1082934u: goto R_01082934;
        case 0x1082938u: goto R_01082938;
        case 0x1082940u: goto R_01082940;
        case 0x108294cu: goto R_0108294c;
        case 0x108295cu: goto R_0108295c;
        case 0x1082964u: goto R_01082964;
        case 0x1082980u: goto R_01082980;
        case 0x1082984u: goto R_01082984;
        case 0x1082994u: goto R_01082994;
        case 0x108299cu: goto R_0108299c;
        case 0x10829acu: goto R_010829ac;
        case 0x10829c8u: goto R_010829c8;
        case 0x10829f4u: goto R_010829f4;
        case 0x1082a10u: goto R_01082a10;
        case 0x1082a44u: goto R_01082a44;
        case 0x1082a50u: goto R_01082a50;
        case 0x1082a70u: goto R_01082a70;
        case 0x1082aa4u: goto R_01082aa4;
        case 0x1082ab0u: goto R_01082ab0;
        case 0x1082accu: goto R_01082acc;
        case 0x1082b00u: goto R_01082b00;
        case 0x1082b1cu: goto R_01082b1c;
        case 0x1082b34u: goto R_01082b34;
        case 0x1082b44u: goto R_01082b44;
        case 0x1082b64u: goto R_01082b64;
        case 0x1082b98u: goto R_01082b98;
        case 0x1082bb0u: goto R_01082bb0;
        case 0x1082bdcu: goto R_01082bdc;
        case 0x1082c10u: goto R_01082c10;
        case 0x1082c14u: goto R_01082c14;
        case 0x1082c2cu: goto R_01082c2c;
        case 0x1082c64u: goto R_01082c64;
        case 0x1082c6cu: goto R_01082c6c;
        case 0x1082c78u: goto R_01082c78;
        case 0x1082c98u: goto R_01082c98;
        case 0x1082ca4u: goto R_01082ca4;
        case 0x1082cb0u: goto R_01082cb0;
        case 0x1082cbcu: goto R_01082cbc;
        case 0x1082cd4u: goto R_01082cd4;
        case 0x1082d10u: goto R_01082d10;
        case 0x1082d14u: goto R_01082d14;
        case 0x1082d18u: goto R_01082d18;
        case 0x1082d2cu: goto R_01082d2c;
        case 0x1082d60u: goto R_01082d60;
        case 0x1082d64u: goto R_01082d64;
        case 0x1082d70u: goto R_01082d70;
        case 0x1082d80u: goto R_01082d80;
        case 0x1082d88u: goto R_01082d88;
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
    goto L_010827e0;
L_010827bc:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010827dc;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10827dcu;
    wp::call(c, c.ctr);
L_010827dc:
R_010827dc:
    c.lr = 0x10827e0u;
    f_8006a940(c);
L_010827e0:
R_010827e0:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010827bc;
    }
    c.lr = 0x10827f0u;
    f_800760f0(c);
R_010827f0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010827bc;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082818;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x1082818u;
    f_mr751_01033190(c);
L_01082818:
R_01082818:
    c.r[3] = 0x1u;
    c.lr = 0x1082820u;
    f_80076130(c);
R_01082820:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082834u;
    wp::call(c, c.ctr);
R_01082834:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010828bc;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108285cu;
    f_800104d0(c);
R_0108285c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1082864u;
    f_8000a7f0(c);
R_01082864:
    c.r[3] = 0xffffffffu;
    c.lr = 0x108286cu;
    f_8000e240(c);
R_0108286c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010828ac;
    c.r[30] = 0x0u;
    goto L_010828a0;
L_0108287c:
    c.lr = 0x1082880u;
    f_8000dd70(c);
R_01082880:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x108289cu;
    f_8000fc60(c);
R_0108289c:
    c.r[30] = c.r[30] + 0x1u;
L_010828a0:
    c.lr = 0x10828a4u;
    f_80007570(c);
R_010828a4:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108287c;
    }
L_010828ac:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10828b8u;
    f_800293c0(c);
R_010828b8:
    goto L_01082d80;
L_010828bc:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082900;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10828d4u;
    f_8000e070(c);
R_010828d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_010828e4;
    c.r[3] = 0x6u;
L_010828e4:
    c.lr = 0x10828e8u;
    f_8000e080(c);
R_010828e8:
    c.r[3] = 0x1u;
    c.lr = 0x10828f0u;
    f_80029330(c);
R_010828f0:
    c.r[3] = ((((g_mr751_bases[5] + 0x2bdf8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2bdf8u) & 0xFFFFu);
    c.lr = 0x10828fcu;
    f_80029270(c);
R_010828fc:
    goto L_01082d80;
L_01082900:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082944;
    c.r[29] = ((((g_mr751_bases[4] + 0x2fc8u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr751_bases[4] + 0x2fc8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1082914u;
    f_80071fe0(c);
R_01082914:
    c.lr = 0x1082918u;
    f_8001a890(c);
R_01082918:
    c.r[3] = 0x0u;
    c.lr = 0x1082920u;
    f_80076130(c);
R_01082920:
    ea = c.r[29] + wp::sign_extend16((g_mr751_bases[4] + 0x2fc8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x108292cu;
    f_80075f20(c);
R_0108292c:
    c.r[3] = 0x1u;
    c.lr = 0x1082934u;
    f_80076130(c);
R_01082934:
    c.lr = 0x1082938u;
    f_80076100(c);
R_01082938:
    c.r[3] = 0x1u;
    c.lr = 0x1082940u;
    f_80029330(c);
R_01082940:
    goto L_01082d80;
L_01082944:
    c.r[3] = 0xffffffffu;
    c.lr = 0x108294cu;
    f_80007f20(c);
R_0108294c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x108295cu;
    f_mr751_01082db0(c);
R_0108295c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x1082964u;
    f_80041f70(c);
R_01082964:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082980;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1082980u;
    f_800402c0(c);
L_01082980:
R_01082980:
    c.lr = 0x1082984u;
    f_80076140(c);
R_01082984:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010829b4;
    c.r[3] = 0x0u;
    c.lr = 0x1082994u;
    f_8004a100(c);
R_01082994:
    c.r[3] = 0x1u;
    c.lr = 0x108299cu;
    f_80072020(c);
R_0108299c:
    c.r[4] = ((((g_mr751_bases[4] + 0x2fccu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x2fccu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10829acu;
    f_80075ed0(c);
R_010829ac:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_010829b4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082bb0;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x10829c8u;
    f_80007530(c);
R_010829c8:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010829ec;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_01082a48;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01082aa8;
    goto L_01082b1c;
L_010829ec:
    c.r[3] = 0x1acu;
    c.lr = 0x10829f4u;
    f_801c79a4(c);
R_010829f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082a10;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x1082a10u;
    f_mr751_0104ca80(c);
L_01082a10:
R_01082a10:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082b1c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082b1c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082a44u;
    wp::call(c, c.ctr);
R_01082a44:
    goto L_01082b1c;
L_01082a48:
    c.r[3] = 0x1acu;
    c.lr = 0x1082a50u;
    f_801c79a4(c);
R_01082a50:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082a70;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1082a70u;
    f_mr751_0104dac0(c);
L_01082a70:
R_01082a70:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082b1c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082b1c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082aa4u;
    wp::call(c, c.ctr);
R_01082aa4:
    goto L_01082b1c;
L_01082aa8:
    c.r[3] = 0x1bcu;
    c.lr = 0x1082ab0u;
    f_801c79a4(c);
R_01082ab0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082acc;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x1082accu;
    f_mr751_0104e6c0(c);
L_01082acc:
R_01082acc:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082b00;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082b00;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082b00u;
    wp::call(c, c.ctr);
L_01082b00:
R_01082b00:
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
    c.lr = 0x1082b1cu;
    wp::call(c, c.ctr);
L_01082b1c:
R_01082b1c:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082b98;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082b34u;
    f_mr751_01082ff0(c);
R_01082b34:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_01082b98;
    c.r[3] = 0x1acu;
    c.lr = 0x1082b44u;
    f_801c79a4(c);
R_01082b44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082b64;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1082b64u;
    f_mr751_0104dac0(c);
L_01082b64:
R_01082b64:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082b98;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082b98;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082b98u;
    wp::call(c, c.ctr);
L_01082b98:
R_01082b98:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082bb0;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082bb0u;
    f_mr751_01082ff0(c);
L_01082bb0:
R_01082bb0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082c64;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082bdcu;
    wp::call(c, c.ctr);
R_01082bdc:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01082c14;
L_01082be4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082c10;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082c10;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082c10u;
    wp::call(c, c.ctr);
L_01082c10:
R_01082c10:
    c.lr = 0x1082c14u;
    f_8006a940(c);
L_01082c14:
R_01082c14:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082c2cu;
    wp::call(c, c.ctr);
R_01082c2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082be4;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082c64;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082c64;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082c64u;
    wp::call(c, c.ctr);
L_01082c64:
R_01082c64:
    c.r[3] = 0x4u;
    c.lr = 0x1082c6cu;
    f_801c79a4(c);
R_01082c6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082c78;
    c.lr = 0x1082c78u;
    f_mr751_0102e150(c);
L_01082c78:
R_01082c78:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082c98;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x1082c98u;
    f_mr751_0102e1f0(c);
L_01082c98:
R_01082c98:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1082ca4u;
    f_mr751_0102e290(c);
R_01082ca4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1082cb0u;
    f_mr751_0102e280(c);
R_01082cb0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1082cbcu;
    f_mr751_0102e270(c);
R_01082cbc:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01082d20;
    c.r[3] = 0x1u;
    c.lr = 0x1082cd4u;
    f_mr751_0102cc10(c);
R_01082cd4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082d20;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01082d14;
L_01082ce4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082d10;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082d10;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082d10u;
    wp::call(c, c.ctr);
L_01082d10:
R_01082d10:
    c.lr = 0x1082d14u;
    f_8006a940(c);
L_01082d14:
R_01082d14:
    c.lr = 0x1082d18u;
    f_8006b760(c);
R_01082d18:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082ce4;
    }
L_01082d20:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1082d2cu;
    f_mr751_0102e2a0(c);
R_01082d2c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01082d64;
L_01082d34:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082d60;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082d60;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082d60u;
    wp::call(c, c.ctr);
L_01082d60:
R_01082d60:
    c.lr = 0x1082d64u;
    f_8006a940(c);
L_01082d64:
R_01082d64:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1082d70u;
    f_mr751_0102e2c0(c);
R_01082d70:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082d34;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082d80u;
    f_mr751_01083240(c);
L_01082d80:
R_01082d80:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1082d88u;
    f_8006a8f0(c);
R_01082d88:
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

void f_mr751_01082db0(wp::Cpu& c) {
    WP_ENTER(0x1082db0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082dc4u: goto R_01082dc4;
        case 0x1082dd4u: goto R_01082dd4;
        case 0x1082de0u: goto R_01082de0;
        case 0x1082dfcu: goto R_01082dfc;
        case 0x1082e04u: goto R_01082e04;
        case 0x1082e0cu: goto R_01082e0c;
        case 0x1082e70u: goto R_01082e70;
        case 0x1082e8cu: goto R_01082e8c;
        case 0x1082ea8u: goto R_01082ea8;
        case 0x1082ee0u: goto R_01082ee0;
        case 0x1082efcu: goto R_01082efc;
        case 0x1082f18u: goto R_01082f18;
        case 0x1082f34u: goto R_01082f34;
        case 0x1082f4cu: goto R_01082f4c;
        case 0x1082f84u: goto R_01082f84;
        case 0x1082fa0u: goto R_01082fa0;
        case 0x1082fbcu: goto R_01082fbc;
        case 0x1082fd8u: goto R_01082fd8;
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
    c.lr = 0x1082dc4u;
    f_801c83b8(c);
R_01082dc4:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x1082dd4u;
    f_8000fc40(c);
R_01082dd4:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x1082de0u;
    f_8000fc40(c);
R_01082de0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082df8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082df8;
    c.r[3] = 0x0u;
    goto L_01082fd0;
L_01082df8:
    c.lr = 0x1082dfcu;
    f_80007530(c);
R_01082dfc:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x1082e04u;
    f_800075a0(c);
R_01082e04:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x1082e0cu;
    f_8000dd00(c);
R_01082e0c:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082e40;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_01082eb0;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_01082f20;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01082f54;
    goto L_01082fc4;
L_01082e40:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082e5c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01082e78;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01082e94;
    goto L_01082fcc;
L_01082e5c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082e70u;
    f_8000b780(c);
R_01082e70:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082e78:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082e8cu;
    f_8000b780(c);
R_01082e8c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082e94:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082ea8u;
    f_8000b780(c);
R_01082ea8:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082eb0:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082ecc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01082ee8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01082f04;
    goto L_01082fcc;
L_01082ecc:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082ee0u;
    f_8000b780(c);
R_01082ee0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082ee8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082efcu;
    f_8000b780(c);
R_01082efc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082f04:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082f18u;
    f_8000b780(c);
R_01082f18:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082f20:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082f34u;
    f_8000b780(c);
R_01082f34:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082f4cu;
    f_8000b780(c);
R_01082f4c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082f54:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082f70;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01082f8c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01082fa8;
    goto L_01082fcc;
L_01082f70:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082f84u;
    f_8000b780(c);
R_01082f84:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082f8c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082fa0u;
    f_8000b780(c);
R_01082fa0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082fa8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1082fbcu;
    f_8000b780(c);
R_01082fbc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082fcc;
L_01082fc4:
    c.r[3] = 0x0u;
    goto L_01082fd0;
L_01082fcc:
    c.r[3] = 0x1u;
L_01082fd0:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1082fd8u;
    f_801c8404(c);
R_01082fd8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01082ff0(wp::Cpu& c) {
    WP_ENTER(0x1082ff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083004u: goto R_01083004;
        case 0x1083028u: goto R_01083028;
        case 0x1083060u: goto R_01083060;
        case 0x1083064u: goto R_01083064;
        case 0x108307cu: goto R_0108307c;
        case 0x10830b4u: goto R_010830b4;
        case 0x10830ccu: goto R_010830cc;
        case 0x10830d0u: goto R_010830d0;
        case 0x10830d8u: goto R_010830d8;
        case 0x1083124u: goto R_01083124;
        case 0x1083128u: goto R_01083128;
        case 0x1083164u: goto R_01083164;
        case 0x1083184u: goto R_01083184;
        case 0x10831bcu: goto R_010831bc;
        case 0x10831c0u: goto R_010831c0;
        case 0x10831d8u: goto R_010831d8;
        case 0x108321cu: goto R_0108321c;
        case 0x1083224u: goto R_01083224;
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
    c.lr = 0x1083004u;
    f_801c83b8(c);
R_01083004:
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
    c.lr = 0x1083028u;
    wp::call(c, c.ctr);
R_01083028:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01083064;
L_01083034:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01083060;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083060;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083060u;
    wp::call(c, c.ctr);
L_01083060:
R_01083060:
    c.lr = 0x1083064u;
    f_8006a940(c);
L_01083064:
R_01083064:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108307cu;
    wp::call(c, c.ctr);
R_0108307c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083090;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083034;
    }
L_01083090:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01083128;
L_010830a4:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_010830ac:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10830b4u;
    f_8000fc40(c);
R_010830b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010830c4;
    c.r[0] = 0x0u;
    goto L_010830e4;
L_010830c4:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10830ccu;
    f_8000fc20(c);
R_010830cc:
    c.lr = 0x10830d0u;
    f_800699d0(c);
R_010830d0:
    c.r[4] = 0x800u;
    c.lr = 0x10830d8u;
    f_80066cd0(c);
R_010830d8:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_010830e4:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010830ac;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01083124;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083124;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083124u;
    wp::call(c, c.ctr);
L_01083124:
R_01083124:
    c.lr = 0x1083128u;
    f_8006a940(c);
L_01083128:
R_01083128:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108314c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108314c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010830a4;
    }
L_0108314c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083164u;
    wp::call(c, c.ctr);
R_01083164:
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
    c.lr = 0x1083184u;
    wp::call(c, c.ctr);
R_01083184:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010831c0;
L_01083190:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010831bc;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010831bc;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10831bcu;
    wp::call(c, c.ctr);
L_010831bc:
R_010831bc:
    c.lr = 0x10831c0u;
    f_8006a940(c);
L_010831c0:
R_010831c0:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10831d8u;
    wp::call(c, c.ctr);
R_010831d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010831ec;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083190;
    }
L_010831ec:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108321c;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108321c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108321cu;
    wp::call(c, c.ctr);
L_0108321c:
R_0108321c:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x1083224u;
    f_801c8404(c);
R_01083224:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr751_01083240(wp::Cpu& c) {
    WP_ENTER(0x1083240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083254u: goto R_01083254;
        case 0x108326cu: goto R_0108326c;
        case 0x1083278u: goto R_01083278;
        case 0x1083288u: goto R_01083288;
        case 0x1083294u: goto R_01083294;
        case 0x10832a4u: goto R_010832a4;
        case 0x10832bcu: goto R_010832bc;
        case 0x10832d8u: goto R_010832d8;
        case 0x10832f4u: goto R_010832f4;
        case 0x1083324u: goto R_01083324;
        case 0x108335cu: goto R_0108335c;
        case 0x1083360u: goto R_01083360;
        case 0x10833f0u: goto R_010833f0;
        case 0x108341cu: goto R_0108341c;
        case 0x1083424u: goto R_01083424;
        case 0x1083430u: goto R_01083430;
        case 0x1083438u: goto R_01083438;
        case 0x108343cu: goto R_0108343c;
        case 0x1083444u: goto R_01083444;
        case 0x1083458u: goto R_01083458;
        case 0x1083474u: goto R_01083474;
        case 0x108347cu: goto R_0108347c;
        case 0x1083490u: goto R_01083490;
        case 0x108349cu: goto R_0108349c;
        case 0x10834a4u: goto R_010834a4;
        case 0x10834b0u: goto R_010834b0;
        case 0x10834b8u: goto R_010834b8;
        case 0x10834bcu: goto R_010834bc;
        case 0x10834c0u: goto R_010834c0;
        case 0x10834d4u: goto R_010834d4;
        case 0x10834dcu: goto R_010834dc;
        case 0x10834e8u: goto R_010834e8;
        case 0x10834ecu: goto R_010834ec;
        case 0x10834f4u: goto R_010834f4;
        case 0x1083500u: goto R_01083500;
        case 0x1083508u: goto R_01083508;
        case 0x108350cu: goto R_0108350c;
        case 0x1083514u: goto R_01083514;
        case 0x108351cu: goto R_0108351c;
        case 0x1083528u: goto R_01083528;
        case 0x108352cu: goto R_0108352c;
        case 0x1083534u: goto R_01083534;
        case 0x1083540u: goto R_01083540;
        case 0x1083548u: goto R_01083548;
        case 0x108354cu: goto R_0108354c;
        case 0x1083554u: goto R_01083554;
        case 0x108355cu: goto R_0108355c;
        case 0x1083564u: goto R_01083564;
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
    c.lr = 0x1083254u;
    f_801c83b4(c);
R_01083254:
    c.r[27] = ((((g_mr751_bases[4] + 0x2fc8u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr751_bases[4] + 0x2fc8u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x108326cu;
    f_800699d0(c);
R_0108326c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x1083278u;
    f_80066e70(c);
R_01083278:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x1083288u;
    f_80066db0(c);
R_01083288:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x1083294u;
    f_801c79a4(c);
R_01083294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010832f8;
    c.lr = 0x10832a4u;
    f_80007530(c);
R_010832a4:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010832b8;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_010832d0;
L_010832b8:
    c.lr = 0x10832bcu;
    f_8000dc30(c);
R_010832bc:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_010832d4;
L_010832d0:
    c.r[26] = 0x0u;
L_010832d4:
    c.lr = 0x10832d8u;
    f_8000e070(c);
R_010832d8:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x10832f4u;
    f_mr751_01064c70(c);
R_010832f4:
    c.r[29] = c.r[3] | c.r[3];
L_010832f8:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01083324;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01083324;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083324u;
    wp::call(c, c.ctr);
L_01083324:
R_01083324:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01083360;
L_01083330:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108335c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108335c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108335cu;
    wp::call(c, c.ctr);
L_0108335c:
R_0108335c:
    c.lr = 0x1083360u;
    f_8006a940(c);
L_01083360:
R_01083360:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_01083380;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083330;
    }
L_01083380:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010833a8;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010833b0;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010833b8;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010833c0;
    goto L_010833c4;
L_010833a8:
    c.r[31] = 0x0u;
    goto L_010833c4;
L_010833b0:
    c.r[31] = 0x1u;
    goto L_010833c4;
L_010833b8:
    c.r[31] = 0x2u;
    goto L_010833c4;
L_010833c0:
    c.r[31] = 0x3u;
L_010833c4:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010833f0;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010833f0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10833f0u;
    wp::call(c, c.ctr);
L_010833f0:
R_010833f0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083414;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01083494;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010834e0;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01083520;
    goto L_0108355c;
L_01083414:
    c.r[3] = 0x5u;
    c.lr = 0x108341cu;
    f_8001a890(c);
R_0108341c:
    c.r[3] = 0x0u;
    c.lr = 0x1083424u;
    f_80076130(c);
R_01083424:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1083430u;
    f_80075f20(c);
R_01083430:
    c.r[3] = 0x1u;
    c.lr = 0x1083438u;
    f_80076130(c);
R_01083438:
    c.lr = 0x108343cu;
    f_80076100(c);
R_0108343c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1083444u;
    f_8000e240(c);
R_01083444:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01083484;
    c.r[26] = 0x0u;
    goto L_01083478;
L_01083454:
    c.lr = 0x1083458u;
    f_8000dd70(c);
R_01083458:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x1083474u;
    f_8000fc60(c);
R_01083474:
    c.r[26] = c.r[26] + 0x1u;
L_01083478:
    c.lr = 0x108347cu;
    f_80007570(c);
R_0108347c:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01083454;
    }
L_01083484:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1083490u;
    f_800293c0(c);
R_01083490:
    goto L_0108355c;
L_01083494:
    c.r[3] = 0x5u;
    c.lr = 0x108349cu;
    f_8001a890(c);
R_0108349c:
    c.r[3] = 0x0u;
    c.lr = 0x10834a4u;
    f_80076130(c);
R_010834a4:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10834b0u;
    f_80075f20(c);
R_010834b0:
    c.r[3] = 0x1u;
    c.lr = 0x10834b8u;
    f_80076130(c);
R_010834b8:
    c.lr = 0x10834bcu;
    f_80076100(c);
R_010834bc:
    c.lr = 0x10834c0u;
    f_8000e070(c);
R_010834c0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_010834d0;
    c.r[3] = 0x6u;
L_010834d0:
    c.lr = 0x10834d4u;
    f_8000e080(c);
R_010834d4:
    c.r[3] = 0x1u;
    c.lr = 0x10834dcu;
    f_80029330(c);
R_010834dc:
    goto L_0108355c;
L_010834e0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10834e8u;
    f_80071fe0(c);
R_010834e8:
    c.lr = 0x10834ecu;
    f_8001a890(c);
R_010834ec:
    c.r[3] = 0x0u;
    c.lr = 0x10834f4u;
    f_80076130(c);
R_010834f4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1083500u;
    f_80075f20(c);
R_01083500:
    c.r[3] = 0x1u;
    c.lr = 0x1083508u;
    f_80076130(c);
R_01083508:
    c.lr = 0x108350cu;
    f_80076100(c);
R_0108350c:
    c.r[3] = 0x4u;
    c.lr = 0x1083514u;
    f_8000e080(c);
R_01083514:
    c.r[3] = 0x1u;
    c.lr = 0x108351cu;
    f_80029330(c);
R_0108351c:
    goto L_0108355c;
L_01083520:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1083528u;
    f_80071fe0(c);
R_01083528:
    c.lr = 0x108352cu;
    f_8001a890(c);
R_0108352c:
    c.r[3] = 0x0u;
    c.lr = 0x1083534u;
    f_80076130(c);
R_01083534:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1083540u;
    f_80075f20(c);
R_01083540:
    c.r[3] = 0x1u;
    c.lr = 0x1083548u;
    f_80076130(c);
R_01083548:
    c.lr = 0x108354cu;
    f_80076100(c);
R_0108354c:
    c.r[3] = 0x8u;
    c.lr = 0x1083554u;
    f_8000e080(c);
R_01083554:
    c.r[3] = 0x1u;
    c.lr = 0x108355cu;
    f_80029330(c);
L_0108355c:
R_0108355c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1083564u;
    f_801c8400(c);
R_01083564:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01083580(wp::Cpu& c) {
    WP_ENTER(0x1083580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10835b8u: goto R_010835b8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr751_bases[5] + 0x2be20u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr751_bases[6] + 0x10u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2be20u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr751_bases[6] + 0x10u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    c.lr = 0x10835b8u;
    f_80030b40(c);
R_010835b8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_010835d0(wp::Cpu& c) {
    WP_ENTER(0x10835d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    f_800315f0(c);
    return;
}

void f_mr751_010835e0(wp::Cpu& c) {
    WP_ENTER(0x10835e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083634u: goto R_01083634;
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
    if (wp::cr_get(c, 2)) goto L_01083604;
    c.r[3] = 0x0u;
    goto L_01083678;
L_01083604:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108361c;
    c.r[0] = c.r[4] & 0x100u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108361c;
    c.r[3] = 0x0u;
    goto L_01083678;
L_0108361c:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x400u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1083634u;
    f_801c79a4(c);
R_01083634:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083678;
    c.r[6] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[6]);
    c.r[5] = ((((g_mr751_bases[5] + 0x2be30u) + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[6]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2be30u) & 0xFFFFu);
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
L_01083678:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01083690(wp::Cpu& c) {
    WP_ENTER(0x1083690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10836d4u: goto R_010836d4;
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
    if (!wp::cr_get(c, 2)) goto L_010836b8;
    c.r[3] = 0x0u;
    goto L_01083714;
L_010836b8:
    c.r[3] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[4] & 0xfffffbffu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80231d68u & 0xFFFFu);
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[31] = c.r[3] + 0x11u;
    c.r[3] = 0x24u;
    c.lr = 0x10836d4u;
    f_801c79a4(c);
R_010836d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083714;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[4] = ((((g_mr751_bases[5] + 0x2be30u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2be30u) & 0xFFFFu);
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
L_01083714:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01083730(wp::Cpu& c) {
    WP_ENTER(0x1083730u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr751_01083740(wp::Cpu& c) {
    WP_ENTER(0x1083740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr751_01083750(wp::Cpu& c) {
    WP_ENTER(0x1083750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr751_01083760(wp::Cpu& c) {
    WP_ENTER(0x1083760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f6050u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f6050u & 0xFFFFu);
    return;
}

void f_mr751_01083770(wp::Cpu& c) {
    WP_ENTER(0x1083770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10837b4u: goto R_010837b4;
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
    if (wp::cr_get(c, 2)) goto L_010837b8;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010837b8;
    ea = c.r[3] + 0x14u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x10837b4u;
    f_80143290(c);
R_010837b4:
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_010837b8:
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

void f_mr751_010837e0(wp::Cpu& c) {
    WP_ENTER(0x10837e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083814u: goto R_01083814;
        case 0x108382cu: goto R_0108382c;
        case 0x1083838u: goto R_01083838;
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
    c.lr = 0x1083814u;
    wp::call(c, c.ctr);
R_01083814:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[0] + c.r[3];
    c.r[3] = c.r[3] + 0x8u;
    c.lr = 0x108382cu;
    f_800043c4(c);
R_0108382c:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x1083838u;
    f_8011c2d0(c);
R_01083838:
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

void f_mr751_01083860(wp::Cpu& c) {
    WP_ENTER(0x1083860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr751_01083870(wp::Cpu& c) {
    WP_ENTER(0x1083870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10838a4u: goto R_010838a4;
        case 0x10838bcu: goto R_010838bc;
        case 0x10838c8u: goto R_010838c8;
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
    c.lr = 0x10838a4u;
    wp::call(c, c.ctr);
R_010838a4:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = c.r[0] + c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + 0x8u;
    c.lr = 0x10838bcu;
    f_800043c4(c);
R_010838bc:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x10838c8u;
    f_8011c260(c);
R_010838c8:
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

void f_mr751_010838f0(wp::Cpu& c) {
    WP_ENTER(0x10838f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0x1cu;
    f_8011c320(c);
    return;
}

void f_mr751_01083900(wp::Cpu& c) {
    WP_ENTER(0x1083900u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr751_01083910(wp::Cpu& c) {
    WP_ENTER(0x1083910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr751_01083920(wp::Cpu& c) {
    WP_ENTER(0x1083920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr751_01083930(wp::Cpu& c) {
    WP_ENTER(0x1083930u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr751_01083940(wp::Cpu& c) {
    WP_ENTER(0x1083940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_mr751_01083950(wp::Cpu& c) {
    WP_ENTER(0x1083950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr751_01083960(wp::Cpu& c) {
    WP_ENTER(0x1083960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108399cu: goto R_0108399c;
        case 0x10839acu: goto R_010839ac;
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
    if (wp::cr_get(c, 2)) goto L_010839ac;
    c.r[12] = ((((g_mr751_bases[5] + 0x2be30u) + 0x8000u) >> 16) << 16);
    c.r[12] = c.r[12] + wp::sign_extend16((g_mr751_bases[5] + 0x2be30u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108399cu;
    wp::call(c, c.ctr);
R_0108399c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010839ac;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10839acu;
    f_801c7a8c(c);
L_010839ac:
R_010839ac:
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

void f_mr751_010839d0(wp::Cpu& c) {
    WP_ENTER(0x10839d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083a00u: goto R_01083a00;
        case 0x1083a08u: goto R_01083a08;
        case 0x1083a34u: goto R_01083a34;
        case 0x1083a40u: goto R_01083a40;
        case 0x1083a64u: goto R_01083a64;
        case 0x1083a8cu: goto R_01083a8c;
        case 0x1083aa4u: goto R_01083aa4;
        case 0x1083ac0u: goto R_01083ac0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr751_bases[4] + 0x3000u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr751_bases[4] + 0x3000u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1083a00u;
    f_80153530(c);
R_01083a00:
    c.r[3] = 0x6u;
    c.lr = 0x1083a08u;
    f_80153920(c);
R_01083a08:
    c.r[31] = ((((g_mr751_bases[4] + 0x3008u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr751_bases[4] + 0x3008u) & 0xFFFFu);
L_01083a14:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1083a34u;
    f_801537c0(c);
R_01083a34:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1083a40u;
    f_80153590(c);
R_01083a40:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_01083a54;
    c.r[4] = 0xfu;
L_01083a54:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x1083a64u;
    f_80153320(c);
R_01083a64:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01083a80;
    c.r[6] = 0x3u;
L_01083a80:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1083a8cu;
    f_801533a0(c);
R_01083a8c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x1083aa4u;
    f_80153360(c);
R_01083aa4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1083ac0u;
    f_80153400(c);
R_01083ac0:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01083a14;
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

void f_mr751_01083af0(wp::Cpu& c) {
    WP_ENTER(0x1083af0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083b24u: goto R_01083b24;
        case 0x1083b2cu: goto R_01083b2c;
        case 0x1083b34u: goto R_01083b34;
        case 0x1083b3cu: goto R_01083b3c;
        case 0x1083b4cu: goto R_01083b4c;
        case 0x1083b64u: goto R_01083b64;
        case 0x1083b78u: goto R_01083b78;
        case 0x1083b7cu: goto R_01083b7c;
        case 0x1083b88u: goto R_01083b88;
        case 0x1083b98u: goto R_01083b98;
        case 0x1083b9cu: goto R_01083b9c;
        case 0x1083ba0u: goto R_01083ba0;
        case 0x1083bc4u: goto R_01083bc4;
        case 0x1083c0cu: goto R_01083c0c;
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
    c.lr = 0x1083b24u;
    f_80150850(c);
R_01083b24:
    c.r[3] = 0x1u;
    c.lr = 0x1083b2cu;
    f_80153e40(c);
R_01083b2c:
    c.r[3] = 0x0u;
    c.lr = 0x1083b34u;
    f_80153e90(c);
R_01083b34:
    c.r[3] = 0x1u;
    c.lr = 0x1083b3cu;
    f_80153f20(c);
R_01083b3c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x1083b4cu;
    f_80153ee0(c);
R_01083b4c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x1083b64u;
    f_801536f0(c);
R_01083b64:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x1083b78u;
    f_80153df0(c);
R_01083b78:
    c.lr = 0x1083b7cu;
    f_8014f020(c);
R_01083b7c:
    c.r[3] = ((((g_mr751_bases[4] + 0x3028u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x3028u) & 0xFFFFu);
    c.lr = 0x1083b88u;
    f_8014e9e0(c);
R_01083b88:
    c.r[4] = ((((g_mr751_bases[4] + 0x3040u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x3040u) & 0xFFFFu);
    c.lr = 0x1083b98u;
    f_8014f200(c);
R_01083b98:
    c.lr = 0x1083b9cu;
    f_8004aa80(c);
R_01083b9c:
    c.lr = 0x1083ba0u;
    f_800ee3c0(c);
R_01083ba0:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1083bc4u;
    f_800e95b0(c);
R_01083bc4:
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
    c.lr = 0x1083c0cu;
    f_80150560(c);
R_01083c0c:
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

void f_mr751_01083c90(wp::Cpu& c) {
    WP_ENTER(0x1083c90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083cd0u: goto R_01083cd0;
        case 0x1083ce4u: goto R_01083ce4;
        case 0x1083cf4u: goto R_01083cf4;
        case 0x1083d04u: goto R_01083d04;
        case 0x1083d10u: goto R_01083d10;
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
    c.lr = 0x1083cd0u;
    f_8003d6b0(c);
R_01083cd0:
    c.r[4] = ((((g_mr751_bases[5] + 0x2be90u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2be90u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1083ce4u;
    f_801c79a4(c);
R_01083ce4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01083cf4;
    c.lr = 0x1083cf4u;
    f_80034ac0(c);
L_01083cf4:
R_01083cf4:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x1083d04u;
    f_80052170(c);
R_01083d04:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x1083d10u;
    f_80052190(c);
R_01083d10:
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

void f_mr751_01083d40(wp::Cpu& c) {
    WP_ENTER(0x1083d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083d88u: goto R_01083d88;
        case 0x1083d90u: goto R_01083d90;
        case 0x1083da4u: goto R_01083da4;
        case 0x1083db4u: goto R_01083db4;
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
    if (wp::cr_get(c, 2)) goto L_01083db4;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01083d90;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083d90;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x1083d88u;
    f_80034b10(c);
R_01083d88:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1083d90u;
    f_801c7a8c(c);
L_01083d90:
R_01083d90:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083da4;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1083da4u;
    f_80051600(c);
L_01083da4:
R_01083da4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01083db4;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1083db4u;
    f_801c7a8c(c);
L_01083db4:
R_01083db4:
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

void f_mr751_01083de0(wp::Cpu& c) {
    WP_ENTER(0x1083de0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083e24u: goto R_01083e24;
        case 0x1083e50u: goto R_01083e50;
        case 0x1083e5cu: goto R_01083e5c;
        case 0x1083e64u: goto R_01083e64;
        case 0x1083e70u: goto R_01083e70;
        case 0x1083e78u: goto R_01083e78;
        case 0x1083e80u: goto R_01083e80;
        case 0x1083ea0u: goto R_01083ea0;
        case 0x1083ec0u: goto R_01083ec0;
        case 0x1083ec8u: goto R_01083ec8;
        case 0x1083ed4u: goto R_01083ed4;
        case 0x1083f04u: goto R_01083f04;
        case 0x1083f20u: goto R_01083f20;
        case 0x1083f68u: goto R_01083f68;
        case 0x1083f84u: goto R_01083f84;
        case 0x1083f9cu: goto R_01083f9c;
        case 0x1083fb8u: goto R_01083fb8;
        case 0x1083fc8u: goto R_01083fc8;
        case 0x1083fccu: goto R_01083fcc;
        case 0x1084004u: goto R_01084004;
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
    c.lr = 0x1083e24u;
    f_801c83b8(c);
R_01083e24:
    c.r[29] = ((((g_mr751_bases[4] + 0x2fe0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr751_bases[4] + 0x2fe0u) & 0xFFFFu);
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
    c.lr = 0x1083e50u;
    f_8014c050(c);
R_01083e50:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x1083e5cu;
    f_80154c30(c);
R_01083e5c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1083e64u;
    f_8014b090(c);
R_01083e64:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1083e70u;
    f_80154d30(c);
R_01083e70:
    c.r[3] = 0x0u;
    c.lr = 0x1083e78u;
    f_80154e50(c);
R_01083e78:
    c.r[3] = 0x0u;
    c.lr = 0x1083e80u;
    f_80151a30(c);
R_01083e80:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1083ea0u;
    f_80151a60(c);
R_01083ea0:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1083ec0u;
    f_80151a60(c);
R_01083ec0:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1083ec8u;
    f_80034f00(c);
R_01083ec8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1083ed4u;
    f_80034f20(c);
R_01083ed4:
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
    c.lr = 0x1083f04u;
    f_8014f9d0(c);
R_01083f04:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1083f20u;
    f_8014f780(c);
R_01083f20:
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
L_01083f3c:
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
    c.lr = 0x1083f68u;
    f_80126450(c);
R_01083f68:
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
    c.lr = 0x1083f84u;
    f_8014b7e0(c);
R_01083f84:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x1083f9cu;
    f_80154e70(c);
R_01083f9c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1083fb8u;
    f_8014f780(c);
R_01083fb8:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01083f3c;
    }
    c.lr = 0x1083fc8u;
    f_mr751_010839d0(c);
R_01083fc8:
    c.lr = 0x1083fccu;
    f_mr751_01083af0(c);
R_01083fcc:
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
    c.lr = 0x1084004u;
    f_801c8404(c);
R_01084004:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

void f_mr751_01084020(wp::Cpu& c) {
    WP_ENTER(0x1084020u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084080u: goto R_01084080;
        case 0x10840a8u: goto R_010840a8;
        case 0x10840b8u: goto R_010840b8;
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
    if (wp::cr_get(c, 2)) goto L_010840b8;
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = ((((g_mr751_bases[5] + 0x2bf38u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf38u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084080;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084080;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084080u;
    wp::call(c, c.ctr);
L_01084080:
R_01084080:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010840a8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010840a8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10840a8u;
    wp::call(c, c.ctr);
L_010840a8:
R_010840a8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010840b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10840b8u;
    f_801c7a8c(c);
L_010840b8:
R_010840b8:
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

void f_mr751_010840e0(wp::Cpu& c) {
    WP_ENTER(0x10840e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084128u: goto R_01084128;
        case 0x1084164u: goto R_01084164;
        case 0x108416cu: goto R_0108416c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084110;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01084110:
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084128u;
    wp::call(c, c.ctr);
R_01084128:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108416c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108416c;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084164;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084164u;
    wp::call(c, c.ctr);
L_01084164:
R_01084164:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108416cu;
    f_801c7a8c(c);
L_0108416c:
R_0108416c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01084180(wp::Cpu& c) {
    WP_ENTER(0x1084180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = ((((g_mr751_bases[5] + 0x2bfe4u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2bfe4u) & 0xFFFFu);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr751_010841b0(wp::Cpu& c) {
    WP_ENTER(0x10841b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10841d8u: goto R_010841d8;
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
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010841d8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010841d8;
    c.lr = 0x10841d8u;
    f_801c7a8c(c);
L_010841d8:
R_010841d8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_010841f0(wp::Cpu& c) {
    WP_ENTER(0x10841f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr751_01084200(wp::Cpu& c) {
    WP_ENTER(0x1084200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = ((((g_mr751_bases[5] + 0x2bfd0u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2bfd0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084230;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01084230:
    c.r[4] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0xcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0xdu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    return;
}

void f_mr751_01084260(wp::Cpu& c) {
    WP_ENTER(0x1084260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10842e4u: goto R_010842e4;
        case 0x10842ecu: goto R_010842ec;
        case 0x1084330u: goto R_01084330;
        case 0x1084338u: goto R_01084338;
        case 0x1084348u: goto R_01084348;
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
    if (wp::cr_get(c, 2)) goto L_01084348;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = ((((g_mr751_bases[5] + 0x2bfd0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = 0x0u;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr751_bases[5] + 0x2bfd0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010842ec;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010842ec;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010842e4;
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10842e4u;
    wp::call(c, c.ctr);
L_010842e4:
R_010842e4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10842ecu;
    f_801c7a8c(c);
L_010842ec:
R_010842ec:
    c.r[0] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084338;
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084338;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084338;
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084330;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084330u;
    wp::call(c, c.ctr);
L_01084330:
R_01084330:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084338u;
    f_801c7a8c(c);
L_01084338:
R_01084338:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01084348;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1084348u;
    f_801c7a8c(c);
L_01084348:
R_01084348:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01084370(wp::Cpu& c) {
    WP_ENTER(0x1084370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10843f0u: goto R_010843f0;
        case 0x10843f4u: goto R_010843f4;
        case 0x10843fcu: goto R_010843fc;
        case 0x1084424u: goto R_01084424;
        case 0x1084428u: goto R_01084428;
        case 0x108453cu: goto R_0108453c;
        case 0x1084544u: goto R_01084544;
        case 0x1084558u: goto R_01084558;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x0u;
    c.r[6] = ((((g_mr751_bases[5] + 0x2bfbcu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[5]);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr751_bases[5] + 0x2bfbcu) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[5]);
    if (!wp::cr_get(c, 1)) goto L_01084558;
    c.r[3] = 0x20000000u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    if (!wp::cr_get(c, 1)) goto L_010843f4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10843f0u;
    f_801cee24(c);
R_010843f0:
    c.lr = 0x10843f4u;
    f_801d3940(c);
L_010843f4:
R_010843f4:
    c.r[3] = wp::rotl(c.r[30], 3) & 0xfffffff8u;
    c.lr = 0x10843fcu;
    f_801c79a4(c);
R_010843fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01084428;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c040u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c040u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084424u;
    f_801cee24(c);
R_01084424:
    c.lr = 0x1084428u;
    f_801d3940(c);
L_01084428:
R_01084428:
    ea = c.r[31] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[6] + c.r[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[29]);
    c.r[0] = c.r[4] + 0x7u;
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.r[0] = c.r[0] - c.r[6];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[30]);
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[5] = c.r[29] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010844ac;
    c.r[0] = c.r[0] | 0x0u;
L_01084468:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084494;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084494;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01084494:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[6] = c.r[6] + 0x8u;
    c.r[5] = c.r[5] + 0x8u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01084468;
    }
L_010844ac:
    ea = c.r[31] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x10u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01084558;
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[5] + c.r[3];
    goto L_01084548;
L_010844f8:
    c.r[30] = wp::add_carry(c, c.r[30], 0xfffffff8u, 0);
    wp::record(c, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01084544;
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084544;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084544;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108453c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108453cu;
    wp::call(c, c.ctr);
L_0108453c:
R_0108453c:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084544u;
    f_801c7a8c(c);
L_01084544:
R_01084544:
    c.r[29] = c.r[29] + 0xffffffffu;
L_01084548:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010844f8;
    }
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084558u;
    f_801c7a8c(c);
L_01084558:
R_01084558:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr751_01084580(wp::Cpu& c) {
    WP_ENTER(0x1084580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084594u: goto R_01084594;
        case 0x108461cu: goto R_0108461c;
        case 0x1084624u: goto R_01084624;
        case 0x1084638u: goto R_01084638;
        case 0x1084648u: goto R_01084648;
        case 0x1084654u: goto R_01084654;
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
    c.lr = 0x1084594u;
    f_801c83b8(c);
R_01084594:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 2)) goto L_01084648;
    c.r[31] = wp::add_carry(c, c.r[3], 0x8u, 0);
    wp::record(c, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01084638;
    if (wp::cr_get(c, 2)) goto L_01084638;
    if (wp::cr_get(c, 2)) goto L_01084638;
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084638;
    ea = c.r[31] + 0x4u;
    c.r[29] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] + c.r[3];
    goto L_01084628;
L_010845d8:
    c.r[30] = wp::add_carry(c, c.r[30], 0xfffffff8u, 0);
    wp::record(c, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01084624;
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084624;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084624;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108461c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108461cu;
    wp::call(c, c.ctr);
L_0108461c:
R_0108461c:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084624u;
    f_801c7a8c(c);
L_01084624:
R_01084624:
    c.r[29] = c.r[29] + 0xffffffffu;
L_01084628:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010845d8;
    }
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084638u;
    f_801c7a8c(c);
L_01084638:
R_01084638:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01084648;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1084648u;
    f_801c7a8c(c);
L_01084648:
R_01084648:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1084654u;
    f_801c8404(c);
R_01084654:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01084670(wp::Cpu& c) {
    WP_ENTER(0x1084670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10846c0u: goto R_010846c0;
        case 0x1084738u: goto R_01084738;
        case 0x1084740u: goto R_01084740;
        case 0x108477cu: goto R_0108477c;
        case 0x1084784u: goto R_01084784;
        case 0x10847b4u: goto R_010847b4;
        case 0x10847f0u: goto R_010847f0;
        case 0x10847f8u: goto R_010847f8;
        case 0x1084830u: goto R_01084830;
        case 0x1084834u: goto R_01084834;
        case 0x10848b8u: goto R_010848b8;
        case 0x10848c0u: goto R_010848c0;
        case 0x1084900u: goto R_01084900;
        case 0x108493cu: goto R_0108493c;
        case 0x1084944u: goto R_01084944;
        case 0x1084980u: goto R_01084980;
        case 0x1084988u: goto R_01084988;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = 0x0u;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[4] + 0x4u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[6]);
    wp::compare_unsigned(c, 0, c.r[0], c.r[7]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_010847fc;
    ea = c.r[4] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x28u;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10846c0u;
    wp::call(c, c.ctr);
R_010846c0:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010846e4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010846e4:
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01084740;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084740;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084738;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084738u;
    wp::call(c, c.ctr);
L_01084738:
R_01084738:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084740u;
    f_801c7a8c(c);
L_01084740:
R_01084740:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084784;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084784;
    ea = c.r[1] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108477c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108477cu;
    wp::call(c, c.ctr);
L_0108477c:
R_0108477c:
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084784u;
    f_801c7a8c(c);
L_01084784:
R_01084784:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010847a8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010847a8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x20u;
    c.lr = 0x10847b4u;
    f_mr751_010849b0(c);
R_010847b4:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010848c0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010848c0;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010847f0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10847f0u;
    wp::call(c, c.ctr);
L_010847f0:
R_010847f0:
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10847f8u;
    f_801c7a8c(c);
R_010847f8:
    goto L_010848c0;
L_010847fc:
    c.r[3] = wp::divw(c.r[5], c.r[7]);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] * c.r[7];
    c.r[29] = c.r[5] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01084834;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beccu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beccu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084830u;
    f_801cee24(c);
R_01084830:
    c.lr = 0x1084834u;
    f_801d3940(c);
L_01084834:
R_01084834:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01084864;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01084864:
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010848c0;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010848c0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010848b8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10848b8u;
    wp::call(c, c.ctr);
L_010848b8:
R_010848b8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10848c0u;
    f_801c7a8c(c);
L_010848c0:
R_010848c0:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010848e4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010848e4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084900u;
    wp::call(c, c.ctr);
R_01084900:
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084944;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084944;
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108493c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108493cu;
    wp::call(c, c.ctr);
L_0108493c:
R_0108493c:
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084944u;
    f_801c7a8c(c);
L_01084944:
R_01084944:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084988;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084988;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084980;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084980u;
    wp::call(c, c.ctr);
L_01084980:
R_01084980:
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084988u;
    f_801c7a8c(c);
L_01084988:
R_01084988:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr751_010849b0(wp::Cpu& c) {
    WP_ENTER(0x10849b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084a58u: goto R_01084a58;
        case 0x1084a5cu: goto R_01084a5c;
        case 0x1084abcu: goto R_01084abc;
        case 0x1084ac0u: goto R_01084ac0;
        case 0x1084b80u: goto R_01084b80;
        case 0x1084b84u: goto R_01084b84;
        case 0x1084b8cu: goto R_01084b8c;
        case 0x1084bb4u: goto R_01084bb4;
        case 0x1084bb8u: goto R_01084bb8;
        case 0x1084d28u: goto R_01084d28;
        case 0x1084d30u: goto R_01084d30;
        case 0x1084da4u: goto R_01084da4;
        case 0x1084dacu: goto R_01084dac;
        case 0x1084dc0u: goto R_01084dc0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[5] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_01084a28;
    ea = c.r[3] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[5] + c.r[0];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01084a18;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084a18;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01084a18:
    ea = c.r[3] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_01084dc0;
L_01084a28:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01084a5c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084a58u;
    f_801cee24(c);
R_01084a58:
    c.lr = 0x1084a5cu;
    f_801d3940(c);
L_01084a5c:
R_01084a5c:
    c.r[5] = 0x0u;
    c.r[4] = c.r[29] + 0x10u;
    c.r[3] = 0x20000000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01084ac0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084abcu;
    f_801cee24(c);
R_01084abc:
    c.lr = 0x1084ac0u;
    f_801d3940(c);
L_01084ac0:
R_01084ac0:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01084b10;
    c.r[5] = c.r[31] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01084b04;
    c.r[3] = c.r[1] + 0x10u;
L_01084b04:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01084b54;
L_01084b10:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01084b4c;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01084b40;
    c.r[3] = c.r[1] + 0x10u;
L_01084b40:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01084b54;
L_01084b4c:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_01084b54:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01084b84;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084b80u;
    f_801cee24(c);
R_01084b80:
    c.lr = 0x1084b84u;
    f_801d3940(c);
L_01084b84:
R_01084b84:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x1084b8cu;
    f_801c79a4(c);
R_01084b8c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01084bb8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c040u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c040u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084bb4u;
    f_801cee24(c);
R_01084bb4:
    c.lr = 0x1084bb8u;
    f_801d3940(c);
L_01084bb8:
R_01084bb8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[28] + c.r[0];
    c.r[3] = c.r[3] + c.r[0];
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084c04;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084c04;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01084c04:
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[29] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[29] + 0x8u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[3] + c.r[0];
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[6] = c.r[7] + c.r[0];
    c.r[0] = c.r[6] + 0x7u;
    c.r[0] = c.r[0] - c.r[7];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_01084c94;
L_01084c48:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_01084c78;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084c78;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01084c78:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01084c48;
    }
L_01084c94:
    ea = c.r[29] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[28] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    c.r[30] = c.r[4] + c.r[3];
    c.r[29] = c.r[30] + c.r[0];
    goto L_01084d30;
L_01084ce4:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01084d30;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084d30;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084d30;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084d28;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084d28u;
    wp::call(c, c.ctr);
L_01084d28:
R_01084d28:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084d30u;
    f_801c7a8c(c);
L_01084d30:
R_01084d30:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_01084ce4;
    }
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084dc0;
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084dc0;
    c.r[28] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[28]);
    goto L_01084db0;
L_01084d60:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01084dac;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084dac;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01084dac;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084da4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084da4u;
    wp::call(c, c.ctr);
L_01084da4:
R_01084da4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084dacu;
    f_801c7a8c(c);
L_01084dac:
R_01084dac:
    c.r[28] = c.r[28] + 0xffffffffu;
L_01084db0:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084d60;
    }
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084dc0u;
    f_801c7a8c(c);
L_01084dc0:
R_01084dc0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr751_01084de0(wp::Cpu& c) {
    WP_ENTER(0x1084de0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084f0cu: goto R_01084f0c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[7] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.f[1] = wp::round_single(c.f[1] + c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    if (wp::cr_get(c, 2)) goto L_01084e20;
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x40u;
    wp::wr8(ea, c.r[4]);
L_01084e20:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084e30;
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x41u;
    wp::wr8(ea, c.r[4]);
L_01084e30:
    ea = c.r[3] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    if (wp::cr_get(c, 2)) goto L_01084e54;
    ea = c.r[3] + 0x30u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084f20;
L_01084e54:
    ea = c.r[3] + 0x40u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x2cu;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x28u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x30u;
    wp::wr32(ea, c.r[5]);
    if (!wp::cr_get(c, 2)) goto L_01084e7c;
    ea = c.r[3] + 0x41u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084f20;
L_01084e7c:
    ea = c.r[3] + 0x40u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    if (wp::cr_get(c, 2)) goto L_01084ed0;
    ea = c.r[3] + 0x20u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01084ed0;
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = 0xffffffffu;
    c.f[1] = wp::round_single(c.f[2] - c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x30u;
    wp::wr32(ea, c.r[5]);
    c.f[0] = wp::round_single(c.f[2] - c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_01084ef8;
L_01084ed0:
    ea = c.r[3] + 0x41u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084ef8;
    ea = c.r[3] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[5] + c.r[4];
    wp::compare_signed(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01084ef8;
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x30u;
    wp::wr32(ea, c.r[4]);
L_01084ef8:
    ea = c.r[3] + 0x30u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084f14;
    ea = c.r[3] + 0x3cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1084f0cu;
    f_80071fe0(c);
R_01084f0c:
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = 0x1u;
L_01084f14:
    c.r[3] = 0x0u;
    ea = c.r[31] + 0x41u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[31] + 0x40u;
    wp::wr8(ea, c.r[3]);
L_01084f20:
    ea = c.r[31] + 0x28u;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085040;
    ea = c.r[31] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085040;
    ea = c.r[31] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = 0x43300000u;
    c.r[5] = c.r[8] ^ 0x80000000u;
    c.r[3] = ((((g_mr751_bases[4] + 0x30b8u) + 0x8000u) >> 16) << 16);
    c.r[7] = c.r[4] + 0x1u;
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x30b8u) & 0xFFFFu);
    c.f[4] = wp::rdf64(ea);
    c.r[0] = c.r[7] ^ 0x80000000u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x1cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[4] = wp::sraw(c, c.r[7], 31);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::sub_carry(c, c.r[8], c.r[7]);
    c.r[3] = wp::rotl(c.r[8], 1) & 0x1u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[5]);
    c.r[5] = wp::add_extended(c, c.r[4], c.r[3]);
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[6]);
    c.f[2] = wp::round_single(c.f[0] - c.f[4]);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[31] + 0x2cu;
    wp::wr32(ea, c.r[7]);
    c.f[1] = wp::round_single(c.f[1] - c.f[4]);
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[2] / c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[31] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    c.f[1] = wp::round_single(c.f[2] * wp::force25(c.f[3]));
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[2] * wp::force25(c.f[0]));
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x14u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[31] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    if (!wp::cr_get(c, 0)) goto L_01084fe4;
    c.f[1] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[2] - c.f[3]);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_01085010;
L_01084fe4:
    c.r[3] = ((((g_mr751_bases[4] + 0x30b0u) + 0x8000u) >> 16) << 16);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x30b0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[2] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    if (wp::cr_get(c, 2)) goto L_01085010;
    ea = c.r[31] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[3]);
L_01085010:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085040;
    c.r[4] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[31] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[31] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01085040:
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr751_01085060(wp::Cpu& c) {
    WP_ENTER(0x1085060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10850c0u: goto R_010850c0;
        case 0x10850d4u: goto R_010850d4;
        case 0x10850f4u: goto R_010850f4;
        case 0x1085108u: goto R_01085108;
        case 0x1085160u: goto R_01085160;
        case 0x108521cu: goto R_0108521c;
        case 0x1085244u: goto R_01085244;
        case 0x1085248u: goto R_01085248;
        case 0x108535cu: goto R_0108535c;
        case 0x1085364u: goto R_01085364;
        case 0x1085378u: goto R_01085378;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr751_bases[5] + 0x2bfa0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bfa0u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0xcu;
    c.lr = 0x10850c0u;
    f_801c79a4(c);
R_010850c0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01085154;
    c.r[3] = 0x1cu;
    c.lr = 0x10850d4u;
    f_801c79a4(c);
R_010850d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01085134;
    c.r[4] = ((((g_mr751_bases[5] + 0x2bf60u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf60u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x180u;
    c.lr = 0x10850f4u;
    f_801c79a4(c);
R_010850f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085108;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.lr = 0x1085108u;
    f_mr751_010117a0(c);
L_01085108:
R_01085108:
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x0u;
    c.r[0] = 0x2u;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x10u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[28] + 0x11u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[28] + 0x12u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[28] + 0x13u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[28] + 0x14u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[28] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01085134:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = ((((g_mr751_bases[5] + 0x2bf10u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf10u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x8u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x9u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0xau;
    wp::wr8(ea, c.r[0]);
L_01085154:
    ea = c.r[31] + 0x24u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = 0x44u;
    c.lr = 0x1085160u;
    f_801c79a4(c);
R_01085160:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010851f4;
    c.r[5] = (((0x802f5688u + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16(0x802f5688u & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[6] = (((0x802f568cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[5] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = 0x0u;
    ea = c.r[6] + wp::sign_extend16(0x802f568cu & 0xFFFFu);
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    c.f[2] = wp::round_single(c.f[3] - c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    c.r[0] = 0x1u;
    ea = c.r[5] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    c.f[1] = wp::round_single(c.f[1] - c.f[4]);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    ea = c.r[29] + 0x10u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[29] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[29] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x28u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x30u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x34u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x3cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x40u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x41u;
    wp::wr8(ea, c.r[4]);
L_010851f4:
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[0], 0x80u);
    if (!wp::cr_get(c, 0)) goto L_01085378;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x400u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108521cu;
    f_801c79a4(c);
R_0108521c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01085248;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c05cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c05cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1085244u;
    f_801cee24(c);
R_01085244:
    c.lr = 0x1085248u;
    f_801d3940(c);
L_01085248:
R_01085248:
    ea = c.r[31] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x80u;
    ea = c.r[31] + 0xcu;
    c.r[7] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[6] = c.r[7] + c.r[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    c.r[0] = c.r[6] + 0x7u;
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.r[0] = c.r[0] - c.r[7];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[5] = c.r[28] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[7], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_010852cc;
L_01085288:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010852b4;
    ea = c.r[7] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[7] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010852b4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010852b4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[7] = c.r[7] + 0x8u;
    c.r[5] = c.r[5] + 0x8u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01085288;
    }
L_010852cc:
    ea = c.r[31] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x10u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01085378;
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[5] + c.r[3];
    goto L_01085368;
L_01085318:
    c.r[28] = wp::add_carry(c, c.r[28], 0xfffffff8u, 0);
    wp::record(c, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01085364;
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085364;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085364;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108535c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108535cu;
    wp::call(c, c.ctr);
L_0108535c:
R_0108535c:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085364u;
    f_801c7a8c(c);
L_01085364:
R_01085364:
    c.r[29] = c.r[29] + 0xffffffffu;
L_01085368:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085318;
    }
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085378u;
    f_801c7a8c(c);
L_01085378:
R_01085378:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr751_010853a0(wp::Cpu& c) {
    WP_ENTER(0x10853a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10853b4u: goto R_010853b4;
        case 0x10853dcu: goto R_010853dc;
        case 0x1085404u: goto R_01085404;
        case 0x108547cu: goto R_0108547c;
        case 0x1085484u: goto R_01085484;
        case 0x1085498u: goto R_01085498;
        case 0x1085510u: goto R_01085510;
        case 0x1085518u: goto R_01085518;
        case 0x108552cu: goto R_0108552c;
        case 0x1085570u: goto R_01085570;
        case 0x1085578u: goto R_01085578;
        case 0x1085588u: goto R_01085588;
        case 0x1085594u: goto R_01085594;
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
    c.lr = 0x10853b4u;
    f_801c83b8(c);
R_010853b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    c.r[31] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 2)) goto L_01085588;
    c.r[3] = wp::add_carry(c, c.r[3], 0x28u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010853dc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010853dc;
    c.lr = 0x10853dcu;
    f_801c7a8c(c);
L_010853dc:
R_010853dc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x24u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01085404;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085404;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085404u;
    wp::call(c, c.ctr);
L_01085404:
R_01085404:
    c.r[29] = wp::add_carry(c, c.r[30], 0x18u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01085498;
    if (wp::cr_get(c, 2)) goto L_01085498;
    if (wp::cr_get(c, 2)) goto L_01085498;
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085498;
    ea = c.r[29] + 0x4u;
    c.r[27] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[27], 3) & 0xfffffff8u;
    c.r[0] = c.r[27] - c.r[27];
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[4] + c.r[3];
    goto L_01085488;
L_01085438:
    c.r[28] = wp::add_carry(c, c.r[28], 0xfffffff8u, 0);
    wp::record(c, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01085484;
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085484;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085484;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108547c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108547cu;
    wp::call(c, c.ctr);
L_0108547c:
R_0108547c:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085484u;
    f_801c7a8c(c);
L_01085484:
R_01085484:
    c.r[27] = c.r[27] + 0xffffffffu;
L_01085488:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085438;
    }
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085498u;
    f_801c7a8c(c);
L_01085498:
R_01085498:
    c.r[27] = wp::add_carry(c, c.r[30], 0xcu, 0);
    wp::record(c, c.r[27]);
    if (wp::cr_get(c, 2)) goto L_0108552c;
    if (wp::cr_get(c, 2)) goto L_0108552c;
    if (wp::cr_get(c, 2)) goto L_0108552c;
    ea = c.r[27] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108552c;
    ea = c.r[27] + 0x4u;
    c.r[29] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[4] + c.r[3];
    goto L_0108551c;
L_010854cc:
    c.r[28] = wp::add_carry(c, c.r[28], 0xfffffff8u, 0);
    wp::record(c, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01085518;
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085518;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085518;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085510;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085510u;
    wp::call(c, c.ctr);
L_01085510:
R_01085510:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085518u;
    f_801c7a8c(c);
L_01085518:
R_01085518:
    c.r[29] = c.r[29] + 0xffffffffu;
L_0108551c:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010854cc;
    }
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108552cu;
    f_801c7a8c(c);
L_0108552c:
R_0108552c:
    c.r[0] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01085578;
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085578;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085578;
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085570;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085570u;
    wp::call(c, c.ctr);
L_01085570:
R_01085570:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085578u;
    f_801c7a8c(c);
L_01085578:
R_01085578:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01085588;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1085588u;
    f_801c7a8c(c);
L_01085588:
R_01085588:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1085594u;
    f_801c8404(c);
R_01085594:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_010855b0(wp::Cpu& c) {
    WP_ENTER(0x10855b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085658u: goto R_01085658;
        case 0x108565cu: goto R_0108565c;
        case 0x10856bcu: goto R_010856bc;
        case 0x10856c0u: goto R_010856c0;
        case 0x1085780u: goto R_01085780;
        case 0x1085784u: goto R_01085784;
        case 0x108578cu: goto R_0108578c;
        case 0x10857b4u: goto R_010857b4;
        case 0x10857b8u: goto R_010857b8;
        case 0x1085928u: goto R_01085928;
        case 0x1085930u: goto R_01085930;
        case 0x10859a4u: goto R_010859a4;
        case 0x10859acu: goto R_010859ac;
        case 0x10859c0u: goto R_010859c0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_01085628;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[5] + c.r[0];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01085618;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085618;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085618:
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[0]);
    goto L_010859c0;
L_01085628:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0108565c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1085658u;
    f_801cee24(c);
R_01085658:
    c.lr = 0x108565cu;
    f_801d3940(c);
L_0108565c:
R_0108565c:
    c.r[5] = 0x0u;
    c.r[4] = c.r[29] + 0x14u;
    c.r[3] = 0x20000000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010856c0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10856bcu;
    f_801cee24(c);
R_010856bc:
    c.lr = 0x10856c0u;
    f_801d3940(c);
L_010856c0:
R_010856c0:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01085710;
    c.r[5] = c.r[31] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01085704;
    c.r[3] = c.r[1] + 0x10u;
L_01085704:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01085754;
L_01085710:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108574c;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01085740;
    c.r[3] = c.r[1] + 0x10u;
L_01085740:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01085754;
L_0108574c:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_01085754:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01085784;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1085780u;
    f_801cee24(c);
R_01085780:
    c.lr = 0x1085784u;
    f_801d3940(c);
L_01085784:
R_01085784:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x108578cu;
    f_801c79a4(c);
R_0108578c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010857b8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c05cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c05cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10857b4u;
    f_801cee24(c);
R_010857b4:
    c.lr = 0x10857b8u;
    f_801d3940(c);
L_010857b8:
R_010857b8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[29] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[28] + c.r[0];
    c.r[3] = c.r[3] + c.r[0];
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01085804;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085804;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085804:
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[29] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[3] + c.r[0];
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[6] = c.r[7] + c.r[0];
    c.r[0] = c.r[6] + 0x7u;
    c.r[0] = c.r[0] - c.r[7];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_01085894;
L_01085848:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_01085878;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085878;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085878:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01085848;
    }
L_01085894:
    ea = c.r[29] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[28] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    c.r[30] = c.r[4] + c.r[3];
    c.r[29] = c.r[30] + c.r[0];
    goto L_01085930;
L_010858e4:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01085930;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085930;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085930;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085928;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085928u;
    wp::call(c, c.ctr);
L_01085928:
R_01085928:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085930u;
    f_801c7a8c(c);
L_01085930:
R_01085930:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_010858e4;
    }
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010859c0;
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010859c0;
    c.r[28] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[28]);
    goto L_010859b0;
L_01085960:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010859ac;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010859ac;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010859ac;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010859a4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10859a4u;
    wp::call(c, c.ctr);
L_010859a4:
R_010859a4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10859acu;
    f_801c7a8c(c);
L_010859ac:
R_010859ac:
    c.r[28] = c.r[28] + 0xffffffffu;
L_010859b0:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085960;
    }
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10859c0u;
    f_801c7a8c(c);
L_010859c0:
R_010859c0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr751_010859e0(wp::Cpu& c) {
    WP_ENTER(0x10859e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085a88u: goto R_01085a88;
        case 0x1085a8cu: goto R_01085a8c;
        case 0x1085aecu: goto R_01085aec;
        case 0x1085af0u: goto R_01085af0;
        case 0x1085bb0u: goto R_01085bb0;
        case 0x1085bb4u: goto R_01085bb4;
        case 0x1085bbcu: goto R_01085bbc;
        case 0x1085be4u: goto R_01085be4;
        case 0x1085be8u: goto R_01085be8;
        case 0x1085d58u: goto R_01085d58;
        case 0x1085d60u: goto R_01085d60;
        case 0x1085dd4u: goto R_01085dd4;
        case 0x1085ddcu: goto R_01085ddc;
        case 0x1085df0u: goto R_01085df0;
        case 0x1085e08u: goto R_01085e08;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x20u;
    c.r[5] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_01085a58;
    ea = c.r[3] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[5] + c.r[0];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01085a48;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085a48;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085a48:
    ea = c.r[3] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    goto L_01085df0;
L_01085a58:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01085a8c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1085a88u;
    f_801cee24(c);
R_01085a88:
    c.lr = 0x1085a8cu;
    f_801d3940(c);
L_01085a8c:
R_01085a8c:
    c.r[5] = 0x0u;
    c.r[4] = c.r[29] + 0x20u;
    c.r[3] = 0x20000000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x20u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01085af0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1085aecu;
    f_801cee24(c);
R_01085aec:
    c.lr = 0x1085af0u;
    f_801d3940(c);
L_01085af0:
R_01085af0:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01085b40;
    c.r[5] = c.r[31] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01085b34;
    c.r[3] = c.r[1] + 0x10u;
L_01085b34:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01085b84;
L_01085b40:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01085b7c;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01085b70;
    c.r[3] = c.r[1] + 0x10u;
L_01085b70:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01085b84;
L_01085b7c:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_01085b84:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01085bb4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1085bb0u;
    f_801cee24(c);
R_01085bb0:
    c.lr = 0x1085bb4u;
    f_801d3940(c);
L_01085bb4:
R_01085bb4:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x1085bbcu;
    f_801c79a4(c);
R_01085bbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01085be8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c008u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c008u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1085be4u;
    f_801cee24(c);
R_01085be4:
    c.lr = 0x1085be8u;
    f_801d3940(c);
L_01085be8:
R_01085be8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[29] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[28] + c.r[0];
    c.r[3] = c.r[3] + c.r[0];
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01085c34;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085c34;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085c34:
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[29] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[29] + 0x18u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[3] + c.r[0];
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[6] = c.r[7] + c.r[0];
    c.r[0] = c.r[6] + 0x7u;
    c.r[0] = c.r[0] - c.r[7];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_01085cc4;
L_01085c78:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_01085ca8;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085ca8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085ca8:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01085c78;
    }
L_01085cc4:
    ea = c.r[29] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[28] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x18u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x1cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    c.r[31] = c.r[4] + c.r[3];
    c.r[29] = c.r[31] + c.r[0];
    goto L_01085d60;
L_01085d14:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01085d60;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085d60;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085d60;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085d58;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085d58u;
    wp::call(c, c.ctr);
L_01085d58:
R_01085d58:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085d60u;
    f_801c7a8c(c);
L_01085d60:
R_01085d60:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_01085d14;
    }
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01085df0;
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085df0;
    c.r[28] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[28]);
    goto L_01085de0;
L_01085d90:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01085ddc;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085ddc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085ddc;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085dd4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085dd4u;
    wp::call(c, c.ctr);
L_01085dd4:
R_01085dd4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085ddcu;
    f_801c7a8c(c);
L_01085ddc:
R_01085ddc:
    c.r[28] = c.r[28] + 0xffffffffu;
L_01085de0:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085d90;
    }
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085df0u;
    f_801c7a8c(c);
L_01085df0:
R_01085df0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085e08u;
    wp::call(c, c.ctr);
R_01085e08:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr751_01085e30(wp::Cpu& c) {
    WP_ENTER(0x1085e30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr751_01085e50(wp::Cpu& c) {
    WP_ENTER(0x1085e50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085ef8u: goto R_01085ef8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x28u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    goto L_01085e84;
L_01085e78:
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[5] + 0x8u;
    ea = c.r[4] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
L_01085e84:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[4] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085e78;
    }
    c.r[4] = ((((g_mr751_bases[4] + 0x30c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x30c0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[0] = c.f[0];
    c.f[31] = wp::convert_to_int(c.f[0], true);
    goto L_01085efc;
L_01085eb4:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x14u;
    goto L_01085ed8;
L_01085ec8:
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0xb4u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01085ed8:
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085ec8;
    }
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085ef8u;
    wp::call(c, c.ctr);
R_01085ef8:
    c.r[30] = c.r[30] + 0x8u;
L_01085efc:
    ea = c.r[31] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085eb4;
    }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr751_01085f40(wp::Cpu& c) {
    WP_ENTER(0x1085f40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[7] = ((((g_mr751_bases[4] + 0x30c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + 0x4u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[5] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[6] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[7] + wp::sign_extend16((g_mr751_bases[4] + 0x30c4u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[3] - c.f[5]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x0u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[3] + 0x28u;
    c.r[7] = wp::rd32(ea);
    c.f[0] = wp::round_single(c.f[1] / c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[7] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[5] + 0x0u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[7] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    ea = c.r[6] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x28u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[4] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[3] + 0x28u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x28u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01085fb0(wp::Cpu& c) {
    WP_ENTER(0x1085fb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086040u: goto R_01086040;
        case 0x1086048u: goto R_01086048;
        case 0x1086078u: goto R_01086078;
        case 0x10860b4u: goto R_010860b4;
        case 0x10860bcu: goto R_010860bc;
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
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01085fe8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085fe8:
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01086048;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086048;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086040;
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086040u;
    wp::call(c, c.ctr);
L_01086040:
R_01086040:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086048u;
    f_801c7a8c(c);
L_01086048:
R_01086048:
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108606c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108606c:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x1086078u;
    f_mr751_010840e0(c);
R_01086078:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010860bc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010860bc;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010860b4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10860b4u;
    wp::call(c, c.ctr);
L_010860b4:
R_010860b4:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10860bcu;
    f_801c7a8c(c);
L_010860bc:
R_010860bc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_010860d0(wp::Cpu& c) {
    WP_ENTER(0x10860d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10860e4u: goto R_010860e4;
        case 0x1086148u: goto R_01086148;
        case 0x10861ccu: goto R_010861cc;
        case 0x10861e4u: goto R_010861e4;
        case 0x10861f8u: goto R_010861f8;
        case 0x1086214u: goto R_01086214;
        case 0x108622cu: goto R_0108622c;
        case 0x1086240u: goto R_01086240;
        case 0x108624cu: goto R_0108624c;
        case 0x1086294u: goto R_01086294;
        case 0x10862bcu: goto R_010862bc;
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
    c.lr = 0x10860e4u;
    f_801c83b8(c);
R_010860e4:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[29] = 0x0u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[4] = c.r[5] + c.r[0];
    goto L_01086154;
L_01086100:
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01086118;
    c.r[0] = 0x0u;
    goto L_01086130;
L_01086118:
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108612c;
    ea = c.r[3] + 0xdu;
    c.r[0] = wp::rd8(ea);
    goto L_01086130;
L_0108612c:
    c.r[0] = 0x0u;
L_01086130:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108614c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086148u;
    wp::call(c, c.ctr);
R_01086148:
    goto L_0108615c;
L_0108614c:
    c.r[5] = c.r[5] + 0x8u;
    c.r[29] = c.r[29] + 0x1u;
L_01086154:
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086100;
    }
L_0108615c:
    ea = c.r[31] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x34u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[31] + 0x28u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x20u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01086188;
    ea = c.r[3] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01086188;
    c.r[4] = 0x0u;
L_01086188:
    ea = c.r[3] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = 0x0u;
    ea = c.r[3] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[6] + c.r[0];
    ea = c.r[31] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[5] + c.r[3];
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010861b4;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010861b8;
L_010861b4:
    c.r[29] = 0x1u;
L_010861b8:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10861ccu;
    wp::call(c, c.ctr);
R_010861cc:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10861e4u;
    wp::call(c, c.ctr);
R_010861e4:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x24u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10861f8u;
    wp::call(c, c.ctr);
R_010861f8:
    ea = c.r[31] + 0x24u;
    c.r[27] = wp::rd32(ea);
    ea = c.r[31] + 0x28u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086214u;
    wp::call(c, c.ctr);
R_01086214:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108622cu;
    wp::call(c, c.ctr);
R_0108622c:
    ea = c.r[31] + 0x10u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.lr = 0x1086240u;
    f_mr751_01084de0(c);
R_01086240:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108624cu;
    f_mr751_010862d0(c);
R_0108624c:
    ea = c.r[31] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[28] = 0x0u;
    ea = c.r[31] + 0xcu;
    c.r[27] = wp::rd32(ea);
    ea = c.r[4] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[29] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[3] + c.r[0];
    c.r[30] = c.r[3] + 0x1u;
    goto L_0108629c;
L_01086270:
    wp::compare_signed(c, 0, c.r[28], c.r[29]);
    if (wp::cr_get(c, 0)) goto L_01086294;
    wp::compare_signed(c, 0, c.r[28], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01086294;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086294u;
    wp::call(c, c.ctr);
L_01086294:
R_01086294:
    c.r[27] = c.r[27] + 0x8u;
    c.r[28] = c.r[28] + 0x1u;
L_0108629c:
    ea = c.r[31] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086270;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10862bcu;
    f_801c8404(c);
R_010862bc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_010862d0(wp::Cpu& c) {
    WP_ENTER(0x10862d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[7] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    c.r[7] = c.r[7] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.r[5] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[5] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[7] + 0xcu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[3] + 0x28u;
    c.r[6] = wp::rd32(ea);
    c.f[4] = wp::round_single(c.f[4] * wp::force25(c.f[3]));
    c.ps1[4] = c.f[4];
    ea = c.r[6] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x18u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[6] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[3] = wp::round_single(c.f[4] + c.f[3]);
    c.ps1[3] = c.f[3];
    c.f[0] = wp::round_single(c.f[1] + c.f[1]);
    c.ps1[0] = c.f[0];
    ea = c.r[6] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[2] + c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[6] + 0x1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[2] + c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[7] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[6] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    c.r[31] = c.r[12] + c.r[0];
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    if (wp::cr_get(c, 2)) goto L_01086354;
    c.r[31] = c.r[31] + 0x1u;
L_01086354:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01086364;
    c.r[31] = c.r[0] | c.r[0];
L_01086364:
    ea = c.r[6] + 0x30u;
    c.r[0] = wp::rd32(ea);
    c.r[10] = c.r[31] + 0xffffffffu;
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108637c;
    c.r[10] = c.r[12] | c.r[12];
L_0108637c:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[9] = c.r[12] | c.r[12];
    if (!wp::cr_get(c, 1)) goto L_0108638c;
    c.r[9] = c.r[31] + 0xffffffffu;
L_0108638c:
    ea = c.r[3] + 0xcu;
    c.r[11] = wp::rd32(ea);
    c.r[8] = 0x1u;
    ea = c.r[7] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[6] = 0x0u;
    ea = c.r[7] + 0x30u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    goto L_01086468;
    c.r[0] = c.r[0] | 0x0u;
L_010863a8:
    wp::compare_signed(c, 0, c.r[30], c.r[12]);
    if (wp::cr_get(c, 0)) goto L_01086450;
    wp::compare_signed(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 0)) goto L_01086450;
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x10u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[5] + 0xcu;
    wp::wr8(ea, c.r[8]);
    ea = c.r[1] + 0x8u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.f[4] = wp::round_single(c.f[3] + c.f[2]);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x10u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[5] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    ea = c.r[1] + 0x14u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[1] + 0x14u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    c.f[2] = wp::round_single(c.f[3] + c.f[2]);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    if (wp::cr_get(c, 2)) goto L_01086444;
    wp::compare_signed(c, 0, c.r[30], c.r[9]);
    if (!wp::cr_get(c, 2)) goto L_01086418;
    ea = c.r[3] + 0x28u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[7] + 0x38u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    goto L_01086460;
L_01086418:
    wp::compare_signed(c, 0, c.r[30], c.r[10]);
    if (!wp::cr_get(c, 2)) goto L_01086438;
    ea = c.r[3] + 0x28u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[7] + 0x38u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[2] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    goto L_01086460;
L_01086438:
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    goto L_01086460;
L_01086444:
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    goto L_01086460;
L_01086450:
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    wp::wr8(ea, c.r[6]);
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01086460:
    c.r[11] = c.r[11] + 0x8u;
    c.r[30] = c.r[30] + 0x1u;
L_01086468:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[5] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[11], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010863a8;
    }
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01086490(wp::Cpu& c) {
    WP_ENTER(0x1086490u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10864a4u: goto R_010864a4;
        case 0x10864ccu: goto R_010864cc;
        case 0x10864fcu: goto R_010864fc;
        case 0x1086544u: goto R_01086544;
        case 0x1086548u: goto R_01086548;
        case 0x1086550u: goto R_01086550;
        case 0x1086578u: goto R_01086578;
        case 0x108657cu: goto R_0108657c;
        case 0x108668cu: goto R_0108668c;
        case 0x1086694u: goto R_01086694;
        case 0x10866a8u: goto R_010866a8;
        case 0x10866e4u: goto R_010866e4;
        case 0x10866f0u: goto R_010866f0;
        case 0x1086700u: goto R_01086700;
        case 0x1086710u: goto R_01086710;
        case 0x1086724u: goto R_01086724;
        case 0x1086738u: goto R_01086738;
        case 0x1086758u: goto R_01086758;
        case 0x10867dcu: goto R_010867dc;
        case 0x10867e0u: goto R_010867e0;
        case 0x108682cu: goto R_0108682c;
        case 0x1086830u: goto R_01086830;
        case 0x10868d0u: goto R_010868d0;
        case 0x10868d4u: goto R_010868d4;
        case 0x10868dcu: goto R_010868dc;
        case 0x10868f8u: goto R_010868f8;
        case 0x10868fcu: goto R_010868fc;
        case 0x1086a68u: goto R_01086a68;
        case 0x1086a70u: goto R_01086a70;
        case 0x1086ae0u: goto R_01086ae0;
        case 0x1086ae8u: goto R_01086ae8;
        case 0x1086afcu: goto R_01086afc;
        case 0x1086b14u: goto R_01086b14;
        case 0x1086b2cu: goto R_01086b2c;
        case 0x1086b48u: goto R_01086b48;
        case 0x1086b50u: goto R_01086b50;
        case 0x1086b54u: goto R_01086b54;
        case 0x1086b5cu: goto R_01086b5c;
        case 0x1086b98u: goto R_01086b98;
        case 0x1086ba0u: goto R_01086ba0;
        case 0x1086ba8u: goto R_01086ba8;
        case 0x1086be4u: goto R_01086be4;
        case 0x1086c20u: goto R_01086c20;
        case 0x1086c28u: goto R_01086c28;
        case 0x1086c34u: goto R_01086c34;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x90u;
    c.lr = 0x10864a4u;
    f_801c8390(c);
R_010864a4:
    c.r[6] = 0x10000u;
    c.r[17] = c.r[5] | c.r[5];
    c.r[0] = c.r[6] + 0xffff8000u;
    c.r[19] = c.r[4] | c.r[4];
    c.r[30] = c.r[3] | c.r[3];
    c.r[5] = 0x10000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x10864ccu;
    f_80069af0(c);
R_010864cc:
    c.r[3] = ((((g_mr751_bases[5] + 0x2bf90u) + 0x8000u) >> 16) << 16);
    c.r[18] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf90u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[18]);
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[18]);
    ea = c.r[30] + 0x1c0u;
    wp::wr32(ea, c.r[18]);
    ea = c.r[30] + 0x1c4u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[30] + 0x1c8u;
    wp::wr32(ea, c.r[17]);
    ea = c.r[30] + 0x1ccu;
    wp::wr32(ea, c.r[18]);
    ea = c.r[30] + 0x1d0u;
    wp::wr8(ea, c.r[18]);
    c.lr = 0x10864fcu;
    f_80007570(c);
R_010864fc:
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd32(ea);
    c.r[17] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010866a8;
    c.r[4] = 0x20000000u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[18]);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[18]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[18]);
    if (!wp::cr_get(c, 1)) goto L_01086548;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1086544u;
    f_801cee24(c);
R_01086544:
    c.lr = 0x1086548u;
    f_801d3940(c);
L_01086548:
R_01086548:
    c.r[3] = wp::rotl(c.r[17], 3) & 0xfffffff8u;
    c.lr = 0x1086550u;
    f_801c79a4(c);
R_01086550:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0108657c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c024u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c024u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1086578u;
    f_801cee24(c);
R_01086578:
    c.lr = 0x108657cu;
    f_801d3940(c);
L_0108657c:
R_0108657c:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1b8u;
    c.r[6] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[6] + c.r[0];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[18]);
    c.r[0] = c.r[4] + 0x7u;
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.r[0] = c.r[0] - c.r[6];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[17]);
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[5] = c.r[18] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010865fc;
L_010865b8:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010865e4;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010865e4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010865e4:
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.r[6] = c.r[6] + 0x8u;
    c.r[5] = c.r[5] + 0x8u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010865b8;
    }
L_010865fc:
    ea = c.r[30] + 0x1b8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x1c0u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x1bcu;
    c.r[18] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1c0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010866a8;
    c.r[3] = wp::rotl(c.r[18], 3) & 0xfffffff8u;
    c.r[0] = c.r[18] - c.r[18];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.r[17] = c.r[5] + c.r[3];
    goto L_01086698;
L_01086648:
    c.r[17] = wp::add_carry(c, c.r[17], 0xfffffff8u, 0);
    wp::record(c, c.r[17]);
    if (wp::cr_get(c, 2)) goto L_01086694;
    ea = c.r[17] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086694;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086694;
    ea = c.r[17] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108668c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108668cu;
    wp::call(c, c.ctr);
L_0108668c:
R_0108668c:
    ea = c.r[17] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086694u;
    f_801c7a8c(c);
L_01086694:
R_01086694:
    c.r[18] = c.r[18] + 0xffffffffu;
L_01086698:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086648;
    }
    ea = c.r[1] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10866a8u;
    f_801c7a8c(c);
L_010866a8:
R_010866a8:
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[17] = c.r[1] + 0x34u;
    c.r[31] = 0x0u;
    c.r[27] = 0xcccd0000u;
    c.r[24] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[19] = 0x10000u;
    c.r[21] = 0x1u;
    c.r[20] = 0x0u;
    c.r[23] = ((((g_mr751_bases[5] + 0x2beb8u) + 0x8000u) >> 16) << 16);
    c.r[22] = 0x20000000u;
    c.r[26] = 0xaab0000u;
    c.r[28] = 0x15550000u;
    c.r[29] = ((((g_mr751_bases[5] + 0x2c024u) + 0x8000u) >> 16) << 16);
    goto L_01086ba4;
L_010866e0:
    c.lr = 0x10866e4u;
    f_8000dd70(c);
R_010866e4:
    c.r[18] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10866f0u;
    f_8000fc20(c);
R_010866f0:
    wp::compare_signed(c, 0, c.r[3], c.r[18]);
    if (!wp::cr_get(c, 0)) goto L_01086ba0;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1086700u;
    f_8000fc40(c);
R_01086700:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01086ba0;
    c.r[3] = 0x214u;
    c.lr = 0x1086710u;
    f_801c79a4(c);
R_01086710:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108673c;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1086724u;
    f_8000fc20(c);
R_01086724:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[18] | c.r[18];
    c.r[6] = c.r[19] + 0xffff8000u;
    c.r[5] = 0x28u;
    c.lr = 0x1086738u;
    f_mr751_01013070(c);
R_01086738:
    c.r[18] = c.r[3] | c.r[3];
L_0108673c:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[20]);
    if (wp::cr_get(c, 2)) goto L_01086768;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[18]);
    c.r[3] = 0x4u;
    c.lr = 0x1086758u;
    f_801c79a4(c);
R_01086758:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086764;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[21]);
L_01086764:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[3]);
L_01086768:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1c0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_010867bc;
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + c.r[0];
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010867ac;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010867ac;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010867ac:
    ea = c.r[30] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    goto L_01086afc;
L_010867bc:
    c.r[0] = c.r[22] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010867e0;
    c.r[4] = c.r[23] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[24] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10867dcu;
    f_801cee24(c);
R_010867dc:
    c.lr = 0x10867e0u;
    f_801d3940(c);
L_010867e0:
R_010867e0:
    ea = c.r[30] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[30] + 0x1c0u;
    ea = c.r[30] + 0x1c0u;
    c.r[25] = wp::rd32(ea);
    c.r[0] = c.r[22] + 0xffffffffu;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[20]);
    c.r[3] = c.r[3] - c.r[25];
    c.r[0] = c.r[0] - c.r[25];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01086830;
    c.r[4] = c.r[23] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[24] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108682cu;
    f_801cee24(c);
R_0108682c:
    c.lr = 0x1086830u;
    f_801d3940(c);
L_01086830:
R_01086830:
    c.r[0] = c.r[26] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[25], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01086878;
    c.r[4] = c.r[25] + 0x1u;
    c.r[5] = c.r[27] + 0xffffcccdu;
    c.r[3] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] - c.r[4];
    c.r[4] = wp::mulhwu(c.r[5], c.r[4]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108686c;
    c.r[3] = c.r[1] + 0x10u;
L_0108686c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[25] = c.r[25] + c.r[0];
    goto L_010868b4;
L_01086878:
    c.r[0] = c.r[28] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[25], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010868b0;
    c.r[3] = c.r[25] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010868a4;
    c.r[3] = c.r[1] + 0x10u;
L_010868a4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[25] = c.r[25] + c.r[0];
    goto L_010868b4;
L_010868b0:
    c.r[25] = c.r[22] + 0xffffffffu;
L_010868b4:
    c.r[0] = c.r[22] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[25], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010868d4;
    c.r[4] = c.r[23] + wp::sign_extend16((g_mr751_bases[5] + 0x2beb8u) & 0xFFFFu);
    c.r[3] = c.r[24] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10868d0u;
    f_801cee24(c);
R_010868d0:
    c.lr = 0x10868d4u;
    f_801d3940(c);
L_010868d4:
R_010868d4:
    c.r[3] = wp::rotl(c.r[25], 3) & 0xfffffff8u;
    c.lr = 0x10868dcu;
    f_801c79a4(c);
R_010868dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010868fc;
    c.r[3] = c.r[24] + 0xa0u;
    c.r[4] = c.r[29] + wp::sign_extend16((g_mr751_bases[5] + 0x2c024u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10868f8u;
    f_801cee24(c);
R_010868f8:
    c.lr = 0x10868fcu;
    f_801d3940(c);
L_010868fc:
R_010868fc:
    ea = c.r[30] + 0x1bcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[18]);
    c.r[4] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[18] + c.r[3];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[25]);
    c.r[3] = c.r[4] + c.r[3];
    wp::record(c, c.r[3]);
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01086948;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01086948;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086948:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1b8u;
    c.r[7] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[7] + c.r[0];
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x7u;
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[7];
    c.r[6] = c.r[6] + 0x1u;
    c.r[4] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[6]);
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[6] = c.r[5] + c.r[4];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_010869dc;
    c.r[0] = c.r[0] | 0x0u;
L_01086990:
    c.r[6] = wp::add_carry(c, c.r[6], 0xfffffff8u, 0);
    wp::record(c, c.r[6]);
    c.r[3] = c.r[3] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010869c0;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010869c0;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010869c0:
    ea = c.r[1] + 0x44u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01086990;
    }
L_010869dc:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1b8u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[30] + 0x1bcu;
    c.r[8] = wp::rd32(ea);
    c.r[25] = c.r[7] + c.r[3];
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[8], 3) & 0xfffffff8u;
    ea = c.r[30] + 0x1c0u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[18] = c.r[25] + c.r[0];
    ea = c.r[30] + 0x1c0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[8]);
    goto L_01086a70;
L_01086a24:
    c.r[18] = wp::add_carry(c, c.r[18], 0xfffffff8u, 0);
    wp::record(c, c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01086a70;
    ea = c.r[18] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086a70;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086a70;
    ea = c.r[18] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086a68;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086a68u;
    wp::call(c, c.ctr);
L_01086a68:
R_01086a68:
    ea = c.r[18] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086a70u;
    f_801c7a8c(c);
L_01086a70:
R_01086a70:
    wp::compare_unsigned(c, 0, c.r[18], c.r[25]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_01086a24;
    }
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[20]);
    if (wp::cr_get(c, 2)) goto L_01086afc;
    ea = c.r[1] + 0x34u;
    c.r[25] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086afc;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[20]);
    c.r[18] = 0x0u;
    goto L_01086aec;
L_01086a9c:
    c.r[25] = wp::add_carry(c, c.r[25], 0xfffffff8u, 0);
    wp::record(c, c.r[25]);
    if (wp::cr_get(c, 2)) goto L_01086ae8;
    ea = c.r[25] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086ae8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086ae8;
    ea = c.r[25] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086ae0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086ae0u;
    wp::call(c, c.ctr);
L_01086ae0:
R_01086ae0:
    ea = c.r[25] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086ae8u;
    f_801c7a8c(c);
L_01086ae8:
R_01086ae8:
    c.r[18] = c.r[18] + 0xffffffffu;
L_01086aec:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086a9c;
    }
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086afcu;
    f_801c7a8c(c);
L_01086afc:
R_01086afc:
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086b14u;
    wp::call(c, c.ctr);
R_01086b14:
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086b2cu;
    wp::call(c, c.ctr);
R_01086b2c:
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[31]);
    c.r[4] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086b48u;
    wp::call(c, c.ctr);
R_01086b48:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1086b50u;
    f_8000fc20(c);
R_01086b50:
    c.lr = 0x1086b54u;
    f_800699d0(c);
R_01086b54:
    c.r[4] = 0x1u;
    c.lr = 0x1086b5cu;
    f_80066e70(c);
R_01086b5c:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086ba0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086ba0;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086b98;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086b98u;
    wp::call(c, c.ctr);
L_01086b98:
R_01086b98:
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086ba0u;
    f_801c7a8c(c);
L_01086ba0:
R_01086ba0:
    c.r[31] = c.r[31] + 0x1u;
L_01086ba4:
    c.lr = 0x1086ba8u;
    f_80007570(c);
R_01086ba8:
    wp::compare_signed(c, 0, c.r[31], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010866e0;
    }
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086bd8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086bd8:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x18u;
    c.lr = 0x1086be4u;
    f_mr751_01085fb0(c);
R_01086be4:
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086c28;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086c28;
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086c20;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086c20u;
    wp::call(c, c.ctr);
L_01086c20:
R_01086c20:
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086c28u;
    f_801c7a8c(c);
L_01086c28:
R_01086c28:
    c.r[11] = c.r[1] + 0x90u;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1086c34u;
    f_801c83dc(c);
R_01086c34:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr751_01086c50(wp::Cpu& c) {
    WP_ENTER(0x1086c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086c78u: goto R_01086c78;
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
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01086c78;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01086c78;
    c.lr = 0x1086c78u;
    f_801c7a8c(c);
L_01086c78:
R_01086c78:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01086c90(wp::Cpu& c) {
    WP_ENTER(0x1086c90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086ca4u: goto R_01086ca4;
        case 0x1086cc8u: goto R_01086cc8;
        case 0x1086cf0u: goto R_01086cf0;
        case 0x1086d18u: goto R_01086d18;
        case 0x1086d40u: goto R_01086d40;
        case 0x1086db8u: goto R_01086db8;
        case 0x1086dc0u: goto R_01086dc0;
        case 0x1086dd4u: goto R_01086dd4;
        case 0x1086de0u: goto R_01086de0;
        case 0x1086df0u: goto R_01086df0;
        case 0x1086dfcu: goto R_01086dfc;
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
    c.lr = 0x1086ca4u;
    f_801c83b8(c);
R_01086ca4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 2)) goto L_01086df0;
    c.r[4] = ((((g_mr751_bases[5] + 0x2bf90u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf90u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x1086cc8u;
    f_80066dd0(c);
R_01086cc8:
    c.r[3] = wp::add_carry(c, c.r[27], 0x1ccu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01086cf0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086cf0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086cf0u;
    wp::call(c, c.ctr);
L_01086cf0:
R_01086cf0:
    c.r[3] = wp::add_carry(c, c.r[27], 0x1c8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01086d18;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086d18;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086d18u;
    wp::call(c, c.ctr);
L_01086d18:
R_01086d18:
    c.r[3] = wp::add_carry(c, c.r[27], 0x1c4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01086d40;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086d40;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086d40u;
    wp::call(c, c.ctr);
L_01086d40:
R_01086d40:
    c.r[31] = wp::add_carry(c, c.r[27], 0x1b8u, 0);
    wp::record(c, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01086dd4;
    if (wp::cr_get(c, 2)) goto L_01086dd4;
    if (wp::cr_get(c, 2)) goto L_01086dd4;
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086dd4;
    ea = c.r[31] + 0x4u;
    c.r[29] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] + c.r[3];
    goto L_01086dc4;
L_01086d74:
    c.r[30] = wp::add_carry(c, c.r[30], 0xfffffff8u, 0);
    wp::record(c, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01086dc0;
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086dc0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086dc0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086db8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086db8u;
    wp::call(c, c.ctr);
L_01086db8:
R_01086db8:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086dc0u;
    f_801c7a8c(c);
L_01086dc0:
R_01086dc0:
    c.r[29] = c.r[29] + 0xffffffffu;
L_01086dc4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086d74;
    }
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086dd4u;
    f_801c7a8c(c);
L_01086dd4:
R_01086dd4:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x1086de0u;
    f_80069c40(c);
R_01086de0:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01086df0;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1086df0u;
    f_801c7a8c(c);
L_01086df0:
R_01086df0:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1086dfcu;
    f_801c8404(c);
R_01086dfc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01086e10(wp::Cpu& c) {
    WP_ENTER(0x1086e10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
}

void f_mr751_01086e20(wp::Cpu& c) {
    WP_ENTER(0x1086e20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086e44u: goto R_01086e44;
        case 0x1086e68u: goto R_01086e68;
        case 0x1086e94u: goto R_01086e94;
        case 0x1086ec4u: goto R_01086ec4;
        case 0x1086ee4u: goto R_01086ee4;
        case 0x1086f80u: goto R_01086f80;
        case 0x1086f88u: goto R_01086f88;
        case 0x1086f8cu: goto R_01086f8c;
        case 0x1086fd0u: goto R_01086fd0;
        case 0x1087008u: goto R_01087008;
        case 0x108703cu: goto R_0108703c;
        case 0x1087054u: goto R_01087054;
        case 0x10870a0u: goto R_010870a0;
        case 0x10870d0u: goto R_010870d0;
        case 0x10870f0u: goto R_010870f0;
        case 0x108718cu: goto R_0108718c;
        case 0x1087194u: goto R_01087194;
        case 0x1087198u: goto R_01087198;
        case 0x10871c0u: goto R_010871c0;
        case 0x10871dcu: goto R_010871dc;
        case 0x10871fcu: goto R_010871fc;
        case 0x1087234u: goto R_01087234;
        case 0x108724cu: goto R_0108724c;
        case 0x1087270u: goto R_01087270;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x58u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    c.lr = 0x1086e44u;
    f_801c83a8(c);
R_01086e44:
    c.r[4] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x43300000u;
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = 0x1u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1086e68u;
    f_mr751_01085e50(c);
R_01086e68:
    c.r[3] = ((((g_mr751_bases[4] + 0x30b8u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x1u;
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x30b8u) & 0xFFFFu);
    c.f[30] = wp::rdf64(ea);
    goto L_01086f8c;
L_01086e78:
    ea = c.r[30] + 0x1b8u;
    c.r[24] = wp::rd32(ea);
    goto L_01086e98;
L_01086e80:
    ea = c.r[24] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086e94u;
    wp::call(c, c.ctr);
R_01086e94:
    c.r[24] = c.r[24] + 0x8u;
L_01086e98:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086e80;
    }
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086ec4u;
    wp::call(c, c.ctr);
R_01086ec4:
    ea = c.r[30] + 0x1c4u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[26] = wp::rd32(ea);
    goto L_01086ee8;
L_01086ed0:
    ea = c.r[26] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086ee4u;
    wp::call(c, c.ctr);
R_01086ee4:
    c.r[26] = c.r[26] + 0x8u;
L_01086ee8:
    ea = c.r[24] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086ed0;
    }
    ea = c.r[30] + 0x1ccu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086f88;
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01086f68;
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_01086f38;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x10u;
    wp::wr8(ea, c.r[25]);
L_01086f38:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] ^ 0x80000000u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[1] - c.f[30]);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] - c.f[30]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] / c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01086f68:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x1c8u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086f80u;
    wp::call(c, c.ctr);
R_01086f80:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1086f88u;
    f_mr751_01085e50(c);
L_01086f88:
R_01086f88:
    c.lr = 0x1086f8cu;
    f_8006a940(c);
L_01086f8c:
R_01086f8c:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x28u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[4] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01086fac;
    c.r[0] = 0x1u;
    goto L_01086fc0;
L_01086fac:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = wp::sraw(c, c.r[5], 31);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[5]);
    c.r[0] = wp::add_extended(c, c.r[4], c.r[3]);
L_01086fc0:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086e78;
    }
    c.r[3] = 0x14u;
    c.lr = 0x1086fd0u;
    f_801c79a4(c);
R_01086fd0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[24] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01087010;
    c.r[5] = ((((g_mr751_bases[5] + 0x2bf00u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf00u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = ((((g_mr751_bases[4] + 0x30d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[25] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x30d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[25]);
    c.lr = 0x1087008u;
    f_80071fe0(c);
R_01087008:
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[24] + 0x10u;
    wp::wr8(ea, c.r[25]);
L_01087010:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[24], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108703c;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[30] + 0x1ccu;
    wp::wr32(ea, c.r[24]);
    if (wp::cr_get(c, 2)) goto L_0108703c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108703cu;
    wp::call(c, c.ctr);
L_0108703c:
R_0108703c:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087054u;
    wp::call(c, c.ctr);
R_01087054:
    c.r[4] = ((((g_mr751_bases[4] + 0x30b8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr751_bases[4] + 0x3098u) + 0x8000u) >> 16) << 16);
    c.r[26] = ((((g_mr751_bases[5] + 0x2bf00u) + 0x8000u) >> 16) << 16);
    c.r[29] = ((((g_mr751_bases[5] + 0x2bef0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x30b8u) & 0xFFFFu);
    c.f[30] = wp::rdf64(ea);
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf00u) & 0xFFFFu);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x3098u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr751_bases[5] + 0x2bef0u) & 0xFFFFu);
    c.r[25] = 0x1u;
    c.r[27] = 0x0u;
    c.r[28] = ((((g_mr751_bases[4] + 0x30d0u) + 0x8000u) >> 16) << 16);
    goto L_0108724c;
L_01087084:
    ea = c.r[30] + 0x1b8u;
    c.r[24] = wp::rd32(ea);
    goto L_010870a4;
L_0108708c:
    ea = c.r[24] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10870a0u;
    wp::call(c, c.ctr);
R_010870a0:
    c.r[24] = c.r[24] + 0x8u;
L_010870a4:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108708c;
    }
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10870d0u;
    wp::call(c, c.ctr);
R_010870d0:
    ea = c.r[30] + 0x1c4u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[23] = wp::rd32(ea);
    goto L_010870f4;
L_010870dc:
    ea = c.r[23] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10870f0u;
    wp::call(c, c.ctr);
R_010870f0:
    c.r[23] = c.r[23] + 0x8u;
L_010870f4:
    ea = c.r[24] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010870dc;
    }
    ea = c.r[30] + 0x1ccu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087194;
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01087174;
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_01087144;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x10u;
    wp::wr8(ea, c.r[25]);
L_01087144:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] ^ 0x80000000u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[1] - c.f[30]);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] - c.f[30]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] / c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01087174:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x1c8u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108718cu;
    wp::call(c, c.ctr);
R_0108718c:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1087194u;
    f_mr751_01085e50(c);
L_01087194:
R_01087194:
    c.lr = 0x1087198u;
    f_8006a940(c);
R_01087198:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108724c;
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010871c4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10871c0u;
    wp::call(c, c.ctr);
R_010871c0:
    goto L_010871c8;
L_010871c4:
    c.r[3] = 0x0u;
L_010871c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108724c;
    c.r[31] = 0x0u;
    c.r[3] = 0x14u;
    c.lr = 0x10871dcu;
    f_801c79a4(c);
R_010871dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[24] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01087208;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + wp::sign_extend16((g_mr751_bases[4] + 0x30d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[27]);
    c.lr = 0x10871fcu;
    f_80071fe0(c);
R_010871fc:
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[24] + 0x10u;
    wp::wr8(ea, c.r[27]);
    ea = c.r[24] + 0x0u;
    wp::wr32(ea, c.r[29]);
L_01087208:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[24], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087234;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[30] + 0x1ccu;
    wp::wr32(ea, c.r[24]);
    if (wp::cr_get(c, 2)) goto L_01087234;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087234u;
    wp::call(c, c.ctr);
L_01087234:
R_01087234:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108724cu;
    wp::call(c, c.ctr);
L_0108724c:
R_0108724c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087084;
    }
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087084;
    }
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1d0u;
    wp::wr8(ea, c.r[0]);
L_0108726c:
    c.lr = 0x1087270u;
    f_8006a940(c);
R_01087270:
    WP_POLL(c);
    goto L_0108726c;
}

void f_mr751_01087280(wp::Cpu& c) {
    WP_ENTER(0x1087280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1d0u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr751_01087290(wp::Cpu& c) {
    WP_ENTER(0x1087290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10872b8u: goto R_010872b8;
        case 0x10872f4u: goto R_010872f4;
        case 0x1087330u: goto R_01087330;
        case 0x1087338u: goto R_01087338;
        case 0x1087378u: goto R_01087378;
        case 0x1087380u: goto R_01087380;
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
    c.r[3] = c.r[1] + 0x10u;
    ea = c.r[31] + 0x1c8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[31] + 0x1c4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10872b8u;
    f_mr751_01084670(c);
R_010872b8:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010872dc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010872dc:
    ea = c.r[31] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10872f4u;
    wp::call(c, c.ctr);
R_010872f4:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087338;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087338;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087330;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087330u;
    wp::call(c, c.ctr);
L_01087330:
R_01087330:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087338u;
    f_801c7a8c(c);
L_01087338:
R_01087338:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087380;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087380;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087378;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087378u;
    wp::call(c, c.ctr);
L_01087378:
R_01087378:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087380u;
    f_801c7a8c(c);
L_01087380:
R_01087380:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_010873a0(wp::Cpu& c) {
    WP_ENTER(0x10873a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr751_010873b0(wp::Cpu& c) {
    WP_ENTER(0x10873b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10873f8u: goto R_010873f8;
        case 0x1087434u: goto R_01087434;
        case 0x108743cu: goto R_0108743c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010873e0;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010873e0:
    ea = c.r[3] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10873f8u;
    wp::call(c, c.ctr);
R_010873f8:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108743c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108743c;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087434;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087434u;
    wp::call(c, c.ctr);
L_01087434:
R_01087434:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108743cu;
    f_801c7a8c(c);
L_0108743c:
R_0108743c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01087450(wp::Cpu& c) {
    WP_ENTER(0x1087450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr751_bases[4] + 0x30c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x30c8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[1] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[1] = c.f[1];
    return;
}

void f_mr751_01087470(wp::Cpu& c) {
    WP_ENTER(0x1087470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087498u: goto R_01087498;
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
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01087498;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01087498;
    c.lr = 0x1087498u;
    f_801c7a8c(c);
L_01087498:
R_01087498:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_010874b0(wp::Cpu& c) {
    WP_ENTER(0x10874b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x28u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr751_010874d0(wp::Cpu& c) {
    WP_ENTER(0x10874d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0xau;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mr751_01087500(wp::Cpu& c) {
    WP_ENTER(0x1087500u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087520;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x24u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01087520:
    c.r[3] = 0x0u;
    return;
}

void f_mr751_01087530(wp::Cpu& c) {
    WP_ENTER(0x1087530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087550;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01087550:
    c.r[3] = 0x0u;
    return;
}

void f_mr751_01087560(wp::Cpu& c) {
    WP_ENTER(0x1087560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087580;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01087580:
    c.r[3] = 0x0u;
    return;
}

void f_mr751_01087590(wp::Cpu& c) {
    WP_ENTER(0x1087590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x9u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mr751_010875c0(wp::Cpu& c) {
    WP_ENTER(0x10875c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x8u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mr751_010875f0(wp::Cpu& c) {
    WP_ENTER(0x10875f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087654u: goto R_01087654;
        case 0x108767cu: goto R_0108767c;
        case 0x108768cu: goto R_0108768c;
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
    if (wp::cr_get(c, 2)) goto L_0108768c;
    if (wp::cr_get(c, 2)) goto L_0108767c;
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = ((((g_mr751_bases[5] + 0x2bf38u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2bf38u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087654;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01087654;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087654u;
    wp::call(c, c.ctr);
L_01087654:
R_01087654:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108767c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108767c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108767cu;
    wp::call(c, c.ctr);
L_0108767c:
R_0108767c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108768c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108768cu;
    f_801c7a8c(c);
L_0108768c:
R_0108768c:
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

void f_mr751_010876b0(wp::Cpu& c) {
    WP_ENTER(0x10876b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087714u: goto R_01087714;
        case 0x1087734u: goto R_01087734;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x2u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087738;
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087704;
    ea = c.r[3] + 0x13u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[3] + 0x11u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01087704;
    ea = c.r[3] + 0x14u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[3] + 0x12u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108772c;
L_01087704:
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[31] + 0x13u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[31] + 0x14u;
    c.r[5] = wp::rd8(ea);
    c.lr = 0x1087714u;
    f_mr751_01012090(c);
R_01087714:
    ea = c.r[31] + 0x13u;
    c.r[3] = wp::rd8(ea);
    c.r[4] = 0x1u;
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0x10u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x11u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[31] + 0x12u;
    wp::wr8(ea, c.r[0]);
L_0108772c:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087734u;
    f_mr751_010124c0(c);
R_01087734:
    ea = c.r[31] + 0x18u;
    wp::wr32(ea, c.r[3]);
L_01087738:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01087750(wp::Cpu& c) {
    WP_ENTER(0x1087750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x174u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr751_01087760(wp::Cpu& c) {
    WP_ENTER(0x1087760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    f_mr751_01011f70(c);
    return;
}

void f_mr751_01087770(wp::Cpu& c) {
    WP_ENTER(0x1087770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_mr751_01087790(wp::Cpu& c) {
    WP_ENTER(0x1087790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_mr751_010877a0(wp::Cpu& c) {
    WP_ENTER(0x10877a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x14u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr751_010877b0(wp::Cpu& c) {
    WP_ENTER(0x10877b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x13u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr751_010877c0(wp::Cpu& c) {
    WP_ENTER(0x10877c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087850u: goto R_01087850;
        case 0x1087858u: goto R_01087858;
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
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010877f8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010877f8:
    ea = c.r[3] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01087858;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087858;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087850;
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087850u;
    wp::call(c, c.ctr);
L_01087850:
R_01087850:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087858u;
    f_801c7a8c(c);
L_01087858:
R_01087858:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x154u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01087880(wp::Cpu& c) {
    WP_ENTER(0x1087880u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10878e8u: goto R_010878e8;
        case 0x10878f0u: goto R_010878f0;
        case 0x1087918u: goto R_01087918;
        case 0x1087928u: goto R_01087928;
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
    if (wp::cr_get(c, 2)) goto L_01087928;
    c.r[0] = wp::add_carry(c, c.r[3], 0x8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010878f0;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010878f0;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010878f0;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010878e8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10878e8u;
    wp::call(c, c.ctr);
L_010878e8:
R_010878e8:
    ea = c.r[30] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10878f0u;
    f_801c7a8c(c);
L_010878f0:
R_010878f0:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087918;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087918;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087918u;
    wp::call(c, c.ctr);
L_01087918:
R_01087918:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01087928;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1087928u;
    f_801c7a8c(c);
L_01087928:
R_01087928:
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

void f_mr751_01087950(wp::Cpu& c) {
    WP_ENTER(0x1087950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087970u: goto R_01087970;
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
    c.lr = 0x1087970u;
    f_mr751_01084180(c);
R_01087970:
    c.r[4] = ((((g_mr751_bases[4] + 0x3124u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr751_bases[4] + 0x3128u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x3124u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = ((((g_mr751_bases[5] + 0x2c41cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x3128u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2c41cu) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x10u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[30] + 0x15u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[30] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[30] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[30] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[30] + 0x14u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[30] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x40u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x44u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x28u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x2cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x30u;
    wp::wr32(ea, c.r[4]);
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

void f_mr751_010879f0(wp::Cpu& c) {
    WP_ENTER(0x10879f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087a60u: goto R_01087a60;
        case 0x1087a70u: goto R_01087a70;
        case 0x1087a88u: goto R_01087a88;
        case 0x1087a90u: goto R_01087a90;
        case 0x1087a98u: goto R_01087a98;
        case 0x1087ac0u: goto R_01087ac0;
        case 0x1087accu: goto R_01087acc;
        case 0x1087adcu: goto R_01087adc;
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
    if (wp::cr_get(c, 2)) goto L_01087adc;
    c.r[0] = wp::add_carry(c, c.r[3], 0x40u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01087a98;
    ea = c.r[3] + 0x44u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087a98;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087a98;
    ea = c.r[3] + 0x40u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087a90;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087a60;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1087a60u;
    f_801c7a8c(c);
L_01087a60:
R_01087a60:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087a78;
    c.lr = 0x1087a70u;
    f_80038a00(c);
R_01087a70:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01087a78:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087a88;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087a88u;
    f_801c7a8c(c);
L_01087a88:
R_01087a88:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1087a90u;
    f_801c7a8c(c);
L_01087a90:
R_01087a90:
    ea = c.r[29] + 0x44u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087a98u;
    f_801c7a8c(c);
L_01087a98:
R_01087a98:
    c.r[3] = wp::add_carry(c, c.r[29], 0x3cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087ac0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087ac0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087ac0u;
    wp::call(c, c.ctr);
L_01087ac0:
R_01087ac0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1087accu;
    f_mr751_010841b0(c);
R_01087acc:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01087adc;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1087adcu;
    f_801c7a8c(c);
L_01087adc:
R_01087adc:
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

void f_mr751_01087b00(wp::Cpu& c) {
    WP_ENTER(0x1087b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x14u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr751_01087b10(wp::Cpu& c) {
    WP_ENTER(0x1087b10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr751_01087b20(wp::Cpu& c) {
    WP_ENTER(0x1087b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr751_01087b30(wp::Cpu& c) {
    WP_ENTER(0x1087b30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    return;
}

void f_mr751_01087b50(wp::Cpu& c) {
    WP_ENTER(0x1087b50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087bf0u: goto R_01087bf0;
        case 0x1087c00u: goto R_01087c00;
        case 0x1087c18u: goto R_01087c18;
        case 0x1087c20u: goto R_01087c20;
        case 0x1087c28u: goto R_01087c28;
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
    c.r[31] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01087b98;
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01087b98:
    ea = c.r[3] + 0x44u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x40u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x44u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01087c28;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087c28;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087c20;
    ea = c.r[29] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087bf0;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1087bf0u;
    f_801c7a8c(c);
L_01087bf0:
R_01087bf0:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087c08;
    c.lr = 0x1087c00u;
    f_80038a00(c);
R_01087c00:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01087c08:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087c18;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087c18u;
    f_801c7a8c(c);
L_01087c18:
R_01087c18:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1087c20u;
    f_801c7a8c(c);
L_01087c20:
R_01087c20:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087c28u;
    f_801c7a8c(c);
L_01087c28:
R_01087c28:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    goto L_01087c4c;
    c.r[0] = c.r[0] | 0x0u;
L_01087c38:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[3] + 0x4u;
    c.r[31] = c.r[31] + 0x4u;
L_01087c4c:
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01087c38;
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

void f_mr751_01087c80(wp::Cpu& c) {
    WP_ENTER(0x1087c80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087cbcu: goto R_01087cbc;
        case 0x1087cf0u: goto R_01087cf0;
        case 0x1087d20u: goto R_01087d20;
        case 0x1087d48u: goto R_01087d48;
        case 0x1087d64u: goto R_01087d64;
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
    c.r[31] = ((((g_mr751_bases[5] + 0x2c078u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr751_bases[5] + 0x2c078u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01087d64;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x120u;
    c.lr = 0x1087cbcu;
    f_801c79a4(c);
R_01087cbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087cf0;
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0xd8u;
    c.r[5] = c.r[31] + 0x108u;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_01087cdc;
    c.r[5] = c.r[31] + 0xf4u;
L_01087cdc:
    c.r[6] = 0x10000u;
    c.r[7] = 0x1u;
    c.r[0] = c.r[6] + 0xffff9000u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1087cf0u;
    f_mr751_010775a0(c);
L_01087cf0:
R_01087cf0:
    ea = c.r[30] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01087d20;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[30] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087d20;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087d20u;
    wp::call(c, c.ctr);
L_01087d20:
R_01087d20:
    ea = c.r[30] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = ((((g_mr751_bases[4] + 0x30d8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x30d8u) & 0xFFFFu);
    c.r[5] = c.r[31] + 0x11cu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[4] + 0x14u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x1087d48u;
    wp::call(c, c.ctr);
R_01087d48:
    ea = c.r[30] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x2u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087d64u;
    wp::call(c, c.ctr);
L_01087d64:
R_01087d64:
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

void f_mr751_01087d80(wp::Cpu& c) {
    WP_ENTER(0x1087d80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087df4u: goto R_01087df4;
        case 0x1087e30u: goto R_01087e30;
        case 0x1087e68u: goto R_01087e68;
        case 0x1087e98u: goto R_01087e98;
        case 0x1087ec0u: goto R_01087ec0;
        case 0x1087ed0u: goto R_01087ed0;
        case 0x1087ed4u: goto R_01087ed4;
        case 0x1087f54u: goto R_01087f54;
        case 0x1087f70u: goto R_01087f70;
        case 0x1087fc0u: goto R_01087fc0;
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
    c.r[29] = ((((g_mr751_bases[4] + 0x30d8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr751_bases[4] + 0x30d8u) & 0xFFFFu);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087fc8;
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087f9c;
    ea = c.r[3] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[29] + 0x50u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (!wp::cr_get(c, 1)) goto L_01087f9c;
    ea = c.r[3] + 0x18u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (!wp::cr_get(c, 1)) goto L_01087f9c;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087df4u;
    wp::call(c, c.ctr);
R_01087df4:
    ea = c.r[31] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[30] = c.r[29] + 0x0u;
    ea = c.r[31] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x54u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[0] = c.f[0];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e30u;
    wp::call(c, c.ctr);
R_01087e30:
    c.r[5] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x58u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0xb8u;
    wp::wr8(ea, c.r[28]);
    c.f[3] = wp::round_single(c.f[1] * wp::force25(c.f[2]));
    c.ps1[3] = c.f[3];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[2] = c.f[2];
    ea = c.r[31] + 0x38u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[3] - c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[2] - c.f[0]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1087e68u;
    f_80043290(c);
R_01087e68:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01087f90;
    ea = c.r[31] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[6] = 0x0u;
    ea = c.r[30] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e98u;
    wp::call(c, c.ctr);
R_01087e98:
    ea = c.r[31] + 0x40u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087f1c;
    ea = c.r[31] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087ec0u;
    wp::call(c, c.ctr);
R_01087ec0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x68u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087ed0u;
    wp::call(c, c.ctr);
R_01087ed0:
    c.lr = 0x1087ed4u;
    f_80130cf0(c);
R_01087ed4:
    ea = c.r[28] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x8u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0x8u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0xau;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0xau;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x14u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0x14u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0x16u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0x16u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01087f1c:
    c.r[28] = c.r[31] | c.r[31];
    c.r[29] = c.r[29] + 0x0u;
    c.r[30] = 0x0u;
    goto L_01087f7c;
L_01087f2c:
    ea = c.r[31] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0u - c.r[5];
    ea = c.r[29] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[0] & ~c.r[5];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x1087f54u;
    wp::call(c, c.ctr);
R_01087f54:
    ea = c.r[31] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[29] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087f70u;
    wp::call(c, c.ctr);
R_01087f70:
    c.r[28] = c.r[28] + 0x4u;
    c.r[29] = c.r[29] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_01087f7c:
    ea = c.r[31] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01087f2c;
    }
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_01087f90:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x15u;
    wp::wr8(ea, c.r[0]);
    goto L_01087fc8;
L_01087f9c:
    ea = c.r[3] + 0x15u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087fc0;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087fc0u;
    wp::call(c, c.ctr);
L_01087fc0:
R_01087fc0:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x15u;
    wp::wr8(ea, c.r[0]);
L_01087fc8:
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

void f_mr751_01087ff0(wp::Cpu& c) {
    WP_ENTER(0x1087ff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088008u: goto R_01088008;
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
    c.lr = 0x1088008u;
    f_mr751_01084180(c);
R_01088008:
    c.r[4] = ((((g_mr751_bases[4] + 0x3124u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr751_bases[4] + 0x3128u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr751_bases[4] + 0x3124u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = ((((g_mr751_bases[5] + 0x2c3d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr751_bases[4] + 0x3128u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2c3d0u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x11u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x44u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[31] + 0x48u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[31] + 0x10u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x4cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x50u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x54u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x2cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x30u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x34u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x38u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x40u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01088090(wp::Cpu& c) {
    WP_ENTER(0x1088090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088100u: goto R_01088100;
        case 0x1088110u: goto R_01088110;
        case 0x1088128u: goto R_01088128;
        case 0x1088130u: goto R_01088130;
        case 0x1088138u: goto R_01088138;
        case 0x1088160u: goto R_01088160;
        case 0x108816cu: goto R_0108816c;
        case 0x108817cu: goto R_0108817c;
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
    if (wp::cr_get(c, 2)) goto L_0108817c;
    c.r[0] = wp::add_carry(c, c.r[3], 0x50u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01088138;
    ea = c.r[3] + 0x54u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088138;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088138;
    ea = c.r[3] + 0x50u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088130;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088100;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1088100u;
    f_801c7a8c(c);
L_01088100:
R_01088100:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088118;
    c.lr = 0x1088110u;
    f_80038a00(c);
R_01088110:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01088118:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088128;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088128u;
    f_801c7a8c(c);
L_01088128:
R_01088128:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088130u;
    f_801c7a8c(c);
L_01088130:
R_01088130:
    ea = c.r[29] + 0x54u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088138u;
    f_801c7a8c(c);
L_01088138:
R_01088138:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088160;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088160;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088160u;
    wp::call(c, c.ctr);
L_01088160:
R_01088160:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108816cu;
    f_mr751_010841b0(c);
R_0108816c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108817c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108817cu;
    f_801c7a8c(c);
L_0108817c:
R_0108817c:
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

void f_mr751_010881a0(wp::Cpu& c) {
    WP_ENTER(0x10881a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10881e4u: goto R_010881e4;
        case 0x1088208u: goto R_01088208;
        case 0x1088238u: goto R_01088238;
        case 0x1088260u: goto R_01088260;
        case 0x108827cu: goto R_0108827c;
        case 0x108829cu: goto R_0108829c;
        case 0x10882b8u: goto R_010882b8;
        case 0x10882d4u: goto R_010882d4;
        case 0x10882f0u: goto R_010882f0;
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
    c.r[31] = ((((g_mr751_bases[5] + 0x2c078u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr751_bases[5] + 0x2c078u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088300;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x120u;
    c.lr = 0x10881e4u;
    f_801c79a4(c);
R_010881e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088208;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[31] + 0x2b0u;
    c.r[0] = c.r[5] + 0xffff9000u;
    c.r[7] = 0x1u;
    c.r[5] = c.r[31] + 0x2ccu;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1088208u;
    f_mr751_010775a0(c);
L_01088208:
R_01088208:
    ea = c.r[28] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01088238;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x4cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088238;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088238u;
    wp::call(c, c.ctr);
L_01088238:
R_01088238:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[30] = ((((g_mr751_bases[4] + 0x314cu) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr751_bases[4] + 0x314cu) & 0xFFFFu);
    c.r[5] = c.r[31] + 0x11cu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x24u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.ctr = c.r[12];
    c.lr = 0x1088260u;
    wp::call(c, c.ctr);
R_01088260:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x2u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108827cu;
    wp::call(c, c.ctr);
R_0108827c:
    c.r[29] = 0x0u;
L_01088280:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[31] + 0x2e0u;
    ea = c.r[30] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108829cu;
    wp::call(c, c.ctr);
R_0108829c:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[30] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10882b8u;
    wp::call(c, c.ctr);
R_010882b8:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[31] + 0x2f0u;
    ea = c.r[30] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10882d4u;
    wp::call(c, c.ctr);
R_010882d4:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[30] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10882f0u;
    wp::call(c, c.ctr);
R_010882f0:
    c.r[29] = c.r[29] + 0x1u;
    c.r[30] = c.r[30] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01088280;
    }
L_01088300:
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

void f_mr751_01088320(wp::Cpu& c) {
    WP_ENTER(0x1088320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x10u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr751_01088330(wp::Cpu& c) {
    WP_ENTER(0x1088330u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr751_01088340(wp::Cpu& c) {
    WP_ENTER(0x1088340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr751_01088350(wp::Cpu& c) {
    WP_ENTER(0x1088350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x44u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x48u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    return;
}

void f_mr751_01088370(wp::Cpu& c) {
    WP_ENTER(0x1088370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088448u: goto R_01088448;
        case 0x1088458u: goto R_01088458;
        case 0x1088470u: goto R_01088470;
        case 0x1088478u: goto R_01088478;
        case 0x1088480u: goto R_01088480;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[7] + 0x4u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[8] + 0x4u;
    c.r[11] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[8] + 0x0u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[7] + 0x0u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[7] + 0x8u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[7] + 0xcu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[8] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[3] + 0x24u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x34u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[3] + 0x28u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[3] + 0x38u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[3] + 0x2cu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[3] + 0x3cu;
    wp::wr32(ea, c.r[9]);
    ea = c.r[3] + 0x30u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[3] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_010883f0;
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010883f0:
    ea = c.r[3] + 0x54u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x50u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x50u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x54u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01088480;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088480;
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088478;
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088448;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1088448u;
    f_801c7a8c(c);
L_01088448:
R_01088448:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088460;
    c.lr = 0x1088458u;
    f_80038a00(c);
R_01088458:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01088460:
    c.r[3] = wp::add_carry(c, c.r[30], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088470;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088470u;
    f_801c7a8c(c);
L_01088470:
R_01088470:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1088478u;
    f_801c7a8c(c);
L_01088478:
R_01088478:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088480u;
    f_801c7a8c(c);
L_01088480:
R_01088480:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_010884a0(wp::Cpu& c) {
    WP_ENTER(0x10884a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10884b4u: goto R_010884b4;
        case 0x10884f0u: goto R_010884f0;
        case 0x108852cu: goto R_0108852c;
        case 0x1088564u: goto R_01088564;
        case 0x1088594u: goto R_01088594;
        case 0x10885bcu: goto R_010885bc;
        case 0x10885ccu: goto R_010885cc;
        case 0x10885d0u: goto R_010885d0;
        case 0x1088644u: goto R_01088644;
        case 0x1088664u: goto R_01088664;
        case 0x1088688u: goto R_01088688;
        case 0x10886a8u: goto R_010886a8;
        case 0x10886d0u: goto R_010886d0;
        case 0x10886f8u: goto R_010886f8;
        case 0x1088720u: goto R_01088720;
        case 0x108876cu: goto R_0108876c;
        case 0x108877cu: goto R_0108877c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff50u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x10884b4u;
    f_801c83b4(c);
R_010884b4:
    ea = c.r[3] + 0x4cu;
    c.r[4] = wp::rd32(ea);
    c.r[30] = ((((g_mr751_bases[4] + 0x30d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr751_bases[4] + 0x30d8u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01088774;
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088748;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10884f0u;
    wp::call(c, c.ctr);
R_010884f0:
    ea = c.r[31] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[30] + 0x74u;
    ea = c.r[31] + 0x18u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    ea = c.r[30] + 0x54u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[0] = c.f[0];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x88u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x8cu;
    c.r[28] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108852cu;
    wp::call(c, c.ctr);
R_0108852c:
    c.r[5] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[30] + 0x58u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0xb8u;
    wp::wr8(ea, c.r[28]);
    c.f[3] = wp::round_single(c.f[1] * wp::force25(c.f[2]));
    c.ps1[3] = c.f[3];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x44u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[2] = c.f[2];
    ea = c.r[31] + 0x48u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[3] - c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[2] - c.f[0]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1088564u;
    f_80043290(c);
R_01088564:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108873c;
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[6] = 0x0u;
    ea = c.r[29] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[31] + 0x1cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088594u;
    wp::call(c, c.ctr);
R_01088594:
    ea = c.r[31] + 0x50u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088618;
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[29] + 0x28u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10885bcu;
    wp::call(c, c.ctr);
R_010885bc:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x68u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10885ccu;
    wp::call(c, c.ctr);
R_010885cc:
    c.lr = 0x10885d0u;
    f_80130cf0(c);
R_010885d0:
    ea = c.r[28] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x8u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0x8u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0xau;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0xau;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x14u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0x14u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0x16u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0x16u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[28] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01088618:
    c.r[27] = c.r[30] + 0x74u;
    c.r[28] = c.r[31] | c.r[31];
    c.r[26] = 0x0u;
    c.r[29] = ((((g_mr751_bases[5] + 0x2c378u) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_mr751_bases[5] + 0x2c380u) + 0x8000u) >> 16) << 16);
L_0108862c:
    ea = c.r[28] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = c.r[29] + wp::sign_extend16((g_mr751_bases[5] + 0x2c378u) & 0xFFFFu);
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1088644u;
    f_801d3590(c);
R_01088644:
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[27] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088664u;
    wp::call(c, c.ctr);
R_01088664:
    ea = c.r[28] + 0x34u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = c.r[30] + wp::sign_extend16((g_mr751_bases[5] + 0x2c380u) & 0xFFFFu);
    c.r[4] = 0x3fu;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088680;
    c.r[5] = c.r[29] + wp::sign_extend16((g_mr751_bases[5] + 0x2c378u) & 0xFFFFu);
L_01088680:
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1088688u;
    f_801d3590(c);
R_01088688:
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[27] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10886a8u;
    wp::call(c, c.ctr);
R_010886a8:
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[26] - c.r[0];
    ea = c.r[27] + 0x4cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.ctr = c.r[12];
    c.lr = 0x10886d0u;
    wp::call(c, c.ctr);
R_010886d0:
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[26] - c.r[0];
    ea = c.r[27] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.ctr = c.r[12];
    c.lr = 0x10886f8u;
    wp::call(c, c.ctr);
R_010886f8:
    ea = c.r[31] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[26] - c.r[0];
    ea = c.r[27] + 0x7cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.ctr = c.r[12];
    c.lr = 0x1088720u;
    wp::call(c, c.ctr);
R_01088720:
    c.r[26] = c.r[26] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    c.r[28] = c.r[28] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108862c;
    }
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_0108873c:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x11u;
    wp::wr8(ea, c.r[0]);
    goto L_01088774;
L_01088748:
    ea = c.r[3] + 0x11u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108876c;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108876cu;
    wp::call(c, c.ctr);
L_0108876c:
R_0108876c:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x11u;
    wp::wr8(ea, c.r[0]);
L_01088774:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x108877cu;
    f_801c8400(c);
R_0108877c:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr751_01088790(wp::Cpu& c) {
    WP_ENTER(0x1088790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10887a4u: goto R_010887a4;
        case 0x108882cu: goto R_0108882c;
        case 0x108883cu: goto R_0108883c;
        case 0x1088854u: goto R_01088854;
        case 0x108885cu: goto R_0108885c;
        case 0x1088870u: goto R_01088870;
        case 0x1088884u: goto R_01088884;
        case 0x10888a0u: goto R_010888a0;
        case 0x10888d0u: goto R_010888d0;
        case 0x10888d8u: goto R_010888d8;
        case 0x1088900u: goto R_01088900;
        case 0x1088938u: goto R_01088938;
        case 0x10889a0u: goto R_010889a0;
        case 0x10889a8u: goto R_010889a8;
        case 0x10889bcu: goto R_010889bc;
        case 0x10889ecu: goto R_010889ec;
        case 0x1088a38u: goto R_01088a38;
        case 0x1088a54u: goto R_01088a54;
        case 0x1088a94u: goto R_01088a94;
        case 0x1088ad0u: goto R_01088ad0;
        case 0x1088ad8u: goto R_01088ad8;
        case 0x1088ae4u: goto R_01088ae4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x50u;
    c.lr = 0x10887a4u;
    f_801c83b4(c);
R_010887a4:
    c.r[29] = ((((g_mr751_bases[4] + 0x30d8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr751_bases[4] + 0x30d8u) & 0xFFFFu);
    c.r[5] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[6] = wp::rdf32(ea);
    c.ps1[6] = c.f[6];
    c.r[5] = 0x4u;
    ea = c.r[29] + 0x60u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x68u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[30] = ((((g_mr751_bases[5] + 0x2c078u) + 0x8000u) >> 16) << 16);
    c.f[5] = wp::round_single(c.f[2] * wp::force25(c.f[6]));
    c.ps1[5] = c.f[5];
    ea = c.r[29] + 0x58u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[3] = wp::round_single(c.f[1] * wp::force25(c.f[6]));
    c.ps1[3] = c.f[3];
    ea = c.r[29] + 0x11cu;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[6] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x6cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[4] = wp::round_single(c.f[4] * wp::force25(c.f[2]));
    c.ps1[4] = c.f[4];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[31] = c.r[3] | c.r[3];
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x120u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr751_bases[5] + 0x2c078u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x2cu;
    ea = c.r[1] + 0x28u;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    ea = c.r[1] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[1] + 0x20u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[1] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x108882cu;
    f_801c79a4(c);
R_0108882c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01088840;
    c.lr = 0x108883cu;
    f_mr751_01085060(c);
R_0108883c:
    c.r[26] = c.r[3] | c.r[3];
L_01088840:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x28u;
    c.r[5] = c.r[1] + 0x20u;
    c.r[6] = c.r[1] + 0x18u;
    c.lr = 0x1088854u;
    f_mr751_01085f40(c);
R_01088854:
    c.r[3] = 0x1d8u;
    c.lr = 0x108885cu;
    f_801c79a4(c);
R_0108885c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010888a4;
    c.r[3] = 0x14u;
    c.lr = 0x1088870u;
    f_801c79a4(c);
R_01088870:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01088890;
    c.r[4] = 0xau;
    c.lr = 0x1088884u;
    f_mr751_01084370(c);
R_01088884:
    c.r[3] = ((((g_mr751_bases[5] + 0x2c3a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2c3a8u) & 0xFFFFu);
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
L_01088890:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[26] | c.r[26];
    c.lr = 0x10888a0u;
    f_mr751_01086490(c);
R_010888a0:
    c.r[28] = c.r[3] | c.r[3];
L_010888a4:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010888d0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010888d0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10888d0u;
    wp::call(c, c.ctr);
L_010888d0:
R_010888d0:
    c.r[3] = 0x120u;
    c.lr = 0x10888d8u;
    f_801c79a4(c);
R_010888d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01088904;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] + 0x2b0u;
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[7] = 0x1u;
    c.r[5] = c.r[30] + 0x314u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1088900u;
    f_mr751_010775a0(c);
R_01088900:
    c.r[26] = c.r[3] | c.r[3];
L_01088904:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088918;
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010889a8;
L_01088918:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108894c;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[26]);
    c.r[3] = 0x4u;
    c.lr = 0x1088938u;
    f_801c79a4(c);
R_01088938:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088948;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088948:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_0108894c:
    ea = c.r[31] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010889a8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010889a8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010889a0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10889a0u;
    wp::call(c, c.ctr);
L_010889a0:
R_010889a0:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10889a8u;
    f_801c7a8c(c);
L_010889a8:
R_010889a8:
    c.r[27] = c.r[29] + 0x74u;
    c.r[28] = 0x0u;
    goto L_010889f4;
L_010889b4:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10889bcu;
    f_80010060(c);
R_010889bc:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[6] = 0x40u;
    ea = c.r[12] + 0x128u;
    c.r[12] = wp::rd32(ea);
    c.r[7] = 0x40u;
    ea = c.r[27] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[8] = 0x0u;
    ea = c.r[29] + 0x4cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[9] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x10889ecu;
    wp::call(c, c.ctr);
R_010889ec:
    c.r[27] = c.r[27] + 0x4u;
    c.r[28] = c.r[28] + 0x1u;
L_010889f4:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010889b4;
    }
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[29] + 0x74u;
    c.r[28] = 0x0u;
    ea = c.r[31] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x1cu;
    wp::wr32(ea, c.r[0]);
L_01088a1c:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[5] = c.r[30] + 0x2e0u;
    ea = c.r[27] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088a38u;
    wp::call(c, c.ctr);
R_01088a38:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088a54u;
    wp::call(c, c.ctr);
R_01088a54:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_signed(c, 0, c.r[28], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01088a1c;
    }
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088a88;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088a88:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x1088a94u;
    f_mr751_010873b0(c);
R_01088a94:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088ad8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088ad8;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088ad0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088ad0u;
    wp::call(c, c.ctr);
L_01088ad0:
R_01088ad0:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088ad8u;
    f_801c7a8c(c);
L_01088ad8:
R_01088ad8:
    c.r[11] = c.r[1] + 0x50u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088ae4u;
    f_801c8400(c);
R_01088ae4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr751_01088b00(wp::Cpu& c) {
    WP_ENTER(0x1088b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088b68u: goto R_01088b68;
        case 0x1088b70u: goto R_01088b70;
        case 0x1088b98u: goto R_01088b98;
        case 0x1088ba8u: goto R_01088ba8;
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
    if (wp::cr_get(c, 2)) goto L_01088ba8;
    c.r[0] = wp::add_carry(c, c.r[3], 0x8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01088b70;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088b70;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088b70;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088b68;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088b68u;
    wp::call(c, c.ctr);
L_01088b68:
R_01088b68:
    ea = c.r[30] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088b70u;
    f_801c7a8c(c);
L_01088b70:
R_01088b70:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088b98;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088b98;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088b98u;
    wp::call(c, c.ctr);
L_01088b98:
R_01088b98:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01088ba8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1088ba8u;
    f_801c7a8c(c);
L_01088ba8:
R_01088ba8:
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

void f_mr751_01088bd0(wp::Cpu& c) {
    WP_ENTER(0x1088bd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088be4u: goto R_01088be4;
        case 0x1088c4cu: goto R_01088c4c;
        case 0x1088c6cu: goto R_01088c6c;
        case 0x1088ce8u: goto R_01088ce8;
        case 0x1088d04u: goto R_01088d04;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff50u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x1088be4u;
    f_801c83ac(c);
R_01088be4:
    ea = c.r[3] + 0x8u;
    c.r[25] = wp::rd32(ea);
    c.r[5] = 0x20000u;
    ea = c.r[4] + 0x0u;
    c.r[8] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[4] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    ea = c.r[4] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[26] = c.r[5] + 0xffff86a0u;
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[27] = 0x0u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01088cfc;
    c.r[29] = ((((g_mr751_bases[4] + 0x314cu) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[31] | c.r[31];
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr751_bases[4] + 0x314cu) & 0xFFFFu);
    c.r[24] = 0x0u;
    c.r[30] = ((((g_mr751_bases[5] + 0x2c3a0u) + 0x8000u) >> 16) << 16);
L_01088c34:
    ea = c.r[28] + 0x10u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = c.r[30] + wp::sign_extend16((g_mr751_bases[5] + 0x2c3a0u) & 0xFFFFu);
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1088c4cu;
    f_801d3590(c);
R_01088c4c:
    ea = c.r[25] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = 0x0u;
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088c6cu;
    wp::call(c, c.ctr);
R_01088c6c:
    ea = c.r[28] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01088c7c;
    c.r[27] = c.r[0] | c.r[0];
L_01088c7c:
    wp::compare_signed(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01088c88;
    c.r[26] = c.r[0] | c.r[0];
L_01088c88:
    c.r[24] = c.r[24] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    c.r[28] = c.r[28] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01088c34;
    }
    wp::compare_signed(c, 0, c.r[27], c.r[26]);
    if (!wp::cr_get(c, 2)) goto L_01088cac;
    c.r[3] = 0xf0000u;
    c.r[27] = c.r[3] + 0x4240u;
L_01088cac:
    c.r[28] = ((((g_mr751_bases[4] + 0x314cu) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[31] | c.r[31];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr751_bases[4] + 0x314cu) & 0xFFFFu);
    c.r[30] = wp::rotl(c.r[27], 1) & 0x1u;
    c.r[24] = 0x0u;
L_01088cc0:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = wp::sraw(c, c.r[0], 31);
    ea = c.r[28] + 0x8cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[27], c.r[0]);
    c.r[5] = wp::add_extended(c, c.r[5], c.r[30]);
    c.ctr = c.r[12];
    c.lr = 0x1088ce8u;
    wp::call(c, c.ctr);
R_01088ce8:
    c.r[24] = c.r[24] + 0x1u;
    c.r[28] = c.r[28] + 0x4u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01088cc0;
    }
L_01088cfc:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x1088d04u;
    f_801c83f8(c);
R_01088d04:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr751_01088d20(wp::Cpu& c) {
    WP_ENTER(0x1088d20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    f_mr751_01087280(c);
    return;
}

void f_mr751_01088d30(wp::Cpu& c) {
    WP_ENTER(0x1088d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088d44u: goto R_01088d44;
        case 0x1088d60u: goto R_01088d60;
        case 0x1088d6cu: goto R_01088d6c;
        case 0x1088dc0u: goto R_01088dc0;
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
    c.lr = 0x1088d44u;
    f_801c83b4(c);
R_01088d44:
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    c.r[30] = c.r[7] | c.r[7];
    c.lr = 0x1088d60u;
    f_mr751_01087290(c);
R_01088d60:
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[26] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088d6cu;
    f_mr751_010873a0(c);
R_01088d6c:
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x24u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x30u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x44u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x38u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x48u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1088dc0u;
    f_801c8400(c);
R_01088dc0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01088dd0(wp::Cpu& c) {
    WP_ENTER(0x1088dd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088dfcu: goto R_01088dfc;
        case 0x1088e34u: goto R_01088e34;
        case 0x1088e54u: goto R_01088e54;
        case 0x1088eacu: goto R_01088eac;
        case 0x1088eb4u: goto R_01088eb4;
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
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = 0x54u;
    c.lr = 0x1088dfcu;
    f_801c79a4(c);
R_01088dfc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088e34;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088e28;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088e28:
    c.r[4] = c.r[1] + 0x8u;
    c.r[31] = 0x1u;
    c.lr = 0x1088e34u;
    f_mr751_01088ed0(c);
L_01088e34:
R_01088e34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01088e68;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x1088e54u;
    f_801c79a4(c);
R_01088e54:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088e64;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088e64:
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_01088e68:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088eb4;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088eb4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088eb4;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088eac;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088eacu;
    wp::call(c, c.ctr);
L_01088eac:
R_01088eac:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088eb4u;
    f_801c7a8c(c);
L_01088eb4:
R_01088eb4:
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

void f_mr751_01088ed0(wp::Cpu& c) {
    WP_ENTER(0x1088ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088f14u: goto R_01088f14;
        case 0x1088f50u: goto R_01088f50;
        case 0x1088f58u: goto R_01088f58;
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
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088f08;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088f08:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x1088f14u;
    f_mr751_01084200(c);
R_01088f14:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088f58;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088f58;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088f50;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088f50u;
    wp::call(c, c.ctr);
L_01088f50:
R_01088f50:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088f58u;
    f_801c7a8c(c);
L_01088f58:
R_01088f58:
    c.r[3] = ((((g_mr751_bases[5] + 0x2c3bcu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[4] = 0xffffffffu;
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2c3bcu) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x50u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x38u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x48u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_01088fc0(wp::Cpu& c) {
    WP_ENTER(0x1088fc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088fdcu: goto R_01088fdc;
        case 0x1088fe8u: goto R_01088fe8;
        case 0x1089008u: goto R_01089008;
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
    c.r[3] = 0x58u;
    c.lr = 0x1088fdcu;
    f_801c79a4(c);
R_01088fdc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088fe8;
    c.lr = 0x1088fe8u;
    f_mr751_01087ff0(c);
L_01088fe8:
R_01088fe8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108901c;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x1089008u;
    f_801c79a4(c);
R_01089008:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089018;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089018:
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_0108901c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr751_01089030(wp::Cpu& c) {
    WP_ENTER(0x1089030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108905cu: goto R_0108905c;
        case 0x108906cu: goto R_0108906c;
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
    if (wp::cr_get(c, 2)) goto L_0108906c;
    c.r[4] = 0x0u;
    c.lr = 0x108905cu;
    f_mr751_01084580(c);
R_0108905c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108906c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108906cu;
    f_801c7a8c(c);
L_0108906c:
R_0108906c:
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

void f_mr751_01089090(wp::Cpu& c) {
    WP_ENTER(0x1089090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10890c4u: goto R_010890c4;
        case 0x10890dcu: goto R_010890dc;
        case 0x10890f4u: goto R_010890f4;
        case 0x108910cu: goto R_0108910c;
        case 0x1089150u: goto R_01089150;
        case 0x1089190u: goto R_01089190;
        case 0x10891a0u: goto R_010891a0;
        case 0x10891b8u: goto R_010891b8;
        case 0x10891c0u: goto R_010891c0;
        case 0x10891c8u: goto R_010891c8;
        case 0x10891d4u: goto R_010891d4;
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
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    c.r[4] = wp::rd8(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10890c4u;
    wp::call(c, c.ctr);
R_010890c4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10890dcu;
    wp::call(c, c.ctr);
R_010890dc:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10890f4u;
    wp::call(c, c.ctr);
R_010890f4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] + 0x18u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108910cu;
    wp::call(c, c.ctr);
R_0108910c:
    ea = c.r[29] + 0x4u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[29] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x50u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089134;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089134:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[29] + 0x28u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.r[7] = c.r[29] + 0x2cu;
    c.r[8] = c.r[29] + 0x3cu;
    c.lr = 0x1089150u;
    f_mr751_01088370(c);
R_01089150:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010891c8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010891c8;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010891c0;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089190;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1089190u;
    f_801c7a8c(c);
L_01089190:
R_01089190:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010891a8;
    c.lr = 0x10891a0u;
    f_80038a00(c);
R_010891a0:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010891a8:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010891b8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10891b8u;
    f_801c7a8c(c);
L_010891b8:
R_010891b8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10891c0u;
    f_801c7a8c(c);
L_010891c0:
R_010891c0:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10891c8u;
    f_801c7a8c(c);
L_010891c8:
R_010891c8:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10891d4u;
    f_mr751_010841f0(c);
R_010891d4:
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

void f_mr751_010891f0(wp::Cpu& c) {
    WP_ENTER(0x10891f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089238u: goto R_01089238;
        case 0x1089278u: goto R_01089278;
        case 0x1089284u: goto R_01089284;
        case 0x10892b0u: goto R_010892b0;
        case 0x10892c0u: goto R_010892c0;
        case 0x10892c8u: goto R_010892c8;
        case 0x10892dcu: goto R_010892dc;
        case 0x1089304u: goto R_01089304;
        case 0x1089338u: goto R_01089338;
        case 0x10893a4u: goto R_010893a4;
        case 0x10893b4u: goto R_010893b4;
        case 0x10893ccu: goto R_010893cc;
        case 0x10893d4u: goto R_010893d4;
        case 0x10893dcu: goto R_010893dc;
        case 0x10893f0u: goto R_010893f0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0xdu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010893f0;
    ea = c.r[3] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010893dc;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0xdu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = 0xcu;
    c.lr = 0x1089238u;
    f_801c79a4(c);
R_01089238:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01089304;
    ea = c.r[31] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c078u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    c.r[29] = 0x0u;
    c.r[5] = ((((g_mr751_bases[5] + 0x2c088u) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_mr751_bases[6] + 0x4f08u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c078u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2c088u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[29]);
    c.r[3] = c.r[30] + wp::sign_extend16((g_mr751_bases[6] + 0x4f08u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1089278u;
    f_801cf168(c);
R_01089278:
    c.r[3] = c.r[30] + wp::sign_extend16((g_mr751_bases[6] + 0x4f08u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.lr = 0x1089284u;
    f_800374b0(c);
R_01089284:
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[7] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x10u;
    c.r[8] = 0x0u;
    ea = c.r[7] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[9] = 0x0u;
    ea = c.r[7] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[10] = 0x0u;
    ea = c.r[7] + 0x6u;
    c.r[6] = wp::rd16(ea);
    ea = c.r[7] + 0x8u;
    c.r[7] = wp::rd32(ea);
    c.lr = 0x10892b0u;
    f_80151d00(c);
R_010892b0:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x10892c0u;
    f_801520a0(c);
R_010892c0:
    c.r[3] = 0x1cu;
    c.lr = 0x10892c8u;
    f_801c79a4(c);
R_010892c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010892f0;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10892dcu;
    f_80132670(c);
R_010892dc:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[30] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xffff9fffu;
    ea = c.r[30] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x16u;
    wp::wr16(ea, c.r[29]);
L_010892f0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089304;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x1089304u;
    f_801c7a8c(c);
L_01089304:
R_01089304:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089318;
    ea = c.r[31] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010893dc;
L_01089318:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108934c;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = 0x4u;
    c.lr = 0x1089338u;
    f_801c79a4(c);
R_01089338:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089348;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089348:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_0108934c:
    ea = c.r[31] + 0x50u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[31] + 0x4cu;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[31] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x50u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010893dc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010893dc;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010893d4;
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010893a4;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10893a4u;
    f_801c7a8c(c);
L_010893a4:
R_010893a4:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010893bc;
    c.lr = 0x10893b4u;
    f_80038a00(c);
R_010893b4:
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010893bc:
    c.r[3] = wp::add_carry(c, c.r[28], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010893cc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10893ccu;
    f_801c7a8c(c);
L_010893cc:
R_010893cc:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10893d4u;
    f_801c7a8c(c);
L_010893d4:
R_010893d4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10893dcu;
    f_801c7a8c(c);
L_010893dc:
R_010893dc:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10893f0u;
    wp::call(c, c.ctr);
L_010893f0:
R_010893f0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr751_01089410(wp::Cpu& c) {
    WP_ENTER(0x1089410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089480u: goto R_01089480;
        case 0x1089490u: goto R_01089490;
        case 0x10894a8u: goto R_010894a8;
        case 0x10894b0u: goto R_010894b0;
        case 0x10894b8u: goto R_010894b8;
        case 0x10894c4u: goto R_010894c4;
        case 0x10894d4u: goto R_010894d4;
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
    if (wp::cr_get(c, 2)) goto L_010894d4;
    c.r[0] = wp::add_carry(c, c.r[3], 0x4cu, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010894b8;
    ea = c.r[3] + 0x50u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010894b8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010894b8;
    ea = c.r[3] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010894b0;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089480;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1089480u;
    f_801c7a8c(c);
L_01089480:
R_01089480:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089498;
    c.lr = 0x1089490u;
    f_80038a00(c);
R_01089490:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01089498:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010894a8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10894a8u;
    f_801c7a8c(c);
L_010894a8:
R_010894a8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10894b0u;
    f_801c7a8c(c);
L_010894b0:
R_010894b0:
    ea = c.r[29] + 0x50u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10894b8u;
    f_801c7a8c(c);
L_010894b8:
R_010894b8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10894c4u;
    f_mr751_01084260(c);
R_010894c4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010894d4;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10894d4u;
    f_801c7a8c(c);
L_010894d4:
R_010894d4:
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

void f_mr751_01089500(wp::Cpu& c) {
    WP_ENTER(0x1089500u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108952cu: goto R_0108952c;
        case 0x1089564u: goto R_01089564;
        case 0x1089584u: goto R_01089584;
        case 0x10895dcu: goto R_010895dc;
        case 0x10895e4u: goto R_010895e4;
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
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = 0x40u;
    c.lr = 0x108952cu;
    f_801c79a4(c);
R_0108952c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089564;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089558;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089558:
    c.r[4] = c.r[1] + 0x8u;
    c.r[31] = 0x1u;
    c.lr = 0x1089564u;
    f_mr751_01089600(c);
L_01089564:
R_01089564:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089598;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x1089584u;
    f_801c79a4(c);
R_01089584:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089594;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089594:
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_01089598:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010895e4;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010895e4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010895e4;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010895dc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10895dcu;
    wp::call(c, c.ctr);
L_010895dc:
R_010895dc:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10895e4u;
    f_801c7a8c(c);
L_010895e4:
R_010895e4:
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

void f_mr751_01089600(wp::Cpu& c) {
    WP_ENTER(0x1089600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089644u: goto R_01089644;
        case 0x1089680u: goto R_01089680;
        case 0x1089688u: goto R_01089688;
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
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089638;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089638:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x1089644u;
    f_mr751_01084200(c);
R_01089644:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089688;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01089688;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089680;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089680u;
    wp::call(c, c.ctr);
L_01089680:
R_01089680:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089688u;
    f_801c7a8c(c);
L_01089688:
R_01089688:
    c.r[3] = ((((g_mr751_bases[5] + 0x2c408u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr751_bases[5] + 0x2c408u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x38u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr751_010896e0(wp::Cpu& c) {
    WP_ENTER(0x10896e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089704u: goto R_01089704;
        case 0x1089714u: goto R_01089714;
        case 0x1089734u: goto R_01089734;
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
    c.r[3] = 0x48u;
    c.lr = 0x1089704u;
    f_801c79a4(c);
R_01089704:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089714;
    ea = c.r[31] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1089714u;
    f_mr751_01087950(c);
L_01089714:
R_01089714:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089748;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x1089734u;
    f_801c79a4(c);
R_01089734:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089744;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089744:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_01089748:
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

void f_mr751_01089760(wp::Cpu& c) {
    WP_ENTER(0x1089760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108978cu: goto R_0108978c;
        case 0x108979cu: goto R_0108979c;
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
    if (wp::cr_get(c, 2)) goto L_0108979c;
    c.r[4] = 0x0u;
    c.lr = 0x108978cu;
    f_mr751_01084580(c);
R_0108978c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108979c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108979cu;
    f_801c7a8c(c);
L_0108979c:
R_0108979c:
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

void f_mr751_010897c0(wp::Cpu& c) {
    WP_ENTER(0x10897c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10897f4u: goto R_010897f4;
        case 0x108980cu: goto R_0108980c;
        case 0x1089824u: goto R_01089824;
        case 0x108983cu: goto R_0108983c;
        case 0x1089878u: goto R_01089878;
        case 0x10898b8u: goto R_010898b8;
        case 0x10898c8u: goto R_010898c8;
        case 0x10898e0u: goto R_010898e0;
        case 0x10898e8u: goto R_010898e8;
        case 0x10898f0u: goto R_010898f0;
        case 0x10898fcu: goto R_010898fc;
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
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    c.r[4] = wp::rd8(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10897f4u;
    wp::call(c, c.ctr);
R_010897f4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108980cu;
    wp::call(c, c.ctr);
R_0108980c:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089824u;
    wp::call(c, c.ctr);
R_01089824:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] + 0x18u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108983cu;
    wp::call(c, c.ctr);
R_0108983c:
    ea = c.r[29] + 0x4u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[29] + 0x38u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089864;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089864:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[29] + 0x28u;
    c.lr = 0x1089878u;
    f_mr751_01087b50(c);
R_01089878:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010898f0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010898f0;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010898e8;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010898b8;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10898b8u;
    f_801c7a8c(c);
L_010898b8:
R_010898b8:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010898d0;
    c.lr = 0x10898c8u;
    f_80038a00(c);
R_010898c8:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010898d0:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010898e0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10898e0u;
    f_801c7a8c(c);
L_010898e0:
R_010898e0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10898e8u;
    f_801c7a8c(c);
L_010898e8:
R_010898e8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10898f0u;
    f_801c7a8c(c);
L_010898f0:
R_010898f0:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10898fcu;
    f_mr751_010841f0(c);
R_010898fc:
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

void f_mr751_01089920(wp::Cpu& c) {
    WP_ENTER(0x1089920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089968u: goto R_01089968;
        case 0x10899a8u: goto R_010899a8;
        case 0x10899b4u: goto R_010899b4;
        case 0x10899e0u: goto R_010899e0;
        case 0x10899f0u: goto R_010899f0;
        case 0x10899f8u: goto R_010899f8;
        case 0x1089a0cu: goto R_01089a0c;
        case 0x1089a34u: goto R_01089a34;
        case 0x1089a68u: goto R_01089a68;
        case 0x1089ad4u: goto R_01089ad4;
        case 0x1089ae4u: goto R_01089ae4;
        case 0x1089afcu: goto R_01089afc;
        case 0x1089b04u: goto R_01089b04;
        case 0x1089b0cu: goto R_01089b0c;
        case 0x1089b20u: goto R_01089b20;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0xdu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01089b20;
    ea = c.r[3] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01089b0c;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0xdu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = 0xcu;
    c.lr = 0x1089968u;
    f_801c79a4(c);
R_01089968:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01089a34;
    ea = c.r[31] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = ((((g_mr751_bases[5] + 0x2c078u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    c.r[29] = 0x0u;
    c.r[5] = ((((g_mr751_bases[5] + 0x2c088u) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_mr751_bases[6] + 0x4f08u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr751_bases[5] + 0x2c078u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr751_bases[5] + 0x2c088u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[29]);
    c.r[3] = c.r[30] + wp::sign_extend16((g_mr751_bases[6] + 0x4f08u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10899a8u;
    f_801cf168(c);
R_010899a8:
    c.r[3] = c.r[30] + wp::sign_extend16((g_mr751_bases[6] + 0x4f08u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.lr = 0x10899b4u;
    f_800374b0(c);
R_010899b4:
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[7] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x10u;
    c.r[8] = 0x0u;
    ea = c.r[7] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[9] = 0x0u;
    ea = c.r[7] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[10] = 0x0u;
    ea = c.r[7] + 0x6u;
    c.r[6] = wp::rd16(ea);
    ea = c.r[7] + 0x8u;
    c.r[7] = wp::rd32(ea);
    c.lr = 0x10899e0u;
    f_80151d00(c);
R_010899e0:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x10899f0u;
    f_801520a0(c);
R_010899f0:
    c.r[3] = 0x1cu;
    c.lr = 0x10899f8u;
    f_801c79a4(c);
R_010899f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01089a20;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x1089a0cu;
    f_80132670(c);
R_01089a0c:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[30] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xffff9fffu;
    ea = c.r[30] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x16u;
    wp::wr16(ea, c.r[29]);
L_01089a20:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089a34;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x1089a34u;
    f_801c7a8c(c);
L_01089a34:
R_01089a34:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089a48;
    ea = c.r[31] + 0x38u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089b0c;
L_01089a48:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089a7c;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = 0x4u;
    c.lr = 0x1089a68u;
    f_801c79a4(c);
R_01089a68:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089a78;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089a78:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_01089a7c:
    ea = c.r[31] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[31] + 0x38u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[31] + 0x38u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089b0c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01089b0c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089b04;
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089ad4;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1089ad4u;
    f_801c7a8c(c);
L_01089ad4:
R_01089ad4:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089aec;
    c.lr = 0x1089ae4u;
    f_80038a00(c);
R_01089ae4:
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01089aec:
    c.r[3] = wp::add_carry(c, c.r[28], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089afc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089afcu;
    f_801c7a8c(c);
L_01089afc:
R_01089afc:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1089b04u;
    f_801c7a8c(c);
L_01089b04:
R_01089b04:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089b0cu;
    f_801c7a8c(c);
L_01089b0c:
R_01089b0c:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089b20u;
    wp::call(c, c.ctr);
L_01089b20:
R_01089b20:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr751_01089b40(wp::Cpu& c) {
    WP_ENTER(0x1089b40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089bb0u: goto R_01089bb0;
        case 0x1089bc0u: goto R_01089bc0;
        case 0x1089bd8u: goto R_01089bd8;
        case 0x1089be0u: goto R_01089be0;
        case 0x1089be8u: goto R_01089be8;
        case 0x1089bf4u: goto R_01089bf4;
        case 0x1089c04u: goto R_01089c04;
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
    if (wp::cr_get(c, 2)) goto L_01089c04;
    c.r[0] = wp::add_carry(c, c.r[3], 0x38u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089be8;
    ea = c.r[3] + 0x3cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089be8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01089be8;
    ea = c.r[3] + 0x38u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089be0;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089bb0;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1089bb0u;
    f_801c7a8c(c);
L_01089bb0:
R_01089bb0:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089bc8;
    c.lr = 0x1089bc0u;
    f_80038a00(c);
R_01089bc0:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01089bc8:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089bd8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089bd8u;
    f_801c7a8c(c);
L_01089bd8:
R_01089bd8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1089be0u;
    f_801c7a8c(c);
L_01089be0:
R_01089be0:
    ea = c.r[29] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089be8u;
    f_801c7a8c(c);
L_01089be8:
R_01089be8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1089bf4u;
    f_mr751_01084260(c);
R_01089bf4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01089c04;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1089c04u;
    f_801c7a8c(c);
L_01089c04:
R_01089c04:
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

