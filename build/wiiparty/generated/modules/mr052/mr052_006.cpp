#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr052_bases[17];
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
void f_8003b350(wp::Cpu& c);
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
void f_80043490(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004a120(wp::Cpu& c);
void f_8004aa80(wp::Cpu& c);
void f_8004abf0(wp::Cpu& c);
void f_80051600(wp::Cpu& c);
void f_80052170(wp::Cpu& c);
void f_80052190(wp::Cpu& c);
void f_80053d20(wp::Cpu& c);
void f_80053d40(wp::Cpu& c);
void f_80053df0(wp::Cpu& c);
void f_80054e60(wp::Cpu& c);
void f_80055290(wp::Cpu& c);
void f_80055bb0(wp::Cpu& c);
void f_80055d80(wp::Cpu& c);
void f_80056040(wp::Cpu& c);
void f_80063370(wp::Cpu& c);
void f_80063bb0(wp::Cpu& c);
void f_80065040(wp::Cpu& c);
void f_800656f0(wp::Cpu& c);
void f_80066250(wp::Cpu& c);
void f_80066cd0(wp::Cpu& c);
void f_80066db0(wp::Cpu& c);
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
void f_801cee24(wp::Cpu& c);
void f_801d34c4(wp::Cpu& c);
void f_801d3590(wp::Cpu& c);
void f_801d3940(wp::Cpu& c);
void f_mr052_01017c60(wp::Cpu& c);
void f_mr052_01017e20(wp::Cpu& c);
void f_mr052_01029410(wp::Cpu& c);
void f_mr052_01029520(wp::Cpu& c);
void f_mr052_01029540(wp::Cpu& c);
void f_mr052_01029560(wp::Cpu& c);
void f_mr052_01029ac0(wp::Cpu& c);
void f_mr052_0102c450(wp::Cpu& c);
void f_mr052_0102d990(wp::Cpu& c);
void f_mr052_0102da30(wp::Cpu& c);
void f_mr052_0102dab0(wp::Cpu& c);
void f_mr052_0102dac0(wp::Cpu& c);
void f_mr052_0102dad0(wp::Cpu& c);
void f_mr052_0102dae0(wp::Cpu& c);
void f_mr052_0102db00(wp::Cpu& c);
void f_mr052_01032800(wp::Cpu& c);
void f_mr052_010329d0(wp::Cpu& c);
void f_mr052_01032a50(wp::Cpu& c);
void f_mr052_01032a70(wp::Cpu& c);
void f_mr052_01032ac0(wp::Cpu& c);
void f_mr052_01032ff0(wp::Cpu& c);
void f_mr052_01039950(wp::Cpu& c);
void f_mr052_0103ba10(wp::Cpu& c);
void f_mr052_0104c610(wp::Cpu& c);
void f_mr052_0104d650(wp::Cpu& c);
void f_mr052_0104e250(wp::Cpu& c);
void f_mr052_01064590(wp::Cpu& c);
void f_mr052_01078ef0(wp::Cpu& c);
void f_mr052_0107b340(wp::Cpu& c);
void f_mr052_0107c240(wp::Cpu& c);
void f_mr052_0107cd30(wp::Cpu& c);
void f_mr052_0107e9b0(wp::Cpu& c);
void f_mr052_0107f570(wp::Cpu& c);
void f_mr052_0107f7e0(wp::Cpu& c);
void f_mr052_0107f850(wp::Cpu& c);
void f_mr052_0107f8c0(wp::Cpu& c);
void f_mr052_0107f8e0(wp::Cpu& c);
void f_mr052_0107f950(wp::Cpu& c);
void f_mr052_0107fa10(wp::Cpu& c);
void f_mr052_0107ff50(wp::Cpu& c);
void f_mr052_010802f0(wp::Cpu& c);
void f_mr052_01080310(wp::Cpu& c);
void f_mr052_01080620(wp::Cpu& c);
void f_mr052_01080630(wp::Cpu& c);
void f_mr052_01080640(wp::Cpu& c);
void f_mr052_01080a40(wp::Cpu& c);
void f_mr052_01080b10(wp::Cpu& c);
void f_mr052_01080d20(wp::Cpu& c);
void f_mr052_01080e30(wp::Cpu& c);
void f_mr052_01080eb0(wp::Cpu& c);
void f_mr052_01080f10(wp::Cpu& c);
void f_mr052_01081050(wp::Cpu& c);
void f_mr052_01081060(wp::Cpu& c);
void f_mr052_01081070(wp::Cpu& c);
void f_mr052_01081080(wp::Cpu& c);
void f_mr052_01081140(wp::Cpu& c);
void f_mr052_010813c0(wp::Cpu& c);
void f_mr052_010813f0(wp::Cpu& c);
void f_mr052_01081410(wp::Cpu& c);
void f_mr052_01081470(wp::Cpu& c);
void f_mr052_010816f0(wp::Cpu& c);
void f_mr052_01081710(wp::Cpu& c);
void f_mr052_01081730(wp::Cpu& c);
void f_mr052_010817a0(wp::Cpu& c);
void f_mr052_01081820(wp::Cpu& c);
void f_mr052_01081840(wp::Cpu& c);
void f_mr052_01081860(wp::Cpu& c);
void f_mr052_01081880(wp::Cpu& c);
void f_mr052_010818c0(wp::Cpu& c);
void f_mr052_010818e0(wp::Cpu& c);
void f_mr052_01081900(wp::Cpu& c);
void f_mr052_01081920(wp::Cpu& c);
void f_mr052_01081940(wp::Cpu& c);
void f_mr052_01081960(wp::Cpu& c);
void f_mr052_010819a0(wp::Cpu& c);
void f_mr052_01081a10(wp::Cpu& c);
void f_mr052_01081a20(wp::Cpu& c);
void f_mr052_01081a30(wp::Cpu& c);
void f_mr052_01081a40(wp::Cpu& c);
void f_mr052_01081a50(wp::Cpu& c);
void f_mr052_01081a60(wp::Cpu& c);
void f_mr052_01081a70(wp::Cpu& c);
void f_mr052_01081a80(wp::Cpu& c);
void f_mr052_01081a90(wp::Cpu& c);
void f_mr052_01081aa0(wp::Cpu& c);
void f_mr052_01081ab0(wp::Cpu& c);
void f_mr052_01081ac0(wp::Cpu& c);
void f_mr052_01081b20(wp::Cpu& c);
void f_mr052_01081b80(wp::Cpu& c);
void f_mr052_01081f30(wp::Cpu& c);
void f_mr052_01082180(wp::Cpu& c);
void f_mr052_01082610(wp::Cpu& c);
void f_mr052_01082620(wp::Cpu& c);
void f_mr052_01082630(wp::Cpu& c);
void f_mr052_010827e0(wp::Cpu& c);
void f_mr052_01082a70(wp::Cpu& c);
void f_mr052_01082b30(wp::Cpu& c);
void f_mr052_01082b40(wp::Cpu& c);
void f_mr052_01082b50(wp::Cpu& c);
void f_mr052_01083170(wp::Cpu& c);
void f_mr052_010833b0(wp::Cpu& c);
void f_mr052_01083600(wp::Cpu& c);
void f_mr052_01083940(wp::Cpu& c);
void f_mr052_01083990(wp::Cpu& c);
void f_mr052_010839a0(wp::Cpu& c);
void f_mr052_01083a50(wp::Cpu& c);
void f_mr052_01083af0(wp::Cpu& c);
void f_mr052_01083b00(wp::Cpu& c);
void f_mr052_01083b10(wp::Cpu& c);
void f_mr052_01083b20(wp::Cpu& c);
void f_mr052_01083b30(wp::Cpu& c);
void f_mr052_01083ba0(wp::Cpu& c);
void f_mr052_01083c20(wp::Cpu& c);
void f_mr052_01083c30(wp::Cpu& c);
void f_mr052_01083cb0(wp::Cpu& c);
void f_mr052_01083cc0(wp::Cpu& c);
void f_mr052_01083cd0(wp::Cpu& c);
void f_mr052_01083ce0(wp::Cpu& c);
void f_mr052_01083cf0(wp::Cpu& c);
void f_mr052_01083d00(wp::Cpu& c);
void f_mr052_01083d10(wp::Cpu& c);
void f_mr052_01083d20(wp::Cpu& c);
void f_mr052_01083d90(wp::Cpu& c);
void f_mr052_01083eb0(wp::Cpu& c);
void f_mr052_01084050(wp::Cpu& c);
void f_mr052_01084100(wp::Cpu& c);
void f_mr052_010841a0(wp::Cpu& c);

void f_mr052_0107f570(wp::Cpu& c) {
    WP_ENTER(0x107f570u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f5acu: goto R_0107f5ac;
        case 0x107f5c0u: goto R_0107f5c0;
        case 0x107f648u: goto R_0107f648;
        case 0x107f664u: goto R_0107f664;
        case 0x107f680u: goto R_0107f680;
        case 0x107f68cu: goto R_0107f68c;
        case 0x107f698u: goto R_0107f698;
        case 0x107f6a0u: goto R_0107f6a0;
        case 0x107f6c8u: goto R_0107f6c8;
        case 0x107f738u: goto R_0107f738;
        case 0x107f768u: goto R_0107f768;
        case 0x107f774u: goto R_0107f774;
        case 0x107f780u: goto R_0107f780;
        case 0x107f78cu: goto R_0107f78c;
        case 0x107f798u: goto R_0107f798;
        case 0x107f7acu: goto R_0107f7ac;
        case 0x107f7b8u: goto R_0107f7b8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr052_bases[5] + 0x299e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr052_bases[4] + 0x25f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x25f0u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[4] | c.r[4];
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr052_bases[5] + 0x299e8u) & 0xFFFFu);
    c.lr = 0x107f5acu;
    f_mr052_01032ac0(c);
R_0107f5ac:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[29] + 0x2bcu;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x107f5c0u;
    f_80063370(c);
R_0107f5c0:
    c.r[3] = ((((g_mr052_bases[5] + 0x29e00u) + 0x8000u) >> 16) << 16);
    c.r[6] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29e00u) & 0xFFFFu);
    ea = c.r[31] + 0x30u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[10] = c.r[3] + 0x14u;
    c.r[9] = c.r[3] + 0x28u;
    c.r[8] = c.r[3] + 0x48u;
    c.r[7] = c.r[3] + 0xa4u;
    c.r[5] = 0xffffffffu;
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[29] + 0x54u;
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[29] + 0x54u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[29] + 0x2bcu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[29] + 0x2d0u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[29] + 0x2d4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x2d8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x2dcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[29] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[29] + 0x2e4u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x2f0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x2f4u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[29] + 0x2f8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x2fcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x300u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x304u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x308u;
    wp::wr32(ea, c.r[6]);
    c.lr = 0x107f648u;
    f_80053d20(c);
R_0107f648:
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[29] + 0x54u;
    ea = c.r[1] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = c.r[1] + 0x2cu;
    ea = c.r[1] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x107f664u;
    f_80053df0(c);
R_0107f664:
    ea = c.r[29] + 0x2e0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x20u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x28u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x107f680u;
    f_mr052_01029ac0(c);
R_0107f680:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1000u;
    c.lr = 0x107f68cu;
    f_80052170(c);
R_0107f68c:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0xcu;
    c.lr = 0x107f698u;
    f_80052190(c);
R_0107f698:
    c.r[3] = 0x18u;
    c.lr = 0x107f6a0u;
    f_801c79a4(c);
R_0107f6a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107f70c;
    c.r[5] = ((((g_mr052_bases[5] + 0x2a5a8u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x580cu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr052_bases[5] + 0x2a5a8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x580cu) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107f6c8u;
    f_8003b350(c);
R_0107f6c8:
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mr052_bases[5] + 0x2a5bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x2a5bcu) & 0xFFFFu);
    c.r[4] = ((((g_mr052_bases[5] + 0x29de8u) + 0x8000u) >> 16) << 16);
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29de8u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x14u;
    wp::wr32(ea, c.r[0]);
L_0107f70c:
    ea = c.r[29] + 0x2d4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f738;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x2d4u;
    wp::wr32(ea, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0107f738;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f738u;
    wp::call(c, c.ctr);
L_0107f738:
R_0107f738:
    ea = c.r[30] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = c.r[1] + 0x14u;
    ea = c.r[30] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x170u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[29] + 0x2d4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f768u;
    wp::call(c, c.ctr);
R_0107f768:
    ea = c.r[29] + 0x2d4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107f774u;
    f_mr052_01029410(c);
R_0107f774:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x107f780u;
    f_mr052_01029540(c);
R_0107f780:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x107f78cu;
    f_mr052_01029560(c);
R_0107f78c:
    ea = c.r[31] + 0x6cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107f798u;
    f_mr052_01029520(c);
R_0107f798:
    ea = c.r[29] + 0x2ecu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] + 0x54u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x107f7acu;
    f_80054e60(c);
R_0107f7ac:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x107f7b8u;
    f_80056040(c);
R_0107f7b8:
    ea = c.r[1] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x48u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr052_0107f7e0(wp::Cpu& c) {
    WP_ENTER(0x107f7e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f818u: goto R_0107f818;
        case 0x107f828u: goto R_0107f828;
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
    if (wp::cr_get(c, 2)) goto L_0107f828;
    c.r[4] = ((((g_mr052_bases[5] + 0x2a5bcu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a5bcu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107f818u;
    f_8003b480(c);
R_0107f818:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f828;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f828u;
    f_801c7a8c(c);
L_0107f828:
R_0107f828:
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

void f_mr052_0107f850(wp::Cpu& c) {
    WP_ENTER(0x107f850u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f890u: goto R_0107f890;
        case 0x107f8a0u: goto R_0107f8a0;
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
    if (wp::cr_get(c, 2)) goto L_0107f8a0;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0107f890;
    c.r[4] = ((((g_mr052_bases[5] + 0x2a5bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a5bcu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107f890u;
    f_8003b480(c);
L_0107f890:
R_0107f890:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f8a0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f8a0u;
    f_801c7a8c(c);
L_0107f8a0:
R_0107f8a0:
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

void f_mr052_0107f8c0(wp::Cpu& c) {
    WP_ENTER(0x107f8c0u);
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

void f_mr052_0107f8e0(wp::Cpu& c) {
    WP_ENTER(0x107f8e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f924u: goto R_0107f924;
        case 0x107f934u: goto R_0107f934;
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
    if (wp::cr_get(c, 2)) goto L_0107f934;
    if (wp::cr_get(c, 2)) goto L_0107f924;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0107f924;
    c.r[4] = ((((g_mr052_bases[5] + 0x2a5bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a5bcu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107f924u;
    f_8003b480(c);
L_0107f924:
R_0107f924:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f934;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f934u;
    f_801c7a8c(c);
L_0107f934:
R_0107f934:
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

void f_mr052_0107f950(wp::Cpu& c) {
    WP_ENTER(0x107f950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f9a0u: goto R_0107f9a0;
        case 0x107f9c8u: goto R_0107f9c8;
        case 0x107f9d4u: goto R_0107f9d4;
        case 0x107f9e0u: goto R_0107f9e0;
        case 0x107f9f0u: goto R_0107f9f0;
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
    if (wp::cr_get(c, 2)) goto L_0107f9f0;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0107f9a0;
    if (wp::cr_get(c, 2)) goto L_0107f9a0;
    if (wp::cr_get(c, 2)) goto L_0107f9a0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f9a0;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107f9a0u;
    f_801c7a8c(c);
L_0107f9a0:
R_0107f9a0:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107f9c8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107f9c8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107f9c8u;
    wp::call(c, c.ctr);
L_0107f9c8:
R_0107f9c8:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x107f9d4u;
    f_80063bb0(c);
R_0107f9d4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x107f9e0u;
    f_mr052_01032ff0(c);
R_0107f9e0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107f9f0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107f9f0u;
    f_801c7a8c(c);
L_0107f9f0:
R_0107f9f0:
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

void f_mr052_0107fa10(wp::Cpu& c) {
    WP_ENTER(0x107fa10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fa24u: goto R_0107fa24;
        case 0x107fa44u: goto R_0107fa44;
        case 0x107fadcu: goto R_0107fadc;
        case 0x107fb24u: goto R_0107fb24;
        case 0x107fb80u: goto R_0107fb80;
        case 0x107fc14u: goto R_0107fc14;
        case 0x107fc5cu: goto R_0107fc5c;
        case 0x107fcb8u: goto R_0107fcb8;
        case 0x107fcfcu: goto R_0107fcfc;
        case 0x107fd34u: goto R_0107fd34;
        case 0x107fdd0u: goto R_0107fdd0;
        case 0x107fe14u: goto R_0107fe14;
        case 0x107fe74u: goto R_0107fe74;
        case 0x107feb8u: goto R_0107feb8;
        case 0x107ff14u: goto R_0107ff14;
        case 0x107ff30u: goto R_0107ff30;
        case 0x107ff38u: goto R_0107ff38;
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
    c.lr = 0x107fa24u;
    f_801c83ac(c);
R_0107fa24:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x107fa44u;
    wp::call(c, c.ctr);
R_0107fa44:
    c.r[4] = ((((g_mr052_bases[5] + 0x29a10u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29a10u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fa8c;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fa8c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fa8c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fb80;
L_0107fa8c:
    c.r[3] = ((((g_mr052_bases[5] + 0x29a10u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29a10u) & 0xFFFFu);
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
    c.lr = 0x107fadcu;
    wp::call(c, c.ctr);
R_0107fadc:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fb24;
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
    c.lr = 0x107fb24u;
    wp::call(c, c.ctr);
L_0107fb24:
R_0107fb24:
    c.r[3] = ((((g_mr052_bases[5] + 0x29a10u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29a10u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fb80;
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
    c.lr = 0x107fb80u;
    wp::call(c, c.ctr);
L_0107fb80:
R_0107fb80:
    c.r[4] = ((((g_mr052_bases[5] + 0x29a70u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29a70u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fbc0;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fbc0;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fbc0;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fd34;
L_0107fbc0:
    c.r[3] = ((((g_mr052_bases[5] + 0x29a70u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29a70u) & 0xFFFFu);
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
    c.lr = 0x107fc14u;
    wp::call(c, c.ctr);
R_0107fc14:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fc5c;
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
    c.lr = 0x107fc5cu;
    wp::call(c, c.ctr);
L_0107fc5c:
R_0107fc5c:
    c.r[3] = ((((g_mr052_bases[5] + 0x29a70u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29a70u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fcb8;
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
    c.lr = 0x107fcb8u;
    wp::call(c, c.ctr);
L_0107fcb8:
R_0107fcb8:
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
    c.lr = 0x107fcfcu;
    wp::call(c, c.ctr);
R_0107fcfc:
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
    c.lr = 0x107fd34u;
    wp::call(c, c.ctr);
L_0107fd34:
R_0107fd34:
    c.r[4] = ((((g_mr052_bases[5] + 0x29ad0u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29ad0u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fd7c;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fd7c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107fd7c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107feb8;
L_0107fd7c:
    c.r[4] = ((((g_mr052_bases[5] + 0x29ad0u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29ad0u) & 0xFFFFu);
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
    c.lr = 0x107fdd0u;
    wp::call(c, c.ctr);
R_0107fdd0:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fe14;
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
    c.lr = 0x107fe14u;
    wp::call(c, c.ctr);
L_0107fe14:
R_0107fe14:
    c.r[3] = ((((g_mr052_bases[5] + 0x29ad0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29ad0u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107fe74;
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
    c.lr = 0x107fe74u;
    wp::call(c, c.ctr);
L_0107fe74:
R_0107fe74:
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
    c.lr = 0x107feb8u;
    wp::call(c, c.ctr);
L_0107feb8:
R_0107feb8:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107ff14;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107ff14;
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
    c.lr = 0x107ff14u;
    wp::call(c, c.ctr);
L_0107ff14:
R_0107ff14:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ff30u;
    wp::call(c, c.ctr);
R_0107ff30:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x107ff38u;
    f_801c83f8(c);
R_0107ff38:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mr052_0107ff50(wp::Cpu& c) {
    WP_ENTER(0x107ff50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108000cu: goto R_0108000c;
        case 0x1080010u: goto R_01080010;
        case 0x1080070u: goto R_01080070;
        case 0x1080074u: goto R_01080074;
        case 0x1080134u: goto R_01080134;
        case 0x1080138u: goto R_01080138;
        case 0x1080140u: goto R_01080140;
        case 0x1080168u: goto R_01080168;
        case 0x108016cu: goto R_0108016c;
        case 0x10802c4u: goto R_010802c4;
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
    if (!wp::cr_get(c, 0)) goto L_0107ffdc;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0107ffcc;
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
L_0107ffcc:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_010802c4;
L_0107ffdc:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01080010;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x29584u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29584u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108000cu;
    f_801cee24(c);
R_0108000c:
    c.lr = 0x1080010u;
    f_801d3940(c);
L_01080010:
R_01080010:
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
    if (!wp::cr_get(c, 1)) goto L_01080074;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x29584u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29584u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080070u;
    f_801cee24(c);
R_01080070:
    c.lr = 0x1080074u;
    f_801d3940(c);
L_01080074:
R_01080074:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010800c4;
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
    if (!wp::cr_get(c, 0)) goto L_010800b8;
    c.r[3] = c.r[1] + 0x10u;
L_010800b8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01080108;
L_010800c4:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080100;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010800f4;
    c.r[3] = c.r[1] + 0x10u;
L_010800f4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01080108;
L_01080100:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_01080108:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01080138;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x29584u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29584u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080134u;
    f_801cee24(c);
R_01080134:
    c.lr = 0x1080138u;
    f_801d3940(c);
L_01080138:
R_01080138:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x1080140u;
    f_801c79a4(c);
R_01080140:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0108016c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a650u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a650u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080168u;
    f_801cee24(c);
R_01080168:
    c.lr = 0x108016cu;
    f_801d3940(c);
L_0108016c:
R_0108016c:
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
    if (wp::cr_get(c, 2)) goto L_010801cc;
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
L_010801cc:
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
    if (!wp::cr_get(c, 1)) goto L_01080278;
    c.r[0] = c.r[0] | 0x0u;
L_01080218:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_0108025c;
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
L_0108025c:
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
    goto L_01080218;
    }
L_01080278:
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
    if (wp::cr_get(c, 2)) goto L_010802c4;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010802c4;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10802c4u;
    f_801c7a8c(c);
L_010802c4:
R_010802c4:
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

void f_mr052_010802f0(wp::Cpu& c) {
    WP_ENTER(0x10802f0u);
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

void f_mr052_01080310(wp::Cpu& c) {
    WP_ENTER(0x1080310u);
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
    if (wp::cr_get(c, 2)) goto L_01080604;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_01080604;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_010805a4;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_010803b4;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_010803a8;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010803a8;
    c.r[9] = 0x0u;
L_010803a8:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010803b4;
    c.r[7] = 0x1u;
L_010803b4:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010805a4;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010805a4;
L_010803d8:
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
    goto L_010803d8;
    }
L_010805a4:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01080604;
L_010805c0:
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
    goto L_010805c0;
    }
L_01080604:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr052_01080620(wp::Cpu& c) {
    WP_ENTER(0x1080620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr052_01080630(wp::Cpu& c) {
    WP_ENTER(0x1080630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mr052_01080640(wp::Cpu& c) {
    WP_ENTER(0x1080640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080740u: goto R_01080740;
        case 0x1080770u: goto R_01080770;
        case 0x108078cu: goto R_0108078c;
        case 0x10807a8u: goto R_010807a8;
        case 0x10807e8u: goto R_010807e8;
        case 0x10807f0u: goto R_010807f0;
        case 0x10807fcu: goto R_010807fc;
        case 0x1080800u: goto R_01080800;
        case 0x108087cu: goto R_0108087c;
        case 0x108088cu: goto R_0108088c;
        case 0x10808a8u: goto R_010808a8;
        case 0x10808bcu: goto R_010808bc;
        case 0x1080904u: goto R_01080904;
        case 0x1080938u: goto R_01080938;
        case 0x108094cu: goto R_0108094c;
        case 0x108095cu: goto R_0108095c;
        case 0x1080970u: goto R_01080970;
        case 0x1080990u: goto R_01080990;
        case 0x10809c0u: goto R_010809c0;
        case 0x10809f0u: goto R_010809f0;
        case 0x1080a10u: goto R_01080a10;
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
    c.r[31] = ((((g_mr052_bases[4] + 0x25f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x25f0u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010806d4;
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
    if (!wp::cr_get(c, 1)) goto L_010806c8;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010806c8:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_01080724;
L_010806d4:
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
    if (!wp::cr_get(c, 0)) goto L_01080724;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01080724:
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
    c.lr = 0x1080740u;
    f_mr052_01029ac0(c);
R_01080740:
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
    if (!wp::cr_get(c, 1)) goto L_010809c4;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080808;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1080770u;
    f_80053d40(c);
R_01080770:
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
    c.lr = 0x108078cu;
    f_8006b460(c);
R_0108078c:
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
    c.lr = 0x10807a8u;
    f_8006b460(c);
R_010807a8:
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
    c.lr = 0x10807e8u;
    wp::call(c, c.ctr);
R_010807e8:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10807f0u;
    f_80071fe0(c);
R_010807f0:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10807fcu;
    f_80071fe0(c);
R_010807fc:
    c.lr = 0x1080800u;
    f_8006b590(c);
R_01080800:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_01080808:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080990;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01080990;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080834;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_01080834:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01080868;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01080874;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010808ac;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_01080950;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01080974;
    goto L_01080990;
L_01080868:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_01080990;
L_01080874:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x108087cu;
    f_80055bb0(c);
R_0108087c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080990;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x108088cu;
    f_80055d80(c);
R_0108088c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01080990;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10808a8u;
    wp::call(c, c.ctr);
R_010808a8:
    goto L_01080990;
L_010808ac:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010808bc;
    c.lr = 0x10808bcu;
    f_80019fa0(c);
L_010808bc:
R_010808bc:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080910;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080910;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_010808e8;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_010808ec;
L_010808e8:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_010808ec:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x1080904u;
    f_80055290(c);
R_01080904:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_01080910:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080938;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080938u;
    wp::call(c, c.ctr);
L_01080938:
R_01080938:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108094cu;
    wp::call(c, c.ctr);
R_0108094c:
    goto L_01080990;
L_01080950:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108095cu;
    f_80019f20(c);
R_0108095c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080970u;
    wp::call(c, c.ctr);
R_01080970:
    goto L_01080990;
L_01080974:
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
    c.lr = 0x1080990u;
    wp::call(c, c.ctr);
L_01080990:
R_01080990:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010809a4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_010809a4:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10809c0u;
    f_mr052_01029560(c);
R_010809c0:
    goto L_01080a14;
L_010809c4:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01080a14;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080a14;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x10809f0u;
    f_80055290(c);
R_010809f0:
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
    c.lr = 0x1080a10u;
    wp::call(c, c.ctr);
R_01080a10:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_01080a14:
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

void f_mr052_01080a40(wp::Cpu& c) {
    WP_ENTER(0x1080a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080a64u: goto R_01080a64;
        case 0x1080a8cu: goto R_01080a8c;
        case 0x1080a9cu: goto R_01080a9c;
        case 0x1080ab4u: goto R_01080ab4;
        case 0x1080ac8u: goto R_01080ac8;
        case 0x1080ae4u: goto R_01080ae4;
        case 0x1080aecu: goto R_01080aec;
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
    c.lr = 0x1080a64u;
    f_8001b910(c);
R_01080a64:
    c.r[3] = ((((g_mr052_bases[6] + 0x4e8cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x29ee0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[6] + 0x4e8cu) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x29ee0u) & 0xFFFFu);
    c.r[0] = c.r[4] + 0x14u;
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x1u;
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080a8cu;
    f_8001c510(c);
R_01080a8c:
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080a9cu;
    f_8001c520(c);
R_01080a9c:
    c.r[31] = ((((g_mr052_bases[4] + 0x2624u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x2624u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x1080ab4u;
    f_8001e440(c);
R_01080ab4:
    ea = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x2624u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x1080ac8u;
    f_8001eb90(c);
R_01080ac8:
    c.r[3] = ((((g_mr052_bases[5] + 0x29b30u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[4] + 0x25f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29b30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr052_bases[4] + 0x25f0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.lr = 0x1080ae4u;
    f_8001fb40(c);
R_01080ae4:
    c.r[3] = 0x1000u;
    c.lr = 0x1080aecu;
    f_8004a120(c);
R_01080aec:
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

void f_mr052_01080b10(wp::Cpu& c) {
    WP_ENTER(0x1080b10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080b24u: goto R_01080b24;
        case 0x1080b4cu: goto R_01080b4c;
        case 0x1080b88u: goto R_01080b88;
        case 0x1080bd0u: goto R_01080bd0;
        case 0x1080becu: goto R_01080bec;
        case 0x1080c50u: goto R_01080c50;
        case 0x1080c6cu: goto R_01080c6c;
        case 0x1080c9cu: goto R_01080c9c;
        case 0x1080cb8u: goto R_01080cb8;
        case 0x1080cccu: goto R_01080ccc;
        case 0x1080cecu: goto R_01080cec;
        case 0x1080d04u: goto R_01080d04;
        case 0x1080d10u: goto R_01080d10;
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
    c.lr = 0x1080b24u;
    f_801c83b4(c);
R_01080b24:
    c.r[28] = ((((g_mr052_bases[5] + 0x294f0u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[5] | c.r[5];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr052_bases[5] + 0x294f0u) & 0xFFFFu);
    c.r[26] = c.r[4] | c.r[4];
    c.r[7] = c.r[6] | c.r[6];
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] + 0x644u;
    c.r[4] = c.r[28] + 0x658u;
    c.lr = 0x1080b4cu;
    f_8003f8f0(c);
R_01080b4c:
    c.r[4] = ((((g_mr052_bases[5] + 0x2a3b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x10000u;
    c.r[29] = 0x0u;
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a3b0u) & 0xFFFFu);
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
    c.lr = 0x1080b88u;
    f_80069af0(c);
R_01080b88:
    c.r[3] = ((((g_mr052_bases[5] + 0x29ba0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x29ba0u) & 0xFFFFu);
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
    c.lr = 0x1080bd0u;
    wp::call(c, c.ctr);
R_01080bd0:
    ea = c.r[31] + 0x2d8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] + 0x684u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080becu;
    wp::call(c, c.ctr);
R_01080bec:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x2e6u;
    c.r[4] = wp::rd16(ea);
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    ea = c.r[31] + 0x2dcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[29] = 0xffffffffu;
    if (!wp::cr_get(c, 2)) goto L_01080c0c;
    c.r[29] = 0x0u;
L_01080c0c:
    c.r[0] = 0x1u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080c20;
    c.r[29] = 0x1u;
L_01080c20:
    c.r[0] = 0x2u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080c34;
    c.r[29] = 0x2u;
L_01080c34:
    c.r[0] = 0x3u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080c48;
    c.r[29] = 0x3u;
L_01080c48:
    c.r[3] = 0x350u;
    c.lr = 0x1080c50u;
    f_801c79a4(c);
R_01080c50:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080c6c;
    c.r[0] = c.r[27] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x1080c6cu;
    f_mr052_01039950(c);
L_01080c6c:
R_01080c6c:
    ea = c.r[31] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080c9c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x2ecu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080c9c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080c9cu;
    wp::call(c, c.ctr);
L_01080c9c:
R_01080c9c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x6a0u;
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x2ecu;
    c.r[28] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080cb8u;
    wp::call(c, c.ctr);
R_01080cb8:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = 0x1u;
    c.lr = 0x1080cccu;
    f_80043490(c);
R_01080ccc:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080cec;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x314u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080cecu;
    wp::call(c, c.ctr);
L_01080cec:
R_01080cec:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080d04u;
    wp::call(c, c.ctr);
R_01080d04:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1080d10u;
    f_801c8400(c);
R_01080d10:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr052_01080d20(wp::Cpu& c) {
    WP_ENTER(0x1080d20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080d6cu: goto R_01080d6c;
        case 0x1080d78u: goto R_01080d78;
        case 0x1080db0u: goto R_01080db0;
        case 0x1080decu: goto R_01080dec;
        case 0x1080df8u: goto R_01080df8;
        case 0x1080e08u: goto R_01080e08;
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
    if (wp::cr_get(c, 2)) goto L_01080e08;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080d6c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080d6c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080d6cu;
    wp::call(c, c.ctr);
L_01080d6c:
R_01080d6c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1080d78u;
    f_80069c40(c);
R_01080d78:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080df8;
    c.r[3] = ((((g_mr052_bases[5] + 0x2a3b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x2a3b0u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01080db0;
L_01080d90:
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
    c.lr = 0x1080db0u;
    wp::call(c, c.ctr);
L_01080db0:
R_01080db0:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01080d90;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080dec;
    if (wp::cr_get(c, 2)) goto L_01080dec;
    if (wp::cr_get(c, 2)) goto L_01080dec;
    if (wp::cr_get(c, 2)) goto L_01080dec;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080dec;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080decu;
    f_801c7a8c(c);
L_01080dec:
R_01080dec:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1080df8u;
    f_8003fb90(c);
L_01080df8:
R_01080df8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01080e08;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1080e08u;
    f_801c7a8c(c);
L_01080e08:
R_01080e08:
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

void f_mr052_01080e30(wp::Cpu& c) {
    WP_ENTER(0x1080e30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080e5cu: goto R_01080e5c;
        case 0x1080e68u: goto R_01080e68;
        case 0x1080e74u: goto R_01080e74;
        case 0x1080e80u: goto R_01080e80;
        case 0x1080e98u: goto R_01080e98;
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
    if (wp::cr_get(c, 2)) goto L_01080e6c;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1080e5cu;
    f_80069e30(c);
R_01080e5c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1080e68u;
    f_800403b0(c);
R_01080e68:
    goto L_01080e80;
L_01080e6c:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1080e74u;
    f_80069e40(c);
R_01080e74:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1080e80u;
    f_800403a0(c);
L_01080e80:
R_01080e80:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080e98u;
    wp::call(c, c.ctr);
R_01080e98:
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

void f_mr052_01080eb0(wp::Cpu& c) {
    WP_ENTER(0x1080eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080ed0u: goto R_01080ed0;
        case 0x1080ef0u: goto R_01080ef0;
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
    c.lr = 0x1080ed0u;
    f_800402c0(c);
R_01080ed0:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080ef0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080ef0u;
    wp::call(c, c.ctr);
L_01080ef0:
R_01080ef0:
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

void f_mr052_01080f10(wp::Cpu& c) {
    WP_ENTER(0x1080f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080f60u: goto R_01080f60;
        case 0x1080f7cu: goto R_01080f7c;
        case 0x1080fbcu: goto R_01080fbc;
        case 0x1080fd4u: goto R_01080fd4;
        case 0x1080fdcu: goto R_01080fdc;
        case 0x1080ff4u: goto R_01080ff4;
        case 0x1080ffcu: goto R_01080ffc;
        case 0x1081028u: goto R_01081028;
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
    c.r[31] = ((((g_mr052_bases[4] + 0x25f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x25f0u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01081028;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080f64;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080f60u;
    f_80071fe0(c);
R_01080f60:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_01080f64:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080f7cu;
    wp::call(c, c.ctr);
R_01080f7c:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080f94;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_01080f9c;
L_01080f94:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_01080f9c:
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
    c.lr = 0x1080fbcu;
    wp::call(c, c.ctr);
R_01080fbc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080fd4u;
    wp::call(c, c.ctr);
R_01080fd4:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080fdcu;
    f_80043060(c);
R_01080fdc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080ff4u;
    wp::call(c, c.ctr);
R_01080ff4:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080ffcu;
    f_80043120(c);
R_01080ffc:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081028;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081028;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081028u;
    wp::call(c, c.ctr);
L_01081028:
R_01081028:
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

void f_mr052_01081050(wp::Cpu& c) {
    WP_ENTER(0x1081050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mr052_01081060(wp::Cpu& c) {
    WP_ENTER(0x1081060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr052_01081070(wp::Cpu& c) {
    WP_ENTER(0x1081070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr052_01081080(wp::Cpu& c) {
    WP_ENTER(0x1081080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10810a8u: goto R_010810a8;
        case 0x10810b0u: goto R_010810b0;
        case 0x10810c4u: goto R_010810c4;
        case 0x10810d4u: goto R_010810d4;
        case 0x10810e8u: goto R_010810e8;
        case 0x1081108u: goto R_01081108;
        case 0x1081110u: goto R_01081110;
        case 0x1081124u: goto R_01081124;
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
    c.lr = 0x10810a8u;
    wp::call(c, c.ctr);
R_010810a8:
    goto L_010810b0;
L_010810ac:
    c.lr = 0x10810b0u;
    f_8006a940(c);
L_010810b0:
R_010810b0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10810c4u;
    wp::call(c, c.ctr);
R_010810c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010810ac;
    }
    goto L_010810d4;
L_010810d0:
    c.lr = 0x10810d4u;
    f_8006a940(c);
L_010810d4:
R_010810d4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10810e8u;
    wp::call(c, c.ctr);
R_010810e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010810d0;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081108u;
    wp::call(c, c.ctr);
R_01081108:
    goto L_01081110;
L_0108110c:
    c.lr = 0x1081110u;
    f_8006a940(c);
L_01081110:
R_01081110:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081124u;
    wp::call(c, c.ctr);
R_01081124:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108110c;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr052_01081140(wp::Cpu& c) {
    WP_ENTER(0x1081140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081154u: goto R_01081154;
        case 0x1081174u: goto R_01081174;
        case 0x10811c4u: goto R_010811c4;
        case 0x10811e8u: goto R_010811e8;
        case 0x10811f4u: goto R_010811f4;
        case 0x1081208u: goto R_01081208;
        case 0x1081228u: goto R_01081228;
        case 0x1081238u: goto R_01081238;
        case 0x1081244u: goto R_01081244;
        case 0x1081254u: goto R_01081254;
        case 0x1081258u: goto R_01081258;
        case 0x1081260u: goto R_01081260;
        case 0x108128cu: goto R_0108128c;
        case 0x1081298u: goto R_01081298;
        case 0x10812a4u: goto R_010812a4;
        case 0x10812b4u: goto R_010812b4;
        case 0x10812b8u: goto R_010812b8;
        case 0x10812c0u: goto R_010812c0;
        case 0x10812f0u: goto R_010812f0;
        case 0x1081318u: goto R_01081318;
        case 0x1081324u: goto R_01081324;
        case 0x1081334u: goto R_01081334;
        case 0x1081338u: goto R_01081338;
        case 0x1081340u: goto R_01081340;
        case 0x108137cu: goto R_0108137c;
        case 0x1081398u: goto R_01081398;
        case 0x10813a8u: goto R_010813a8;
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
    c.lr = 0x1081154u;
    f_801c83b0(c);
R_01081154:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081188;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081174u;
    wp::call(c, c.ctr);
R_01081174:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010813a0;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010813a0;
L_01081188:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010813a0;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010813a0;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010813a0;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10811c4u;
    wp::call(c, c.ctr);
R_010811c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010811e8;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10811e8u;
    wp::call(c, c.ctr);
L_010811e8:
R_010811e8:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x10811f4u;
    f_8000e2a0(c);
R_010811f4:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_01081200:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1081208u;
    f_8000fc20(c);
R_01081208:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108126c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081230;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1081228u;
    f_8000fc40(c);
R_01081228:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108126c;
L_01081230:
    c.r[26] = 0x0u;
    c.lr = 0x1081238u;
    f_8000dd70(c);
R_01081238:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1081244u;
    f_8000fc20(c);
R_01081244:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108126c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1081254u;
    f_8000fc20(c);
R_01081254:
    c.lr = 0x1081258u;
    f_800699d0(c);
R_01081258:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1081260u;
    f_80066cd0(c);
R_01081260:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108126c;
    c.r[27] = 0x1u;
L_0108126c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01081200;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010812d8;
    c.r[25] = 0x0u;
L_01081284:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108128cu;
    f_8000fc40(c);
R_0108128c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010812cc;
    c.lr = 0x1081298u;
    f_8000dd70(c);
R_01081298:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10812a4u;
    f_8000fc20(c);
R_010812a4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010812cc;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10812b4u;
    f_8000fc20(c);
R_010812b4:
    c.lr = 0x10812b8u;
    f_800699d0(c);
R_010812b8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10812c0u;
    f_80066cd0(c);
R_010812c0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010812cc;
    c.r[27] = 0x1u;
L_010812cc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01081284;
    }
L_010812d8:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081358;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_010812e8:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10812f0u;
    f_8000fc40(c);
R_010812f0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010812fc;
    c.r[25] = 0x0u;
L_010812fc:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010812e8;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081358;
    c.r[25] = 0x0u;
L_01081314:
    c.lr = 0x1081318u;
    f_8000dd70(c);
R_01081318:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1081324u;
    f_8000fc20(c);
R_01081324:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108134c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1081334u;
    f_8000fc20(c);
R_01081334:
    c.lr = 0x1081338u;
    f_800699d0(c);
R_01081338:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1081340u;
    f_80066cd0(c);
R_01081340:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108134c;
    c.r[27] = 0x1u;
L_0108134c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01081314;
    }
L_01081358:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010813a0;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108137cu;
    wp::call(c, c.ctr);
R_0108137c:
    c.r[3] = ((((g_mr052_bases[4] + 0x264cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[4] + 0x2624u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[4] + 0x264cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mr052_bases[4] + 0x2624u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1081398u;
    f_80018e30(c);
R_01081398:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_010813a0:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10813a8u;
    f_801c83fc(c);
R_010813a8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr052_010813c0(wp::Cpu& c) {
    WP_ENTER(0x10813c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10813e8u: goto R_010813e8;
        case 0x10813ecu: goto R_010813ec;
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
L_010813d4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10813e8u;
    wp::call(c, c.ctr);
R_010813e8:
    c.lr = 0x10813ecu;
    f_8006a940(c);
R_010813ec:
    WP_POLL(c);
    goto L_010813d4;
}

void f_mr052_010813f0(wp::Cpu& c) {
    WP_ENTER(0x10813f0u);
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

void f_mr052_01081410(wp::Cpu& c) {
    WP_ENTER(0x1081410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081434u: goto R_01081434;
        case 0x1081458u: goto R_01081458;
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
    c.lr = 0x1081434u;
    f_80010060(c);
R_01081434:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a6c4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a6c4u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1081458u;
    wp::call(c, c.ctr);
R_01081458:
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

void f_mr052_01081470(wp::Cpu& c) {
    WP_ENTER(0x1081470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081484u: goto R_01081484;
        case 0x1081498u: goto R_01081498;
        case 0x10814acu: goto R_010814ac;
        case 0x10814d4u: goto R_010814d4;
        case 0x10814e4u: goto R_010814e4;
        case 0x1081508u: goto R_01081508;
        case 0x1081568u: goto R_01081568;
        case 0x10815e8u: goto R_010815e8;
        case 0x1081650u: goto R_01081650;
        case 0x1081688u: goto R_01081688;
        case 0x108169cu: goto R_0108169c;
        case 0x10816acu: goto R_010816ac;
        case 0x10816d0u: goto R_010816d0;
        case 0x10816d8u: goto R_010816d8;
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
    c.lr = 0x1081484u;
    f_801c83b4(c);
R_01081484:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1081498u;
    f_8006c450(c);
R_01081498:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010816a0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10814acu;
    f_8006c460(c);
R_010814ac:
    c.r[27] = ((((g_mr052_bases[5] + 0x294f8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr052_bases[5] + 0x294f8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10814d4u;
    f_801c7860(c);
R_010814d4:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10814e4u;
    f_mr052_01017c60(c);
R_010814e4:
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
    c.lr = 0x1081508u;
    f_mr052_01017e20(c);
R_01081508:
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
    if (!wp::cr_get(c, 2)) goto L_01081544;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01081548;
L_01081544:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01081548:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x1081568u;
    f_mr052_01017e20(c);
R_01081568:
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
    if (!wp::cr_get(c, 2)) goto L_010815c4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010815c8;
L_010815c4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010815c8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10815e8u;
    f_mr052_01017e20(c);
R_010815e8:
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
    if (!wp::cr_get(c, 2)) goto L_0108162c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01081630;
L_0108162c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01081630:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1081650u;
    f_mr052_01017e20(c);
R_01081650:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a6d0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a6d0u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_01081670;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01081674;
L_01081670:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01081674:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081688u;
    wp::call(c, c.ctr);
R_01081688:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010816d0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108169cu;
    f_801c7a8c(c);
R_0108169c:
    goto L_010816d0;
L_010816a0:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10816acu;
    f_8006c4e0(c);
R_010816ac:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a6d0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a6d0u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10816d0u;
    wp::call(c, c.ctr);
L_010816d0:
R_010816d0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10816d8u;
    f_801c8400(c);
R_010816d8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr052_010816f0(wp::Cpu& c) {
    WP_ENTER(0x10816f0u);
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

void f_mr052_01081710(wp::Cpu& c) {
    WP_ENTER(0x1081710u);
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

void f_mr052_01081730(wp::Cpu& c) {
    WP_ENTER(0x1081730u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108175cu: goto R_0108175c;
        case 0x1081774u: goto R_01081774;
        case 0x1081784u: goto R_01081784;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr052_bases[5] + 0x2a6acu) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr052_bases[5] + 0x2a6acu) & 0xFFFFu);
    c.lr = 0x108175cu;
    f_mr052_01078ef0(c);
R_0108175c:
    c.r[5] = ((((g_mr052_bases[5] + 0x29528u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr052_bases[5] + 0x29528u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1081774u;
    f_801d34c4(c);
R_01081774:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x1081784u;
    f_mr052_0107c240(c);
R_01081784:
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

void f_mr052_010817a0(wp::Cpu& c) {
    WP_ENTER(0x10817a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10817d8u: goto R_010817d8;
        case 0x10817fcu: goto R_010817fc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mr052_bases[5] + 0x294f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr052_bases[5] + 0x294f0u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10817d8u;
    f_801d3590(c);
R_010817d8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a6b8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a6b8u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10817fcu;
    wp::call(c, c.ctr);
R_010817fc:
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

void f_mr052_01081820(wp::Cpu& c) {
    WP_ENTER(0x1081820u);
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

void f_mr052_01081840(wp::Cpu& c) {
    WP_ENTER(0x1081840u);
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

void f_mr052_01081860(wp::Cpu& c) {
    WP_ENTER(0x1081860u);
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

void f_mr052_01081880(wp::Cpu& c) {
    WP_ENTER(0x1081880u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10818a0u: goto R_010818a0;
        case 0x10818a8u: goto R_010818a8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr052_bases[5] + 0x2a694u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mr052_bases[5] + 0x2a694u) & 0xFFFFu);
    c.lr = 0x10818a0u;
    f_mr052_01078ef0(c);
R_010818a0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10818a8u;
    f_mr052_0107b340(c);
R_010818a8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr052_010818c0(wp::Cpu& c) {
    WP_ENTER(0x10818c0u);
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

void f_mr052_010818e0(wp::Cpu& c) {
    WP_ENTER(0x10818e0u);
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

void f_mr052_01081900(wp::Cpu& c) {
    WP_ENTER(0x1081900u);
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

void f_mr052_01081920(wp::Cpu& c) {
    WP_ENTER(0x1081920u);
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

void f_mr052_01081940(wp::Cpu& c) {
    WP_ENTER(0x1081940u);
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

void f_mr052_01081960(wp::Cpu& c) {
    WP_ENTER(0x1081960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr052_bases[4] + 0x2790u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr052_bases[4] + 0x2790u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01081990;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081990;
    c.r[4] = 0x1u;
L_01081990:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr052_010819a0(wp::Cpu& c) {
    WP_ENTER(0x10819a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10819e4u: goto R_010819e4;
        case 0x10819f4u: goto R_010819f4;
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
    if (wp::cr_get(c, 2)) goto L_010819f4;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010819d8;
    c.r[3] = ((((g_mr052_bases[6] + 0x4e8cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[6] + 0x4e8cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010819d8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10819e4u;
    f_8001bfe0(c);
R_010819e4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010819f4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10819f4u;
    f_801c7a8c(c);
L_010819f4:
R_010819f4:
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

void f_mr052_01081a10(wp::Cpu& c) {
    WP_ENTER(0x1081a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr052_0107e9b0(c);
    return;
}

void f_mr052_01081a20(wp::Cpu& c) {
    WP_ENTER(0x1081a20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr052_0107cd30(c);
    return;
}

void f_mr052_01081a30(wp::Cpu& c) {
    WP_ENTER(0x1081a30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mr052_01081a40(wp::Cpu& c) {
    WP_ENTER(0x1081a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mr052_010819a0(c);
    return;
}

void f_mr052_01081a50(wp::Cpu& c) {
    WP_ENTER(0x1081a50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mr052_0107f950(c);
    return;
}

void f_mr052_01081a60(wp::Cpu& c) {
    WP_ENTER(0x1081a60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mr052_0107f950(c);
    return;
}

void f_mr052_01081a70(wp::Cpu& c) {
    WP_ENTER(0x1081a70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mr052_0107f950(c);
    return;
}

void f_mr052_01081a80(wp::Cpu& c) {
    WP_ENTER(0x1081a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr052_01080640(c);
    return;
}

void f_mr052_01081a90(wp::Cpu& c) {
    WP_ENTER(0x1081a90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr052_0107f950(c);
    return;
}

void f_mr052_01081aa0(wp::Cpu& c) {
    WP_ENTER(0x1081aa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr052_010813c0(c);
    return;
}

void f_mr052_01081ab0(wp::Cpu& c) {
    WP_ENTER(0x1081ab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr052_01080d20(c);
    return;
}

void f_mr052_01081ac0(wp::Cpu& c) {
    WP_ENTER(0x1081ac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081ae0u: goto R_01081ae0;
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
    c.lr = 0x1081ae0u;
    f_8011bd40(c);
R_01081ae0:
    c.r[3] = ((((g_mr052_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a7d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[4] + 0x2798u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a7d8u) & 0xFFFFu);
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

void f_mr052_01081b20(wp::Cpu& c) {
    WP_ENTER(0x1081b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081b4cu: goto R_01081b4c;
        case 0x1081b5cu: goto R_01081b5c;
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
    if (wp::cr_get(c, 2)) goto L_01081b5c;
    c.r[4] = 0x0u;
    c.lr = 0x1081b4cu;
    f_8011bd50(c);
R_01081b4c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01081b5c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1081b5cu;
    f_801c7a8c(c);
L_01081b5c:
R_01081b5c:
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

void f_mr052_01081b80(wp::Cpu& c) {
    WP_ENTER(0x1081b80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081bb4u: goto R_01081bb4;
        case 0x1081c8cu: goto R_01081c8c;
        case 0x1081e0cu: goto R_01081e0c;
        case 0x1081e20u: goto R_01081e20;
        case 0x1081e80u: goto R_01081e80;
        case 0x1081e8cu: goto R_01081e8c;
        case 0x1081eb4u: goto R_01081eb4;
        case 0x1081eccu: goto R_01081ecc;
        case 0x1081eecu: goto R_01081eec;
        case 0x1081ef8u: goto R_01081ef8;
        case 0x1081f20u: goto R_01081f20;
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
    c.lr = 0x1081bb4u;
    f_801c83ac(c);
R_01081bb4:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mr052_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x2798u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01081bd4;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_01081ca0;
    goto L_01081ef4;
L_01081bd4:
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
    if (wp::cr_get(c, 2)) goto L_01081c50;
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
L_01081c50:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081c8c;
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
    c.lr = 0x1081c8cu;
    f_8011eeb0(c);
L_01081c8c:
R_01081c8c:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01081ef8;
L_01081ca0:
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
    if (!wp::cr_get(c, 2)) goto L_01081ccc;
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
L_01081ccc:
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
    c.lr = 0x1081e0cu;
    f_801225e0(c);
R_01081e0c:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1081e20u;
    f_801225e0(c);
R_01081e20:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01081e60;
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
L_01081e60:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01081e78;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_01081e78:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1081e80u;
    f_8011eaa0(c);
R_01081e80:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1081e8cu;
    f_8011ea40(c);
R_01081e8c:
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
    c.lr = 0x1081eb4u;
    f_80122d80(c);
R_01081eb4:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x1081eccu;
    f_80122d80(c);
R_01081ecc:
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
    c.lr = 0x1081eecu;
    f_80121cf0(c);
R_01081eec:
    c.r[3] = 0x2u;
    goto L_01081ef8;
L_01081ef4:
    c.lr = 0x1081ef8u;
    f_8011bd90(c);
L_01081ef8:
R_01081ef8:
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
    c.lr = 0x1081f20u;
    f_801c83f8(c);
R_01081f20:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mr052_01081f30(wp::Cpu& c) {
    WP_ENTER(0x1081f30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081f4cu: goto R_01081f4c;
        case 0x10820d0u: goto R_010820d0;
        case 0x1082124u: goto R_01082124;
        case 0x1082148u: goto R_01082148;
        case 0x1082154u: goto R_01082154;
        case 0x1082164u: goto R_01082164;
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
    c.lr = 0x1081f4cu;
    f_801c83b0(c);
R_01081f4c:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_01081f68;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_01081f7c;
    goto L_01082150;
L_01081f68:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01082154;
L_01081f7c:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mr052_bases[4] + 0x27a4u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mr052_bases[4] + 0x27a8u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mr052_bases[4] + 0x27a4u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mr052_bases[4] + 0x27a8u) & 0xFFFFu);
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
    c.lr = 0x10820d0u;
    f_801225e0(c);
R_010820d0:
    ea = c.r[26] + wp::sign_extend16((g_mr052_bases[4] + 0x27a8u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_010820e0;
    goto L_010820e4;
L_010820e0:
    c.f[2] = c.f[1];
L_010820e4:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010820f4;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_010820fc;
L_010820f4:
    c.r[3] = ((((g_mr052_bases[4] + 0x27a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[4] + 0x27a8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_010820fc:
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
    c.lr = 0x1082124u;
    f_8011e9e0(c);
R_01082124:
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
    c.lr = 0x1082148u;
    f_80121cf0(c);
R_01082148:
    c.r[3] = 0x2u;
    goto L_01082154;
L_01082150:
    c.lr = 0x1082154u;
    f_8011bec0(c);
L_01082154:
R_01082154:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1082164u;
    f_801c83fc(c);
R_01082164:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr052_01082180(wp::Cpu& c) {
    WP_ENTER(0x1082180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082194u: goto R_01082194;
        case 0x10821c4u: goto R_010821c4;
        case 0x10822dcu: goto R_010822dc;
        case 0x1082364u: goto R_01082364;
        case 0x1082370u: goto R_01082370;
        case 0x108237cu: goto R_0108237c;
        case 0x1082494u: goto R_01082494;
        case 0x10825dcu: goto R_010825dc;
        case 0x10825f8u: goto R_010825f8;
        case 0x1082600u: goto R_01082600;
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
    c.lr = 0x1082194u;
    f_801c83b4(c);
R_01082194:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr052_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x2798u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010821bc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01082374;
    goto L_010825f8;
L_010821bc:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x10821c4u;
    f_80132a30(c);
R_010821c4:
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
    if (!wp::cr_get(c, 2)) goto L_010822dc;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x10822dcu;
    f_8014b090(c);
L_010822dc:
R_010822dc:
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
    c.lr = 0x1082364u;
    f_8012be60(c);
R_01082364:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1082370u;
    f_80132ab0(c);
R_01082370:
    goto L_010825f8;
L_01082374:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x108237cu;
    f_80132a30(c);
R_0108237c:
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
    if (!wp::cr_get(c, 2)) goto L_01082494;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x1082494u;
    f_8014b090(c);
L_01082494:
R_01082494:
    c.r[5] = ((((g_mr052_bases[6] + 0x4e90u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr052_bases[6] + 0x4e90u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01082500;
    c.r[4] = ((((g_mr052_bases[6] + 0x4e98u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr052_bases[6] + 0x4e98u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr052_bases[6] + 0x4e98u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mr052_bases[6] + 0x4e90u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01082500:
    c.r[26] = ((((g_mr052_bases[6] + 0x4e98u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr052_bases[6] + 0x4e98u) & 0xFFFFu);
L_0108250c:
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
    c.lr = 0x10825dcu;
    f_8012be60(c);
R_010825dc:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108250c;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10825f8u;
    f_80132ab0(c);
L_010825f8:
R_010825f8:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x1082600u;
    f_801c8400(c);
R_01082600:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mr052_01082610(wp::Cpu& c) {
    WP_ENTER(0x1082610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mr052_01082620(wp::Cpu& c) {
    WP_ENTER(0x1082620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr052_01082630(wp::Cpu& c) {
    WP_ENTER(0x1082630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082650u: goto R_01082650;
        case 0x1082674u: goto R_01082674;
        case 0x10826acu: goto R_010826ac;
        case 0x10826c0u: goto R_010826c0;
        case 0x10826d4u: goto R_010826d4;
        case 0x10826e4u: goto R_010826e4;
        case 0x10826f0u: goto R_010826f0;
        case 0x1082720u: goto R_01082720;
        case 0x1082740u: goto R_01082740;
        case 0x1082748u: goto R_01082748;
        case 0x1082750u: goto R_01082750;
        case 0x1082758u: goto R_01082758;
        case 0x108275cu: goto R_0108275c;
        case 0x1082764u: goto R_01082764;
        case 0x1082770u: goto R_01082770;
        case 0x10827a0u: goto R_010827a0;
        case 0x10827a8u: goto R_010827a8;
        case 0x10827acu: goto R_010827ac;
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
    c.lr = 0x1082650u;
    f_80069af0(c);
R_01082650:
    c.r[3] = ((((g_mr052_bases[6] + 0x1cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a808u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[6] + 0x1cu) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a808u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x1082674u;
    f_801c79a4(c);
R_01082674:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082690;
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
L_01082690:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10826acu;
    f_801c79a4(c);
R_010826ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01082724;
    c.r[29] = 0x0u;
    c.lr = 0x10826c0u;
    f_8000dd70(c);
R_010826c0:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010826e0;
    c.r[3] = 0xffffffffu;
    c.lr = 0x10826d4u;
    f_8000e240(c);
R_010826d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010826e0;
    c.r[29] = 0x1u;
L_010826e0:
    c.lr = 0x10826e4u;
    f_8000dd70(c);
R_010826e4:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10826f0u;
    f_80007570(c);
R_010826f0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_01082710;
    c.r[4] = c.r[1] + 0xcu;
L_01082710:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x1082720u;
    f_mr052_01032800(c);
R_01082720:
    c.r[30] = c.r[3] | c.r[3];
L_01082724:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082740;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x1082740u;
    f_mr052_010329d0(c);
L_01082740:
R_01082740:
    c.r[3] = 0x0u;
    c.lr = 0x1082748u;
    f_8006a800(c);
R_01082748:
    c.r[3] = 0x0u;
    c.lr = 0x1082750u;
    f_80065040(c);
R_01082750:
    c.r[3] = 0x0u;
    c.lr = 0x1082758u;
    f_8006c8b0(c);
R_01082758:
    c.lr = 0x108275cu;
    f_80066250(c);
R_0108275c:
    c.r[3] = 0x128u;
    c.lr = 0x1082764u;
    f_801c79a4(c);
R_01082764:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082770;
    c.lr = 0x1082770u;
    f_mr052_01080a40(c);
L_01082770:
R_01082770:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010827a0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010827a0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10827a0u;
    wp::call(c, c.ctr);
L_010827a0:
R_010827a0:
    c.r[3] = 0x1u;
    c.lr = 0x10827a8u;
    f_8001b020(c);
R_010827a8:
    c.lr = 0x10827acu;
    f_8000dd30(c);
R_010827ac:
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

void f_mr052_010827e0(wp::Cpu& c) {
    WP_ENTER(0x10827e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108281cu: goto R_0108281c;
        case 0x1082848u: goto R_01082848;
        case 0x108284cu: goto R_0108284c;
        case 0x108285cu: goto R_0108285c;
        case 0x1082860u: goto R_01082860;
        case 0x1082864u: goto R_01082864;
        case 0x1082890u: goto R_01082890;
        case 0x10828a4u: goto R_010828a4;
        case 0x10828ccu: goto R_010828cc;
        case 0x10828f4u: goto R_010828f4;
        case 0x108291cu: goto R_0108291c;
        case 0x1082924u: goto R_01082924;
        case 0x1082928u: goto R_01082928;
        case 0x108292cu: goto R_0108292c;
        case 0x1082934u: goto R_01082934;
        case 0x1082938u: goto R_01082938;
        case 0x108293cu: goto R_0108293c;
        case 0x1082964u: goto R_01082964;
        case 0x1082978u: goto R_01082978;
        case 0x10829a0u: goto R_010829a0;
        case 0x10829c8u: goto R_010829c8;
        case 0x10829f0u: goto R_010829f0;
        case 0x10829f8u: goto R_010829f8;
        case 0x1082a20u: goto R_01082a20;
        case 0x1082a40u: goto R_01082a40;
        case 0x1082a50u: goto R_01082a50;
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
    if (wp::cr_get(c, 2)) goto L_01082a50;
    c.r[4] = ((((g_mr052_bases[5] + 0x2a808u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a808u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x108281cu;
    f_mr052_01032a70(c);
R_0108281c:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082848;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082848;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082848u;
    wp::call(c, c.ctr);
L_01082848:
R_01082848:
    c.lr = 0x108284cu;
    f_8001aac0(c);
R_0108284c:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108285c;
    c.lr = 0x108285cu;
    f_8001b0c0(c);
L_0108285c:
R_0108285c:
    c.lr = 0x1082860u;
    f_8004abf0(c);
R_01082860:
    c.lr = 0x1082864u;
    f_80066250(c);
R_01082864:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082924;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082924;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082890;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1082890u;
    f_mr052_0102da30(c);
L_01082890:
R_01082890:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010828a4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10828a4u;
    f_mr052_010329d0(c);
L_010828a4:
R_010828a4:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010828cc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010828cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10828ccu;
    wp::call(c, c.ctr);
L_010828cc:
R_010828cc:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010828f4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010828f4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10828f4u;
    wp::call(c, c.ctr);
L_010828f4:
R_010828f4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108291c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108291c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108291cu;
    wp::call(c, c.ctr);
L_0108291c:
R_0108291c:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082924u;
    f_801c7a8c(c);
L_01082924:
R_01082924:
    c.lr = 0x1082928u;
    f_80041c20(c);
R_01082928:
    c.lr = 0x108292cu;
    f_8002d270(c);
R_0108292c:
    c.r[3] = 0x0u;
    c.lr = 0x1082934u;
    f_80076130(c);
R_01082934:
    c.lr = 0x1082938u;
    f_800656f0(c);
R_01082938:
    c.lr = 0x108293cu;
    f_80011270(c);
R_0108293c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010829f8;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010829f8;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082964;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1082964u;
    f_mr052_0102da30(c);
L_01082964:
R_01082964:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082978;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1082978u;
    f_mr052_010329d0(c);
L_01082978:
R_01082978:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010829a0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010829a0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10829a0u;
    wp::call(c, c.ctr);
L_010829a0:
R_010829a0:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010829c8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010829c8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10829c8u;
    wp::call(c, c.ctr);
L_010829c8:
R_010829c8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010829f0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010829f0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10829f0u;
    wp::call(c, c.ctr);
L_010829f0:
R_010829f0:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10829f8u;
    f_801c7a8c(c);
L_010829f8:
R_010829f8:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082a20;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082a20;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082a20u;
    wp::call(c, c.ctr);
L_01082a20:
R_01082a20:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082a34;
    c.r[3] = ((((g_mr052_bases[6] + 0x1cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr052_bases[6] + 0x1cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_01082a34:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1082a40u;
    f_80069c40(c);
R_01082a40:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01082a50;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1082a50u;
    f_801c7a8c(c);
L_01082a50:
R_01082a50:
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

void f_mr052_01082a70(wp::Cpu& c) {
    WP_ENTER(0x1082a70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082a9cu: goto R_01082a9c;
        case 0x1082aa4u: goto R_01082aa4;
        case 0x1082abcu: goto R_01082abc;
        case 0x1082af0u: goto R_01082af0;
        case 0x1082b10u: goto R_01082b10;
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
    if (!wp::cr_get(c, 2)) goto L_01082b10;
    c.r[3] = 0x0u;
    c.lr = 0x1082a9cu;
    f_mr052_01032a50(c);
R_01082a9c:
    c.r[3] = 0x1a8u;
    c.lr = 0x1082aa4u;
    f_801c79a4(c);
R_01082aa4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082abc;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x1082abcu;
    f_mr052_0103ba10(c);
L_01082abc:
R_01082abc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082af0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082af0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082af0u;
    wp::call(c, c.ctr);
L_01082af0:
R_01082af0:
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
    c.lr = 0x1082b10u;
    wp::call(c, c.ctr);
L_01082b10:
R_01082b10:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr052_01082b30(wp::Cpu& c) {
    WP_ENTER(0x1082b30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr052_01082b40(wp::Cpu& c) {
    WP_ENTER(0x1082b40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr052_01082b50(wp::Cpu& c) {
    WP_ENTER(0x1082b50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082b9cu: goto R_01082b9c;
        case 0x1082ba0u: goto R_01082ba0;
        case 0x1082bb0u: goto R_01082bb0;
        case 0x1082bd8u: goto R_01082bd8;
        case 0x1082be0u: goto R_01082be0;
        case 0x1082bf4u: goto R_01082bf4;
        case 0x1082c1cu: goto R_01082c1c;
        case 0x1082c24u: goto R_01082c24;
        case 0x1082c2cu: goto R_01082c2c;
        case 0x1082c40u: goto R_01082c40;
        case 0x1082c5cu: goto R_01082c5c;
        case 0x1082c64u: goto R_01082c64;
        case 0x1082c78u: goto R_01082c78;
        case 0x1082c94u: goto R_01082c94;
        case 0x1082ca8u: goto R_01082ca8;
        case 0x1082cb0u: goto R_01082cb0;
        case 0x1082cbcu: goto R_01082cbc;
        case 0x1082cd4u: goto R_01082cd4;
        case 0x1082cd8u: goto R_01082cd8;
        case 0x1082ce0u: goto R_01082ce0;
        case 0x1082cecu: goto R_01082cec;
        case 0x1082cf4u: goto R_01082cf4;
        case 0x1082cf8u: goto R_01082cf8;
        case 0x1082d00u: goto R_01082d00;
        case 0x1082d0cu: goto R_01082d0c;
        case 0x1082d1cu: goto R_01082d1c;
        case 0x1082d24u: goto R_01082d24;
        case 0x1082d40u: goto R_01082d40;
        case 0x1082d44u: goto R_01082d44;
        case 0x1082d54u: goto R_01082d54;
        case 0x1082d5cu: goto R_01082d5c;
        case 0x1082d6cu: goto R_01082d6c;
        case 0x1082d88u: goto R_01082d88;
        case 0x1082db4u: goto R_01082db4;
        case 0x1082dd0u: goto R_01082dd0;
        case 0x1082e04u: goto R_01082e04;
        case 0x1082e10u: goto R_01082e10;
        case 0x1082e30u: goto R_01082e30;
        case 0x1082e64u: goto R_01082e64;
        case 0x1082e70u: goto R_01082e70;
        case 0x1082e8cu: goto R_01082e8c;
        case 0x1082ec0u: goto R_01082ec0;
        case 0x1082edcu: goto R_01082edc;
        case 0x1082ef4u: goto R_01082ef4;
        case 0x1082f04u: goto R_01082f04;
        case 0x1082f24u: goto R_01082f24;
        case 0x1082f58u: goto R_01082f58;
        case 0x1082f70u: goto R_01082f70;
        case 0x1082f9cu: goto R_01082f9c;
        case 0x1082fd0u: goto R_01082fd0;
        case 0x1082fd4u: goto R_01082fd4;
        case 0x1082fecu: goto R_01082fec;
        case 0x1083024u: goto R_01083024;
        case 0x108302cu: goto R_0108302c;
        case 0x1083038u: goto R_01083038;
        case 0x1083058u: goto R_01083058;
        case 0x1083064u: goto R_01083064;
        case 0x1083070u: goto R_01083070;
        case 0x108307cu: goto R_0108307c;
        case 0x1083094u: goto R_01083094;
        case 0x10830d0u: goto R_010830d0;
        case 0x10830d4u: goto R_010830d4;
        case 0x10830d8u: goto R_010830d8;
        case 0x10830ecu: goto R_010830ec;
        case 0x1083120u: goto R_01083120;
        case 0x1083124u: goto R_01083124;
        case 0x1083130u: goto R_01083130;
        case 0x1083140u: goto R_01083140;
        case 0x1083148u: goto R_01083148;
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
    goto L_01082ba0;
L_01082b7c:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082b9c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082b9cu;
    wp::call(c, c.ctr);
L_01082b9c:
R_01082b9c:
    c.lr = 0x1082ba0u;
    f_8006a940(c);
L_01082ba0:
R_01082ba0:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082b7c;
    }
    c.lr = 0x1082bb0u;
    f_800760f0(c);
R_01082bb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082b7c;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082bd8;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x1082bd8u;
    f_mr052_010329d0(c);
L_01082bd8:
R_01082bd8:
    c.r[3] = 0x1u;
    c.lr = 0x1082be0u;
    f_80076130(c);
R_01082be0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082bf4u;
    wp::call(c, c.ctr);
R_01082bf4:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082c7c;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1082c1cu;
    f_800104d0(c);
R_01082c1c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1082c24u;
    f_8000a7f0(c);
R_01082c24:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1082c2cu;
    f_8000e240(c);
R_01082c2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082c6c;
    c.r[30] = 0x0u;
    goto L_01082c60;
L_01082c3c:
    c.lr = 0x1082c40u;
    f_8000dd70(c);
R_01082c40:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x1082c5cu;
    f_8000fc60(c);
R_01082c5c:
    c.r[30] = c.r[30] + 0x1u;
L_01082c60:
    c.lr = 0x1082c64u;
    f_80007570(c);
R_01082c64:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01082c3c;
    }
L_01082c6c:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1082c78u;
    f_800293c0(c);
R_01082c78:
    goto L_01083140;
L_01082c7c:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082cc0;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1082c94u;
    f_8000e070(c);
R_01082c94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_01082ca4;
    c.r[3] = 0x6u;
L_01082ca4:
    c.lr = 0x1082ca8u;
    f_8000e080(c);
R_01082ca8:
    c.r[3] = 0x1u;
    c.lr = 0x1082cb0u;
    f_80029330(c);
R_01082cb0:
    c.r[3] = ((((g_mr052_bases[5] + 0x2a7f8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[5] + 0x2a7f8u) & 0xFFFFu);
    c.lr = 0x1082cbcu;
    f_80029270(c);
R_01082cbc:
    goto L_01083140;
L_01082cc0:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082d04;
    c.r[29] = ((((g_mr052_bases[4] + 0x27d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr052_bases[4] + 0x27d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1082cd4u;
    f_80071fe0(c);
R_01082cd4:
    c.lr = 0x1082cd8u;
    f_8001a890(c);
R_01082cd8:
    c.r[3] = 0x0u;
    c.lr = 0x1082ce0u;
    f_80076130(c);
R_01082ce0:
    ea = c.r[29] + wp::sign_extend16((g_mr052_bases[4] + 0x27d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1082cecu;
    f_80075f20(c);
R_01082cec:
    c.r[3] = 0x1u;
    c.lr = 0x1082cf4u;
    f_80076130(c);
R_01082cf4:
    c.lr = 0x1082cf8u;
    f_80076100(c);
R_01082cf8:
    c.r[3] = 0x1u;
    c.lr = 0x1082d00u;
    f_80029330(c);
R_01082d00:
    goto L_01083140;
L_01082d04:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1082d0cu;
    f_80007f20(c);
R_01082d0c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x1082d1cu;
    f_mr052_01083170(c);
R_01082d1c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x1082d24u;
    f_80041f70(c);
R_01082d24:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082d40;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1082d40u;
    f_800402c0(c);
L_01082d40:
R_01082d40:
    c.lr = 0x1082d44u;
    f_80076140(c);
R_01082d44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082d74;
    c.r[3] = 0x0u;
    c.lr = 0x1082d54u;
    f_8004a100(c);
R_01082d54:
    c.r[3] = 0x1u;
    c.lr = 0x1082d5cu;
    f_80072020(c);
R_01082d5c:
    c.r[4] = ((((g_mr052_bases[4] + 0x27d4u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr052_bases[4] + 0x27d4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1082d6cu;
    f_80075ed0(c);
R_01082d6c:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_01082d74:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082f70;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x1082d88u;
    f_80007530(c);
R_01082d88:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01082dac;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_01082e08;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01082e68;
    goto L_01082edc;
L_01082dac:
    c.r[3] = 0x1acu;
    c.lr = 0x1082db4u;
    f_801c79a4(c);
R_01082db4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082dd0;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x1082dd0u;
    f_mr052_0104c610(c);
L_01082dd0:
R_01082dd0:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082edc;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082edc;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082e04u;
    wp::call(c, c.ctr);
R_01082e04:
    goto L_01082edc;
L_01082e08:
    c.r[3] = 0x1acu;
    c.lr = 0x1082e10u;
    f_801c79a4(c);
R_01082e10:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082e30;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1082e30u;
    f_mr052_0104d650(c);
L_01082e30:
R_01082e30:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082edc;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082edc;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082e64u;
    wp::call(c, c.ctr);
R_01082e64:
    goto L_01082edc;
L_01082e68:
    c.r[3] = 0x1bcu;
    c.lr = 0x1082e70u;
    f_801c79a4(c);
R_01082e70:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082e8c;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x1082e8cu;
    f_mr052_0104e250(c);
L_01082e8c:
R_01082e8c:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082ec0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082ec0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082ec0u;
    wp::call(c, c.ctr);
L_01082ec0:
R_01082ec0:
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
    c.lr = 0x1082edcu;
    wp::call(c, c.ctr);
L_01082edc:
R_01082edc:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082f58;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082ef4u;
    f_mr052_010833b0(c);
R_01082ef4:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_01082f58;
    c.r[3] = 0x1acu;
    c.lr = 0x1082f04u;
    f_801c79a4(c);
R_01082f04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082f24;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1082f24u;
    f_mr052_0104d650(c);
L_01082f24:
R_01082f24:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082f58;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01082f58;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082f58u;
    wp::call(c, c.ctr);
L_01082f58:
R_01082f58:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082f70;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1082f70u;
    f_mr052_010833b0(c);
L_01082f70:
R_01082f70:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083024;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082f9cu;
    wp::call(c, c.ctr);
R_01082f9c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01082fd4;
L_01082fa4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082fd0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082fd0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082fd0u;
    wp::call(c, c.ctr);
L_01082fd0:
R_01082fd0:
    c.lr = 0x1082fd4u;
    f_8006a940(c);
L_01082fd4:
R_01082fd4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082fecu;
    wp::call(c, c.ctr);
R_01082fec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082fa4;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083024;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083024;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083024u;
    wp::call(c, c.ctr);
L_01083024:
R_01083024:
    c.r[3] = 0x4u;
    c.lr = 0x108302cu;
    f_801c79a4(c);
R_0108302c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083038;
    c.lr = 0x1083038u;
    f_mr052_0102d990(c);
L_01083038:
R_01083038:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083058;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x1083058u;
    f_mr052_0102da30(c);
L_01083058:
R_01083058:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1083064u;
    f_mr052_0102dad0(c);
R_01083064:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1083070u;
    f_mr052_0102dac0(c);
R_01083070:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108307cu;
    f_mr052_0102dab0(c);
R_0108307c:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010830e0;
    c.r[3] = 0x1u;
    c.lr = 0x1083094u;
    f_mr052_0102c450(c);
R_01083094:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010830e0;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010830d4;
L_010830a4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010830d0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010830d0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10830d0u;
    wp::call(c, c.ctr);
L_010830d0:
R_010830d0:
    c.lr = 0x10830d4u;
    f_8006a940(c);
L_010830d4:
R_010830d4:
    c.lr = 0x10830d8u;
    f_8006b760(c);
R_010830d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010830a4;
    }
L_010830e0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10830ecu;
    f_mr052_0102dae0(c);
R_010830ec:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01083124;
L_010830f4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01083120;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083120;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083120u;
    wp::call(c, c.ctr);
L_01083120:
R_01083120:
    c.lr = 0x1083124u;
    f_8006a940(c);
L_01083124:
R_01083124:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1083130u;
    f_mr052_0102db00(c);
R_01083130:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010830f4;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1083140u;
    f_mr052_01083600(c);
L_01083140:
R_01083140:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1083148u;
    f_8006a8f0(c);
R_01083148:
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

void f_mr052_01083170(wp::Cpu& c) {
    WP_ENTER(0x1083170u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083184u: goto R_01083184;
        case 0x1083194u: goto R_01083194;
        case 0x10831a0u: goto R_010831a0;
        case 0x10831bcu: goto R_010831bc;
        case 0x10831c4u: goto R_010831c4;
        case 0x10831ccu: goto R_010831cc;
        case 0x1083230u: goto R_01083230;
        case 0x108324cu: goto R_0108324c;
        case 0x1083268u: goto R_01083268;
        case 0x10832a0u: goto R_010832a0;
        case 0x10832bcu: goto R_010832bc;
        case 0x10832d8u: goto R_010832d8;
        case 0x10832f4u: goto R_010832f4;
        case 0x108330cu: goto R_0108330c;
        case 0x1083344u: goto R_01083344;
        case 0x1083360u: goto R_01083360;
        case 0x108337cu: goto R_0108337c;
        case 0x1083398u: goto R_01083398;
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
    c.lr = 0x1083184u;
    f_801c83b8(c);
R_01083184:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x1083194u;
    f_8000fc40(c);
R_01083194:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x10831a0u;
    f_8000fc40(c);
R_010831a0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010831b8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010831b8;
    c.r[3] = 0x0u;
    goto L_01083390;
L_010831b8:
    c.lr = 0x10831bcu;
    f_80007530(c);
R_010831bc:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10831c4u;
    f_800075a0(c);
R_010831c4:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10831ccu;
    f_8000dd00(c);
R_010831cc:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083200;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_01083270;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_010832e0;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01083314;
    goto L_01083384;
L_01083200:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108321c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01083238;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01083254;
    goto L_0108338c;
L_0108321c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1083230u;
    f_8000b780(c);
R_01083230:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_01083238:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108324cu;
    f_8000b780(c);
R_0108324c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_01083254:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1083268u;
    f_8000b780(c);
R_01083268:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_01083270:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108328c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010832a8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010832c4;
    goto L_0108338c;
L_0108328c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10832a0u;
    f_8000b780(c);
R_010832a0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_010832a8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10832bcu;
    f_8000b780(c);
R_010832bc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_010832c4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10832d8u;
    f_8000b780(c);
R_010832d8:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_010832e0:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10832f4u;
    f_8000b780(c);
R_010832f4:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108330cu;
    f_8000b780(c);
R_0108330c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_01083314:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083330;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108334c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01083368;
    goto L_0108338c;
L_01083330:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1083344u;
    f_8000b780(c);
R_01083344:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_0108334c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1083360u;
    f_8000b780(c);
R_01083360:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_01083368:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108337cu;
    f_8000b780(c);
R_0108337c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108338c;
L_01083384:
    c.r[3] = 0x0u;
    goto L_01083390;
L_0108338c:
    c.r[3] = 0x1u;
L_01083390:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1083398u;
    f_801c8404(c);
R_01083398:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr052_010833b0(wp::Cpu& c) {
    WP_ENTER(0x10833b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10833c4u: goto R_010833c4;
        case 0x10833e8u: goto R_010833e8;
        case 0x1083420u: goto R_01083420;
        case 0x1083424u: goto R_01083424;
        case 0x108343cu: goto R_0108343c;
        case 0x1083474u: goto R_01083474;
        case 0x108348cu: goto R_0108348c;
        case 0x1083490u: goto R_01083490;
        case 0x1083498u: goto R_01083498;
        case 0x10834e4u: goto R_010834e4;
        case 0x10834e8u: goto R_010834e8;
        case 0x1083524u: goto R_01083524;
        case 0x1083544u: goto R_01083544;
        case 0x108357cu: goto R_0108357c;
        case 0x1083580u: goto R_01083580;
        case 0x1083598u: goto R_01083598;
        case 0x10835dcu: goto R_010835dc;
        case 0x10835e4u: goto R_010835e4;
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
    c.lr = 0x10833c4u;
    f_801c83b8(c);
R_010833c4:
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
    c.lr = 0x10833e8u;
    wp::call(c, c.ctr);
R_010833e8:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01083424;
L_010833f4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01083420;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083420;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083420u;
    wp::call(c, c.ctr);
L_01083420:
R_01083420:
    c.lr = 0x1083424u;
    f_8006a940(c);
L_01083424:
R_01083424:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108343cu;
    wp::call(c, c.ctr);
R_0108343c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083450;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010833f4;
    }
L_01083450:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010834e8;
L_01083464:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_0108346c:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1083474u;
    f_8000fc40(c);
R_01083474:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083484;
    c.r[0] = 0x0u;
    goto L_010834a4;
L_01083484:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x108348cu;
    f_8000fc20(c);
R_0108348c:
    c.lr = 0x1083490u;
    f_800699d0(c);
R_01083490:
    c.r[4] = 0x800u;
    c.lr = 0x1083498u;
    f_80066cd0(c);
R_01083498:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_010834a4:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108346c;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010834e4;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010834e4;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10834e4u;
    wp::call(c, c.ctr);
L_010834e4:
R_010834e4:
    c.lr = 0x10834e8u;
    f_8006a940(c);
L_010834e8:
R_010834e8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108350c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108350c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083464;
    }
L_0108350c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083524u;
    wp::call(c, c.ctr);
R_01083524:
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
    c.lr = 0x1083544u;
    wp::call(c, c.ctr);
R_01083544:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01083580;
L_01083550:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108357c;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108357c;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108357cu;
    wp::call(c, c.ctr);
L_0108357c:
R_0108357c:
    c.lr = 0x1083580u;
    f_8006a940(c);
L_01083580:
R_01083580:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083598u;
    wp::call(c, c.ctr);
R_01083598:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010835ac;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083550;
    }
L_010835ac:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010835dc;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010835dc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10835dcu;
    wp::call(c, c.ctr);
L_010835dc:
R_010835dc:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10835e4u;
    f_801c8404(c);
R_010835e4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr052_01083600(wp::Cpu& c) {
    WP_ENTER(0x1083600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083614u: goto R_01083614;
        case 0x108362cu: goto R_0108362c;
        case 0x1083638u: goto R_01083638;
        case 0x1083648u: goto R_01083648;
        case 0x1083654u: goto R_01083654;
        case 0x1083664u: goto R_01083664;
        case 0x108367cu: goto R_0108367c;
        case 0x1083698u: goto R_01083698;
        case 0x10836b4u: goto R_010836b4;
        case 0x10836e4u: goto R_010836e4;
        case 0x108371cu: goto R_0108371c;
        case 0x1083720u: goto R_01083720;
        case 0x10837b0u: goto R_010837b0;
        case 0x10837dcu: goto R_010837dc;
        case 0x10837e4u: goto R_010837e4;
        case 0x10837f0u: goto R_010837f0;
        case 0x10837f8u: goto R_010837f8;
        case 0x10837fcu: goto R_010837fc;
        case 0x1083804u: goto R_01083804;
        case 0x1083818u: goto R_01083818;
        case 0x1083834u: goto R_01083834;
        case 0x108383cu: goto R_0108383c;
        case 0x1083850u: goto R_01083850;
        case 0x108385cu: goto R_0108385c;
        case 0x1083864u: goto R_01083864;
        case 0x1083870u: goto R_01083870;
        case 0x1083878u: goto R_01083878;
        case 0x108387cu: goto R_0108387c;
        case 0x1083880u: goto R_01083880;
        case 0x1083894u: goto R_01083894;
        case 0x108389cu: goto R_0108389c;
        case 0x10838a8u: goto R_010838a8;
        case 0x10838acu: goto R_010838ac;
        case 0x10838b4u: goto R_010838b4;
        case 0x10838c0u: goto R_010838c0;
        case 0x10838c8u: goto R_010838c8;
        case 0x10838ccu: goto R_010838cc;
        case 0x10838d4u: goto R_010838d4;
        case 0x10838dcu: goto R_010838dc;
        case 0x10838e8u: goto R_010838e8;
        case 0x10838ecu: goto R_010838ec;
        case 0x10838f4u: goto R_010838f4;
        case 0x1083900u: goto R_01083900;
        case 0x1083908u: goto R_01083908;
        case 0x108390cu: goto R_0108390c;
        case 0x1083914u: goto R_01083914;
        case 0x108391cu: goto R_0108391c;
        case 0x1083924u: goto R_01083924;
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
    c.lr = 0x1083614u;
    f_801c83b4(c);
R_01083614:
    c.r[27] = ((((g_mr052_bases[4] + 0x27d0u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr052_bases[4] + 0x27d0u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x108362cu;
    f_800699d0(c);
R_0108362c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x1083638u;
    f_80066e70(c);
R_01083638:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x1083648u;
    f_80066db0(c);
R_01083648:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x1083654u;
    f_801c79a4(c);
R_01083654:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010836b8;
    c.lr = 0x1083664u;
    f_80007530(c);
R_01083664:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01083678;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_01083690;
L_01083678:
    c.lr = 0x108367cu;
    f_8000dc30(c);
R_0108367c:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_01083694;
L_01083690:
    c.r[26] = 0x0u;
L_01083694:
    c.lr = 0x1083698u;
    f_8000e070(c);
R_01083698:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x10836b4u;
    f_mr052_01064590(c);
R_010836b4:
    c.r[29] = c.r[3] | c.r[3];
L_010836b8:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010836e4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010836e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10836e4u;
    wp::call(c, c.ctr);
L_010836e4:
R_010836e4:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01083720;
L_010836f0:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108371c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108371c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108371cu;
    wp::call(c, c.ctr);
L_0108371c:
R_0108371c:
    c.lr = 0x1083720u;
    f_8006a940(c);
L_01083720:
R_01083720:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_01083740;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010836f0;
    }
L_01083740:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083768;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01083770;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01083778;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01083780;
    goto L_01083784;
L_01083768:
    c.r[31] = 0x0u;
    goto L_01083784;
L_01083770:
    c.r[31] = 0x1u;
    goto L_01083784;
L_01083778:
    c.r[31] = 0x2u;
    goto L_01083784;
L_01083780:
    c.r[31] = 0x3u;
L_01083784:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010837b0;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010837b0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10837b0u;
    wp::call(c, c.ctr);
L_010837b0:
R_010837b0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010837d4;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01083854;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010838a0;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010838e0;
    goto L_0108391c;
L_010837d4:
    c.r[3] = 0x5u;
    c.lr = 0x10837dcu;
    f_8001a890(c);
R_010837dc:
    c.r[3] = 0x0u;
    c.lr = 0x10837e4u;
    f_80076130(c);
R_010837e4:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10837f0u;
    f_80075f20(c);
R_010837f0:
    c.r[3] = 0x1u;
    c.lr = 0x10837f8u;
    f_80076130(c);
R_010837f8:
    c.lr = 0x10837fcu;
    f_80076100(c);
R_010837fc:
    c.r[3] = 0xffffffffu;
    c.lr = 0x1083804u;
    f_8000e240(c);
R_01083804:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01083844;
    c.r[26] = 0x0u;
    goto L_01083838;
L_01083814:
    c.lr = 0x1083818u;
    f_8000dd70(c);
R_01083818:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x1083834u;
    f_8000fc60(c);
R_01083834:
    c.r[26] = c.r[26] + 0x1u;
L_01083838:
    c.lr = 0x108383cu;
    f_80007570(c);
R_0108383c:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01083814;
    }
L_01083844:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1083850u;
    f_800293c0(c);
R_01083850:
    goto L_0108391c;
L_01083854:
    c.r[3] = 0x5u;
    c.lr = 0x108385cu;
    f_8001a890(c);
R_0108385c:
    c.r[3] = 0x0u;
    c.lr = 0x1083864u;
    f_80076130(c);
R_01083864:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1083870u;
    f_80075f20(c);
R_01083870:
    c.r[3] = 0x1u;
    c.lr = 0x1083878u;
    f_80076130(c);
R_01083878:
    c.lr = 0x108387cu;
    f_80076100(c);
R_0108387c:
    c.lr = 0x1083880u;
    f_8000e070(c);
R_01083880:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_01083890;
    c.r[3] = 0x6u;
L_01083890:
    c.lr = 0x1083894u;
    f_8000e080(c);
R_01083894:
    c.r[3] = 0x1u;
    c.lr = 0x108389cu;
    f_80029330(c);
R_0108389c:
    goto L_0108391c;
L_010838a0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10838a8u;
    f_80071fe0(c);
R_010838a8:
    c.lr = 0x10838acu;
    f_8001a890(c);
R_010838ac:
    c.r[3] = 0x0u;
    c.lr = 0x10838b4u;
    f_80076130(c);
R_010838b4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10838c0u;
    f_80075f20(c);
R_010838c0:
    c.r[3] = 0x1u;
    c.lr = 0x10838c8u;
    f_80076130(c);
R_010838c8:
    c.lr = 0x10838ccu;
    f_80076100(c);
R_010838cc:
    c.r[3] = 0x4u;
    c.lr = 0x10838d4u;
    f_8000e080(c);
R_010838d4:
    c.r[3] = 0x1u;
    c.lr = 0x10838dcu;
    f_80029330(c);
R_010838dc:
    goto L_0108391c;
L_010838e0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10838e8u;
    f_80071fe0(c);
R_010838e8:
    c.lr = 0x10838ecu;
    f_8001a890(c);
R_010838ec:
    c.r[3] = 0x0u;
    c.lr = 0x10838f4u;
    f_80076130(c);
R_010838f4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1083900u;
    f_80075f20(c);
R_01083900:
    c.r[3] = 0x1u;
    c.lr = 0x1083908u;
    f_80076130(c);
R_01083908:
    c.lr = 0x108390cu;
    f_80076100(c);
R_0108390c:
    c.r[3] = 0x8u;
    c.lr = 0x1083914u;
    f_8000e080(c);
R_01083914:
    c.r[3] = 0x1u;
    c.lr = 0x108391cu;
    f_80029330(c);
L_0108391c:
R_0108391c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1083924u;
    f_801c8400(c);
R_01083924:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr052_01083940(wp::Cpu& c) {
    WP_ENTER(0x1083940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083978u: goto R_01083978;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr052_bases[5] + 0x2a820u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr052_bases[6] + 0x20u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a820u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr052_bases[6] + 0x20u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    c.lr = 0x1083978u;
    f_80030b40(c);
R_01083978:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr052_01083990(wp::Cpu& c) {
    WP_ENTER(0x1083990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    f_800315f0(c);
    return;
}

void f_mr052_010839a0(wp::Cpu& c) {
    WP_ENTER(0x10839a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10839f4u: goto R_010839f4;
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
    if (wp::cr_get(c, 2)) goto L_010839c4;
    c.r[3] = 0x0u;
    goto L_01083a38;
L_010839c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010839dc;
    c.r[0] = c.r[4] & 0x100u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010839dc;
    c.r[3] = 0x0u;
    goto L_01083a38;
L_010839dc:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x400u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10839f4u;
    f_801c79a4(c);
R_010839f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083a38;
    c.r[6] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[6]);
    c.r[5] = ((((g_mr052_bases[5] + 0x2a830u) + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[6]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr052_bases[5] + 0x2a830u) & 0xFFFFu);
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
L_01083a38:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr052_01083a50(wp::Cpu& c) {
    WP_ENTER(0x1083a50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083a94u: goto R_01083a94;
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
    if (!wp::cr_get(c, 2)) goto L_01083a78;
    c.r[3] = 0x0u;
    goto L_01083ad4;
L_01083a78:
    c.r[3] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[4] & 0xfffffbffu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80231d68u & 0xFFFFu);
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[31] = c.r[3] + 0x11u;
    c.r[3] = 0x24u;
    c.lr = 0x1083a94u;
    f_801c79a4(c);
R_01083a94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083ad4;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[4] = ((((g_mr052_bases[5] + 0x2a830u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a830u) & 0xFFFFu);
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
L_01083ad4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr052_01083af0(wp::Cpu& c) {
    WP_ENTER(0x1083af0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr052_01083b00(wp::Cpu& c) {
    WP_ENTER(0x1083b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr052_01083b10(wp::Cpu& c) {
    WP_ENTER(0x1083b10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr052_01083b20(wp::Cpu& c) {
    WP_ENTER(0x1083b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f6050u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f6050u & 0xFFFFu);
    return;
}

void f_mr052_01083b30(wp::Cpu& c) {
    WP_ENTER(0x1083b30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083b74u: goto R_01083b74;
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
    if (wp::cr_get(c, 2)) goto L_01083b78;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083b78;
    ea = c.r[3] + 0x14u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x1083b74u;
    f_80143290(c);
R_01083b74:
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_01083b78:
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

void f_mr052_01083ba0(wp::Cpu& c) {
    WP_ENTER(0x1083ba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083bd4u: goto R_01083bd4;
        case 0x1083becu: goto R_01083bec;
        case 0x1083bf8u: goto R_01083bf8;
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
    c.lr = 0x1083bd4u;
    wp::call(c, c.ctr);
R_01083bd4:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[0] + c.r[3];
    c.r[3] = c.r[3] + 0x8u;
    c.lr = 0x1083becu;
    f_800043c4(c);
R_01083bec:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x1083bf8u;
    f_8011c2d0(c);
R_01083bf8:
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

void f_mr052_01083c20(wp::Cpu& c) {
    WP_ENTER(0x1083c20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr052_01083c30(wp::Cpu& c) {
    WP_ENTER(0x1083c30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083c64u: goto R_01083c64;
        case 0x1083c7cu: goto R_01083c7c;
        case 0x1083c88u: goto R_01083c88;
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
    c.lr = 0x1083c64u;
    wp::call(c, c.ctr);
R_01083c64:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = c.r[0] + c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + 0x8u;
    c.lr = 0x1083c7cu;
    f_800043c4(c);
R_01083c7c:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x1083c88u;
    f_8011c260(c);
R_01083c88:
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

void f_mr052_01083cb0(wp::Cpu& c) {
    WP_ENTER(0x1083cb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0x1cu;
    f_8011c320(c);
    return;
}

void f_mr052_01083cc0(wp::Cpu& c) {
    WP_ENTER(0x1083cc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr052_01083cd0(wp::Cpu& c) {
    WP_ENTER(0x1083cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr052_01083ce0(wp::Cpu& c) {
    WP_ENTER(0x1083ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr052_01083cf0(wp::Cpu& c) {
    WP_ENTER(0x1083cf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr052_01083d00(wp::Cpu& c) {
    WP_ENTER(0x1083d00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_mr052_01083d10(wp::Cpu& c) {
    WP_ENTER(0x1083d10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr052_01083d20(wp::Cpu& c) {
    WP_ENTER(0x1083d20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083d5cu: goto R_01083d5c;
        case 0x1083d6cu: goto R_01083d6c;
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
    if (wp::cr_get(c, 2)) goto L_01083d6c;
    c.r[12] = ((((g_mr052_bases[5] + 0x2a830u) + 0x8000u) >> 16) << 16);
    c.r[12] = c.r[12] + wp::sign_extend16((g_mr052_bases[5] + 0x2a830u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083d5cu;
    wp::call(c, c.ctr);
R_01083d5c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01083d6c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1083d6cu;
    f_801c7a8c(c);
L_01083d6c:
R_01083d6c:
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

void f_mr052_01083d90(wp::Cpu& c) {
    WP_ENTER(0x1083d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083dc0u: goto R_01083dc0;
        case 0x1083dc8u: goto R_01083dc8;
        case 0x1083df4u: goto R_01083df4;
        case 0x1083e00u: goto R_01083e00;
        case 0x1083e24u: goto R_01083e24;
        case 0x1083e4cu: goto R_01083e4c;
        case 0x1083e64u: goto R_01083e64;
        case 0x1083e80u: goto R_01083e80;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr052_bases[4] + 0x2808u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr052_bases[4] + 0x2808u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1083dc0u;
    f_80153530(c);
R_01083dc0:
    c.r[3] = 0x6u;
    c.lr = 0x1083dc8u;
    f_80153920(c);
R_01083dc8:
    c.r[31] = ((((g_mr052_bases[4] + 0x2810u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr052_bases[4] + 0x2810u) & 0xFFFFu);
L_01083dd4:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1083df4u;
    f_801537c0(c);
R_01083df4:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1083e00u;
    f_80153590(c);
R_01083e00:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_01083e14;
    c.r[4] = 0xfu;
L_01083e14:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x1083e24u;
    f_80153320(c);
R_01083e24:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01083e40;
    c.r[6] = 0x3u;
L_01083e40:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1083e4cu;
    f_801533a0(c);
R_01083e4c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x1083e64u;
    f_80153360(c);
R_01083e64:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1083e80u;
    f_80153400(c);
R_01083e80:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01083dd4;
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

void f_mr052_01083eb0(wp::Cpu& c) {
    WP_ENTER(0x1083eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083ee4u: goto R_01083ee4;
        case 0x1083eecu: goto R_01083eec;
        case 0x1083ef4u: goto R_01083ef4;
        case 0x1083efcu: goto R_01083efc;
        case 0x1083f0cu: goto R_01083f0c;
        case 0x1083f24u: goto R_01083f24;
        case 0x1083f38u: goto R_01083f38;
        case 0x1083f3cu: goto R_01083f3c;
        case 0x1083f48u: goto R_01083f48;
        case 0x1083f58u: goto R_01083f58;
        case 0x1083f5cu: goto R_01083f5c;
        case 0x1083f60u: goto R_01083f60;
        case 0x1083f84u: goto R_01083f84;
        case 0x1083fccu: goto R_01083fcc;
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
    c.lr = 0x1083ee4u;
    f_80150850(c);
R_01083ee4:
    c.r[3] = 0x1u;
    c.lr = 0x1083eecu;
    f_80153e40(c);
R_01083eec:
    c.r[3] = 0x0u;
    c.lr = 0x1083ef4u;
    f_80153e90(c);
R_01083ef4:
    c.r[3] = 0x1u;
    c.lr = 0x1083efcu;
    f_80153f20(c);
R_01083efc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x1083f0cu;
    f_80153ee0(c);
R_01083f0c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x1083f24u;
    f_801536f0(c);
R_01083f24:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x1083f38u;
    f_80153df0(c);
R_01083f38:
    c.lr = 0x1083f3cu;
    f_8014f020(c);
R_01083f3c:
    c.r[3] = ((((g_mr052_bases[4] + 0x2830u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr052_bases[4] + 0x2830u) & 0xFFFFu);
    c.lr = 0x1083f48u;
    f_8014e9e0(c);
R_01083f48:
    c.r[4] = ((((g_mr052_bases[4] + 0x2848u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[4] + 0x2848u) & 0xFFFFu);
    c.lr = 0x1083f58u;
    f_8014f200(c);
R_01083f58:
    c.lr = 0x1083f5cu;
    f_8004aa80(c);
R_01083f5c:
    c.lr = 0x1083f60u;
    f_800ee3c0(c);
R_01083f60:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1083f84u;
    f_800e95b0(c);
R_01083f84:
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
    c.lr = 0x1083fccu;
    f_80150560(c);
R_01083fcc:
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

void f_mr052_01084050(wp::Cpu& c) {
    WP_ENTER(0x1084050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084090u: goto R_01084090;
        case 0x10840a4u: goto R_010840a4;
        case 0x10840b4u: goto R_010840b4;
        case 0x10840c4u: goto R_010840c4;
        case 0x10840d0u: goto R_010840d0;
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
    c.lr = 0x1084090u;
    f_8003d6b0(c);
R_01084090:
    c.r[4] = ((((g_mr052_bases[5] + 0x2a890u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr052_bases[5] + 0x2a890u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10840a4u;
    f_801c79a4(c);
R_010840a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010840b4;
    c.lr = 0x10840b4u;
    f_80034ac0(c);
L_010840b4:
R_010840b4:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10840c4u;
    f_80052170(c);
R_010840c4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10840d0u;
    f_80052190(c);
R_010840d0:
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

void f_mr052_01084100(wp::Cpu& c) {
    WP_ENTER(0x1084100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084148u: goto R_01084148;
        case 0x1084150u: goto R_01084150;
        case 0x1084164u: goto R_01084164;
        case 0x1084174u: goto R_01084174;
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
    if (wp::cr_get(c, 2)) goto L_01084174;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084150;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084150;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x1084148u;
    f_80034b10(c);
R_01084148:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1084150u;
    f_801c7a8c(c);
L_01084150:
R_01084150:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084164;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1084164u;
    f_80051600(c);
L_01084164:
R_01084164:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01084174;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1084174u;
    f_801c7a8c(c);
L_01084174:
R_01084174:
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

void f_mr052_010841a0(wp::Cpu& c) {
    WP_ENTER(0x10841a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10841e4u: goto R_010841e4;
        case 0x1084210u: goto R_01084210;
        case 0x108421cu: goto R_0108421c;
        case 0x1084224u: goto R_01084224;
        case 0x1084230u: goto R_01084230;
        case 0x1084238u: goto R_01084238;
        case 0x1084240u: goto R_01084240;
        case 0x1084260u: goto R_01084260;
        case 0x1084280u: goto R_01084280;
        case 0x1084288u: goto R_01084288;
        case 0x1084294u: goto R_01084294;
        case 0x10842c4u: goto R_010842c4;
        case 0x10842e0u: goto R_010842e0;
        case 0x1084328u: goto R_01084328;
        case 0x1084344u: goto R_01084344;
        case 0x108435cu: goto R_0108435c;
        case 0x1084378u: goto R_01084378;
        case 0x1084388u: goto R_01084388;
        case 0x108438cu: goto R_0108438c;
        case 0x10843c4u: goto R_010843c4;
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
    c.lr = 0x10841e4u;
    f_801c83b8(c);
R_010841e4:
    c.r[29] = ((((g_mr052_bases[4] + 0x27e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr052_bases[4] + 0x27e8u) & 0xFFFFu);
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
    c.lr = 0x1084210u;
    f_8014c050(c);
R_01084210:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x108421cu;
    f_80154c30(c);
R_0108421c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1084224u;
    f_8014b090(c);
R_01084224:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1084230u;
    f_80154d30(c);
R_01084230:
    c.r[3] = 0x0u;
    c.lr = 0x1084238u;
    f_80154e50(c);
R_01084238:
    c.r[3] = 0x0u;
    c.lr = 0x1084240u;
    f_80151a30(c);
R_01084240:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1084260u;
    f_80151a60(c);
R_01084260:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1084280u;
    f_80151a60(c);
R_01084280:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1084288u;
    f_80034f00(c);
R_01084288:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1084294u;
    f_80034f20(c);
R_01084294:
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
    c.lr = 0x10842c4u;
    f_8014f9d0(c);
R_010842c4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10842e0u;
    f_8014f780(c);
R_010842e0:
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
L_010842fc:
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
    c.lr = 0x1084328u;
    f_80126450(c);
R_01084328:
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
    c.lr = 0x1084344u;
    f_8014b7e0(c);
R_01084344:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x108435cu;
    f_80154e70(c);
R_0108435c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1084378u;
    f_8014f780(c);
R_01084378:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010842fc;
    }
    c.lr = 0x1084388u;
    f_mr052_01083d90(c);
R_01084388:
    c.lr = 0x108438cu;
    f_mr052_01083eb0(c);
R_0108438c:
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
    c.lr = 0x10843c4u;
    f_801c8404(c);
R_010843c4:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

