#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mg442_bases[17];
void f_800043c4(wp::Cpu& c);
void f_80004714(wp::Cpu& c);
void f_80007730(wp::Cpu& c);
void f_8000a2c0(wp::Cpu& c);
void f_8000dd70(wp::Cpu& c);
void f_8000e2a0(wp::Cpu& c);
void f_8000fc20(wp::Cpu& c);
void f_8000fc40(wp::Cpu& c);
void f_8000ffd0(wp::Cpu& c);
void f_80010060(wp::Cpu& c);
void f_80018e30(wp::Cpu& c);
void f_800195d0(wp::Cpu& c);
void f_80019f20(wp::Cpu& c);
void f_80019fa0(wp::Cpu& c);
void f_8001a010(wp::Cpu& c);
void f_8001a480(wp::Cpu& c);
void f_8001aed0(wp::Cpu& c);
void f_8001bfe0(wp::Cpu& c);
void f_80022df0(wp::Cpu& c);
void f_8003b480(wp::Cpu& c);
void f_8003cc90(wp::Cpu& c);
void f_8003cfb0(wp::Cpu& c);
void f_8003d2d0(wp::Cpu& c);
void f_8003f640(wp::Cpu& c);
void f_8003f8f0(wp::Cpu& c);
void f_8003fb90(wp::Cpu& c);
void f_800402c0(wp::Cpu& c);
void f_800402f0(wp::Cpu& c);
void f_800403a0(wp::Cpu& c);
void f_800403b0(wp::Cpu& c);
void f_800403f0(wp::Cpu& c);
void f_80040980(wp::Cpu& c);
void f_80042130(wp::Cpu& c);
void f_80042650(wp::Cpu& c);
void f_80043060(wp::Cpu& c);
void f_80043110(wp::Cpu& c);
void f_80043120(wp::Cpu& c);
void f_80043130(wp::Cpu& c);
void f_80043140(wp::Cpu& c);
void f_80043180(wp::Cpu& c);
void f_800431a0(wp::Cpu& c);
void f_80043290(wp::Cpu& c);
void f_80043490(wp::Cpu& c);
void f_800476a0(wp::Cpu& c);
void f_80047ac0(wp::Cpu& c);
void f_80047ad0(wp::Cpu& c);
void f_80048ec0(wp::Cpu& c);
void f_80048f30(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004a110(wp::Cpu& c);
void f_80051600(wp::Cpu& c);
void f_80052250(wp::Cpu& c);
void f_80053d20(wp::Cpu& c);
void f_80053d40(wp::Cpu& c);
void f_80053df0(wp::Cpu& c);
void f_80053e70(wp::Cpu& c);
void f_80055290(wp::Cpu& c);
void f_80055bb0(wp::Cpu& c);
void f_80055d80(wp::Cpu& c);
void f_80063370(wp::Cpu& c);
void f_80063bb0(wp::Cpu& c);
void f_80066cd0(wp::Cpu& c);
void f_800699d0(wp::Cpu& c);
void f_80069c40(wp::Cpu& c);
void f_80069e30(wp::Cpu& c);
void f_80069e40(wp::Cpu& c);
void f_8006a940(wp::Cpu& c);
void f_8006b460(wp::Cpu& c);
void f_8006b500(wp::Cpu& c);
void f_8006b590(wp::Cpu& c);
void f_8006c450(wp::Cpu& c);
void f_8006c460(wp::Cpu& c);
void f_8006c4e0(wp::Cpu& c);
void f_8006dfe0(wp::Cpu& c);
void f_80071fe0(wp::Cpu& c);
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
void f_80129080(wp::Cpu& c);
void f_801290d0(wp::Cpu& c);
void f_8012b8d0(wp::Cpu& c);
void f_8012bbc0(wp::Cpu& c);
void f_8012be00(wp::Cpu& c);
void f_8012be60(wp::Cpu& c);
void f_80132a30(wp::Cpu& c);
void f_80132ab0(wp::Cpu& c);
void f_8014b090(wp::Cpu& c);
void f_8014c0f0(wp::Cpu& c);
void f_8014c120(wp::Cpu& c);
void f_8014c150(wp::Cpu& c);
void f_801c7860(wp::Cpu& c);
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c8160(wp::Cpu& c);
void f_801c8244(wp::Cpu& c);
void f_801c8384(wp::Cpu& c);
void f_801c8388(wp::Cpu& c);
void f_801c838c(wp::Cpu& c);
void f_801c8390(wp::Cpu& c);
void f_801c839c(wp::Cpu& c);
void f_801c83a0(wp::Cpu& c);
void f_801c83a4(wp::Cpu& c);
void f_801c83ac(wp::Cpu& c);
void f_801c83b0(wp::Cpu& c);
void f_801c83b4(wp::Cpu& c);
void f_801c83b8(wp::Cpu& c);
void f_801c83d0(wp::Cpu& c);
void f_801c83d4(wp::Cpu& c);
void f_801c83d8(wp::Cpu& c);
void f_801c83dc(wp::Cpu& c);
void f_801c83e4(wp::Cpu& c);
void f_801c83e8(wp::Cpu& c);
void f_801c83ec(wp::Cpu& c);
void f_801c83f0(wp::Cpu& c);
void f_801c83f8(wp::Cpu& c);
void f_801c83fc(wp::Cpu& c);
void f_801c8400(wp::Cpu& c);
void f_801c8404(wp::Cpu& c);
void f_801cc76c(wp::Cpu& c);
void f_801cee24(wp::Cpu& c);
void f_801cf394(wp::Cpu& c);
void f_801cf510(wp::Cpu& c);
void f_801d34c4(wp::Cpu& c);
void f_801d3590(wp::Cpu& c);
void f_801d3940(wp::Cpu& c);
void f_mg442_01000000(wp::Cpu& c);
void f_mg442_0100d7d0(wp::Cpu& c);
void f_mg442_0100d990(wp::Cpu& c);
void f_mg442_01018080(wp::Cpu& c);
void f_mg442_010185e0(wp::Cpu& c);
void f_mg442_0101be80(wp::Cpu& c);
void f_mg442_0101c200(wp::Cpu& c);
void f_mg442_0101f4f0(wp::Cpu& c);
void f_mg442_010227d0(wp::Cpu& c);
void f_mg442_0104f0c0(wp::Cpu& c);
void f_mg442_01055390(wp::Cpu& c);
void f_mg442_010555ec(wp::Cpu& c);
void f_mg442_01055890(wp::Cpu& c);
void f_mg442_010558b0(wp::Cpu& c);
void f_mg442_010558d0(wp::Cpu& c);
void f_mg442_010558f0(wp::Cpu& c);
void f_mg442_01055af8(wp::Cpu& c);
void f_mg442_01055b78(wp::Cpu& c);
void f_mg442_01055c10(wp::Cpu& c);
void f_mg442_01055c90(wp::Cpu& c);
void f_mg442_01055d10(wp::Cpu& c);
void f_mg442_01055d90(wp::Cpu& c);
void f_mg442_01055e50(wp::Cpu& c);
void f_mg442_01055ed8(wp::Cpu& c);
void f_mg442_01056148(wp::Cpu& c);
void f_mg442_0105621c(wp::Cpu& c);
void f_mg442_0105634c(wp::Cpu& c);
void f_mg442_010563f8(wp::Cpu& c);
void f_mg442_01056c18(wp::Cpu& c);
void f_mg442_01056dd4(wp::Cpu& c);
void f_mg442_01056fac(wp::Cpu& c);
void f_mg442_010573c0(wp::Cpu& c);
void f_mg442_01057604(wp::Cpu& c);
void f_mg442_01057650(wp::Cpu& c);
void f_mg442_01057680(wp::Cpu& c);
void f_mg442_010576a0(wp::Cpu& c);
void f_mg442_01057740(wp::Cpu& c);
void f_mg442_010577b0(wp::Cpu& c);
void f_mg442_01057880(wp::Cpu& c);
void f_mg442_01057bd0(wp::Cpu& c);
void f_mg442_01057ce0(wp::Cpu& c);
void f_mg442_01057d80(wp::Cpu& c);
void f_mg442_01057ed0(wp::Cpu& c);
void f_mg442_010585e0(wp::Cpu& c);
void f_mg442_01058720(wp::Cpu& c);
void f_mg442_01058820(wp::Cpu& c);
void f_mg442_01058860(wp::Cpu& c);
void f_mg442_010588a0(wp::Cpu& c);
void f_mg442_01058940(wp::Cpu& c);
void f_mg442_01058ab0(wp::Cpu& c);
void f_mg442_01058b20(wp::Cpu& c);
void f_mg442_01058bc0(wp::Cpu& c);
void f_mg442_01058cf0(wp::Cpu& c);
void f_mg442_01058e10(wp::Cpu& c);
void f_mg442_010596c0(wp::Cpu& c);
void f_mg442_01059730(wp::Cpu& c);
void f_mg442_01059740(wp::Cpu& c);
void f_mg442_01059770(wp::Cpu& c);
void f_mg442_010597c0(wp::Cpu& c);
void f_mg442_010597e0(wp::Cpu& c);
void f_mg442_010597f0(wp::Cpu& c);
void f_mg442_01059810(wp::Cpu& c);
void f_mg442_01059820(wp::Cpu& c);
void f_mg442_01059830(wp::Cpu& c);
void f_mg442_01059840(wp::Cpu& c);
void f_mg442_010598a0(wp::Cpu& c);
void f_mg442_010598f0(wp::Cpu& c);
void f_mg442_01059920(wp::Cpu& c);
void f_mg442_010599a0(wp::Cpu& c);
void f_mg442_010599b0(wp::Cpu& c);
void f_mg442_010599c0(wp::Cpu& c);
void f_mg442_010599d0(wp::Cpu& c);
void f_mg442_010599e0(wp::Cpu& c);
void f_mg442_010599f0(wp::Cpu& c);
void f_mg442_01059a00(wp::Cpu& c);
void f_mg442_01059a10(wp::Cpu& c);
void f_mg442_01059a20(wp::Cpu& c);
void f_mg442_01059a30(wp::Cpu& c);
void f_mg442_01059a40(wp::Cpu& c);
void f_mg442_01059a50(wp::Cpu& c);
void f_mg442_01059a60(wp::Cpu& c);
void f_mg442_01059a70(wp::Cpu& c);
void f_mg442_01059a80(wp::Cpu& c);
void f_mg442_01059bc0(wp::Cpu& c);
void f_mg442_01059ce0(wp::Cpu& c);
void f_mg442_01059e70(wp::Cpu& c);
void f_mg442_01059ee0(wp::Cpu& c);
void f_mg442_01059ef0(wp::Cpu& c);
void f_mg442_01059fa0(wp::Cpu& c);
void f_mg442_0105a050(wp::Cpu& c);
void f_mg442_0105a100(wp::Cpu& c);
void f_mg442_0105a2d0(wp::Cpu& c);
void f_mg442_0105a460(wp::Cpu& c);
void f_mg442_0105a5f0(wp::Cpu& c);
void f_mg442_0105ad80(wp::Cpu& c);
void f_mg442_0105b4d0(wp::Cpu& c);
void f_mg442_0105bd80(wp::Cpu& c);
void f_mg442_0105c5f0(wp::Cpu& c);
void f_mg442_0105c600(wp::Cpu& c);
void f_mg442_0105c610(wp::Cpu& c);
void f_mg442_0105c620(wp::Cpu& c);
void f_mg442_0105c630(wp::Cpu& c);
void f_mg442_0105c720(wp::Cpu& c);
void f_mg442_0105c780(wp::Cpu& c);
void f_mg442_0105c860(wp::Cpu& c);
void f_mg442_0105c920(wp::Cpu& c);
void f_mg442_0105ca00(wp::Cpu& c);
void f_mg442_0105ca80(wp::Cpu& c);
void f_mg442_0105cdf0(wp::Cpu& c);
void f_mg442_0105cf20(wp::Cpu& c);
void f_mg442_0105cfd0(wp::Cpu& c);
void f_mg442_0105d070(wp::Cpu& c);
void f_mg442_0105d180(wp::Cpu& c);
void f_mg442_0105d1d0(wp::Cpu& c);
void f_mg442_0105d220(wp::Cpu& c);
void f_mg442_0105d270(wp::Cpu& c);
void f_mg442_0105d560(wp::Cpu& c);
void f_mg442_0105d5f0(wp::Cpu& c);
void f_mg442_0105d640(wp::Cpu& c);
void f_mg442_0105d690(wp::Cpu& c);
void f_mg442_0105d760(wp::Cpu& c);
void f_mg442_0105d950(wp::Cpu& c);
void f_mg442_0105d990(wp::Cpu& c);
void f_mg442_0105d9f0(wp::Cpu& c);
void f_mg442_0105da60(wp::Cpu& c);
void f_mg442_0105dcd0(wp::Cpu& c);
void f_mg442_0105dd30(wp::Cpu& c);
void f_mg442_0105df40(wp::Cpu& c);
void f_mg442_0105df50(wp::Cpu& c);
void f_mg442_0105df80(wp::Cpu& c);
void f_mg442_0105e150(wp::Cpu& c);
void f_mg442_0105e170(wp::Cpu& c);
void f_mg442_0105e1e0(wp::Cpu& c);
void f_mg442_0105e250(wp::Cpu& c);
void f_mg442_0105e2c0(wp::Cpu& c);
void f_mg442_0105e340(wp::Cpu& c);
void f_mg442_0105e3b0(wp::Cpu& c);
void f_mg442_0105e630(wp::Cpu& c);
void f_mg442_0105e710(wp::Cpu& c);
void f_mg442_0105e810(wp::Cpu& c);
void f_mg442_0105e8f0(wp::Cpu& c);
void f_mg442_0105e9d0(wp::Cpu& c);
void f_mg442_0105eab0(wp::Cpu& c);
void f_mg442_0105eb90(wp::Cpu& c);
void f_mg442_0105f2c0(wp::Cpu& c);
void f_mg442_0105f2d0(wp::Cpu& c);
void f_mg442_0105f2e0(wp::Cpu& c);
void f_mg442_0105f400(wp::Cpu& c);
void f_mg442_0105f440(wp::Cpu& c);
void f_mg442_0105f460(wp::Cpu& c);
void f_mg442_0105f4f0(wp::Cpu& c);
void f_mg442_0105f5e0(wp::Cpu& c);
void f_mg442_0105f6d0(wp::Cpu& c);
void f_mg442_0105f810(wp::Cpu& c);
void f_mg442_0105f950(wp::Cpu& c);
void f_mg442_0105fa50(wp::Cpu& c);
void f_mg442_0105fa90(wp::Cpu& c);
void f_mg442_0105fc80(wp::Cpu& c);
void f_mg442_0105fd00(wp::Cpu& c);
void f_mg442_0105fd80(wp::Cpu& c);
void f_mg442_0105fe00(wp::Cpu& c);
void f_mg442_010600f0(wp::Cpu& c);
void f_mg442_01060290(wp::Cpu& c);
void f_mg442_01060430(wp::Cpu& c);
void f_mg442_01060540(wp::Cpu& c);
void f_mg442_01060640(wp::Cpu& c);
void f_mg442_01060770(wp::Cpu& c);
void f_mg442_01060870(wp::Cpu& c);
void f_mg442_01060880(wp::Cpu& c);
void f_mg442_01060980(wp::Cpu& c);
void f_mg442_01060990(wp::Cpu& c);
void f_mg442_010609e0(wp::Cpu& c);
void f_mg442_01060b80(wp::Cpu& c);
void f_mg442_01060ca0(wp::Cpu& c);
void f_mg442_01060d30(wp::Cpu& c);
void f_mg442_01060e70(wp::Cpu& c);
void f_mg442_01060f80(wp::Cpu& c);
void f_mg442_01060fe0(wp::Cpu& c);
void f_mg442_01061230(wp::Cpu& c);
void f_mg442_01061ee0(wp::Cpu& c);
void f_mg442_01062270(wp::Cpu& c);
void f_mg442_010622a0(wp::Cpu& c);
void f_mg442_01062370(wp::Cpu& c);
void f_mg442_01062510(wp::Cpu& c);
void f_mg442_01062520(wp::Cpu& c);
void f_mg442_01062530(wp::Cpu& c);
void f_mg442_010625c0(wp::Cpu& c);
void f_mg442_01062690(wp::Cpu& c);
void f_mg442_01062720(wp::Cpu& c);
void f_mg442_01062730(wp::Cpu& c);
void f_mg442_01062780(wp::Cpu& c);
void f_mg442_01062940(wp::Cpu& c);
void f_mg442_01062b00(wp::Cpu& c);
void f_mg442_01062b80(wp::Cpu& c);
void f_mg442_01062bf0(wp::Cpu& c);
void f_mg442_01062fb0(wp::Cpu& c);
void f_mg442_010630e0(wp::Cpu& c);
void f_mg442_010630f0(wp::Cpu& c);
void f_mg442_010631e0(wp::Cpu& c);
void f_mg442_010632c0(wp::Cpu& c);
void f_mg442_01063390(wp::Cpu& c);
void f_mg442_01063480(wp::Cpu& c);
void f_mg442_01063560(wp::Cpu& c);
void f_mg442_01063840(wp::Cpu& c);
void f_mg442_01063910(wp::Cpu& c);
void f_mg442_01063be0(wp::Cpu& c);
void f_mg442_01063cc0(wp::Cpu& c);
void f_mg442_01063ce0(wp::Cpu& c);
void f_mg442_01063e00(wp::Cpu& c);
void f_mg442_01063e90(wp::Cpu& c);
void f_mg442_01063f10(wp::Cpu& c);
void f_mg442_01064030(wp::Cpu& c);
void f_mg442_01064130(wp::Cpu& c);
void f_mg442_010646b0(wp::Cpu& c);
void f_mg442_010646c0(wp::Cpu& c);
void f_mg442_010646f0(wp::Cpu& c);
void f_mg442_01064700(wp::Cpu& c);
void f_mg442_010648d0(wp::Cpu& c);
void f_mg442_01064a10(wp::Cpu& c);
void f_mg442_01064a20(wp::Cpu& c);
void f_mg442_01064b70(wp::Cpu& c);
void f_mg442_01064c30(wp::Cpu& c);
void f_mg442_01064d00(wp::Cpu& c);
void f_mg442_01064d70(wp::Cpu& c);
void f_mg442_01064de0(wp::Cpu& c);
void f_mg442_01064e00(wp::Cpu& c);
void f_mg442_01064e70(wp::Cpu& c);
void f_mg442_01064f30(wp::Cpu& c);
void f_mg442_01065470(wp::Cpu& c);
void f_mg442_01065810(wp::Cpu& c);
void f_mg442_01065830(wp::Cpu& c);
void f_mg442_01065b40(wp::Cpu& c);
void f_mg442_01065b50(wp::Cpu& c);
void f_mg442_01065b60(wp::Cpu& c);
void f_mg442_01065f60(wp::Cpu& c);
void f_mg442_01066070(wp::Cpu& c);
void f_mg442_010660f0(wp::Cpu& c);
void f_mg442_01066150(wp::Cpu& c);
void f_mg442_01066290(wp::Cpu& c);
void f_mg442_010662a0(wp::Cpu& c);
void f_mg442_010662b0(wp::Cpu& c);
void f_mg442_010662c0(wp::Cpu& c);
void f_mg442_01066380(wp::Cpu& c);
void f_mg442_01066600(wp::Cpu& c);
void f_mg442_01066630(wp::Cpu& c);
void f_mg442_01066650(wp::Cpu& c);
void f_mg442_010666b0(wp::Cpu& c);
void f_mg442_01066930(wp::Cpu& c);
void f_mg442_01066950(wp::Cpu& c);
void f_mg442_01066970(wp::Cpu& c);
void f_mg442_010669e0(wp::Cpu& c);
void f_mg442_01066a60(wp::Cpu& c);
void f_mg442_01066a80(wp::Cpu& c);
void f_mg442_01066aa0(wp::Cpu& c);
void f_mg442_01066ac0(wp::Cpu& c);
void f_mg442_01066b00(wp::Cpu& c);
void f_mg442_01066b20(wp::Cpu& c);
void f_mg442_01066b40(wp::Cpu& c);
void f_mg442_01066b60(wp::Cpu& c);
void f_mg442_01066b80(wp::Cpu& c);
void f_mg442_01066ba0(wp::Cpu& c);
void f_mg442_01066be0(wp::Cpu& c);
void f_mg442_01066db0(wp::Cpu& c);
void f_mg442_01066dd0(wp::Cpu& c);
void f_mg442_01066e00(wp::Cpu& c);
void f_mg442_01066e30(wp::Cpu& c);
void f_mg442_01066e60(wp::Cpu& c);
void f_mg442_01066e90(wp::Cpu& c);
void f_mg442_01066eb0(wp::Cpu& c);
void f_mg442_01066ee0(wp::Cpu& c);
void f_mg442_01066f00(wp::Cpu& c);
void f_mg442_01066f20(wp::Cpu& c);
void f_mg442_01066f30(wp::Cpu& c);
void f_mg442_01066f40(wp::Cpu& c);
void f_mg442_01066fb0(wp::Cpu& c);
void f_mg442_01066fc0(wp::Cpu& c);
void f_mg442_01066fd0(wp::Cpu& c);
void f_mg442_01066fe0(wp::Cpu& c);
void f_mg442_01067000(wp::Cpu& c);
void f_mg442_01067070(wp::Cpu& c);
void f_mg442_01067080(wp::Cpu& c);
void f_mg442_01067090(wp::Cpu& c);
void f_mg442_010670a0(wp::Cpu& c);
void f_mg442_010670b0(wp::Cpu& c);
void f_mg442_010670c0(wp::Cpu& c);
void f_mg442_010670d0(wp::Cpu& c);
void f_mg442_010670e0(wp::Cpu& c);
void f_mg442_010670f0(wp::Cpu& c);
void f_mg442_01067100(wp::Cpu& c);
void f_mg442_01067110(wp::Cpu& c);
void f_mg442_01067120(wp::Cpu& c);
void f_mg442_01067180(wp::Cpu& c);
void f_mg442_010671e0(wp::Cpu& c);
void f_mg442_01067590(wp::Cpu& c);
void f_mg442_010677e0(wp::Cpu& c);
void f_mg442_01067c70(wp::Cpu& c);
void f_mg442_01067c80(wp::Cpu& c);

void f_mg442_01055390(wp::Cpu& c) {
    WP_ENTER(0x1055390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055398u: goto R_01055398;
        case 0x10553c4u: goto R_010553c4;
        case 0x10553f0u: goto R_010553f0;
        case 0x1055414u: goto R_01055414;
        case 0x1055458u: goto R_01055458;
        case 0x1055468u: goto R_01055468;
        case 0x105547cu: goto R_0105547c;
        case 0x105548cu: goto R_0105548c;
        case 0x10554a4u: goto R_010554a4;
        case 0x10554b4u: goto R_010554b4;
        case 0x10554c8u: goto R_010554c8;
        case 0x10554d8u: goto R_010554d8;
        case 0x10554f4u: goto R_010554f4;
        case 0x1055504u: goto R_01055504;
        case 0x105550cu: goto R_0105550c;
        case 0x105551cu: goto R_0105551c;
        case 0x1055544u: goto R_01055544;
        case 0x1055554u: goto R_01055554;
        case 0x1055568u: goto R_01055568;
        case 0x1055578u: goto R_01055578;
        case 0x10555acu: goto R_010555ac;
        case 0x10555bcu: goto R_010555bc;
        case 0x10555d0u: goto R_010555d0;
        case 0x10555e0u: goto R_010555e0;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x144u;
    c.lr = 0x1055398u;
    f_801c79a4(c);
R_01055398:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010553c8;
    c.r[4] = c.r[1] + 0x2c0u;
    c.r[5] = c.r[1] + 0x2c4u;
    c.r[6] = c.r[1] + 0x2c8u;
    ea = c.r[4] + c.r[22];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[22];
    c.r[5] = wp::rd32(ea);
    c.r[7] = c.r[23] | c.r[23];
    ea = c.r[6] + c.r[22];
    c.r[6] = wp::rd32(ea);
    c.lr = 0x10553c4u;
    f_mg442_0105c780(c);
R_010553c4:
    c.r[29] = c.r[3] | c.r[3];
L_010553c8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10553f0u;
    wp::call(c, c.ctr);
R_010553f0:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055414;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055414;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055414u;
    f_80018e30(c);
L_01055414:
R_01055414:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_010555ec(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[25], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01055434;
    wp::compare_signed(c, 0, c.r[25], 0x6u);
    if (wp::cr_get(c, 2)) goto L_01055434;
    wp::compare_signed(c, 0, c.r[25], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_01055520;
L_01055434:
    ea = c.r[30] + 0x800u;
    c.f[31] = wp::rdf64(ea);
    c.r[19] = 0x0u;
L_0105543c:
    wp::compare_signed(c, 0, c.r[25], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_01055490;
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa48u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x1055458u;
    f_80071fe0(c);
R_01055458:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x48fu;
    c.lr = 0x1055468u;
    f_mg442_0105d270(c);
R_01055468:
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa40u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x105547cu;
    f_80071fe0(c);
R_0105547c:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[19] + 0x1beu;
    c.lr = 0x105548cu;
    f_mg442_0105d270(c);
R_0105548c:
    goto L_010554d8;
L_01055490:
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa48u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x10554a4u;
    f_80071fe0(c);
R_010554a4:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x495u;
    c.lr = 0x10554b4u;
    f_mg442_0105d270(c);
R_010554b4:
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa40u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x10554c8u;
    f_80071fe0(c);
R_010554c8:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[19] + 0x1aeu;
    c.lr = 0x10554d8u;
    f_mg442_0105d270(c);
L_010554d8:
R_010554d8:
    c.r[19] = c.r[19] + 0x1u;
    wp::compare_signed(c, 0, c.r[19], 0x3u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105543c;
    }
    wp::compare_signed(c, 0, c.r[25], 0x5u);
    if (!wp::cr_get(c, 2)) {
    f_mg442_010555ec(c);
    return;
    }
    ea = c.r[30] + 0x7f8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10554f4u;
    f_80071fe0(c);
R_010554f4:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1a2u;
    c.lr = 0x1055504u;
    f_mg442_0105d270(c);
R_01055504:
    ea = c.r[30] + 0x7f8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x105550cu;
    f_80071fe0(c);
R_0105550c:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1c2u;
    c.lr = 0x105551cu;
    f_mg442_0105d270(c);
R_0105551c:
    f_mg442_010555ec(c);
    return;
L_01055520:
    wp::compare_signed(c, 0, c.r[25], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_01055588;
    ea = c.r[30] + 0x800u;
    c.f[31] = wp::rdf64(ea);
    c.r[19] = 0x0u;
L_01055530:
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa48u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x1055544u;
    f_80071fe0(c);
R_01055544:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x48fu;
    c.lr = 0x1055554u;
    f_mg442_0105d270(c);
R_01055554:
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa40u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x1055568u;
    f_80071fe0(c);
R_01055568:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[19] + 0x1bcu;
    c.lr = 0x1055578u;
    f_mg442_0105d270(c);
R_01055578:
    c.r[19] = c.r[19] + 0x1u;
    wp::compare_signed(c, 0, c.r[19], 0x5u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01055530;
    }
    f_mg442_010555ec(c);
    return;
L_01055588:
    wp::compare_signed(c, 0, c.r[25], 0x7u);
    if (!wp::cr_get(c, 2)) {
    f_mg442_010555ec(c);
    return;
    }
    ea = c.r[30] + 0x800u;
    c.f[31] = wp::rdf64(ea);
    c.r[19] = 0x0u;
L_01055598:
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa48u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x10555acu;
    f_80071fe0(c);
R_010555ac:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x48fu;
    c.lr = 0x10555bcu;
    f_mg442_0105d270(c);
R_010555bc:
    c.r[0] = c.r[19] ^ 0x80000000u;
    ea = c.r[1] + 0xa44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xa40u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[1] = c.f[1];
    c.lr = 0x10555d0u;
    f_80071fe0(c);
R_010555d0:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[19] + 0x1b7u;
    c.lr = 0x10555e0u;
    f_mg442_0105d270(c);
R_010555e0:
    c.r[19] = c.r[19] + 0x1u;
    wp::compare_signed(c, 0, c.r[19], 0xau);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01055598;
    }
    f_mg442_010555ec(c);
}

void f_mg442_010555ec(wp::Cpu& c) {
    WP_ENTER(0x10555ecu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105564cu: goto R_0105564c;
        case 0x1055650u: goto R_01055650;
        case 0x10556b0u: goto R_010556b0;
        case 0x10556b4u: goto R_010556b4;
        case 0x1055770u: goto R_01055770;
        case 0x1055774u: goto R_01055774;
        case 0x105577cu: goto R_0105577c;
        case 0x10557a4u: goto R_010557a4;
        case 0x10557a8u: goto R_010557a8;
        case 0x1055808u: goto R_01055808;
        case 0x1055818u: goto R_01055818;
        case 0x1055868u: goto R_01055868;
        case 0x1055880u: goto R_01055880;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = ((((g_mg442_bases[6] + 0x97cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[6] + 0x97cu) & 0xFFFFu);
    c.r[23] = wp::rd32(ea);
    ea = c.r[23] + 0x1c0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[23] + 0x1c4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01055620;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x1c0u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[23] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    goto L_01055868;
L_01055620:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01055650;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + 0x1cu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105564cu;
    f_801cee24(c);
R_0105564c:
    c.lr = 0x1055650u;
    f_801d3940(c);
L_01055650:
R_01055650:
    ea = c.r[23] + 0x1c0u;
    c.r[4] = wp::rd32(ea);
    c.r[7] = 0x0u;
    ea = c.r[23] + 0x1c4u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[23] + 0x1c4u;
    c.r[0] = c.r[4] + 0x1u;
    c.r[3] = 0x40000000u;
    c.r[4] = c.r[0] - c.r[5];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[23] + 0x1c4u;
    c.r[22] = wp::rd32(ea);
    ea = c.r[1] + 0x198u;
    wp::wr32(ea, c.r[7]);
    c.r[0] = c.r[0] - c.r[22];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    ea = c.r[1] + 0x19cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1a0u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1a4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x1a8u;
    wp::wr32(ea, c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_010556b4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + 0x1cu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10556b0u;
    f_801cee24(c);
R_010556b0:
    c.lr = 0x10556b4u;
    f_801d3940(c);
L_010556b4:
R_010556b4:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[22], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01055704;
    c.r[5] = c.r[22] + 0x1u;
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
    if (!wp::cr_get(c, 0)) goto L_010556f8;
    c.r[3] = c.r[1] + 0x10u;
L_010556f8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[19] = c.r[22] + c.r[0];
    goto L_01055748;
L_01055704:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[22], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01055740;
    c.r[3] = c.r[22] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01055734;
    c.r[3] = c.r[1] + 0x10u;
L_01055734:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[19] = c.r[22] + c.r[0];
    goto L_01055748;
L_01055740:
    c.r[3] = 0x40000000u;
    c.r[19] = c.r[3] + 0xffffffffu;
L_01055748:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01055774;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + 0x1cu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1055770u;
    f_801cee24(c);
R_01055770:
    c.lr = 0x1055774u;
    f_801d3940(c);
L_01055774:
R_01055774:
    c.r[3] = wp::rotl(c.r[19], 2) & 0xfffffffcu;
    c.lr = 0x105577cu;
    f_801c79a4(c);
R_0105577c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[20] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010557a8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10557a4u;
    f_801cee24(c);
R_010557a4:
    c.lr = 0x10557a8u;
    f_801d3940(c);
L_010557a8:
R_010557a8:
    ea = c.r[23] + 0x1c0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x19cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x1a0u;
    wp::wr32(ea, c.r[19]);
    c.r[4] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x1u;
    c.r[0] = c.r[20] + c.r[0];
    ea = c.r[1] + 0x19cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + c.r[0];
    wp::wr32(ea, c.r[29]);
    ea = c.r[23] + 0x1c0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[23] + 0x1bcu;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[21] + c.r[0];
    c.r[4] = c.r[21] | c.r[21];
    c.r[0] = c.r[0] - c.r[21];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[19] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] - c.r[19];
    ea = c.r[1] + 0x1a8u;
    wp::wr32(ea, c.r[0]);
    c.r[22] = wp::rotl(c.r[19], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[22] | c.r[22];
    c.r[3] = c.r[20] + c.r[0];
    c.lr = 0x1055808u;
    f_800043c4(c);
R_01055808:
    c.r[3] = c.r[21] | c.r[21];
    c.r[5] = c.r[22] | c.r[22];
    c.r[4] = 0x0u;
    c.lr = 0x1055818u;
    f_80004714(c);
R_01055818:
    c.r[4] = 0x0u;
    ea = c.r[23] + 0x1c0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x19cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[1], 0x198u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[23] + 0x1c4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x1a0u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[3] + c.r[19];
    ea = c.r[23] + 0x1c4u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[20] | c.r[20];
    ea = c.r[23] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x1a0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[23] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x198u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[23] + 0x1c0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x19cu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01055868;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055868;
    ea = c.r[1] + 0x19cu;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1055868u;
    f_801c7a8c(c);
L_01055868:
R_01055868:
    c.r[0] = 0xa98u;
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + c.r[0];
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa90u;
    c.f[31] = wp::rdf64(ea);
    c.r[11] = c.r[1] + 0xa90u;
    c.lr = 0x1055880u;
    f_801c83e4(c);
R_01055880:
    ea = c.r[1] + 0xaa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xaa0u;
    return;
}

void f_mg442_01055890(wp::Cpu& c) {
    WP_ENTER(0x1055890u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xbbu;
    c.r[5] = wp::rd8(ea);
    c.r[0] = c.r[4] & 0xffu;
    c.r[4] = c.r[5] & 0xfeu;
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[3] + 0xbbu;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mg442_010558b0(wp::Cpu& c) {
    WP_ENTER(0x10558b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mg442_010558d0(wp::Cpu& c) {
    WP_ENTER(0x10558d0u);
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
    ea = c.r[3] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    return;
}

void f_mg442_010558f0(wp::Cpu& c) {
    WP_ENTER(0x10558f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105590cu: goto R_0105590c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffbb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x454u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x440u;
    ea = c.r[1] + 0x440u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x448u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105590cu;
    f_801c8384(c);
R_0105590c:
    c.r[30] = ((((g_mg442_bases[4] + 0x1448u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x43300000u;
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x1448u) & 0xFFFFu);
    c.r[31] = ((((g_mg442_bases[5] + 0x22380u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[30] + 0x808u;
    c.r[0] = 0x5cu;
    c.r[23] = c.r[7] | c.r[7];
    c.r[21] = c.r[3] | c.r[3];
    c.r[22] = c.r[4] | c.r[4];
    c.r[24] = c.r[8] | c.r[8];
    c.r[25] = c.r[9] | c.r[9];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[10]);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg442_bases[5] + 0x22380u) & 0xFFFFu);
    c.r[7] = c.r[3] + 0xffffff89u;
    ea = c.r[1] + 0x3a8u;
    wp::wr32(ea, c.r[11]);
    c.r[6] = c.r[1] + 0xbcu;
    c.r[5] = c.r[5] + 0xfffffffcu;
    ea = c.r[1] + 0x3b0u;
    wp::wr32(ea, c.r[11]);
    c.ctr = c.r[0];
L_01055958:
    ea = c.r[5] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[6] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[6] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01055958;
    }
    ea = c.r[5] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffff89u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[30] + 0xb10u;
    c.r[4] = c.r[30] + 0xb40u;
    wp::compare_unsigned(c, 0, c.r[0], 0x24u);
    ea = c.r[4] + 0x4u;
    c.r[15] = wp::rd32(ea);
    c.r[29] = c.r[7] * 0x14u;
    ea = c.r[1] + 0x3e8u;
    wp::wr32(ea, c.r[15]);
    c.r[28] = 0x0u;
    ea = c.r[4] + 0x8u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[16] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    c.r[17] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    c.r[18] = wp::rd32(ea);
    ea = c.r[5] + 0x14u;
    c.r[19] = wp::rd32(ea);
    ea = c.r[5] + 0x18u;
    c.r[20] = wp::rd32(ea);
    ea = c.r[5] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + 0x20u;
    c.r[11] = wp::rd32(ea);
    ea = c.r[5] + 0x24u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[5] + 0x28u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x2cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3b8u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0xcu;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x3bcu;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x10u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0xbcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3e8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3c0u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x14u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3b8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3c4u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x18u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3bcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3c8u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x1cu;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3c0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3ccu;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x20u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3c4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3d0u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x24u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3c8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3d4u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x28u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3ccu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3d8u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x2cu;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3d0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3dcu;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x30u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3d4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3e0u;
    wp::wr32(ea, c.r[15]);
    ea = c.r[4] + 0x34u;
    c.r[15] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3d8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3e4u;
    wp::wr32(ea, c.r[15]);
    c.r[15] = c.r[1] + 0xccu;
    ea = c.r[30] + 0xb10u;
    c.r[27] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3dcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3e0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[30] + 0xb40u;
    c.r[14] = wp::rd32(ea);
    ea = c.r[4] + 0x38u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[15] + c.r[29];
    c.r[27] = wp::rd32(ea);
    c.r[15] = c.r[1] + 0xd0u;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3e4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[15] + c.r[29];
    c.r[26] = wp::rd32(ea);
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[16]);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[17]);
    ea = c.r[1] + 0xa0u;
    wp::wr32(ea, c.r[18]);
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[1] + 0xa8u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0xacu;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0xb0u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xb8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[14]);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 1)) {
    f_mg442_01057650(c);
    return;
    }
    c.r[4] = ((((g_mg442_bases[5] + 0x25188u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25188u) & 0xFFFFu);
    ea = c.r[4] + c.r[0];
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[4];
    switch (c.ctr - g_mg442_bases[1]) {
    case 0x55af8u: f_mg442_01055af8(c); return;
    case 0x55b78u: f_mg442_01055b78(c); return;
    case 0x55c10u: f_mg442_01055c10(c); return;
    case 0x55c90u: f_mg442_01055c90(c); return;
    case 0x55d10u: f_mg442_01055d10(c); return;
    case 0x55d90u: f_mg442_01055d90(c); return;
    case 0x55e50u: f_mg442_01055e50(c); return;
    case 0x55ed8u: f_mg442_01055ed8(c); return;
    case 0x56148u: f_mg442_01056148(c); return;
    case 0x5621cu: f_mg442_0105621c(c); return;
    case 0x5634cu: f_mg442_0105634c(c); return;
    case 0x563f8u: f_mg442_010563f8(c); return;
    case 0x56c18u: f_mg442_01056c18(c); return;
    case 0x56dd4u: f_mg442_01056dd4(c); return;
    case 0x56facu: f_mg442_01056fac(c); return;
    case 0x573c0u: f_mg442_010573c0(c); return;
    case 0x57604u: f_mg442_01057604(c); return;
    default: wp::unresolved_jump(c, c.ctr);
    }
}

void f_mg442_01055af8(wp::Cpu& c) {
    WP_ENTER(0x1055af8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055b00u: goto R_01055b00;
        case 0x1055b34u: goto R_01055b34;
        case 0x1055b50u: goto R_01055b50;
        case 0x1055b74u: goto R_01055b74;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1055b00u;
    f_801c79a4(c);
R_01055b00:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055b34;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x249c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x249c0u) & 0xFFFFu);
    c.r[7] = 0x3u;
    c.r[8] = 0x1u;
    c.r[9] = 0x0u;
    c.lr = 0x1055b34u;
    f_mg442_01057880(c);
L_01055b34:
R_01055b34:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01055b50;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055b50;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1055b50u;
    f_8001a480(c);
L_01055b50:
R_01055b50:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055b74u;
    f_80018e30(c);
R_01055b74:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01055b78(wp::Cpu& c) {
    WP_ENTER(0x1055b78u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055b80u: goto R_01055b80;
        case 0x1055ba8u: goto R_01055ba8;
        case 0x1055bd0u: goto R_01055bd0;
        case 0x1055be8u: goto R_01055be8;
        case 0x1055c0cu: goto R_01055c0c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x144u;
    c.lr = 0x1055b80u;
    f_801c79a4(c);
R_01055b80:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055ba8;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = c.r[1] + 0xc8u;
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[7] = c.r[22] | c.r[22];
    ea = c.r[6] + c.r[29];
    c.r[6] = wp::rd32(ea);
    c.lr = 0x1055ba8u;
    f_mg442_0105c780(c);
L_01055ba8:
R_01055ba8:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1055bd0u;
    wp::call(c, c.ctr);
R_01055bd0:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055be8;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055be8;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1055be8u;
    f_8001a480(c);
L_01055be8:
R_01055be8:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055c0cu;
    f_80018e30(c);
R_01055c0c:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01055c10(wp::Cpu& c) {
    WP_ENTER(0x1055c10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055c18u: goto R_01055c18;
        case 0x1055c4cu: goto R_01055c4c;
        case 0x1055c68u: goto R_01055c68;
        case 0x1055c8cu: goto R_01055c8c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1055c18u;
    f_801c79a4(c);
R_01055c18:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055c4c;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x249f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x249f0u) & 0xFFFFu);
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1055c4cu;
    f_mg442_01057880(c);
L_01055c4c:
R_01055c4c:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01055c68;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055c68;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1055c68u;
    f_8001a480(c);
L_01055c68:
R_01055c68:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055c8cu;
    f_80018e30(c);
R_01055c8c:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01055c90(wp::Cpu& c) {
    WP_ENTER(0x1055c90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055c98u: goto R_01055c98;
        case 0x1055cccu: goto R_01055ccc;
        case 0x1055ce8u: goto R_01055ce8;
        case 0x1055d0cu: goto R_01055d0c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1055c98u;
    f_801c79a4(c);
R_01055c98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055ccc;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24a20u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24a20u) & 0xFFFFu);
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1055cccu;
    f_mg442_01057880(c);
L_01055ccc:
R_01055ccc:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01055ce8;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055ce8;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1055ce8u;
    f_8001a480(c);
L_01055ce8:
R_01055ce8:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055d0cu;
    f_80018e30(c);
R_01055d0c:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01055d10(wp::Cpu& c) {
    WP_ENTER(0x1055d10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055d18u: goto R_01055d18;
        case 0x1055d4cu: goto R_01055d4c;
        case 0x1055d68u: goto R_01055d68;
        case 0x1055d8cu: goto R_01055d8c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1055d18u;
    f_801c79a4(c);
R_01055d18:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055d4c;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24a58u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24a58u) & 0xFFFFu);
    c.r[7] = 0x3u;
    c.r[8] = 0x1u;
    c.r[9] = 0x0u;
    c.lr = 0x1055d4cu;
    f_mg442_01057880(c);
L_01055d4c:
R_01055d4c:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01055d68;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055d68;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1055d68u;
    f_8001a480(c);
L_01055d68:
R_01055d68:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055d8cu;
    f_80018e30(c);
R_01055d8c:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01055d90(wp::Cpu& c) {
    WP_ENTER(0x1055d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055d98u: goto R_01055d98;
        case 0x1055dc4u: goto R_01055dc4;
        case 0x1055df0u: goto R_01055df0;
        case 0x1055e10u: goto R_01055e10;
        case 0x1055e28u: goto R_01055e28;
        case 0x1055e4cu: goto R_01055e4c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x144u;
    c.lr = 0x1055d98u;
    f_801c79a4(c);
R_01055d98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01055dc8;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = c.r[1] + 0xc8u;
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[7] = c.r[22] | c.r[22];
    ea = c.r[6] + c.r[29];
    c.r[6] = wp::rd32(ea);
    c.lr = 0x1055dc4u;
    f_mg442_0105c780(c);
R_01055dc4:
    c.r[28] = c.r[3] | c.r[3];
L_01055dc8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1055df0u;
    wp::call(c, c.ctr);
R_01055df0:
    wp::compare_signed(c, 0, c.r[21], 0x88u);
    if (!wp::cr_get(c, 2)) goto L_01055e10;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1055e10u;
    wp::call(c, c.ctr);
L_01055e10:
R_01055e10:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055e28;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055e28;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1055e28u;
    f_8001a480(c);
L_01055e28:
R_01055e28:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055e4cu;
    f_80018e30(c);
R_01055e4c:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01055e50(wp::Cpu& c) {
    WP_ENTER(0x1055e50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055e58u: goto R_01055e58;
        case 0x1055e94u: goto R_01055e94;
        case 0x1055eb0u: goto R_01055eb0;
        case 0x1055ed4u: goto R_01055ed4;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1055e58u;
    f_801c79a4(c);
R_01055e58:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055e94;
    c.r[0] = c.r[21] + 0xffffff84u;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[0] = c.r[0] * 0xcu;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = c.r[1] + 0x90u;
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x3u;
    c.r[8] = 0x1u;
    c.r[9] = 0x0u;
    c.lr = 0x1055e94u;
    f_mg442_01057880(c);
L_01055e94:
R_01055e94:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01055eb0;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01055eb0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1055eb0u;
    f_8001a480(c);
L_01055eb0:
R_01055eb0:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1055ed4u;
    f_80018e30(c);
R_01055ed4:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01055ed8(wp::Cpu& c) {
    WP_ENTER(0x1055ed8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1055eecu: goto R_01055eec;
        case 0x1055f28u: goto R_01055f28;
        case 0x1055f38u: goto R_01055f38;
        case 0x1055f70u: goto R_01055f70;
        case 0x1055f80u: goto R_01055f80;
        case 0x1055f84u: goto R_01055f84;
        case 0x1055fa4u: goto R_01055fa4;
        case 0x1056044u: goto R_01056044;
        case 0x1056088u: goto R_01056088;
        case 0x10560f0u: goto R_010560f0;
        case 0x1056120u: goto R_01056120;
        case 0x1056144u: goto R_01056144;
        default: wp::bad_resume(c);
        }
    }
    c.r[0] = c.r[3] + 0xffffff7du;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 1)) goto L_01055f30;
    c.r[3] = 0x164u;
    c.lr = 0x1055eecu;
    f_801c79a4(c);
R_01055eec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055f28;
    c.r[0] = c.r[21] + 0xffffff80u;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[0] = c.r[0] * 0xcu;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = c.r[1] + 0x54u;
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x3u;
    c.r[8] = 0x1u;
    c.r[9] = 0x0u;
    c.lr = 0x1055f28u;
    f_mg442_01057880(c);
L_01055f28:
R_01055f28:
    c.r[28] = c.r[3] | c.r[3];
    goto L_01055f74;
L_01055f30:
    c.r[3] = 0x164u;
    c.lr = 0x1055f38u;
    f_801c79a4(c);
R_01055f38:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055f70;
    c.r[0] = c.r[21] + 0xffffff80u;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[0] = c.r[0] * 0xcu;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = c.r[1] + 0x54u;
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[8] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[9] = 0x1u;
    c.lr = 0x1055f70u;
    f_mg442_010576a0(c);
L_01055f70:
R_01055f70:
    c.r[28] = c.r[3] | c.r[3];
L_01055f74:
    wp::compare_signed(c, 0, c.r[21], 0x83u);
    if (!wp::cr_get(c, 2)) goto L_0105608c;
    c.lr = 0x1055f80u;
    f_80007730(c);
R_01055f80:
    c.lr = 0x1055f84u;
    f_8000a2c0(c);
R_01055f84:
    c.r[4] = ((((g_mg442_bases[4] + 0x1fc8u) + 0x8000u) >> 16) << 16);
    c.r[14] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x1fc8u) & 0xFFFFu);
    goto L_01056050;
    c.r[0] = c.r[0] | 0x0u;
L_01055f98:
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01056048;
    c.lr = 0x1055fa4u;
    f_800476a0(c);
R_01055fa4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01055fc0;
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01055fc8;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01055fc8;
    goto L_01055fe4;
L_01055fc0:
    c.r[5] = 0x0u;
    goto L_01055ff4;
L_01055fc8:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    c.r[5] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01055ff4;
    wp::compare_signed(c, 0, c.r[24], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01055ff4;
    c.r[5] = 0x1u;
    goto L_01055ff4;
L_01055fe4:
    c.r[3] = wp::sub_carry(c, c.r[24], 0x1u);
    c.r[0] = c.r[24] + 0xffffffffu;
    c.r[0] = c.r[3] | c.r[0];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
L_01055ff4:
    c.r[4] = ((((g_mg442_bases[4] + 0x1fc8u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] ^ 0x80000000u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x1fc8u) & 0xFFFFu);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[4] = c.r[4] + c.r[0];
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0x2d48u;
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x3a8u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056044u;
    wp::call(c, c.ctr);
R_01056044:
    goto L_0105605c;
L_01056048:
    c.r[4] = c.r[4] + 0x8u;
    c.r[14] = c.r[14] + 0x1u;
L_01056050:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0xffffffffu);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01055f98;
    }
L_0105605c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[6] = c.r[24] | c.r[24];
    c.r[4] = c.r[31] + 0x1cc8u;
    ea = c.r[12] + 0x21cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x3u;
    c.r[7] = 0x1u;
    c.r[8] = 0x0u;
    c.r[9] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x1056088u;
    wp::call(c, c.ctr);
R_01056088:
    goto L_01056108;
L_0105608c:
    wp::compare_signed(c, 0, c.r[21], 0x84u);
    if (!wp::cr_get(c, 2)) goto L_01056108;
    c.r[3] = 0xcccd0000u;
    c.r[15] = ((((g_mg442_bases[5] + 0x24a98u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xbf0u;
    c.f[31] = wp::rdf64(ea);
    c.r[15] = c.r[15] + wp::sign_extend16((g_mg442_bases[5] + 0x24a98u) & 0xFFFFu);
    c.r[14] = c.r[3] + 0xffffcccdu;
    c.r[16] = 0x0u;
L_010560ac:
    c.r[0] = wp::mulhwu(c.r[14], c.r[24]);
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 1)) goto L_010560c8;
    c.r[0] = 0x9u;
L_010560c8:
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    ea = c.r[15] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x10560f0u;
    wp::call(c, c.ctr);
R_010560f0:
    c.r[0] = wp::mulhwu(c.r[14], c.r[24]);
    c.r[16] = c.r[16] + 0x1u;
    c.r[15] = c.r[15] + 0x4u;
    wp::compare_signed(c, 0, c.r[16], 0x4u);
    c.r[24] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010560ac;
    }
L_01056108:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056120;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01056120;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1056120u;
    f_8001a480(c);
L_01056120:
R_01056120:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1056144u;
    f_80018e30(c);
R_01056144:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01056148(wp::Cpu& c) {
    WP_ENTER(0x1056148u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1056150u: goto R_01056150;
        case 0x1056180u: goto R_01056180;
        case 0x10561acu: goto R_010561ac;
        case 0x10561c8u: goto R_010561c8;
        case 0x10561dcu: goto R_010561dc;
        case 0x10561f4u: goto R_010561f4;
        case 0x1056218u: goto R_01056218;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1056150u;
    f_801c79a4(c);
R_01056150:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056180;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24ac0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[8] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24ac0u) & 0xFFFFu);
    c.r[7] = 0x2u;
    c.r[9] = 0x1u;
    c.lr = 0x1056180u;
    f_mg442_010576a0(c);
L_01056180:
R_01056180:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[6] = c.r[24] | c.r[24];
    c.r[4] = c.r[31] + 0x1cc8u;
    ea = c.r[12] + 0x21cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x2u;
    c.r[7] = 0x1u;
    c.r[8] = 0x1u;
    c.r[9] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x10561acu;
    wp::call(c, c.ctr);
R_010561ac:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010561dc;
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010561dc;
    c.r[3] = 0x490u;
    c.r[4] = 0x0u;
    c.lr = 0x10561c8u;
    f_8001aed0(c);
R_010561c8:
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x490u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10561dcu;
    f_80018e30(c);
L_010561dc:
R_010561dc:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010561f4;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010561f4;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10561f4u;
    f_8001a480(c);
L_010561f4:
R_010561f4:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1056218u;
    f_80018e30(c);
R_01056218:
    f_mg442_01057650(c);
    return;
}

void f_mg442_0105621c(wp::Cpu& c) {
    WP_ENTER(0x105621cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1056224u: goto R_01056224;
        case 0x1056258u: goto R_01056258;
        case 0x1056288u: goto R_01056288;
        case 0x10562b4u: goto R_010562b4;
        case 0x10562d0u: goto R_010562d0;
        case 0x105630cu: goto R_0105630c;
        case 0x1056324u: goto R_01056324;
        case 0x1056348u: goto R_01056348;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1056224u;
    f_801c79a4(c);
R_01056224:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056258;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24ae0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24ae0u) & 0xFFFFu);
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1056258u;
    f_mg442_01057880(c);
L_01056258:
R_01056258:
    c.r[0] = c.r[24] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[30] + 0x800u;
    c.f[1] = wp::rdf64(ea);
    c.r[4] = c.r[31] + 0x1cdcu;
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x1056288u;
    wp::call(c, c.ctr);
R_01056288:
    c.r[15] = ((((g_mg442_bases[6] + 0x830u) + 0x8000u) >> 16) << 16);
    ea = c.r[15] + wp::sign_extend16((g_mg442_bases[6] + 0x830u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010562d8;
    c.r[14] = ((((g_mg442_bases[6] + 0x834u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x2u;
    c.r[3] = c.r[14] + wp::sign_extend16((g_mg442_bases[6] + 0x834u) & 0xFFFFu);
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.r[7] = 0x3u;
    c.lr = 0x10562b4u;
    f_mg442_01057680(c);
R_010562b4:
    c.r[3] = c.r[14] + wp::sign_extend16((g_mg442_bases[6] + 0x834u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0x2u;
    c.r[7] = 0x3u;
    c.lr = 0x10562d0u;
    f_mg442_01057680(c);
R_010562d0:
    c.r[0] = 0x1u;
    ea = c.r[15] + wp::sign_extend16((g_mg442_bases[6] + 0x830u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_010562d8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0u - c.r[25];
    c.r[0] = c.r[0] | c.r[25];
    c.r[6] = ((((g_mg442_bases[6] + 0x834u) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x108u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x834u) & 0xFFFFu);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x1cdcu;
    c.r[5] = 0x0u;
    c.r[6] = c.r[6] + c.r[0];
    c.ctr = c.r[12];
    c.lr = 0x105630cu;
    wp::call(c, c.ctr);
R_0105630c:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056324;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01056324;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1056324u;
    f_8001a480(c);
L_01056324:
R_01056324:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1056348u;
    f_80018e30(c);
R_01056348:
    f_mg442_01057650(c);
    return;
}

void f_mg442_0105634c(wp::Cpu& c) {
    WP_ENTER(0x105634cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1056354u: goto R_01056354;
        case 0x1056388u: goto R_01056388;
        case 0x10563b8u: goto R_010563b8;
        case 0x10563d0u: goto R_010563d0;
        case 0x10563f4u: goto R_010563f4;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1056354u;
    f_801c79a4(c);
R_01056354:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056388;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24b2cu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24b2cu) & 0xFFFFu);
    c.r[7] = 0x3u;
    c.r[8] = 0x1u;
    c.r[9] = 0x0u;
    c.lr = 0x1056388u;
    f_mg442_01057880(c);
L_01056388:
R_01056388:
    c.r[0] = c.r[24] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[30] + 0x800u;
    c.f[1] = wp::rdf64(ea);
    c.r[4] = c.r[31] + 0x1cdcu;
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x10563b8u;
    wp::call(c, c.ctr);
R_010563b8:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010563d0;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010563d0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10563d0u;
    f_8001a480(c);
L_010563d0:
R_010563d0:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10563f4u;
    f_80018e30(c);
R_010563f4:
    f_mg442_01057650(c);
    return;
}

void f_mg442_010563f8(wp::Cpu& c) {
    WP_ENTER(0x10563f8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1056420u: goto R_01056420;
        case 0x1056460u: goto R_01056460;
        case 0x105647cu: goto R_0105647c;
        case 0x1056484u: goto R_01056484;
        case 0x105649cu: goto R_0105649c;
        case 0x10564a4u: goto R_010564a4;
        case 0x10564bcu: goto R_010564bc;
        case 0x10564c4u: goto R_010564c4;
        case 0x10564dcu: goto R_010564dc;
        case 0x10564e4u: goto R_010564e4;
        case 0x10564fcu: goto R_010564fc;
        case 0x1056504u: goto R_01056504;
        case 0x1056548u: goto R_01056548;
        case 0x1056550u: goto R_01056550;
        case 0x1056598u: goto R_01056598;
        case 0x10565e4u: goto R_010565e4;
        case 0x10565f4u: goto R_010565f4;
        case 0x1056614u: goto R_01056614;
        case 0x105661cu: goto R_0105661c;
        case 0x1056620u: goto R_01056620;
        case 0x1056680u: goto R_01056680;
        case 0x10566c4u: goto R_010566c4;
        case 0x10566dcu: goto R_010566dc;
        case 0x10566f4u: goto R_010566f4;
        case 0x105673cu: goto R_0105673c;
        case 0x1056788u: goto R_01056788;
        case 0x10567a4u: goto R_010567a4;
        case 0x10567acu: goto R_010567ac;
        case 0x10567b0u: goto R_010567b0;
        case 0x1056810u: goto R_01056810;
        case 0x1056854u: goto R_01056854;
        case 0x105689cu: goto R_0105689c;
        case 0x10568e8u: goto R_010568e8;
        case 0x105690cu: goto R_0105690c;
        case 0x1056914u: goto R_01056914;
        case 0x105697cu: goto R_0105697c;
        case 0x10569d8u: goto R_010569d8;
        case 0x1056a24u: goto R_01056a24;
        case 0x1056a40u: goto R_01056a40;
        case 0x1056a48u: goto R_01056a48;
        case 0x1056ae4u: goto R_01056ae4;
        case 0x1056b28u: goto R_01056b28;
        case 0x1056b74u: goto R_01056b74;
        case 0x1056bd8u: goto R_01056bd8;
        case 0x1056bf0u: goto R_01056bf0;
        case 0x1056c14u: goto R_01056c14;
        default: wp::bad_resume(c);
        }
    }
    wp::compare_signed(c, 0, c.r[8], 0x64u);
    c.r[14] = 0x0u;
    if (wp::cr_get(c, 0)) goto L_0105640c;
    c.r[14] = 0x2u;
    goto L_01056418;
L_0105640c:
    wp::compare_signed(c, 0, c.r[8], 0xau);
    if (wp::cr_get(c, 0)) goto L_01056418;
    c.r[14] = 0x1u;
L_01056418:
    c.r[3] = 0x164u;
    c.lr = 0x1056420u;
    f_801c79a4(c);
R_01056420:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01056464;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24bf8u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24bf8u) & 0xFFFFu);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1056460u;
    f_mg442_01057880(c);
R_01056460:
    c.r[28] = c.r[3] | c.r[3];
L_01056464:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d50u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105647cu;
    wp::call(c, c.ctr);
R_0105647c:
    c.r[4] = 0x0u;
    c.lr = 0x1056484u;
    f_mg442_01055890(c);
R_01056484:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d58u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105649cu;
    wp::call(c, c.ctr);
R_0105649c:
    c.r[4] = 0x0u;
    c.lr = 0x10564a4u;
    f_mg442_01055890(c);
R_010564a4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d60u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10564bcu;
    wp::call(c, c.ctr);
R_010564bc:
    c.r[4] = 0x0u;
    c.lr = 0x10564c4u;
    f_mg442_01055890(c);
R_010564c4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d68u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10564dcu;
    wp::call(c, c.ctr);
R_010564dc:
    c.r[4] = 0x0u;
    c.lr = 0x10564e4u;
    f_mg442_01055890(c);
R_010564e4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d70u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10564fcu;
    wp::call(c, c.ctr);
R_010564fc:
    c.r[4] = 0x0u;
    c.lr = 0x1056504u;
    f_mg442_01055890(c);
R_01056504:
    wp::compare_signed(c, 0, c.r[21], 0x8du);
    if (!wp::cr_get(c, 2)) goto L_010565e8;
    c.r[3] = 0x66660000u;
    c.r[0] = c.r[3] + 0x6667u;
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[14] = c.r[0] + c.r[3];
    wp::compare_signed(c, 0, c.r[14], 0x63u);
    if (!wp::cr_get(c, 1)) goto L_01056530;
    c.r[14] = 0x63u;
L_01056530:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d58u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1056548u;
    wp::call(c, c.ctr);
R_01056548:
    c.r[4] = 0x1u;
    c.lr = 0x1056550u;
    f_mg442_01055890(c);
R_01056550:
    c.r[15] = 0x66660000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[15] + 0x6667u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[14]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] + 0x2d78u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056598u;
    wp::call(c, c.ctr);
R_01056598:
    c.r[0] = c.r[15] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[14]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d80u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[14] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10565e4u;
    wp::call(c, c.ctr);
R_010565e4:
    goto L_01056bd8;
L_010565e8:
    wp::compare_signed(c, 0, c.r[21], 0x8cu);
    if (!wp::cr_get(c, 2)) goto L_010568ec;
    c.lr = 0x10565f4u;
    f_80007730(c);
R_010565f4:
    wp::compare_signed(c, 0, c.r[3], 0xdbu);
    if (!wp::cr_get(c, 2)) goto L_0105678c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d70u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1056614u;
    wp::call(c, c.ctr);
R_01056614:
    c.r[4] = 0x1u;
    c.lr = 0x105661cu;
    f_mg442_01055890(c);
R_0105661c:
    c.lr = 0x1056620u;
    f_800476a0(c);
R_01056620:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010566c4;
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01056638;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_01056684;
L_01056638:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d88u;
    c.r[0] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0105665c;
    wp::compare_signed(c, 0, c.r[24], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0105665c;
    c.r[0] = 0x1u;
L_0105665c:
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056680u;
    wp::call(c, c.ctr);
R_01056680:
    goto L_010566c4;
L_01056684:
    c.r[3] = wp::sub_carry(c, c.r[24], 0x1u);
    c.r[0] = c.r[24] + 0xffffffffu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[30] + 0x800u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[31] + 0x2d88u;
    c.f[2] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x10566c4u;
    wp::call(c, c.ctr);
L_010566c4:
R_010566c4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d94u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10566dcu;
    wp::call(c, c.ctr);
R_010566dc:
    c.r[4] = wp::sraw(c, c.r[24], 31);
    c.r[0] = 0xau;
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[24]);
    c.r[0] = 0x0u;
    c.r[4] = wp::add_extended(c, c.r[4], c.r[0]);
    c.lr = 0x10566f4u;
    f_mg442_01055890(c);
R_010566f4:
    c.r[14] = 0x66660000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] + 0x2d94u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105673cu;
    wp::call(c, c.ctr);
R_0105673c:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d9cu;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056788u;
    wp::call(c, c.ctr);
R_01056788:
    goto L_01056bd8;
L_0105678c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d68u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10567a4u;
    wp::call(c, c.ctr);
R_010567a4:
    c.r[4] = 0x1u;
    c.lr = 0x10567acu;
    f_mg442_01055890(c);
R_010567ac:
    c.lr = 0x10567b0u;
    f_800476a0(c);
R_010567b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056854;
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 2)) goto L_010567c8;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_01056814;
L_010567c8:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2da4u;
    c.r[0] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010567ec;
    wp::compare_signed(c, 0, c.r[24], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010567ec;
    c.r[0] = 0x1u;
L_010567ec:
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056810u;
    wp::call(c, c.ctr);
R_01056810:
    goto L_01056854;
L_01056814:
    c.r[3] = wp::sub_carry(c, c.r[24], 0x1u);
    c.r[0] = c.r[24] + 0xffffffffu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[30] + 0x800u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[31] + 0x2da4u;
    c.f[2] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x1056854u;
    wp::call(c, c.ctr);
L_01056854:
R_01056854:
    c.r[14] = 0x66660000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] + 0x2db0u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105689cu;
    wp::call(c, c.ctr);
R_0105689c:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2db8u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10568e8u;
    wp::call(c, c.ctr);
R_010568e8:
    goto L_01056bd8;
L_010568ec:
    wp::compare_signed(c, 0, c.r[21], 0x8eu);
    if (!wp::cr_get(c, 2)) goto L_01056a28;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d50u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105690cu;
    wp::call(c, c.ctr);
R_0105690c:
    c.r[4] = 0x1u;
    c.lr = 0x1056914u;
    f_mg442_01055890(c);
R_01056914:
    c.r[3] = 0x51ec0000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffff851fu;
    c.r[14] = 0x66660000u;
    c.r[5] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = wp::sraw(c, c.r[5], 5);
    c.r[4] = c.r[31] + 0x2dc0u;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[6] = c.r[5] + c.r[6];
    c.r[0] = wp::mulhw(c.r[0], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105697cu;
    wp::call(c, c.ctr);
R_0105697c:
    c.r[7] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[7], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x1cacu;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[6] = c.r[0] + c.r[5];
    c.r[0] = wp::mulhw(c.r[7], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10569d8u;
    wp::call(c, c.ctr);
R_010569d8:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x1ca4u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056a24u;
    wp::call(c, c.ctr);
R_01056a24:
    goto L_01056bd8;
L_01056a28:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2d60u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1056a40u;
    wp::call(c, c.ctr);
R_01056a40:
    c.r[4] = 0x1u;
    c.lr = 0x1056a48u;
    f_mg442_01055890(c);
R_01056a48:
    c.r[14] = 0x66660000u;
    c.r[6] = 0x88890000u;
    c.r[9] = c.r[14] + 0x6667u;
    c.r[4] = 0x1b4f0000u;
    c.r[0] = wp::mulhw(c.r[9], c.r[24]);
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[4] + 0xffff81b5u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[6] = c.r[6] + 0xffff8889u;
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = c.r[28] | c.r[28];
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[4] = c.r[31] + 0x2dc8u;
    c.r[0] = c.r[0] + c.r[7];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[6] = wp::mulhw(c.r[6], c.r[0]);
    c.r[6] = c.r[6] + c.r[0];
    c.r[6] = wp::sraw(c, c.r[6], 5);
    c.r[5] = wp::mulhw(c.r[5], c.r[24]);
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[8] = c.r[6] + c.r[7];
    c.r[5] = wp::sraw(c, c.r[5], 6);
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[7] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[9], c.r[7]);
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[5] = c.r[5] + c.r[6];
    c.r[5] = c.r[5] * 0xau;
    c.r[5] = c.r[7] - c.r[5];
    c.r[5] = c.r[5] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[5]);
    c.r[5] = c.r[8] * 0x3cu;
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.r[15] = c.r[0] - c.r[5];
    c.ctr = c.r[12];
    c.lr = 0x1056ae4u;
    wp::call(c, c.ctr);
R_01056ae4:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[15]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dd0u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056b28u;
    wp::call(c, c.ctr);
R_01056b28:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[15]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dd8u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[15] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056b74u;
    wp::call(c, c.ctr);
R_01056b74:
    c.r[7] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[7], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2de0u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[6] = c.r[24] - c.r[0];
    c.r[0] = wp::mulhw(c.r[7], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056bd8u;
    wp::call(c, c.ctr);
L_01056bd8:
R_01056bd8:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056bf0;
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01056bf0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1056bf0u;
    f_8001a480(c);
L_01056bf0:
R_01056bf0:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) {
    f_mg442_01057650(c);
    return;
    }
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 0)) {
    f_mg442_01057650(c);
    return;
    }
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1056c14u;
    f_80018e30(c);
R_01056c14:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01056c18(wp::Cpu& c) {
    WP_ENTER(0x1056c18u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1056c60u: goto R_01056c60;
        case 0x1056ca0u: goto R_01056ca0;
        case 0x1056ca8u: goto R_01056ca8;
        case 0x1056d08u: goto R_01056d08;
        case 0x1056d4cu: goto R_01056d4c;
        case 0x1056db0u: goto R_01056db0;
        default: wp::bad_resume(c);
        }
    }
    wp::compare_signed(c, 0, c.r[8], 0x2710u);
    c.r[14] = 0x0u;
    if (wp::cr_get(c, 0)) goto L_01056c2c;
    c.r[14] = 0x4u;
    goto L_01056c58;
L_01056c2c:
    wp::compare_signed(c, 0, c.r[8], 0x3e8u);
    if (wp::cr_get(c, 0)) goto L_01056c3c;
    c.r[14] = 0x3u;
    goto L_01056c58;
L_01056c3c:
    wp::compare_signed(c, 0, c.r[8], 0x64u);
    if (wp::cr_get(c, 0)) goto L_01056c4c;
    c.r[14] = 0x2u;
    goto L_01056c58;
L_01056c4c:
    wp::compare_signed(c, 0, c.r[8], 0xau);
    if (wp::cr_get(c, 0)) goto L_01056c58;
    c.r[14] = 0x1u;
L_01056c58:
    c.r[3] = 0x164u;
    c.lr = 0x1056c60u;
    f_801c79a4(c);
R_01056c60:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01056ca4;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24d28u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24d28u) & 0xFFFFu);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1056ca0u;
    f_mg442_01057880(c);
R_01056ca0:
    c.r[28] = c.r[3] | c.r[3];
L_01056ca4:
    c.lr = 0x1056ca8u;
    f_800476a0(c);
R_01056ca8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01056d4c;
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01056cc0;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_01056d0c;
L_01056cc0:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2de8u;
    c.r[0] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01056ce4;
    wp::compare_signed(c, 0, c.r[24], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01056ce4;
    c.r[0] = 0x1u;
L_01056ce4:
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056d08u;
    wp::call(c, c.ctr);
R_01056d08:
    goto L_01056d4c;
L_01056d0c:
    c.r[3] = wp::sub_carry(c, c.r[24], 0x1u);
    c.r[0] = c.r[24] + 0xffffffffu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[30] + 0x800u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[31] + 0x2de8u;
    c.f[2] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x1056d4cu;
    wp::call(c, c.ctr);
L_01056d4c:
R_01056d4c:
    c.r[3] = 0x66660000u;
    c.r[15] = ((((g_mg442_bases[5] + 0x24d78u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xbf0u;
    c.f[31] = wp::rdf64(ea);
    c.r[15] = c.r[15] + wp::sign_extend16((g_mg442_bases[5] + 0x24d78u) & 0xFFFFu);
    c.r[14] = c.r[3] + 0x6667u;
    c.r[16] = 0x0u;
L_01056d64:
    c.r[0] = wp::mulhw(c.r[14], c.r[24]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 1)) goto L_01056d88;
    c.r[0] = 0x9u;
L_01056d88:
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    ea = c.r[15] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x1056db0u;
    wp::call(c, c.ctr);
R_01056db0:
    c.r[0] = wp::mulhw(c.r[14], c.r[24]);
    c.r[16] = c.r[16] + 0x1u;
    c.r[15] = c.r[15] + 0x4u;
    wp::compare_signed(c, 0, c.r[16], 0x5u);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[24] = c.r[0] + c.r[3];
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01056d64;
    }
    f_mg442_01057650(c);
    return;
}

void f_mg442_01056dd4(wp::Cpu& c) {
    WP_ENTER(0x1056dd4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1056ddcu: goto R_01056ddc;
        case 0x1056e14u: goto R_01056e14;
        case 0x1056eb4u: goto R_01056eb4;
        case 0x1056ef8u: goto R_01056ef8;
        case 0x1056f44u: goto R_01056f44;
        case 0x1056fa8u: goto R_01056fa8;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1056ddcu;
    f_801c79a4(c);
R_01056ddc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01056e18;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24db8u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24db8u) & 0xFFFFu);
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1056e14u;
    f_mg442_01057880(c);
R_01056e14:
    c.r[28] = c.r[3] | c.r[3];
L_01056e18:
    c.r[14] = 0x66660000u;
    c.r[4] = 0x1b4f0000u;
    c.r[9] = c.r[14] + 0x6667u;
    c.r[5] = 0x88890000u;
    c.r[6] = wp::mulhw(c.r[9], c.r[24]);
    c.r[0] = c.r[4] + 0xffff81b5u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[5] + 0xffff8889u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = wp::sraw(c, c.r[6], 2);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[4], 1) & 0x1u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[8] = c.r[4] + c.r[6];
    c.r[4] = c.r[31] + 0x2dc8u;
    c.r[5] = wp::mulhw(c.r[5], c.r[8]);
    c.r[5] = c.r[5] + c.r[8];
    c.r[5] = wp::sraw(c, c.r[5], 5);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[7] = c.r[5] + c.r[6];
    c.r[0] = wp::sraw(c, c.r[0], 6);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[6] = c.r[0] + c.r[5];
    c.r[0] = wp::mulhw(c.r[9], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[7] * 0x3cu;
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.r[15] = c.r[8] - c.r[0];
    c.ctr = c.r[12];
    c.lr = 0x1056eb4u;
    wp::call(c, c.ctr);
R_01056eb4:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[15]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dd0u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056ef8u;
    wp::call(c, c.ctr);
R_01056ef8:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[15]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dd8u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[15] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056f44u;
    wp::call(c, c.ctr);
R_01056f44:
    c.r[7] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[7], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2de0u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[6] = c.r[24] - c.r[0];
    c.r[0] = wp::mulhw(c.r[7], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1056fa8u;
    wp::call(c, c.ctr);
R_01056fa8:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01056fac(wp::Cpu& c) {
    WP_ENTER(0x1056facu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1056fdcu: goto R_01056fdc;
        case 0x105701cu: goto R_0105701c;
        case 0x1057088u: goto R_01057088;
        case 0x10570d4u: goto R_010570d4;
        case 0x1057128u: goto R_01057128;
        case 0x1057140u: goto R_01057140;
        case 0x1057148u: goto R_01057148;
        case 0x1057160u: goto R_01057160;
        case 0x1057164u: goto R_01057164;
        case 0x1057170u: goto R_01057170;
        case 0x1057188u: goto R_01057188;
        case 0x105718cu: goto R_0105718c;
        case 0x1057198u: goto R_01057198;
        case 0x10571a0u: goto R_010571a0;
        case 0x10571d8u: goto R_010571d8;
        case 0x10571e0u: goto R_010571e0;
        case 0x1057210u: goto R_01057210;
        case 0x1057218u: goto R_01057218;
        case 0x10572c8u: goto R_010572c8;
        case 0x105730cu: goto R_0105730c;
        case 0x1057358u: goto R_01057358;
        case 0x10573bcu: goto R_010573bc;
        default: wp::bad_resume(c);
        }
    }
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01056fc0;
    c.r[14] = 0x2u;
    c.r[24] = 0x1u;
    goto L_01056fd4;
L_01056fc0:
    c.r[0] = c.r[10] ^ c.r[8];
    c.r[3] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[0] & c.r[10];
    c.r[0] = c.r[3] - c.r[0];
    c.r[14] = wp::rotl(c.r[0], 1) & 0x1u;
L_01056fd4:
    c.r[3] = 0x174u;
    c.lr = 0x1056fdcu;
    f_801c79a4(c);
R_01056fdc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01057020;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24e68u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24e68u) & 0xFFFFu);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x105701cu;
    f_mg442_01057ed0(c);
R_0105701c:
    c.r[28] = c.r[3] | c.r[3];
L_01057020:
    wp::compare_signed(c, 0, c.r[24], 0xau);
    if (wp::cr_get(c, 0)) goto L_010570d8;
    c.r[14] = 0x66660000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[7] = c.r[14] + 0x6667u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::mulhw(c.r[7], c.r[24]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] + 0x2df0u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[6] = c.r[0] + c.r[5];
    c.r[0] = wp::mulhw(c.r[7], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1057088u;
    wp::call(c, c.ctr);
R_01057088:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10570d4u;
    wp::call(c, c.ctr);
R_010570d4:
    goto L_010571e0;
L_010570d8:
    c.r[4] = 0x66660000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x6667u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] + 0x2df0u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1057128u;
    wp::call(c, c.ctr);
R_01057128:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057140u;
    wp::call(c, c.ctr);
R_01057140:
    c.r[4] = 0x0u;
    c.lr = 0x1057148u;
    f_mg442_01055890(c);
R_01057148:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2df0u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057160u;
    wp::call(c, c.ctr);
R_01057160:
    c.lr = 0x1057164u;
    f_mg442_0101f4f0(c);
R_01057164:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x1057170u;
    f_mg442_010558b0(c);
R_01057170:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057188u;
    wp::call(c, c.ctr);
R_01057188:
    c.lr = 0x105718cu;
    f_mg442_0101f4f0(c);
R_0105718c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x3cu;
    c.lr = 0x1057198u;
    f_mg442_010558b0(c);
R_01057198:
    c.r[3] = c.r[1] + 0x30u;
    c.lr = 0x10571a0u;
    f_mg442_0101c200(c);
R_010571a0:
    ea = c.r[1] + 0x3cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x48u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = c.r[31] + 0x2df0u;
    ea = c.r[30] + 0x7f0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[2] + c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x48u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10571d8u;
    wp::call(c, c.ctr);
R_010571d8:
    c.r[4] = c.r[1] + 0x48u;
    c.lr = 0x10571e0u;
    f_mg442_010558d0(c);
L_010571e0:
R_010571e0:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105722c;
    c.r[14] = ((((g_mg442_bases[5] + 0x24eb8u) + 0x8000u) >> 16) << 16);
    c.r[15] = 0x0u;
    c.r[14] = c.r[14] + wp::sign_extend16((g_mg442_bases[5] + 0x24eb8u) & 0xFFFFu);
L_010571f8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[14] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057210u;
    wp::call(c, c.ctr);
R_01057210:
    c.r[4] = 0x0u;
    c.lr = 0x1057218u;
    f_mg442_01055890(c);
R_01057218:
    c.r[15] = c.r[15] + 0x1u;
    c.r[14] = c.r[14] + 0x4u;
    wp::compare_signed(c, 0, c.r[15], 0x7u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010571f8;
    }
    f_mg442_01057650(c);
    return;
L_0105722c:
    c.r[14] = 0x66660000u;
    c.r[5] = 0x88890000u;
    c.r[9] = c.r[14] + 0x6667u;
    c.r[4] = 0x1b4f0000u;
    c.r[6] = wp::mulhw(c.r[9], c.r[25]);
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffff81b5u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[5] = c.r[5] + 0xffff8889u;
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[6], 2);
    c.r[3] = c.r[28] | c.r[28];
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[4] = c.r[31] + 0x2dc8u;
    c.r[8] = c.r[6] + c.r[7];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = wp::mulhw(c.r[5], c.r[8]);
    c.r[5] = c.r[5] + c.r[8];
    c.r[5] = wp::sraw(c, c.r[5], 5);
    c.r[0] = wp::mulhw(c.r[0], c.r[25]);
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[7] = c.r[5] + c.r[6];
    c.r[0] = wp::sraw(c, c.r[0], 6);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[6] = c.r[0] + c.r[5];
    c.r[0] = wp::mulhw(c.r[9], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[7] * 0x3cu;
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.r[15] = c.r[8] - c.r[0];
    c.ctr = c.r[12];
    c.lr = 0x10572c8u;
    wp::call(c, c.ctr);
R_010572c8:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[15]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dd0u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105730cu;
    wp::call(c, c.ctr);
R_0105730c:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[15]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dd8u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[15] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1057358u;
    wp::call(c, c.ctr);
R_01057358:
    c.r[7] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[7], c.r[25]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2de0u;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[6] = c.r[25] - c.r[0];
    c.r[0] = wp::mulhw(c.r[7], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10573bcu;
    wp::call(c, c.ctr);
R_010573bc:
    f_mg442_01057650(c);
    return;
}

void f_mg442_010573c0(wp::Cpu& c) {
    WP_ENTER(0x10573c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10573fcu: goto R_010573fc;
        case 0x105743cu: goto R_0105743c;
        case 0x10574a8u: goto R_010574a8;
        case 0x10574f4u: goto R_010574f4;
        case 0x1057548u: goto R_01057548;
        case 0x1057560u: goto R_01057560;
        case 0x1057568u: goto R_01057568;
        case 0x1057580u: goto R_01057580;
        case 0x1057584u: goto R_01057584;
        case 0x1057590u: goto R_01057590;
        case 0x10575a8u: goto R_010575a8;
        case 0x10575acu: goto R_010575ac;
        case 0x10575b8u: goto R_010575b8;
        case 0x10575c0u: goto R_010575c0;
        case 0x10575f8u: goto R_010575f8;
        case 0x1057600u: goto R_01057600;
        default: wp::bad_resume(c);
        }
    }
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010573d0;
    wp::compare_signed(c, 0, c.r[8], c.r[9]);
    if (!wp::cr_get(c, 0)) goto L_010573f0;
L_010573d0:
    wp::compare_signed(c, 0, c.r[8], 0x1u);
    c.r[14] = 0x1u;
    if (!wp::cr_get(c, 0)) goto L_010573e0;
    c.r[24] = 0x1u;
L_010573e0:
    wp::compare_signed(c, 0, c.r[24], c.r[9]);
    if (!wp::cr_get(c, 0)) goto L_010573f4;
    c.r[24] = c.r[25] | c.r[25];
    goto L_010573f4;
L_010573f0:
    c.r[14] = 0x0u;
L_010573f4:
    c.r[3] = 0x164u;
    c.lr = 0x10573fcu;
    f_801c79a4(c);
R_010573fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01057440;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x24f38u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x24f38u) & 0xFFFFu);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x105743cu;
    f_mg442_01057880(c);
R_0105743c:
    c.r[28] = c.r[3] | c.r[3];
L_01057440:
    wp::compare_signed(c, 0, c.r[24], 0xau);
    if (wp::cr_get(c, 0)) goto L_010574f8;
    c.r[14] = 0x66660000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[7] = c.r[14] + 0x6667u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::mulhw(c.r[7], c.r[24]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] + 0x2df0u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[6] = c.r[0] + c.r[5];
    c.r[0] = wp::mulhw(c.r[7], c.r[6]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[6] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10574a8u;
    wp::call(c, c.ctr);
R_010574a8:
    c.r[0] = c.r[14] + 0x6667u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3b4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3b0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10574f4u;
    wp::call(c, c.ctr);
R_010574f4:
    f_mg442_01057650(c);
    return;
L_010574f8:
    c.r[4] = 0x66660000u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x6667u;
    ea = c.r[30] + 0x800u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::mulhw(c.r[0], c.r[24]);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] + 0x2df0u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[5];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3acu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3a8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1057548u;
    wp::call(c, c.ctr);
R_01057548:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057560u;
    wp::call(c, c.ctr);
R_01057560:
    c.r[4] = 0x0u;
    c.lr = 0x1057568u;
    f_mg442_01055890(c);
R_01057568:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2df0u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057580u;
    wp::call(c, c.ctr);
R_01057580:
    c.lr = 0x1057584u;
    f_mg442_0101f4f0(c);
R_01057584:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.lr = 0x1057590u;
    f_mg442_010558b0(c);
R_01057590:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10575a8u;
    wp::call(c, c.ctr);
R_010575a8:
    c.lr = 0x10575acu;
    f_mg442_0101f4f0(c);
R_010575ac:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x10575b8u;
    f_mg442_010558b0(c);
R_010575b8:
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10575c0u;
    f_mg442_0101c200(c);
R_010575c0:
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x24u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = c.r[31] + 0x2df0u;
    ea = c.r[30] + 0x7f0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[2] + c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10575f8u;
    wp::call(c, c.ctr);
R_010575f8:
    c.r[4] = c.r[1] + 0x24u;
    c.lr = 0x1057600u;
    f_mg442_010558d0(c);
R_01057600:
    f_mg442_01057650(c);
    return;
}

void f_mg442_01057604(wp::Cpu& c) {
    WP_ENTER(0x1057604u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105760cu: goto R_0105760c;
        case 0x105764cu: goto R_0105764c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x105760cu;
    f_801c79a4(c);
R_0105760c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105764c;
    c.r[0] = c.r[21] + 0xffffff69u;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[0] = c.r[0] * 0xcu;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg442_bases[5] + 0x2508cu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x2508cu) & 0xFFFFu);
    c.r[7] = 0x3u;
    c.r[6] = c.r[6] + c.r[0];
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x105764cu;
    f_mg442_01057880(c);
L_0105764c:
R_0105764c:
    c.r[28] = c.r[3] | c.r[3];
    f_mg442_01057650(c);
}

void f_mg442_01057650(wp::Cpu& c) {
    WP_ENTER(0x1057650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1057664u: goto R_01057664;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0x448u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x440u;
    c.f[31] = wp::rdf64(ea);
    c.r[11] = c.r[1] + 0x440u;
    c.lr = 0x1057664u;
    f_801c83d0(c);
R_01057664:
    ea = c.r[1] + 0x454u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x450u;
    return;
}

void f_mg442_01057680(wp::Cpu& c) {
    WP_ENTER(0x1057680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = wp::rotl(c.r[6], 4) & 0xfffffff0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[4] = c.r[6] | c.r[4];
    c.r[5] = wp::rotl(c.r[7], 6) & 0xffffffc0u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[0] = c.r[5] | c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mg442_010576a0(wp::Cpu& c) {
    WP_ENTER(0x10576a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10576c8u: goto R_010576c8;
        case 0x10576dcu: goto R_010576dc;
        case 0x1057714u: goto R_01057714;
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
    c.r[31] = c.r[9] | c.r[9];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[7] | c.r[7];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10576c8u;
    f_mg442_0105c630(c);
R_010576c8:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[29] + 0x144u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x10576dcu;
    f_80063370(c);
R_010576dc:
    c.r[3] = ((((g_mg442_bases[5] + 0x25970u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x25970u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[3] + 0x260u;
    ea = c.r[29] + 0x144u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[29] + 0x15cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x160u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057714u;
    wp::call(c, c.ctr);
R_01057714:
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

void f_mg442_01057740(wp::Cpu& c) {
    WP_ENTER(0x1057740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1057770u: goto R_01057770;
        case 0x105777cu: goto R_0105777c;
        case 0x105778cu: goto R_0105778c;
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
    if (wp::cr_get(c, 2)) goto L_0105778c;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x144u;
    c.lr = 0x1057770u;
    f_80063bb0(c);
R_01057770:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x105777cu;
    f_mg442_0105c920(c);
R_0105777c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105778c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x105778cu;
    f_801c7a8c(c);
L_0105778c:
R_0105778c:
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

void f_mg442_010577b0(wp::Cpu& c) {
    WP_ENTER(0x10577b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10577f8u: goto R_010577f8;
        case 0x1057814u: goto R_01057814;
        case 0x105786cu: goto R_0105786c;
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
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105786c;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01057800;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10577f8u;
    wp::call(c, c.ctr);
R_010577f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105786c;
L_01057800:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057814u;
    wp::call(c, c.ctr);
R_01057814:
    ea = c.r[31] + 0x160u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x1u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[6] = 0x0u;
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0105784c;
    ea = c.r[31] + 0x158u;
    c.r[7] = wp::rd32(ea);
    c.r[0] = c.r[7] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105784c;
    c.r[6] = 0x1u;
L_0105784c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    c.r[7] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[7] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105786cu;
    wp::call(c, c.ctr);
L_0105786c:
R_0105786c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01057880(wp::Cpu& c) {
    WP_ENTER(0x1057880u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1057894u: goto R_01057894;
        case 0x10578b0u: goto R_010578b0;
        case 0x10578c4u: goto R_010578c4;
        case 0x105790cu: goto R_0105790c;
        case 0x1057970u: goto R_01057970;
        case 0x1057974u: goto R_01057974;
        case 0x10579dcu: goto R_010579dc;
        case 0x10579e0u: goto R_010579e0;
        case 0x1057aa0u: goto R_01057aa0;
        case 0x1057aa4u: goto R_01057aa4;
        case 0x1057aacu: goto R_01057aac;
        case 0x1057ad4u: goto R_01057ad4;
        case 0x1057ad8u: goto R_01057ad8;
        case 0x1057b54u: goto R_01057b54;
        case 0x1057b64u: goto R_01057b64;
        case 0x1057bb0u: goto R_01057bb0;
        case 0x1057bbcu: goto R_01057bbc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1057894u;
    f_801c83b4(c);
R_01057894:
    c.r[28] = c.r[8] | c.r[8];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[7] | c.r[7];
    c.r[26] = c.r[9] | c.r[9];
    c.r[8] = c.r[10] | c.r[10];
    c.r[27] = c.r[3] | c.r[3];
    c.lr = 0x10578b0u;
    f_mg442_0105c630(c);
R_010578b0:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[27] + 0x144u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x10578c4u;
    f_80063370(c);
R_010578c4:
    c.r[3] = ((((g_mg442_bases[5] + 0x256f8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x256f8u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[3] + 0x260u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[29] + 0x15cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[29] + 0x160u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[29] + 0x161u;
    wp::wr8(ea, c.r[28]);
    ea = c.r[29] + 0x162u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[29] + 0x163u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105790cu;
    wp::call(c, c.ctr);
R_0105790c:
    c.r[6] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01057940;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    goto L_01057bb0;
L_01057940:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01057974;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1057970u;
    f_801cee24(c);
R_01057970:
    c.lr = 0x1057974u;
    f_801d3940(c);
L_01057974:
R_01057974:
    c.r[6] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[7] = 0x0u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[3] = 0x40000000u;
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[5] = c.r[6] + 0x8u;
    c.r[3] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[3] - c.r[30];
    c.r[0] = c.r[0] - c.r[30];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010579e0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10579dcu;
    f_801cee24(c);
R_010579dc:
    c.lr = 0x10579e0u;
    f_801d3940(c);
L_010579e0:
R_010579e0:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01057a30;
    c.r[5] = c.r[30] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01057a24;
    c.r[3] = c.r[1] + 0x8u;
L_01057a24:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[30] + c.r[0];
    goto L_01057a74;
L_01057a30:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01057a6c;
    c.r[3] = c.r[30] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01057a60;
    c.r[3] = c.r[1] + 0x8u;
L_01057a60:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[30] + c.r[0];
    goto L_01057a74;
L_01057a6c:
    c.r[3] = 0x40000000u;
    c.r[27] = c.r[3] + 0xffffffffu;
L_01057a74:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01057aa4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1057aa0u;
    f_801cee24(c);
R_01057aa0:
    c.lr = 0x1057aa4u;
    f_801d3940(c);
L_01057aa4:
R_01057aa4:
    c.r[3] = wp::rotl(c.r[27], 2) & 0xfffffffcu;
    c.lr = 0x1057aacu;
    f_801c79a4(c);
R_01057aac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01057ad8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1057ad4u;
    f_801cee24(c);
R_01057ad4:
    c.lr = 0x1057ad8u;
    f_801d3940(c);
L_01057ad8:
R_01057ad8:
    c.r[30] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[30] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[27]);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[28] + c.r[0];
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[26] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[26] + c.r[0];
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[3] - c.r[26];
    c.r[4] = wp::sraw(c, c.r[3], 2);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[28] = wp::add_extended(c, c.r[4], 0);
    c.r[0] = c.r[0] - c.r[28];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = wp::rotl(c.r[28], 2) & 0xfffffffcu;
    c.r[4] = c.r[26] | c.r[26];
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[27] | c.r[27];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x1057b54u;
    f_800043c4(c);
R_01057b54:
    c.r[3] = c.r[26] | c.r[26];
    c.r[5] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x1057b64u;
    f_80004714(c);
R_01057b64:
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[31] + 0x8u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[28];
    ea = c.r[30] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[30] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01057bb0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01057bb0;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1057bb0u;
    f_801c7a8c(c);
L_01057bb0:
R_01057bb0:
    c.r[11] = c.r[1] + 0x40u;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1057bbcu;
    f_801c8400(c);
R_01057bbc:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01057bd0(wp::Cpu& c) {
    WP_ENTER(0x1057bd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1057c80u: goto R_01057c80;
        case 0x1057c98u: goto R_01057c98;
        case 0x1057ca4u: goto R_01057ca4;
        case 0x1057cb4u: goto R_01057cb4;
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
    if (wp::cr_get(c, 2)) goto L_01057cb4;
    c.r[4] = ((((g_mg442_bases[5] + 0x256f8u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x256f8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x260u;
    ea = c.r[3] + 0x144u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[5] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = c.r[6] + c.r[0];
    goto L_01057c2c;
L_01057c28:
    c.r[6] = c.r[6] + 0x4u;
L_01057c2c:
    wp::compare_unsigned(c, 0, c.r[6], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01057c40;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01057c28;
    }
L_01057c40:
    wp::compare_unsigned(c, 0, c.r[6], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01057c8c;
    c.r[4] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[6] | c.r[6];
    c.r[29] = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[6] + 0x4u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[5] + c.r[0];
    c.r[0] = c.r[0] - c.r[6];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.lr = 0x1057c80u;
    f_801cc76c(c);
R_01057c80:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01057c8c:
    c.r[3] = c.r[30] + 0x144u;
    c.r[4] = 0x0u;
    c.lr = 0x1057c98u;
    f_80063bb0(c);
R_01057c98:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1057ca4u;
    f_mg442_0105c920(c);
R_01057ca4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01057cb4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1057cb4u;
    f_801c7a8c(c);
L_01057cb4:
R_01057cb4:
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

void f_mg442_01057ce0(wp::Cpu& c) {
    WP_ENTER(0x1057ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1057d44u: goto R_01057d44;
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
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01057d04;
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_01057d60;
L_01057d04:
    ea = c.r[3] + 0x163u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01057d60;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x158u;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    ea = c.r[31] + 0x160u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[7] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1057d44u;
    wp::call(c, c.ctr);
R_01057d44:
    ea = c.r[31] + 0x158u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x162u;
    wp::wr8(ea, c.r[3]);
    c.r[3] = c.r[4] + 0xffffffffu;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x163u;
    wp::wr8(ea, c.r[0]);
L_01057d60:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01057d80(wp::Cpu& c) {
    WP_ENTER(0x1057d80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1057dd4u: goto R_01057dd4;
        case 0x1057e10u: goto R_01057e10;
        case 0x1057e48u: goto R_01057e48;
        case 0x1057e64u: goto R_01057e64;
        case 0x1057eacu: goto R_01057eac;
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
    ea = c.r[3] + 0x162u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01057e14;
    ea = c.r[3] + 0x161u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01057eb8;
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01057eb8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] + 0xffffffffu;
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057dd4u;
    wp::call(c, c.ctr);
R_01057dd4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01057eb8;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[7] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1057e10u;
    wp::call(c, c.ctr);
R_01057e10:
    goto L_01057eb8;
L_01057e14:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01057eb8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01057e50;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057e48u;
    wp::call(c, c.ctr);
R_01057e48:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01057eb8;
L_01057e50:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057e64u;
    wp::call(c, c.ctr);
R_01057e64:
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01057eb0;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    c.r[6] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x1057eacu;
    wp::call(c, c.ctr);
R_01057eac:
    goto L_01057eb8;
L_01057eb0:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x162u;
    wp::wr8(ea, c.r[0]);
L_01057eb8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01057ed0(wp::Cpu& c) {
    WP_ENTER(0x1057ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1057ee4u: goto R_01057ee4;
        case 0x1057f08u: goto R_01057f08;
        case 0x1057f1cu: goto R_01057f1c;
        case 0x1057f64u: goto R_01057f64;
        case 0x1057fc8u: goto R_01057fc8;
        case 0x1057fccu: goto R_01057fcc;
        case 0x1058034u: goto R_01058034;
        case 0x1058038u: goto R_01058038;
        case 0x10580f8u: goto R_010580f8;
        case 0x10580fcu: goto R_010580fc;
        case 0x1058104u: goto R_01058104;
        case 0x105812cu: goto R_0105812c;
        case 0x1058130u: goto R_01058130;
        case 0x10581acu: goto R_010581ac;
        case 0x10581bcu: goto R_010581bc;
        case 0x1058208u: goto R_01058208;
        case 0x1058274u: goto R_01058274;
        case 0x1058278u: goto R_01058278;
        case 0x1058280u: goto R_01058280;
        case 0x10582a8u: goto R_010582a8;
        case 0x10582acu: goto R_010582ac;
        case 0x10582e4u: goto R_010582e4;
        case 0x10582f4u: goto R_010582f4;
        case 0x1058338u: goto R_01058338;
        case 0x1058380u: goto R_01058380;
        case 0x10583d0u: goto R_010583d0;
        case 0x10583d4u: goto R_010583d4;
        case 0x1058420u: goto R_01058420;
        case 0x1058424u: goto R_01058424;
        case 0x10584c4u: goto R_010584c4;
        case 0x10584c8u: goto R_010584c8;
        case 0x10584d0u: goto R_010584d0;
        case 0x10584ecu: goto R_010584ec;
        case 0x10584f0u: goto R_010584f0;
        case 0x1058550u: goto R_01058550;
        case 0x1058560u: goto R_01058560;
        case 0x10585a8u: goto R_010585a8;
        case 0x10585ccu: goto R_010585cc;
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
    c.lr = 0x1057ee4u;
    f_801c8388(c);
R_01057ee4:
    c.r[29] = c.r[6] | c.r[6];
    c.r[30] = c.r[7] | c.r[7];
    c.r[16] = c.r[8] | c.r[8];
    c.r[28] = c.r[3] | c.r[3];
    c.r[15] = c.r[9] | c.r[9];
    c.r[8] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x1057f08u;
    f_mg442_0105c630(c);
R_01057f08:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[28] + 0x144u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x1057f1cu;
    f_80063370(c);
R_01057f1c:
    c.r[3] = ((((g_mg442_bases[5] + 0x256f8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x256f8u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[3] + 0x260u;
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x158u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0x15cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x160u;
    wp::wr8(ea, c.r[15]);
    ea = c.r[28] + 0x161u;
    wp::wr8(ea, c.r[16]);
    ea = c.r[28] + 0x162u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[28] + 0x163u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1057f64u;
    wp::call(c, c.ctr);
R_01057f64:
    c.r[6] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01057f98;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[28]);
    goto L_01058208;
L_01057f98:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01057fcc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1057fc8u;
    f_801cee24(c);
R_01057fc8:
    c.lr = 0x1057fccu;
    f_801d3940(c);
L_01057fcc:
R_01057fcc:
    c.r[6] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[7] = 0x0u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[3] = 0x40000000u;
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + 0x8u;
    c.r[18] = wp::rd32(ea);
    c.r[5] = c.r[6] + 0x8u;
    c.r[3] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[3] - c.r[18];
    c.r[0] = c.r[0] - c.r[18];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01058038;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1058034u;
    f_801cee24(c);
R_01058034:
    c.lr = 0x1058038u;
    f_801d3940(c);
L_01058038:
R_01058038:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[18], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01058088;
    c.r[5] = c.r[18] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x14u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105807c;
    c.r[3] = c.r[1] + 0x1cu;
L_0105807c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[15] = c.r[18] + c.r[0];
    goto L_010580cc;
L_01058088:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[18], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010580c4;
    c.r[3] = c.r[18] + 0x1u;
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x18u;
    if (!wp::cr_get(c, 0)) goto L_010580b8;
    c.r[3] = c.r[1] + 0x1cu;
L_010580b8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[15] = c.r[18] + c.r[0];
    goto L_010580cc;
L_010580c4:
    c.r[3] = 0x40000000u;
    c.r[15] = c.r[3] + 0xffffffffu;
L_010580cc:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[15], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010580fc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10580f8u;
    f_801cee24(c);
R_010580f8:
    c.lr = 0x10580fcu;
    f_801d3940(c);
L_010580fc:
R_010580fc:
    c.r[3] = wp::rotl(c.r[15], 2) & 0xfffffffcu;
    c.lr = 0x1058104u;
    f_801c79a4(c);
R_01058104:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[16] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01058130;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105812cu;
    f_801cee24(c);
R_0105812c:
    c.lr = 0x1058130u;
    f_801d3940(c);
L_01058130:
R_01058130:
    c.r[19] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.r[18] = c.r[19] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[16]);
    ea = c.r[18] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[15]);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[16] + c.r[0];
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[28]);
    ea = c.r[18] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[19] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[15] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[15] + c.r[0];
    ea = c.r[1] + 0x50u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[3] - c.r[15];
    c.r[4] = wp::sraw(c, c.r[3], 2);
    ea = c.r[1] + 0x40u;
    c.r[3] = wp::rd32(ea);
    c.r[16] = wp::add_extended(c, c.r[4], 0);
    c.r[0] = c.r[0] - c.r[16];
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[0]);
    c.r[17] = wp::rotl(c.r[16], 2) & 0xfffffffcu;
    c.r[4] = c.r[15] | c.r[15];
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[17] | c.r[17];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x10581acu;
    f_800043c4(c);
R_010581ac:
    c.r[3] = c.r[15] | c.r[15];
    c.r[5] = c.r[17] | c.r[17];
    c.r[4] = 0x0u;
    c.lr = 0x10581bcu;
    f_80004714(c);
R_010581bc:
    c.r[0] = wp::add_carry(c, c.r[1], 0x40u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[18] + 0x8u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[16];
    ea = c.r[19] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[18] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[19] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[18] + 0x4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01058208;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058208;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1058208u;
    f_801c7a8c(c);
L_01058208:
R_01058208:
    c.r[4] = 0x0u;
    c.r[5] = ((((g_mg442_bases[5] + 0x25480u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x25480u) & 0xFFFFu);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[5] + 0x260u;
    wp::compare_unsigned(c, 0, c.r[30], c.r[4]);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x164u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0x168u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0x170u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01058338;
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_01058278;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1058274u;
    f_801cee24(c);
R_01058274:
    c.lr = 0x1058278u;
    f_801d3940(c);
L_01058278:
R_01058278:
    c.r[3] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.lr = 0x1058280u;
    f_801c79a4(c);
R_01058280:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[16] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010582ac;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10582a8u;
    f_801cee24(c);
R_010582a8:
    c.lr = 0x10582acu;
    f_801d3940(c);
L_010582ac:
R_010582ac:
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[17] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[17] + c.r[3];
    c.r[4] = c.r[17] | c.r[17];
    c.r[3] = c.r[3] - c.r[17];
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = wp::sraw(c, c.r[3], 2);
    c.r[15] = wp::add_extended(c, c.r[3], 0);
    c.r[18] = wp::rotl(c.r[15], 2) & 0xfffffffcu;
    c.r[3] = c.r[16] + c.r[0];
    c.r[5] = c.r[18] | c.r[18];
    c.lr = 0x10582e4u;
    f_800043c4(c);
R_010582e4:
    c.r[3] = c.r[17] | c.r[17];
    c.r[5] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.lr = 0x10582f4u;
    f_80004714(c);
R_010582f4:
    ea = c.r[28] + 0x164u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[16] | c.r[16];
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[28] + 0x16cu;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[6] = c.r[4] + c.r[15];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[28] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x168u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01058338;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1058338u;
    f_801c7a8c(c);
L_01058338:
R_01058338:
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[17] = c.r[1] + 0x2cu;
    c.r[21] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[31] = 0x0u;
    c.r[25] = 0xcccd0000u;
    c.r[20] = ((((g_mg442_bases[5] + 0x2239cu) + 0x8000u) >> 16) << 16);
    c.r[19] = 0x40000000u;
    c.r[22] = 0x0u;
    c.r[24] = 0x15550000u;
    c.r[26] = 0x2aab0000u;
    c.r[27] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    goto L_010585b0;
L_01058368:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x78u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058380u;
    wp::call(c, c.ctr);
R_01058380:
    ea = c.r[28] + 0x168u;
    c.r[5] = wp::rd32(ea);
    c.r[18] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x16cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010583b0;
    c.r[5] = c.r[5] + 0x1u;
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[28] + 0x168u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + c.r[0];
    ea = c.r[4] + 0xfffffffcu;
    wp::wr32(ea, c.r[3]);
    goto L_010585a8;
L_010583b0:
    c.r[0] = c.r[19] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010583d4;
    c.r[4] = c.r[20] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10583d0u;
    f_801cee24(c);
R_010583d0:
    c.lr = 0x10583d4u;
    f_801d3940(c);
L_010583d4:
R_010583d4:
    ea = c.r[28] + 0x168u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x16cu;
    ea = c.r[28] + 0x16cu;
    c.r[23] = wp::rd32(ea);
    c.r[0] = c.r[19] + 0xffffffffu;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[22]);
    c.r[3] = c.r[3] - c.r[23];
    c.r[0] = c.r[0] - c.r[23];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[22]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[22]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[22]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01058424;
    c.r[4] = c.r[20] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1058420u;
    f_801cee24(c);
R_01058420:
    c.lr = 0x1058424u;
    f_801d3940(c);
L_01058424:
R_01058424:
    c.r[0] = c.r[24] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105846c;
    c.r[4] = c.r[23] + 0x1u;
    c.r[5] = c.r[25] + 0xffffcccdu;
    c.r[3] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] - c.r[4];
    c.r[4] = wp::mulhwu(c.r[5], c.r[4]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01058460;
    c.r[3] = c.r[1] + 0x8u;
L_01058460:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[16] = c.r[23] + c.r[0];
    goto L_010584a8;
L_0105846c:
    c.r[0] = c.r[26] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010584a4;
    c.r[3] = c.r[23] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01058498;
    c.r[3] = c.r[1] + 0x8u;
L_01058498:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[16] = c.r[23] + c.r[0];
    goto L_010584a8;
L_010584a4:
    c.r[16] = c.r[19] + 0xffffffffu;
L_010584a8:
    c.r[0] = c.r[19] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[16], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010584c8;
    c.r[4] = c.r[20] + wp::sign_extend16((g_mg442_bases[5] + 0x2239cu) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10584c4u;
    f_801cee24(c);
R_010584c4:
    c.lr = 0x10584c8u;
    f_801d3940(c);
L_010584c8:
R_010584c8:
    c.r[3] = wp::rotl(c.r[16], 2) & 0xfffffffcu;
    c.lr = 0x10584d0u;
    f_801c79a4(c);
R_010584d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010584f0;
    c.r[3] = c.r[21] + 0xa0u;
    c.r[4] = c.r[27] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10584ecu;
    f_801cee24(c);
R_010584ec:
    c.lr = 0x10584f0u;
    f_801d3940(c);
L_010584f0:
R_010584f0:
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[16]);
    c.r[4] = c.r[3] + 0x1u;
    c.r[5] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    c.r[3] = c.r[23] + c.r[6];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + c.r[3];
    wp::wr32(ea, c.r[18]);
    ea = c.r[28] + 0x168u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[16] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    c.r[3] = c.r[16] + c.r[3];
    c.r[4] = c.r[16] | c.r[16];
    c.r[3] = c.r[3] - c.r[16];
    c.r[3] = wp::sraw(c, c.r[3], 2);
    c.r[18] = wp::add_extended(c, c.r[3], 0);
    c.r[0] = c.r[0] - c.r[18];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.r[15] = wp::rotl(c.r[18], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[15] | c.r[15];
    c.r[3] = c.r[23] + c.r[0];
    c.lr = 0x1058550u;
    f_800043c4(c);
R_01058550:
    c.r[3] = c.r[16] | c.r[16];
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x1058560u;
    f_80004714(c);
R_01058560:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    ea = c.r[28] + 0x164u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[0] + c.r[18];
    c.r[0] = c.r[23] | c.r[23];
    ea = c.r[28] + 0x16cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[28] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x168u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[22]);
    if (wp::cr_get(c, 2)) goto L_010585a8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010585a8;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[22]);
    c.lr = 0x10585a8u;
    f_801c7a8c(c);
L_010585a8:
R_010585a8:
    c.r[29] = c.r[29] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_010585b0:
    wp::compare_signed(c, 0, c.r[31], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01058368;
    }
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd32(ea);
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[28] + 0x158u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10585ccu;
    f_801c83d4(c);
R_010585cc:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_010585e0(wp::Cpu& c) {
    WP_ENTER(0x10585e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058638u: goto R_01058638;
        case 0x10586c4u: goto R_010586c4;
        case 0x10586dcu: goto R_010586dc;
        case 0x10586e8u: goto R_010586e8;
        case 0x10586f8u: goto R_010586f8;
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
    if (wp::cr_get(c, 2)) goto L_010586f8;
    c.r[4] = wp::add_carry(c, c.r[3], 0x164u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01058638;
    if (wp::cr_get(c, 2)) goto L_01058638;
    if (wp::cr_get(c, 2)) goto L_01058638;
    if (wp::cr_get(c, 2)) goto L_01058638;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058638;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1058638u;
    f_801c7a8c(c);
L_01058638:
R_01058638:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010586e8;
    c.r[3] = ((((g_mg442_bases[5] + 0x256f8u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x256f8u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0x260u;
    ea = c.r[30] + 0x144u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = c.r[3] + c.r[0];
    goto L_01058674;
L_01058670:
    c.r[3] = c.r[3] + 0x4u;
L_01058674:
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01058688;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01058670;
    }
L_01058688:
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010586d0;
    c.r[4] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] + 0x4u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[5] + c.r[0];
    c.r[0] = c.r[0] - c.r[3];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[5] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.lr = 0x10586c4u;
    f_801cc76c(c);
R_010586c4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010586d0:
    c.r[3] = c.r[30] + 0x144u;
    c.r[4] = 0x0u;
    c.lr = 0x10586dcu;
    f_80063bb0(c);
R_010586dc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10586e8u;
    f_mg442_0105c920(c);
L_010586e8:
R_010586e8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010586f8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10586f8u;
    f_801c7a8c(c);
L_010586f8:
R_010586f8:
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

void f_mg442_01058720(wp::Cpu& c) {
    WP_ENTER(0x1058720u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058798u: goto R_01058798;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x38u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.f[31] = c.f[2];
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x28u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    c.f[30] = c.f[1];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 0)) goto L_010587ec;
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010587ec;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[3] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x80u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058798u;
    wp::call(c, c.ctr);
R_01058798:
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + c.r[31];
    c.r[3] = wp::rd32(ea);
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    ea = c.r[3] + 0x34u;
    wp::wr8(ea, c.r[30]);
    ea = c.r[28] + 0x164u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[31];
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x28u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[28] + 0x164u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[31];
    c.r[3] = wp::rd32(ea);
    if (!wp::cr_get(c, 0)) goto L_010587d0;
    c.f[31] = c.f[0];
    goto L_010587e4;
L_010587d0:
    ea = c.r[3] + 0x30u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_010587e4;
    c.f[31] = c.f[0];
L_010587e4:
    ea = c.r[3] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[28] + 0x170u;
    wp::wr32(ea, c.r[29]);
L_010587ec:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x28u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01058820(wp::Cpu& c) {
    WP_ENTER(0x1058820u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0105882c;
    ea = c.r[3] + 0x170u;
    c.r[4] = wp::rd32(ea);
L_0105882c:
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01058840;
    c.r[3] = 0x1u;
    return;
L_01058840:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[3] + 0x164u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[12] + 0x7cu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + c.r[0];
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mg442_01058860(wp::Cpu& c) {
    WP_ENTER(0x1058860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0105886c;
    ea = c.r[3] + 0x170u;
    c.r[4] = wp::rd32(ea);
L_0105886c:
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01058880;
    c.r[3] = 0x1u;
    return;
L_01058880:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[3] + 0x164u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[12] + 0x7cu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + c.r[0];
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mg442_010588a0(wp::Cpu& c) {
    WP_ENTER(0x10588a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058904u: goto R_01058904;
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
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010588c4;
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_01058920;
L_010588c4:
    ea = c.r[3] + 0x163u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01058920;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x158u;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    ea = c.r[31] + 0x160u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[7] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1058904u;
    wp::call(c, c.ctr);
R_01058904:
    ea = c.r[31] + 0x158u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x162u;
    wp::wr8(ea, c.r[3]);
    c.r[3] = c.r[4] + 0xffffffffu;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x163u;
    wp::wr8(ea, c.r[0]);
L_01058920:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01058940(wp::Cpu& c) {
    WP_ENTER(0x1058940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058994u: goto R_01058994;
        case 0x10589d0u: goto R_010589d0;
        case 0x1058a08u: goto R_01058a08;
        case 0x1058a24u: goto R_01058a24;
        case 0x1058a6cu: goto R_01058a6c;
        case 0x1058a84u: goto R_01058a84;
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
    ea = c.r[3] + 0x162u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010589d4;
    ea = c.r[3] + 0x161u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058a90;
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01058a90;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] + 0xffffffffu;
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058994u;
    wp::call(c, c.ctr);
R_01058994:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058a90;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[7] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10589d0u;
    wp::call(c, c.ctr);
R_010589d0:
    goto L_01058a90;
L_010589d4:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01058a90;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01058a10;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058a08u;
    wp::call(c, c.ctr);
R_01058a08:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058a90;
L_01058a10:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058a24u;
    wp::call(c, c.ctr);
R_01058a24:
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01058a88;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    c.r[6] = ((((g_mg442_bases[4] + 0x1c34u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[4] + 0x1c34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x1058a6cu;
    wp::call(c, c.ctr);
R_01058a6c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058a84u;
    wp::call(c, c.ctr);
R_01058a84:
    goto L_01058a90;
L_01058a88:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x162u;
    wp::wr8(ea, c.r[0]);
L_01058a90:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01058ab0(wp::Cpu& c) {
    WP_ENTER(0x1058ab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058af4u: goto R_01058af4;
        case 0x1058b04u: goto R_01058b04;
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
    if (wp::cr_get(c, 2)) goto L_01058b04;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058af4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058af4u;
    wp::call(c, c.ctr);
L_01058af4:
R_01058af4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01058b04;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1058b04u;
    f_801c7a8c(c);
L_01058b04:
R_01058b04:
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

void f_mg442_01058b20(wp::Cpu& c) {
    WP_ENTER(0x1058b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058b60u: goto R_01058b60;
        case 0x1058b78u: goto R_01058b78;
        case 0x1058b84u: goto R_01058b84;
        case 0x1058b90u: goto R_01058b90;
        case 0x1058ba0u: goto R_01058ba0;
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
    if (wp::cr_get(c, 2)) goto L_01058ba0;
    c.r[4] = ((((g_mg442_bases[5] + 0x2544cu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2544cu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x20u;
    ea = c.r[3] + 0x144u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1058b60u;
    f_8006dfe0(c);
R_01058b60:
    c.r[4] = ((((g_mg442_bases[1] + 0x58ab0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] + 0x15cu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[1] + 0x58ab0u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.r[6] = 0x2u;
    c.lr = 0x1058b78u;
    f_801c8160(c);
R_01058b78:
    c.r[3] = c.r[30] + 0x144u;
    c.r[4] = 0x0u;
    c.lr = 0x1058b84u;
    f_80063bb0(c);
R_01058b84:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1058b90u;
    f_80051600(c);
R_01058b90:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01058ba0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1058ba0u;
    f_801c7a8c(c);
L_01058ba0:
R_01058ba0:
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

void f_mg442_01058bc0(wp::Cpu& c) {
    WP_ENTER(0x1058bc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058c64u: goto R_01058c64;
        case 0x1058c74u: goto R_01058c74;
        case 0x1058c84u: goto R_01058c84;
        case 0x1058c90u: goto R_01058c90;
        case 0x1058c9cu: goto R_01058c9c;
        case 0x1058cd0u: goto R_01058cd0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x38u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x188u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01058c04;
    ea = c.r[3] + 0x184u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x184u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[5]);
    if (wp::cr_get(c, 0)) goto L_01058cd0;
    c.r[0] = 0xffffffffu;
    ea = c.r[3] + 0x188u;
    wp::wr32(ea, c.r[0]);
L_01058c04:
    ea = c.r[3] + 0x180u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01058cd0;
    ea = c.r[3] + 0x17cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = 0x43300000u;
    c.r[5] = ((((g_mg442_bases[4] + 0x1c48u) + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[0] ^ 0x80000000u;
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x17cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[4] ^ 0x80000000u;
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x1c48u) & 0xFFFFu);
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[31] + 0x164u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[3] = c.r[3] + 0x170u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = wp::round_single(c.f[0] - c.f[2]);
    c.ps1[0] = c.f[0];
    c.f[31] = wp::round_single(c.f[1] / c.f[0]);
    c.ps1[31] = c.f[31];
    c.lr = 0x1058c64u;
    f_8014c120(c);
R_01058c64:
    c.f[1] = c.f[31];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[3] | c.r[3];
    c.lr = 0x1058c74u;
    f_8014c150(c);
R_01058c74:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[31] + 0x164u;
    c.r[5] = c.r[3] | c.r[3];
    c.lr = 0x1058c84u;
    f_8014c0f0(c);
R_01058c84:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x1058c90u;
    f_80052250(c);
R_01058c90:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x1058c9cu;
    f_80053d20(c);
R_01058c9c:
    c.r[3] = ((((g_mg442_bases[4] + 0x1c30u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x1c30u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_01058cd0;
    ea = c.r[31] + 0x18cu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = 0xffffffffu;
    ea = c.r[31] + 0x180u;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058cd0;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x1058cd0u;
    f_80052250(c);
L_01058cd0:
R_01058cd0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01058cf0(wp::Cpu& c) {
    WP_ENTER(0x1058cf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058d54u: goto R_01058d54;
        case 0x1058da4u: goto R_01058da4;
        case 0x1058dd4u: goto R_01058dd4;
        case 0x1058de0u: goto R_01058de0;
        case 0x1058df0u: goto R_01058df0;
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
    if (wp::cr_get(c, 2)) goto L_01058df0;
    c.r[4] = ((((g_mg442_bases[5] + 0x25418u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x30u;
    c.r[31] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25418u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x10u;
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_01058d58;
L_01058d34:
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058d54;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1058d54u;
    wp::call(c, c.ctr);
L_01058d54:
R_01058d54:
    c.r[31] = c.r[31] + 0x4u;
L_01058d58:
    ea = c.r[29] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01058d34;
    }
    c.r[4] = wp::add_carry(c, c.r[29], 0x3cu, 0);
    wp::record(c, c.r[4]);
    c.r[0] = c.r[5] - c.r[5];
    ea = c.r[29] + 0x34u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01058da4;
    if (wp::cr_get(c, 2)) goto L_01058da4;
    if (wp::cr_get(c, 2)) goto L_01058da4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058da4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1058da4u;
    f_801c7a8c(c);
L_01058da4:
R_01058da4:
    c.r[4] = wp::add_carry(c, c.r[29], 0x30u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01058dd4;
    if (wp::cr_get(c, 2)) goto L_01058dd4;
    if (wp::cr_get(c, 2)) goto L_01058dd4;
    if (wp::cr_get(c, 2)) goto L_01058dd4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01058dd4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1058dd4u;
    f_801c7a8c(c);
L_01058dd4:
R_01058dd4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1058de0u;
    f_80063bb0(c);
R_01058de0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01058df0;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1058df0u;
    f_801c7a8c(c);
L_01058df0:
R_01058df0:
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

void f_mg442_01058e10(wp::Cpu& c) {
    WP_ENTER(0x1058e10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1058e8cu: goto R_01058e8c;
        case 0x105902cu: goto R_0105902c;
        case 0x105903cu: goto R_0105903c;
        case 0x105904cu: goto R_0105904c;
        case 0x1059058u: goto R_01059058;
        case 0x1059064u: goto R_01059064;
        case 0x1059070u: goto R_01059070;
        case 0x105907cu: goto R_0105907c;
        case 0x1059088u: goto R_01059088;
        case 0x1059094u: goto R_01059094;
        case 0x10590a0u: goto R_010590a0;
        case 0x10590acu: goto R_010590ac;
        case 0x10590b8u: goto R_010590b8;
        case 0x10590c4u: goto R_010590c4;
        case 0x10590d0u: goto R_010590d0;
        case 0x10590dcu: goto R_010590dc;
        case 0x10590e8u: goto R_010590e8;
        case 0x10590f4u: goto R_010590f4;
        case 0x1059100u: goto R_01059100;
        case 0x105910cu: goto R_0105910c;
        case 0x1059118u: goto R_01059118;
        case 0x1059128u: goto R_01059128;
        case 0x1059130u: goto R_01059130;
        case 0x1059198u: goto R_01059198;
        case 0x10591b8u: goto R_010591b8;
        case 0x10591d8u: goto R_010591d8;
        case 0x105926cu: goto R_0105926c;
        case 0x1059280u: goto R_01059280;
        case 0x10592e0u: goto R_010592e0;
        case 0x10592e4u: goto R_010592e4;
        case 0x10592f0u: goto R_010592f0;
        case 0x10593b8u: goto R_010593b8;
        case 0x10593e0u: goto R_010593e0;
        case 0x10593fcu: goto R_010593fc;
        case 0x1059458u: goto R_01059458;
        case 0x10594d0u: goto R_010594d0;
        case 0x10594e4u: goto R_010594e4;
        case 0x1059544u: goto R_01059544;
        case 0x1059548u: goto R_01059548;
        case 0x1059554u: goto R_01059554;
        case 0x1059610u: goto R_01059610;
        case 0x10596a8u: goto R_010596a8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffe80u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x184u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xb0u;
    ea = c.r[1] + 0x170u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x178u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x160u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x168u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x150u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0x158u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x140u;
    wp::wrf64(ea, c.f[28]);
    ea = c.r[1] + 0x148u;
    wp::store_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x130u;
    wp::wrf64(ea, c.f[27]);
    ea = c.r[1] + 0x138u;
    wp::store_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0x120u;
    wp::wrf64(ea, c.f[26]);
    ea = c.r[1] + 0x128u;
    wp::store_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0x110u;
    wp::wrf64(ea, c.f[25]);
    ea = c.r[1] + 0x118u;
    wp::store_quantized(c, 25, ea, 0, 0, q);
    ea = c.r[1] + 0x100u;
    wp::wrf64(ea, c.f[24]);
    ea = c.r[1] + 0x108u;
    wp::store_quantized(c, 24, ea, 0, 0, q);
    ea = c.r[1] + 0xf0u;
    wp::wrf64(ea, c.f[23]);
    ea = c.r[1] + 0xf8u;
    wp::store_quantized(c, 23, ea, 0, 0, q);
    ea = c.r[1] + 0xe0u;
    wp::wrf64(ea, c.f[22]);
    ea = c.r[1] + 0xe8u;
    wp::store_quantized(c, 22, ea, 0, 0, q);
    ea = c.r[1] + 0xd0u;
    wp::wrf64(ea, c.f[21]);
    ea = c.r[1] + 0xd8u;
    wp::store_quantized(c, 21, ea, 0, 0, q);
    ea = c.r[1] + 0xc0u;
    wp::wrf64(ea, c.f[20]);
    ea = c.r[1] + 0xc8u;
    wp::store_quantized(c, 20, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    wp::wrf64(ea, c.f[19]);
    ea = c.r[1] + 0xb8u;
    wp::store_quantized(c, 19, ea, 0, 0, q);
    c.lr = 0x1058e8cu;
    f_801c83a0(c);
R_01058e8c:
    c.r[5] = ((((g_mg442_bases[6] + 0x836u) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_mg442_bases[4] + 0x1448u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[6] + 0x836u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[23] = c.r[3] | c.r[3];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x1448u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01059014;
    c.r[4] = ((((g_mg442_bases[6] + 0x838u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xd34u;
    c.f[19] = wp::rdf32(ea);
    c.ps1[19] = c.f[19];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x838u) & 0xFFFFu);
    ea = c.r[30] + 0x7ecu;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    ea = c.r[30] + 0xd50u;
    c.f[26] = wp::rdf32(ea);
    c.ps1[26] = c.f[26];
    c.r[0] = 0x1u;
    ea = c.r[30] + 0xd3cu;
    c.f[21] = wp::rdf32(ea);
    c.ps1[21] = c.f[21];
    ea = c.r[30] + 0xd4cu;
    c.f[25] = wp::rdf32(ea);
    c.ps1[25] = c.f[25];
    ea = c.r[30] + 0xd44u;
    c.f[23] = wp::rdf32(ea);
    c.ps1[23] = c.f[23];
    ea = c.r[30] + 0xd38u;
    c.f[20] = wp::rdf32(ea);
    c.ps1[20] = c.f[20];
    ea = c.r[30] + 0xd40u;
    c.f[22] = wp::rdf32(ea);
    c.ps1[22] = c.f[22];
    ea = c.r[30] + 0xd54u;
    c.f[27] = wp::rdf32(ea);
    c.ps1[27] = c.f[27];
    ea = c.r[30] + 0xd60u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    ea = c.r[30] + 0xd68u;
    c.f[12] = wp::rdf32(ea);
    c.ps1[12] = c.f[12];
    ea = c.r[30] + 0xd74u;
    c.f[9] = wp::rdf32(ea);
    c.ps1[9] = c.f[9];
    ea = c.r[30] + 0xd80u;
    c.f[6] = wp::rdf32(ea);
    c.ps1[6] = c.f[6];
    ea = c.r[30] + 0xd8cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[30] + 0xd94u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[30] + 0xd98u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[30] + 0xd48u;
    c.f[24] = wp::rdf32(ea);
    c.ps1[24] = c.f[24];
    ea = c.r[30] + 0xd58u;
    c.f[28] = wp::rdf32(ea);
    c.ps1[28] = c.f[28];
    ea = c.r[30] + 0xd5cu;
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[30] + 0xd64u;
    c.f[13] = wp::rdf32(ea);
    c.ps1[13] = c.f[13];
    ea = c.r[30] + 0xd6cu;
    c.f[11] = wp::rdf32(ea);
    c.ps1[11] = c.f[11];
    ea = c.r[30] + 0xd70u;
    c.f[10] = wp::rdf32(ea);
    c.ps1[10] = c.f[10];
    ea = c.r[30] + 0xd78u;
    c.f[8] = wp::rdf32(ea);
    c.ps1[8] = c.f[8];
    ea = c.r[30] + 0xd7cu;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    ea = c.r[30] + 0xd84u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[30] + 0xd88u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[30] + 0xd90u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x838u) & 0xFFFFu);
    wp::wrf32(ea, static_cast<float>(c.f[19]));
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[20]));
    ea = c.r[3] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[21]));
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[22]));
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[20]));
    ea = c.r[3] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[21]));
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[23]));
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[23]));
    ea = c.r[3] + 0x20u;
    wp::wrf32(ea, static_cast<float>(c.f[21]));
    ea = c.r[3] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[24]));
    ea = c.r[3] + 0x28u;
    wp::wrf32(ea, static_cast<float>(c.f[23]));
    ea = c.r[3] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[21]));
    ea = c.r[3] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[25]));
    ea = c.r[3] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[19]));
    ea = c.r[3] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[26]));
    ea = c.r[3] + 0x3cu;
    wp::wrf32(ea, static_cast<float>(c.f[27]));
    ea = c.r[3] + 0x40u;
    wp::wrf32(ea, static_cast<float>(c.f[19]));
    ea = c.r[3] + 0x44u;
    wp::wrf32(ea, static_cast<float>(c.f[26]));
    ea = c.r[3] + 0x48u;
    wp::wrf32(ea, static_cast<float>(c.f[28]));
    ea = c.r[3] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[25]));
    ea = c.r[3] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[26]));
    ea = c.r[3] + 0x54u;
    wp::wrf32(ea, static_cast<float>(c.f[29]));
    ea = c.r[3] + 0x58u;
    wp::wrf32(ea, static_cast<float>(c.f[25]));
    ea = c.r[3] + 0x5cu;
    wp::wrf32(ea, static_cast<float>(c.f[26]));
    ea = c.r[3] + 0x60u;
    wp::wrf32(ea, static_cast<float>(c.f[19]));
    ea = c.r[3] + 0x64u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0x68u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0x6cu;
    wp::wrf32(ea, static_cast<float>(c.f[22]));
    ea = c.r[3] + 0x70u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0x74u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0x78u;
    wp::wrf32(ea, static_cast<float>(c.f[13]));
    ea = c.r[3] + 0x7cu;
    wp::wrf32(ea, static_cast<float>(c.f[12]));
    ea = c.r[3] + 0x80u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0x84u;
    wp::wrf32(ea, static_cast<float>(c.f[11]));
    ea = c.r[3] + 0x88u;
    wp::wrf32(ea, static_cast<float>(c.f[12]));
    ea = c.r[3] + 0x8cu;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0x90u;
    wp::wrf32(ea, static_cast<float>(c.f[10]));
    ea = c.r[3] + 0x94u;
    wp::wrf32(ea, static_cast<float>(c.f[9]));
    ea = c.r[3] + 0x98u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0x9cu;
    wp::wrf32(ea, static_cast<float>(c.f[8]));
    ea = c.r[3] + 0xa0u;
    wp::wrf32(ea, static_cast<float>(c.f[9]));
    ea = c.r[3] + 0xa4u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0xa8u;
    wp::wrf32(ea, static_cast<float>(c.f[7]));
    ea = c.r[3] + 0xacu;
    wp::wrf32(ea, static_cast<float>(c.f[6]));
    ea = c.r[3] + 0xb0u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0xb4u;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    ea = c.r[3] + 0xb8u;
    wp::wrf32(ea, static_cast<float>(c.f[6]));
    ea = c.r[3] + 0xbcu;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[3] + 0xc0u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[3] + 0xc4u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[3] + 0xc8u;
    wp::wrf32(ea, static_cast<float>(c.f[26]));
    ea = c.r[3] + 0xccu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0xd0u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[3] + 0xd4u;
    wp::wrf32(ea, static_cast<float>(c.f[26]));
    ea = c.r[3] + 0xd8u;
    wp::wrf32(ea, static_cast<float>(c.f[25]));
    ea = c.r[3] + 0xdcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0xe0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0xe4u;
    wp::wrf32(ea, static_cast<float>(c.f[27]));
    ea = c.r[3] + 0xe8u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0xecu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[6] + 0x836u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01059014:
    c.r[22] = ((((g_mg442_bases[6] + 0x978u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mg442_bases[6] + 0x978u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01059124;
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x105902cu;
    f_80071fe0(c);
R_0105902c:
    c.r[21] = ((((g_mg442_bases[6] + 0x928u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[21] + wp::sign_extend16((g_mg442_bases[6] + 0x928u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    c.lr = 0x105903cu;
    f_80071fe0(c);
R_0105903c:
    c.r[21] = c.r[21] + wp::sign_extend16((g_mg442_bases[6] + 0x928u) & 0xFFFFu);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[21] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.lr = 0x105904cu;
    f_80071fe0(c);
R_0105904c:
    ea = c.r[21] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059058u;
    f_80071fe0(c);
R_01059058:
    ea = c.r[21] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059064u;
    f_80071fe0(c);
R_01059064:
    ea = c.r[21] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059070u;
    f_80071fe0(c);
R_01059070:
    ea = c.r[21] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x105907cu;
    f_80071fe0(c);
R_0105907c:
    ea = c.r[21] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059088u;
    f_80071fe0(c);
R_01059088:
    ea = c.r[21] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059094u;
    f_80071fe0(c);
R_01059094:
    ea = c.r[21] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590a0u;
    f_80071fe0(c);
R_010590a0:
    ea = c.r[21] + 0x24u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590acu;
    f_80071fe0(c);
R_010590ac:
    ea = c.r[21] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590b8u;
    f_80071fe0(c);
R_010590b8:
    ea = c.r[21] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590c4u;
    f_80071fe0(c);
R_010590c4:
    ea = c.r[21] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590d0u;
    f_80071fe0(c);
R_010590d0:
    ea = c.r[21] + 0x34u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590dcu;
    f_80071fe0(c);
R_010590dc:
    ea = c.r[21] + 0x38u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590e8u;
    f_80071fe0(c);
R_010590e8:
    ea = c.r[21] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10590f4u;
    f_80071fe0(c);
R_010590f4:
    ea = c.r[21] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059100u;
    f_80071fe0(c);
R_01059100:
    ea = c.r[21] + 0x44u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x105910cu;
    f_80071fe0(c);
R_0105910c:
    ea = c.r[21] + 0x48u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059118u;
    f_80071fe0(c);
R_01059118:
    c.r[0] = 0x1u;
    ea = c.r[21] + 0x4cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[22] + wp::sign_extend16((g_mg442_bases[6] + 0x978u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01059124:
    c.lr = 0x1059128u;
    f_8004a110(c);
R_01059128:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x1059130u;
    f_8004a100(c);
R_01059130:
    ea = c.r[23] + 0x18u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01059160;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01059210;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01059418;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01059470;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_01059608;
    goto L_01059638;
L_01059160:
    c.r[21] = ((((g_mg442_bases[6] + 0x838u) + 0x8000u) >> 16) << 16);
    c.r[24] = ((((g_mg442_bases[4] + 0x20c8u) + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mg442_bases[4] + 0x2118u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0x7ecu;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[21] = c.r[21] + wp::sign_extend16((g_mg442_bases[6] + 0x838u) & 0xFFFFu);
    c.r[24] = c.r[24] + wp::sign_extend16((g_mg442_bases[4] + 0x20c8u) & 0xFFFFu);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mg442_bases[4] + 0x2118u) & 0xFFFFu);
    c.r[26] = 0x0u;
    c.r[22] = 0x0u;
    goto L_010591ec;
L_01059188:
    ea = c.r[23] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[21] | c.r[21];
    ea = c.r[3] + c.r[22];
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1059198u;
    f_80053d20(c);
R_01059198:
    ea = c.r[24] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[1] + 0x3cu;
    wp::wrf32(ea, static_cast<float>(c.f[30]));
    ea = c.r[1] + 0x40u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[23] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[22];
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10591b8u;
    f_80053df0(c);
R_010591b8:
    ea = c.r[23] + 0x24u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[25] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[23] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    ea = c.r[3] + c.r[22];
    c.r[3] = wp::rd32(ea);
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x10591d8u;
    f_80053e70(c);
R_010591d8:
    c.r[21] = c.r[21] + 0xcu;
    c.r[22] = c.r[22] + 0x4u;
    c.r[24] = c.r[24] + 0x4u;
    c.r[25] = c.r[25] + 0x4u;
    c.r[26] = c.r[26] + 0x1u;
L_010591ec:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01059188;
    }
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01059638;
L_01059210:
    c.r[3] = (((0x802f5ed8u + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mg442_bases[6] + 0x838u) + 0x8000u) >> 16) << 16);
    c.r[26] = ((((g_mg442_bases[4] + 0x2078u) + 0x8000u) >> 16) << 16);
    c.r[27] = ((((g_mg442_bases[4] + 0x2168u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5ed8u & 0xFFFFu);
    c.r[29] = wp::rd8(ea);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mg442_bases[6] + 0x838u) & 0xFFFFu);
    ea = c.r[30] + 0xda4u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg442_bases[4] + 0x2078u) & 0xFFFFu);
    ea = c.r[30] + 0xda8u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg442_bases[4] + 0x2168u) & 0xFFFFu);
    c.r[31] = 0x0u;
    c.r[28] = 0x0u;
    c.r[21] = 0x0u;
    goto L_01059380;
L_01059248:
    ea = c.r[25] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[25] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[25] + 0x8u;
    c.f[20] = wp::rdf32(ea);
    c.ps1[20] = c.f[20];
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[26] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105926cu;
    f_80047ad0(c);
R_0105926c:
    c.f[2] = wp::round_single(c.f[31] * wp::force25(c.f[1]));
    c.ps1[2] = c.f[2];
    ea = c.r[25] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[26] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[19] = wp::round_single(c.f[0] + c.f[2]);
    c.ps1[19] = c.f[19];
    c.lr = 0x1059280u;
    f_80047ac0(c);
R_01059280:
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[1]));
    c.ps1[1] = c.f[1];
    ea = c.r[25] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x60u;
    wp::wrf32(ea, static_cast<float>(c.f[19]));
    c.f[0] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x64u;
    wp::wrf32(ea, static_cast<float>(c.f[20]));
    ea = c.r[1] + 0x5cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    if (wp::cr_get(c, 2)) goto L_010592d8;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010592c4;
    ea = c.r[1] + 0x68u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] - c.f[30]);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] - c.f[30]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x68u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    goto L_010592d8;
L_010592c4:
    ea = c.r[1] + 0x68u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] + c.f[30]);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] + c.f[30]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x68u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
L_010592d8:
    ea = c.r[30] + 0xdacu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10592e0u;
    f_80071fe0(c);
R_010592e0:
    c.lr = 0x10592e4u;
    f_8006b500(c);
R_010592e4:
    ea = c.r[30] + 0xdb0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[22] = c.r[3] | c.r[3];
    c.lr = 0x10592f0u;
    f_80071fe0(c);
R_010592f0:
    ea = c.r[1] + 0x68u;
    c.r[0] = wp::rd32(ea);
    c.r[25] = c.r[25] + 0xcu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + 0x4u;
    ea = c.r[23] + 0x30u;
    c.r[4] = wp::rd32(ea);
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[1] + 0x6cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + c.r[28];
    c.r[4] = wp::rd32(ea);
    c.r[28] = c.r[28] + 0x4u;
    ea = c.r[1] + 0x2cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x70u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x5cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x164u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x30u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x60u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x168u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x16cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x170u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x24u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x174u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x28u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x178u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[4] + 0x17cu;
    wp::wr32(ea, c.r[21]);
    ea = c.r[4] + 0x180u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x184u;
    wp::wr32(ea, c.r[21]);
    ea = c.r[4] + 0x188u;
    wp::wr32(ea, c.r[22]);
    ea = c.r[4] + 0x18cu;
    wp::wr8(ea, c.r[21]);
L_01059380:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01059248;
    }
    ea = c.r[23] + 0x2bu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01059400;
    ea = c.r[23] + 0x29u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010593c0;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x345u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10593b8u;
    f_80018e30(c);
R_010593b8:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    goto L_01059400;
L_010593c0:
    ea = c.r[23] + 0x2au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010593e8;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x344u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10593e0u;
    f_80018e30(c);
R_010593e0:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    goto L_01059400;
L_010593e8:
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x343u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10593fcu;
    f_80018e30(c);
R_010593fc:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
L_01059400:
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01059638;
L_01059418:
    ea = c.r[23] + 0x28u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01059444;
    ea = c.r[23] + 0x20u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01059638;
    ea = c.r[23] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 0)) goto L_01059638;
L_01059444:
    ea = c.r[23] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01059458;
    c.r[4] = 0x5u;
    c.lr = 0x1059458u;
    f_800195d0(c);
L_01059458:
R_01059458:
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01059638;
L_01059470:
    c.r[3] = (((0x802f5ed8u + 0x8000u) >> 16) << 16);
    c.r[29] = ((((g_mg442_bases[6] + 0x838u) + 0x8000u) >> 16) << 16);
    c.r[28] = ((((g_mg442_bases[4] + 0x2078u) + 0x8000u) >> 16) << 16);
    c.r[27] = ((((g_mg442_bases[4] + 0x2168u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5ed8u & 0xFFFFu);
    c.r[25] = wp::rd8(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mg442_bases[6] + 0x838u) & 0xFFFFu);
    ea = c.r[30] + 0xda4u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg442_bases[4] + 0x2078u) & 0xFFFFu);
    ea = c.r[30] + 0xda8u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg442_bases[4] + 0x2168u) & 0xFFFFu);
    c.r[24] = 0x0u;
    c.r[26] = 0x0u;
    c.r[21] = 0x0u;
    c.r[22] = 0x1u;
    goto L_010595e4;
L_010594ac:
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[29] + 0x8u;
    c.f[20] = wp::rdf32(ea);
    c.ps1[20] = c.f[20];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10594d0u;
    f_80047ad0(c);
R_010594d0:
    c.f[2] = wp::round_single(c.f[30] * wp::force25(c.f[1]));
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[28] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[19] = wp::round_single(c.f[0] + c.f[2]);
    c.ps1[19] = c.f[19];
    c.lr = 0x10594e4u;
    f_80047ac0(c);
R_010594e4:
    c.f[1] = wp::round_single(c.f[30] * wp::force25(c.f[1]));
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    ea = c.r[1] + 0x48u;
    wp::wrf32(ea, static_cast<float>(c.f[19]));
    c.f[0] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[20]));
    ea = c.r[1] + 0x44u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    if (wp::cr_get(c, 2)) goto L_0105953c;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01059528;
    ea = c.r[1] + 0x50u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] - c.f[31]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    goto L_0105953c;
L_01059528:
    ea = c.r[1] + 0x50u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[0] + c.f[31]);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] + c.f[31]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
L_0105953c:
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059544u;
    f_80071fe0(c);
R_01059544:
    c.lr = 0x1059548u;
    f_8006b500(c);
R_01059548:
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x1059554u;
    f_80071fe0(c);
R_01059554:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.r[29] = c.r[29] + 0xcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[28] + 0x4u;
    ea = c.r[23] + 0x30u;
    c.r[4] = wp::rd32(ea);
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[1] + 0x48u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + c.r[26];
    c.r[4] = wp::rd32(ea);
    c.r[26] = c.r[26] + 0x4u;
    ea = c.r[1] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x164u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x168u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x16cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x170u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x174u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x178u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[4] + 0x17cu;
    wp::wr32(ea, c.r[21]);
    ea = c.r[4] + 0x180u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x184u;
    wp::wr32(ea, c.r[21]);
    ea = c.r[4] + 0x188u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[4] + 0x18cu;
    wp::wr8(ea, c.r[22]);
L_010595e4:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010594ac;
    }
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01059638;
L_01059608:
    ea = c.r[30] + 0xdb4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059610u;
    f_80071fe0(c);
R_01059610:
    ea = c.r[23] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_01059638;
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01059638:
    c.r[11] = c.r[1] + 0xb0u;
    ea = c.r[1] + 0x178u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x170u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x168u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x160u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x158u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x150u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0x148u;
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x140u;
    c.f[28] = wp::rdf64(ea);
    ea = c.r[1] + 0x138u;
    wp::load_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0x130u;
    c.f[27] = wp::rdf64(ea);
    ea = c.r[1] + 0x128u;
    wp::load_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0x120u;
    c.f[26] = wp::rdf64(ea);
    ea = c.r[1] + 0x118u;
    wp::load_quantized(c, 25, ea, 0, 0, q);
    ea = c.r[1] + 0x110u;
    c.f[25] = wp::rdf64(ea);
    ea = c.r[1] + 0x108u;
    wp::load_quantized(c, 24, ea, 0, 0, q);
    ea = c.r[1] + 0x100u;
    c.f[24] = wp::rdf64(ea);
    ea = c.r[1] + 0xf8u;
    wp::load_quantized(c, 23, ea, 0, 0, q);
    ea = c.r[1] + 0xf0u;
    c.f[23] = wp::rdf64(ea);
    ea = c.r[1] + 0xe8u;
    wp::load_quantized(c, 22, ea, 0, 0, q);
    ea = c.r[1] + 0xe0u;
    c.f[22] = wp::rdf64(ea);
    ea = c.r[1] + 0xd8u;
    wp::load_quantized(c, 21, ea, 0, 0, q);
    ea = c.r[1] + 0xd0u;
    c.f[21] = wp::rdf64(ea);
    ea = c.r[1] + 0xc8u;
    wp::load_quantized(c, 20, ea, 0, 0, q);
    ea = c.r[1] + 0xc0u;
    c.f[20] = wp::rdf64(ea);
    ea = c.r[1] + 0xb8u;
    wp::load_quantized(c, 19, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    c.f[19] = wp::rdf64(ea);
    c.lr = 0x10596a8u;
    f_801c83ec(c);
R_010596a8:
    ea = c.r[1] + 0x184u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x180u;
    return;
}

void f_mg442_010596c0(wp::Cpu& c) {
    WP_ENTER(0x10596c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10596f0u: goto R_010596f0;
        case 0x10596fcu: goto R_010596fc;
        case 0x105970cu: goto R_0105970c;
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
    if (wp::cr_get(c, 2)) goto L_0105970c;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x144u;
    c.lr = 0x10596f0u;
    f_80063bb0(c);
R_010596f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10596fcu;
    f_80051600(c);
R_010596fc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105970c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x105970cu;
    f_801c7a8c(c);
L_0105970c:
R_0105970c:
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

void f_mg442_01059730(wp::Cpu& c) {
    WP_ENTER(0x1059730u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x15cu;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mg442_01059740(wp::Cpu& c) {
    WP_ENTER(0x1059740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = ((((g_mg442_bases[6] + 0x97cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[6] + 0x97cu) & 0xFFFFu);
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x1c0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x1ccu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[3];
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mg442_01059770(wp::Cpu& c) {
    WP_ENTER(0x1059770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10597a4u: goto R_010597a4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[10] = c.r[7] | c.r[7];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = c.r[9] | c.r[9];
    c.r[9] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[8]);
    c.r[8] = c.r[5] | c.r[5];
    c.r[7] = c.r[0] | c.r[0];
    c.r[5] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10597a4u;
    f_mg442_0104f0c0(c);
R_010597a4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_010597c0(wp::Cpu& c) {
    WP_ENTER(0x10597c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = wp::sraw(c, c.r[5], 31);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[5]);
    c.r[3] = wp::add_extended(c, c.r[4], c.r[3]);
    return;
}

void f_mg442_010597e0(wp::Cpu& c) {
    WP_ENTER(0x10597e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_010597f0(wp::Cpu& c) {
    WP_ENTER(0x10597f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = 0x5u;
    c.r[3] = 0x0u;
    c.r[4] = wp::sraw(c, c.r[5], 31);
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[5]);
    c.r[3] = wp::add_extended(c, c.r[4], c.r[3]);
    return;
}

void f_mg442_01059810(wp::Cpu& c) {
    WP_ENTER(0x1059810u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = wp::cntlzw(c.r[4]);
    c.r[0] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[3] + 0x2bu;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mg442_01059820(wp::Cpu& c) {
    WP_ENTER(0x1059820u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2au;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg442_01059830(wp::Cpu& c) {
    WP_ENTER(0x1059830u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x28u;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mg442_01059840(wp::Cpu& c) {
    WP_ENTER(0x1059840u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01059854;
    c.r[3] = 0x0u;
    return;
L_01059854:
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01059870;
    c.r[3] = 0x0u;
    return;
L_01059870:
    ea = c.r[3] + 0x162u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01059884;
    c.r[3] = 0x0u;
    return;
L_01059884:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mg442_010598a0(wp::Cpu& c) {
    WP_ENTER(0x10598a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010598b4;
    c.r[3] = 0x0u;
    return;
L_010598b4:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010598d0;
    c.r[3] = 0x0u;
    return;
L_010598d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mg442_010598f0(wp::Cpu& c) {
    WP_ENTER(0x10598f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = ((((g_mg442_bases[6] + 0x824u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    c.r[4] = ((((g_mg442_bases[1] + 0x59920u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg442_bases[6] + 0x818u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x824u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[1] + 0x59920u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[6] + 0x818u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    f_mg442_01000000(c);
    return;
}

void f_mg442_01059920(wp::Cpu& c) {
    WP_ENTER(0x1059920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1059970u: goto R_01059970;
        case 0x1059980u: goto R_01059980;
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
    if (wp::cr_get(c, 2)) goto L_01059980;
    if (wp::cr_get(c, 2)) goto L_01059970;
    if (wp::cr_get(c, 2)) goto L_01059970;
    if (wp::cr_get(c, 2)) goto L_01059970;
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01059970;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] | c.r[4];
    c.lr = 0x1059970u;
    f_801c7a8c(c);
L_01059970:
R_01059970:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01059980;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1059980u;
    f_801c7a8c(c);
L_01059980:
R_01059980:
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

void f_mg442_010599a0(wp::Cpu& c) {
    WP_ENTER(0x10599a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_010577b0(c);
    return;
}

void f_mg442_010599b0(wp::Cpu& c) {
    WP_ENTER(0x10599b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_01057740(c);
    return;
}

void f_mg442_010599c0(wp::Cpu& c) {
    WP_ENTER(0x10599c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_01057d80(c);
    return;
}

void f_mg442_010599d0(wp::Cpu& c) {
    WP_ENTER(0x10599d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_01057bd0(c);
    return;
}

void f_mg442_010599e0(wp::Cpu& c) {
    WP_ENTER(0x10599e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_01058940(c);
    return;
}

void f_mg442_010599f0(wp::Cpu& c) {
    WP_ENTER(0x10599f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_010585e0(c);
    return;
}

void f_mg442_01059a00(wp::Cpu& c) {
    WP_ENTER(0x1059a00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_01058bc0(c);
    return;
}

void f_mg442_01059a10(wp::Cpu& c) {
    WP_ENTER(0x1059a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_01058b20(c);
    return;
}

void f_mg442_01059a20(wp::Cpu& c) {
    WP_ENTER(0x1059a20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mg442_010597e0(c);
    return;
}

void f_mg442_01059a30(wp::Cpu& c) {
    WP_ENTER(0x1059a30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mg442_01058cf0(c);
    return;
}

void f_mg442_01059a40(wp::Cpu& c) {
    WP_ENTER(0x1059a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_01059730(c);
    return;
}

void f_mg442_01059a50(wp::Cpu& c) {
    WP_ENTER(0x1059a50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg442_010596c0(c);
    return;
}

void f_mg442_01059a60(wp::Cpu& c) {
    WP_ENTER(0x1059a60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mg442_010597c0(c);
    return;
}

void f_mg442_01059a70(wp::Cpu& c) {
    WP_ENTER(0x1059a70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mg442_010596c0(c);
    return;
}

void f_mg442_01059a80(wp::Cpu& c) {
    WP_ENTER(0x1059a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1059ac8u: goto R_01059ac8;
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
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 1)) goto L_01059abc;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_01059b9c;
L_01059abc:
    c.r[3] = ((((g_mg442_bases[4] + 0x2258u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2258u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059ac8u;
    f_80071fe0(c);
R_01059ac8:
    c.r[0] = c.r[30] * 0x64u;
    c.r[5] = 0x51ec0000u;
    c.r[4] = 0x88890000u;
    c.r[5] = c.r[5] + 0xffff851fu;
    c.r[3] = wp::divw(c.r[0], c.r[3]);
    c.r[0] = c.r[4] + 0xffff8889u;
    c.r[3] = wp::mulhw(c.r[5], c.r[3]);
    c.r[3] = wp::sraw(c, c.r[3], 5);
    c.r[4] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[6] = c.r[3] + c.r[4];
    c.r[0] = wp::mulhw(c.r[0], c.r[6]);
    c.r[0] = c.r[0] + c.r[6];
    c.r[4] = wp::sraw(c, c.r[0], 5);
    c.r[0] = wp::sraw(c, c.r[0], 5);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[7] = c.r[4] + c.r[5];
    c.r[0] = c.r[0] * 0x3cu;
    wp::compare_signed(c, 0, c.r[7], 0x63u);
    c.r[8] = c.r[6] - c.r[0];
    if (wp::cr_get(c, 1)) goto L_01059b84;
    c.r[3] = 0x66660000u;
    c.r[0] = c.r[3] + 0x6667u;
    c.r[3] = wp::mulhw(c.r[0], c.r[7]);
    c.r[5] = wp::sraw(c, c.r[3], 2);
    c.r[3] = wp::sraw(c, c.r[3], 2);
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[5] = c.r[5] + c.r[6];
    c.r[4] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[6] = c.r[3] + c.r[4];
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[0] = wp::mulhw(c.r[0], c.r[8]);
    c.r[4] = wp::sraw(c, c.r[0], 2);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[0] = c.r[0] * 0xau;
    c.r[3] = c.r[4] + c.r[5];
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[6] = c.r[6] * 0xau;
    c.r[0] = c.r[8] - c.r[0];
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[7] - c.r[6];
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[3]);
    goto L_01059b9c;
L_01059b84:
    c.r[3] = 0x9u;
    c.r[0] = 0x5u;
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
L_01059b9c:
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

void f_mg442_01059bc0(wp::Cpu& c) {
    WP_ENTER(0x1059bc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1059c08u: goto R_01059c08;
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
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 1)) goto L_01059bfc;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_01059cbc;
L_01059bfc:
    c.r[3] = ((((g_mg442_bases[4] + 0x2258u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2258u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059c08u;
    f_80071fe0(c);
R_01059c08:
    c.r[5] = c.r[30] * 0x64u;
    c.r[4] = 0x51ec0000u;
    c.r[0] = c.r[4] + 0xffff851fu;
    c.r[6] = wp::divw(c.r[5], c.r[3]);
    c.r[0] = wp::mulhw(c.r[0], c.r[6]);
    c.r[4] = wp::sraw(c, c.r[0], 5);
    c.r[0] = wp::sraw(c, c.r[0], 5);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[7] = c.r[4] + c.r[5];
    c.r[0] = c.r[0] * 0x64u;
    wp::compare_signed(c, 0, c.r[7], 0x63u);
    c.r[8] = c.r[6] - c.r[0];
    if (wp::cr_get(c, 1)) goto L_01059ca8;
    c.r[3] = 0x66660000u;
    c.r[0] = c.r[3] + 0x6667u;
    c.r[3] = wp::mulhw(c.r[0], c.r[7]);
    c.r[5] = wp::sraw(c, c.r[3], 2);
    c.r[3] = wp::sraw(c, c.r[3], 2);
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[5] = c.r[5] + c.r[6];
    c.r[4] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[6] = c.r[3] + c.r[4];
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[0] = wp::mulhw(c.r[0], c.r[8]);
    c.r[4] = wp::sraw(c, c.r[0], 2);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[0] = c.r[0] * 0xau;
    c.r[3] = c.r[4] + c.r[5];
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[6] = c.r[6] * 0xau;
    c.r[0] = c.r[8] - c.r[0];
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[7] - c.r[6];
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[3]);
    goto L_01059cbc;
L_01059ca8:
    c.r[0] = 0x9u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_01059cbc:
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

void f_mg442_01059ce0(wp::Cpu& c) {
    WP_ENTER(0x1059ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1059d30u: goto R_01059d30;
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
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 1)) goto L_01059d24;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
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
    goto L_01059e4c;
L_01059d24:
    c.r[3] = ((((g_mg442_bases[4] + 0x2258u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2258u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059d30u;
    f_80071fe0(c);
R_01059d30:
    c.r[0] = c.r[30] * 0x64u;
    c.r[5] = 0x51ec0000u;
    c.r[4] = 0x88890000u;
    c.r[5] = c.r[5] + 0xffff851fu;
    c.r[8] = wp::divw(c.r[0], c.r[3]);
    c.r[0] = c.r[4] + 0xffff8889u;
    c.r[5] = wp::mulhw(c.r[5], c.r[8]);
    c.r[3] = wp::sraw(c, c.r[5], 5);
    c.r[4] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[9] = c.r[3] + c.r[4];
    c.r[0] = wp::mulhw(c.r[0], c.r[9]);
    c.r[3] = c.r[0] + c.r[9];
    c.r[0] = wp::sraw(c, c.r[3], 5);
    c.r[5] = wp::sraw(c, c.r[5], 5);
    c.r[3] = wp::sraw(c, c.r[3], 5);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    c.r[5] = c.r[5] + c.r[6];
    c.r[3] = c.r[3] + c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x63u);
    c.r[4] = c.r[3] * 0x3cu;
    c.r[5] = c.r[5] * 0x64u;
    c.r[4] = c.r[9] - c.r[4];
    c.r[3] = c.r[8] - c.r[5];
    if (wp::cr_get(c, 1)) goto L_01059e2c;
    c.r[5] = 0x66660000u;
    c.r[11] = c.r[5] + 0x6667u;
    c.r[5] = wp::mulhw(c.r[11], c.r[0]);
    c.r[8] = wp::sraw(c, c.r[5], 2);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[5] = wp::mulhw(c.r[11], c.r[4]);
    c.r[9] = wp::rotl(c.r[8], 1) & 0x1u;
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[8] = c.r[8] + c.r[9];
    ea = c.r[31] + 0x14u;
    wp::wr32(ea, c.r[8]);
    c.r[10] = c.r[6] + c.r[7];
    c.r[8] = wp::sraw(c, c.r[5], 2);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[5] = wp::mulhw(c.r[11], c.r[3]);
    c.r[9] = wp::rotl(c.r[8], 1) & 0x1u;
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[8] = c.r[8] + c.r[9];
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[8]);
    c.r[9] = c.r[6] + c.r[7];
    c.r[7] = wp::sraw(c, c.r[5], 2);
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[10] = c.r[10] * 0xau;
    c.r[8] = wp::rotl(c.r[7], 1) & 0x1u;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[5] = c.r[5] + c.r[6];
    c.r[6] = c.r[7] + c.r[8];
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[6]);
    c.r[6] = c.r[9] * 0xau;
    c.r[0] = c.r[0] - c.r[10];
    ea = c.r[31] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] * 0xau;
    c.r[4] = c.r[4] - c.r[6];
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] - c.r[0];
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_01059e4c;
L_01059e2c:
    c.r[3] = 0x9u;
    c.r[0] = 0x5u;
    ea = c.r[31] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
L_01059e4c:
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

void f_mg442_01059e70(wp::Cpu& c) {
    WP_ENTER(0x1059e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1059eb8u: goto R_01059eb8;
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
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01059ec0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01059ec0;
    c.r[5] = ((((g_mg442_bases[4] + 0x2258u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x2258u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1059eb8u;
    f_80018e30(c);
R_01059eb8:
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01059ec0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01059ee0(wp::Cpu& c) {
    WP_ENTER(0x1059ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[4]);
    f_800402c0(c);
    return;
}

void f_mg442_01059ef0(wp::Cpu& c) {
    WP_ENTER(0x1059ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1059f0cu: goto R_01059f0c;
        case 0x1059f20u: goto R_01059f20;
        case 0x1059f60u: goto R_01059f60;
        case 0x1059f84u: goto R_01059f84;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x1059f0cu;
    f_801c83b4(c);
R_01059f0c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x1059f20u;
    f_mg442_01059a80(c);
R_01059f20:
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_01059f38:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1059f60u;
    f_80040980(c);
R_01059f60:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01059f38;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1059f84u;
    f_801c8400(c);
R_01059f84:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg442_01059fa0(wp::Cpu& c) {
    WP_ENTER(0x1059fa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1059fbcu: goto R_01059fbc;
        case 0x1059fd0u: goto R_01059fd0;
        case 0x105a010u: goto R_0105a010;
        case 0x105a034u: goto R_0105a034;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x1059fbcu;
    f_801c83b4(c);
R_01059fbc:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x1059fd0u;
    f_mg442_01059bc0(c);
R_01059fd0:
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_01059fe8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105a010u;
    f_80040980(c);
R_0105a010:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01059fe8;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105a034u;
    f_801c8400(c);
R_0105a034:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg442_0105a050(wp::Cpu& c) {
    WP_ENTER(0x105a050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105a06cu: goto R_0105a06c;
        case 0x105a080u: goto R_0105a080;
        case 0x105a0c0u: goto R_0105a0c0;
        case 0x105a0e4u: goto R_0105a0e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105a06cu;
    f_801c83b4(c);
R_0105a06c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x105a080u;
    f_mg442_01059ce0(c);
R_0105a080:
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_0105a098:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105a0c0u;
    f_80040980(c);
R_0105a0c0:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105a098;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105a0e4u;
    f_801c8400(c);
R_0105a0e4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg442_0105a100(wp::Cpu& c) {
    WP_ENTER(0x105a100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105a11cu: goto R_0105a11c;
        case 0x105a188u: goto R_0105a188;
        case 0x105a1e0u: goto R_0105a1e0;
        case 0x105a200u: goto R_0105a200;
        case 0x105a22cu: goto R_0105a22c;
        case 0x105a24cu: goto R_0105a24c;
        case 0x105a288u: goto R_0105a288;
        case 0x105a2b0u: goto R_0105a2b0;
        case 0x105a2c0u: goto R_0105a2c0;
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
    c.lr = 0x105a11cu;
    f_801c839c(c);
R_0105a11c:
    c.r[22] = ((((g_mg442_bases[4] + 0x2268u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mg442_bases[4] + 0x2268u) & 0xFFFFu);
    c.r[12] = wp::rd32(ea);
    c.r[22] = ea;
    c.r[0] = 0x0u;
    c.r[26] = c.r[4] | c.r[4];
    ea = c.r[22] + 0x4u;
    c.r[11] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    ea = c.r[22] + 0x8u;
    c.r[10] = wp::rd32(ea);
    c.r[20] = c.r[6] | c.r[6];
    ea = c.r[22] + 0xcu;
    c.r[9] = wp::rd32(ea);
    c.r[25] = c.r[3] | c.r[3];
    ea = c.r[22] + 0x10u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x18u;
    ea = c.r[22] + 0x14u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[22] + 0x18u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[22] + 0x1cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105a188u;
    f_mg442_01059a80(c);
R_0105a188:
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    c.r[30] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    c.r[30] = c.r[30] + c.r[0];
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0105a1b8:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a1d0;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0105a1d4;
L_0105a1d0:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_0105a1d4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x105a1e0u;
    f_801c7860(c);
R_0105a1e0:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x105a200u;
    f_mg442_0100d990(c);
R_0105a200:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a21c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0105a220;
L_0105a21c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_0105a220:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x105a22cu;
    f_801c7860(c);
R_0105a22c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x105a24cu;
    f_mg442_0100d990(c);
R_0105a24c:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a264;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0105a268;
L_0105a264:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_0105a268:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105a288u;
    f_80040980(c);
R_0105a288:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105a1b8;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105a2b0;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105a2b0u;
    f_801c7a8c(c);
L_0105a2b0:
R_0105a2b0:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105a2c0u;
    f_801c83e8(c);
R_0105a2c0:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_0105a2d0(wp::Cpu& c) {
    WP_ENTER(0x105a2d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105a2ecu: goto R_0105a2ec;
        case 0x105a314u: goto R_0105a314;
        case 0x105a370u: goto R_0105a370;
        case 0x105a390u: goto R_0105a390;
        case 0x105a3bcu: goto R_0105a3bc;
        case 0x105a3dcu: goto R_0105a3dc;
        case 0x105a418u: goto R_0105a418;
        case 0x105a440u: goto R_0105a440;
        case 0x105a450u: goto R_0105a450;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff80u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x70u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x78u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105a2ecu;
    f_801c839c(c);
R_0105a2ec:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[5] | c.r[5];
    c.r[20] = c.r[6] | c.r[6];
    c.r[3] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105a314u;
    f_mg442_01059a80(c);
R_0105a314:
    c.r[4] = ((((g_mg442_bases[5] + 0x25cb0u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25cb0u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0105a348:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a360;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0105a364;
L_0105a360:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_0105a364:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x105a370u;
    f_801c7860(c);
R_0105a370:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x105a390u;
    f_mg442_0100d990(c);
R_0105a390:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a3ac;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0105a3b0;
L_0105a3ac:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_0105a3b0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x105a3bcu;
    f_801c7860(c);
R_0105a3bc:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x105a3dcu;
    f_mg442_0100d990(c);
R_0105a3dc:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a3f4;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0105a3f8;
L_0105a3f4:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_0105a3f8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105a418u;
    f_80040980(c);
R_0105a418:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105a348;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105a440;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105a440u;
    f_801c7a8c(c);
L_0105a440:
R_0105a440:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105a450u;
    f_801c83e8(c);
R_0105a450:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mg442_0105a460(wp::Cpu& c) {
    WP_ENTER(0x105a460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105a47cu: goto R_0105a47c;
        case 0x105a4a4u: goto R_0105a4a4;
        case 0x105a500u: goto R_0105a500;
        case 0x105a520u: goto R_0105a520;
        case 0x105a54cu: goto R_0105a54c;
        case 0x105a56cu: goto R_0105a56c;
        case 0x105a5a8u: goto R_0105a5a8;
        case 0x105a5d0u: goto R_0105a5d0;
        case 0x105a5e0u: goto R_0105a5e0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x80u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x88u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105a47cu;
    f_801c839c(c);
R_0105a47c:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[5] | c.r[5];
    c.r[20] = c.r[6] | c.r[6];
    c.r[3] = c.r[1] + 0x28u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105a4a4u;
    f_mg442_01059ce0(c);
R_0105a4a4:
    c.r[0] = c.r[20] * 0x18u;
    c.r[4] = ((((g_mg442_bases[5] + 0x25cd0u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25cd0u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x28u;
    c.r[28] = c.r[1] + 0x19u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0105a4d8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a4f0;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0105a4f4;
L_0105a4f0:
    ea = c.r[1] + 0x1cu;
    c.r[21] = wp::rd32(ea);
L_0105a4f4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x105a500u;
    f_801c7860(c);
R_0105a500:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x105a520u;
    f_mg442_0100d990(c);
R_0105a520:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a53c;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0105a540;
L_0105a53c:
    ea = c.r[1] + 0x1cu;
    c.r[20] = wp::rd32(ea);
L_0105a540:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x105a54cu;
    f_801c7860(c);
R_0105a54c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x105a56cu;
    f_mg442_0100d990(c);
R_0105a56c:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105a584;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0105a588;
L_0105a584:
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
L_0105a588:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105a5a8u;
    f_80040980(c);
R_0105a5a8:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105a4d8;
    }
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105a5d0;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105a5d0u;
    f_801c7a8c(c);
L_0105a5d0:
R_0105a5d0:
    c.r[11] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105a5e0u;
    f_801c83e8(c);
R_0105a5e0:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mg442_0105a5f0(wp::Cpu& c) {
    WP_ENTER(0x105a5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105a60cu: goto R_0105a60c;
        case 0x105a6c0u: goto R_0105a6c0;
        case 0x105a6c4u: goto R_0105a6c4;
        case 0x105a704u: goto R_0105a704;
        case 0x105a774u: goto R_0105a774;
        case 0x105a778u: goto R_0105a778;
        case 0x105a838u: goto R_0105a838;
        case 0x105a83cu: goto R_0105a83c;
        case 0x105a844u: goto R_0105a844;
        case 0x105a86cu: goto R_0105a86c;
        case 0x105a870u: goto R_0105a870;
        case 0x105a8a0u: goto R_0105a8a0;
        case 0x105a8f0u: goto R_0105a8f0;
        case 0x105a900u: goto R_0105a900;
        case 0x105a94cu: goto R_0105a94c;
        case 0x105acc8u: goto R_0105acc8;
        case 0x105ad04u: goto R_0105ad04;
        case 0x105ad14u: goto R_0105ad14;
        case 0x105ad54u: goto R_0105ad54;
        case 0x105ad64u: goto R_0105ad64;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff80u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x70u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x78u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105a60cu;
    f_801c83a0(c);
R_0105a60c:
    c.r[9] = ((((g_mg442_bases[4] + 0x2208u) + 0x8000u) >> 16) << 16);
    c.r[10] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[10]);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mg442_bases[4] + 0x2208u) & 0xFFFFu);
    c.r[24] = c.r[3] | c.r[3];
    ea = c.r[9] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[25] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[10]);
    c.r[26] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    c.r[27] = c.r[7] | c.r[7];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[10]);
    c.r[28] = c.r[8] | c.r[8];
    if (!wp::cr_get(c, 1)) goto L_0105a64c;
    c.r[6] = c.r[0] | c.r[0];
L_0105a64c:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[29] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0105a950;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[30] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[30], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0105a680;
    c.r[0] = c.r[6] - c.r[30];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105a6ec;
L_0105a680:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[3] = c.r[3] - c.r[6];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105a6c4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105a6c0u;
    f_801cee24(c);
R_0105a6c0:
    c.lr = 0x105a6c4u;
    f_801d3940(c);
L_0105a6c4:
R_0105a6c4:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105a6d8;
    goto L_0105a714;
L_0105a6d8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105a714;
    goto L_0105a714;
L_0105a6ec:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105a704u;
    f_80004714(c);
R_0105a704:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0105a960;
L_0105a714:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[4] = c.r[0] + c.r[30];
    c.r[5] = c.r[1] + 0x1cu;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[6]);
    c.r[3] = c.r[4] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[6]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0105a778;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105a774u;
    f_801cee24(c);
R_0105a774:
    c.lr = 0x105a778u;
    f_801d3940(c);
L_0105a778:
R_0105a778:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105a7c8;
    c.r[5] = c.r[31] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105a7bc;
    c.r[3] = c.r[1] + 0x8u;
L_0105a7bc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105a80c;
L_0105a7c8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105a804;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0105a7f8;
    c.r[3] = c.r[1] + 0x8u;
L_0105a7f8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105a80c;
L_0105a804:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0105a80c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105a83c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105a838u;
    f_801cee24(c);
R_0105a838:
    c.lr = 0x105a83cu;
    f_801d3940(c);
L_0105a83c:
R_0105a83c:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x105a844u;
    f_801c79a4(c);
R_0105a844:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105a870;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105a86cu;
    f_801cee24(c);
R_0105a86c:
    c.lr = 0x105a870u;
    f_801d3940(c);
L_0105a870:
R_0105a870:
    ea = c.r[1] + 0x18u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[6] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[23] + c.r[6];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[7]);
    c.lr = 0x105a8a0u;
    f_80004714(c);
R_0105a8a0:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] + c.r[0];
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] - c.r[31];
    c.r[5] = c.r[4] + c.r[30];
    c.r[4] = wp::sraw(c, c.r[3], 2);
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[30] = wp::add_extended(c, c.r[4], 0);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[0] - c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[23] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[23] | c.r[23];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105a8f0u;
    f_800043c4(c);
R_0105a8f0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[23] | c.r[23];
    c.r[4] = 0x0u;
    c.lr = 0x105a900u;
    f_80004714(c);
R_0105a900:
    c.r[0] = wp::add_carry(c, c.r[1], 0x20u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x1cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[30];
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0105a960;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105a960;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x105a94cu;
    f_801c7a8c(c);
R_0105a94c:
    goto L_0105a960;
L_0105a950:
    if (!wp::cr_get(c, 0)) goto L_0105a960;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0105a960:
    wp::compare_unsigned(c, 1, c.r[26], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0105ac04;
    wp::compare_unsigned(c, 0, c.r[26], 0x8u);
    c.r[6] = c.r[26] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0105abac;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0105a998;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105a998;
    c.r[7] = 0x1u;
L_0105a998:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105a9ac;
    wp::compare_unsigned(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105a9ac;
    c.r[5] = 0x1u;
L_0105a9ac:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105a9c4;
    c.r[0] = c.r[26] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0105a9c4;
    c.r[4] = 0x1u;
L_0105a9c4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105abac;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105abac;
L_0105a9e8:
    c.r[6] = wp::mulhw(c.r[0], c.r[29]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[4] = c.r[3] + 0x2u;
    ea = c.r[1] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = c.r[26] - c.r[5];
    c.r[7] = c.r[26] - c.r[4];
    c.r[5] = wp::sraw(c, c.r[6], 2);
    c.r[11] = c.r[26] - c.r[3];
    c.r[4] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[9] = wp::sraw(c, c.r[6], 2);
    c.r[4] = c.r[5] + c.r[4];
    c.r[5] = c.r[3] + 0x3u;
    c.r[30] = c.r[4] * 0xau;
    c.r[10] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[6] = c.r[26] - c.r[5];
    c.r[5] = wp::rotl(c.r[11], 2) & 0xfffffffcu;
    c.r[30] = c.r[29] - c.r[30];
    c.r[29] = c.r[9] + c.r[10];
    c.r[10] = wp::mulhw(c.r[0], c.r[29]);
    ea = c.r[12] + c.r[5];
    wp::wr32(ea, c.r[30]);
    c.r[30] = wp::rotl(c.r[8], 2) & 0xfffffffcu;
    c.r[4] = c.r[3] + 0x4u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[6], 2) & 0xfffffffcu;
    c.r[9] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[26] - c.r[4];
    c.r[11] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x5u;
    c.r[9] = c.r[9] + c.r[11];
    c.r[10] = wp::sraw(c, c.r[10], 2);
    c.r[12] = c.r[9] * 0xau;
    c.r[4] = c.r[26] - c.r[4];
    c.r[11] = wp::rotl(c.r[10], 1) & 0x1u;
    c.r[9] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[6] = c.r[29] - c.r[12];
    c.r[29] = c.r[10] + c.r[11];
    c.r[12] = wp::mulhw(c.r[0], c.r[29]);
    ea = c.r[31] + c.r[30];
    wp::wr32(ea, c.r[6]);
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    c.r[10] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[6] = wp::sraw(c, c.r[12], 2);
    c.r[11] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[12], 2);
    c.r[6] = c.r[6] + c.r[11];
    c.r[11] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[11] = c.r[29] - c.r[11];
    c.r[29] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[29]);
    ea = c.r[10] + c.r[9];
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x14u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[10] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[10];
    c.r[10] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[29] - c.r[10];
    c.r[29] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[29]);
    ea = c.r[9] + c.r[8];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x14u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[8] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[8];
    c.r[8] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[29] - c.r[8];
    c.r[29] = c.r[5] + c.r[6];
    c.r[8] = wp::mulhw(c.r[0], c.r[29]);
    ea = c.r[9] + c.r[7];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[6] = c.r[6] + c.r[7];
    c.r[6] = c.r[6] * 0xau;
    c.r[6] = c.r[29] - c.r[6];
    ea = c.r[5] + c.r[4];
    wp::wr32(ea, c.r[6]);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[5] = c.r[3] + 0x6u;
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x7u;
    c.r[29] = c.r[6] + c.r[7];
    c.r[5] = c.r[26] - c.r[5];
    c.r[10] = wp::mulhw(c.r[0], c.r[29]);
    c.r[4] = c.r[26] - c.r[4];
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x8u;
    c.r[5] = wp::sraw(c, c.r[10], 2);
    c.r[9] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[5] + c.r[9];
    c.r[9] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[9] = c.r[29] - c.r[9];
    c.r[29] = c.r[4] + c.r[5];
    c.r[4] = wp::mulhw(c.r[0], c.r[29]);
    ea = c.r[8] + c.r[7];
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x14u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::sraw(c, c.r[4], 2);
    c.r[8] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[4], 2);
    c.r[5] = c.r[5] + c.r[8];
    c.r[8] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[8] = c.r[29] - c.r[8];
    ea = c.r[7] + c.r[6];
    wp::wr32(ea, c.r[8]);
    c.r[29] = c.r[4] + c.r[5];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105a9e8;
    }
L_0105abac:
    c.r[0] = c.r[26] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[26]);
    if (wp::cr_get(c, 1)) goto L_0105ac04;
L_0105abc8:
    c.r[9] = wp::mulhw(c.r[8], c.r[29]);
    c.r[0] = c.r[26] - c.r[3];
    ea = c.r[1] + 0x14u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = wp::sraw(c, c.r[9], 2);
    c.r[7] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = wp::sraw(c, c.r[9], 2);
    c.r[4] = c.r[4] + c.r[7];
    c.r[7] = c.r[4] * 0xau;
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[7] = c.r[29] - c.r[7];
    ea = c.r[6] + c.r[5];
    wp::wr32(ea, c.r[7]);
    c.r[29] = c.r[0] + c.r[4];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105abc8;
    }
L_0105ac04:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105ac10;
    c.r[27] = c.r[28] | c.r[28];
L_0105ac10:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105ac58;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105ac48;
L_0105ac30:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105ac48;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105ac30;
    }
L_0105ac48:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_0105ac5c;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_0105ac5c;
L_0105ac58:
    c.r[23] = 0x0u;
L_0105ac5c:
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = 0x0u;
    c.r[29] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    goto L_0105ad20;
L_0105ac78:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    ea = c.r[25] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0105accc;
    c.r[0] = c.r[31] + c.r[23];
    wp::compare_unsigned(c, 0, c.r[0], c.r[26]);
    if (!wp::cr_get(c, 0)) goto L_0105ad04;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[4] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[29] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[21] = 0x1u;
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105acc8u;
    f_80040980(c);
R_0105acc8:
    goto L_0105ad04;
L_0105accc:
    wp::compare_unsigned(c, 0, c.r[23], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_0105ad04;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[5] + c.r[30];
    c.r[0] = wp::rd32(ea);
    c.r[21] = 0x1u;
    ea = c.r[29] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105ad04u;
    f_80040980(c);
L_0105ad04:
R_0105ad04:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[22] | c.r[22];
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x105ad14u;
    f_800403f0(c);
R_0105ad14:
    c.r[25] = c.r[25] + 0x4u;
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_0105ad20:
    wp::compare_unsigned(c, 0, c.r[31], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105ac78;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105ad54;
    if (wp::cr_get(c, 2)) goto L_0105ad54;
    if (wp::cr_get(c, 2)) goto L_0105ad54;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105ad54;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105ad54u;
    f_801c7a8c(c);
L_0105ad54:
R_0105ad54:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105ad64u;
    f_801c83ec(c);
R_0105ad64:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mg442_0105ad80(wp::Cpu& c) {
    WP_ENTER(0x105ad80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105ad9cu: goto R_0105ad9c;
        case 0x105ae70u: goto R_0105ae70;
        case 0x105ae74u: goto R_0105ae74;
        case 0x105aeb4u: goto R_0105aeb4;
        case 0x105af24u: goto R_0105af24;
        case 0x105af28u: goto R_0105af28;
        case 0x105afe8u: goto R_0105afe8;
        case 0x105afecu: goto R_0105afec;
        case 0x105aff4u: goto R_0105aff4;
        case 0x105b01cu: goto R_0105b01c;
        case 0x105b020u: goto R_0105b020;
        case 0x105b050u: goto R_0105b050;
        case 0x105b0a0u: goto R_0105b0a0;
        case 0x105b0b0u: goto R_0105b0b0;
        case 0x105b0fcu: goto R_0105b0fc;
        case 0x105b460u: goto R_0105b460;
        case 0x105b470u: goto R_0105b470;
        case 0x105b4b0u: goto R_0105b4b0;
        case 0x105b4c0u: goto R_0105b4c0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff80u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x70u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x78u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105ad9cu;
    f_801c83a4(c);
R_0105ad9c:
    c.r[8] = ((((g_mg442_bases[4] + 0x2230u) + 0x8000u) >> 16) << 16);
    c.r[9] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[28] = c.r[5] + c.r[6];
    c.r[8] = c.r[8] + wp::sign_extend16((g_mg442_bases[4] + 0x2230u) & 0xFFFFu);
    c.r[6] = ((((g_mg442_bases[4] + 0x2208u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[28], 2) & 0xfffffffcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[4] + 0x2208u) & 0xFFFFu);
    c.r[25] = c.r[4] | c.r[4];
    c.f[0] = c.f[1] * c.f[0];
    ea = c.r[6] + c.r[0];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[9]);
    c.r[24] = c.r[3] | c.r[3];
    c.r[26] = c.r[5] | c.r[5];
    c.r[27] = c.r[7] | c.r[7];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[9]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105adfc;
    c.r[4] = c.r[0] | c.r[0];
L_0105adfc:
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[5]);
    c.r[30] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0105b100;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[28] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[29], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0105ae30;
    c.r[0] = c.r[6] - c.r[29];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105ae9c;
L_0105ae30:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[4] + c.r[29];
    c.r[3] = c.r[3] - c.r[6];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105ae74;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105ae70u;
    f_801cee24(c);
R_0105ae70:
    c.lr = 0x105ae74u;
    f_801d3940(c);
L_0105ae74:
R_0105ae74:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105ae88;
    goto L_0105aec4;
L_0105ae88:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105aec4;
    goto L_0105aec4;
L_0105ae9c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[29], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105aeb4u;
    f_80004714(c);
R_0105aeb4:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[29];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0105b110;
L_0105aec4:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[4] = c.r[0] + c.r[29];
    c.r[5] = c.r[1] + 0x1cu;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[6]);
    c.r[3] = c.r[4] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[6]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0105af28;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105af24u;
    f_801cee24(c);
R_0105af24:
    c.lr = 0x105af28u;
    f_801d3940(c);
L_0105af28:
R_0105af28:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105af78;
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
    if (!wp::cr_get(c, 0)) goto L_0105af6c;
    c.r[3] = c.r[1] + 0x10u;
L_0105af6c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105afbc;
L_0105af78:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105afb4;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0105afa8;
    c.r[3] = c.r[1] + 0x10u;
L_0105afa8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105afbc;
L_0105afb4:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0105afbc:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105afec;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105afe8u;
    f_801cee24(c);
R_0105afe8:
    c.lr = 0x105afecu;
    f_801d3940(c);
L_0105afec:
R_0105afec:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x105aff4u;
    f_801c79a4(c);
R_0105aff4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105b020;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105b01cu;
    f_801cee24(c);
R_0105b01c:
    c.lr = 0x105b020u;
    f_801d3940(c);
L_0105b020:
R_0105b020:
    ea = c.r[1] + 0x18u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[29], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[6] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[23] + c.r[6];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[7]);
    c.lr = 0x105b050u;
    f_80004714(c);
R_0105b050:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] + c.r[0];
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] - c.r[31];
    c.r[5] = c.r[4] + c.r[29];
    c.r[4] = wp::sraw(c, c.r[3], 2);
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[23] = wp::add_extended(c, c.r[4], 0);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[0] - c.r[23];
    c.r[4] = c.r[31] | c.r[31];
    c.r[29] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[29] | c.r[29];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105b0a0u;
    f_800043c4(c);
R_0105b0a0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x105b0b0u;
    f_80004714(c);
R_0105b0b0:
    c.r[0] = wp::add_carry(c, c.r[1], 0x20u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x1cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[23];
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0105b110;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b110;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x105b0fcu;
    f_801c7a8c(c);
R_0105b0fc:
    goto L_0105b110;
L_0105b100:
    if (!wp::cr_get(c, 0)) goto L_0105b110;
    c.r[0] = c.r[5] - c.r[28];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0105b110:
    wp::compare_unsigned(c, 1, c.r[28], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0105b3b4;
    wp::compare_unsigned(c, 0, c.r[28], 0x8u);
    c.r[6] = c.r[28] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0105b35c;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0105b148;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105b148;
    c.r[7] = 0x1u;
L_0105b148:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b15c;
    wp::compare_unsigned(c, 0, c.r[28], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105b15c;
    c.r[5] = 0x1u;
L_0105b15c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b174;
    c.r[0] = c.r[28] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0105b174;
    c.r[4] = 0x1u;
L_0105b174:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b35c;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105b35c;
L_0105b198:
    c.r[6] = wp::mulhw(c.r[0], c.r[30]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[4] = c.r[3] + 0x2u;
    ea = c.r[1] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = c.r[28] - c.r[5];
    c.r[7] = c.r[28] - c.r[4];
    c.r[5] = wp::sraw(c, c.r[6], 2);
    c.r[11] = c.r[28] - c.r[3];
    c.r[4] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[9] = wp::sraw(c, c.r[6], 2);
    c.r[4] = c.r[5] + c.r[4];
    c.r[5] = c.r[3] + 0x3u;
    c.r[29] = c.r[4] * 0xau;
    c.r[10] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[6] = c.r[28] - c.r[5];
    c.r[5] = wp::rotl(c.r[11], 2) & 0xfffffffcu;
    c.r[29] = c.r[30] - c.r[29];
    c.r[30] = c.r[9] + c.r[10];
    c.r[10] = wp::mulhw(c.r[0], c.r[30]);
    ea = c.r[12] + c.r[5];
    wp::wr32(ea, c.r[29]);
    c.r[29] = wp::rotl(c.r[8], 2) & 0xfffffffcu;
    c.r[4] = c.r[3] + 0x4u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[6], 2) & 0xfffffffcu;
    c.r[9] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[28] - c.r[4];
    c.r[11] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x5u;
    c.r[9] = c.r[9] + c.r[11];
    c.r[10] = wp::sraw(c, c.r[10], 2);
    c.r[12] = c.r[9] * 0xau;
    c.r[4] = c.r[28] - c.r[4];
    c.r[11] = wp::rotl(c.r[10], 1) & 0x1u;
    c.r[9] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[6] = c.r[30] - c.r[12];
    c.r[30] = c.r[10] + c.r[11];
    c.r[12] = wp::mulhw(c.r[0], c.r[30]);
    ea = c.r[31] + c.r[29];
    wp::wr32(ea, c.r[6]);
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    c.r[10] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[6] = wp::sraw(c, c.r[12], 2);
    c.r[11] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[12], 2);
    c.r[6] = c.r[6] + c.r[11];
    c.r[11] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[11] = c.r[30] - c.r[11];
    c.r[30] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[30]);
    ea = c.r[10] + c.r[9];
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x14u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[10] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[10];
    c.r[10] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[30] - c.r[10];
    c.r[30] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[30]);
    ea = c.r[9] + c.r[8];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x14u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[8] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[8];
    c.r[8] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[30] - c.r[8];
    c.r[30] = c.r[5] + c.r[6];
    c.r[8] = wp::mulhw(c.r[0], c.r[30]);
    ea = c.r[9] + c.r[7];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[6] = c.r[6] + c.r[7];
    c.r[6] = c.r[6] * 0xau;
    c.r[6] = c.r[30] - c.r[6];
    ea = c.r[5] + c.r[4];
    wp::wr32(ea, c.r[6]);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[5] = c.r[3] + 0x6u;
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x7u;
    c.r[30] = c.r[6] + c.r[7];
    c.r[5] = c.r[28] - c.r[5];
    c.r[10] = wp::mulhw(c.r[0], c.r[30]);
    c.r[4] = c.r[28] - c.r[4];
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x8u;
    c.r[5] = wp::sraw(c, c.r[10], 2);
    c.r[9] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[5] + c.r[9];
    c.r[9] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[9] = c.r[30] - c.r[9];
    c.r[30] = c.r[4] + c.r[5];
    c.r[4] = wp::mulhw(c.r[0], c.r[30]);
    ea = c.r[8] + c.r[7];
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x14u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::sraw(c, c.r[4], 2);
    c.r[8] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[4], 2);
    c.r[5] = c.r[5] + c.r[8];
    c.r[8] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[8] = c.r[30] - c.r[8];
    ea = c.r[7] + c.r[6];
    wp::wr32(ea, c.r[8]);
    c.r[30] = c.r[4] + c.r[5];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105b198;
    }
L_0105b35c:
    c.r[0] = c.r[28] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[28]);
    if (wp::cr_get(c, 1)) goto L_0105b3b4;
L_0105b378:
    c.r[9] = wp::mulhw(c.r[8], c.r[30]);
    c.r[0] = c.r[28] - c.r[3];
    ea = c.r[1] + 0x14u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = wp::sraw(c, c.r[9], 2);
    c.r[7] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = wp::sraw(c, c.r[9], 2);
    c.r[4] = c.r[4] + c.r[7];
    c.r[7] = c.r[4] * 0xau;
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[7] = c.r[30] - c.r[7];
    ea = c.r[6] + c.r[5];
    wp::wr32(ea, c.r[7]);
    c.r[30] = c.r[0] + c.r[4];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105b378;
    }
L_0105b3b4:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b400;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105b3f0;
    c.r[0] = c.r[0] | 0x0u;
L_0105b3d8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105b3f0;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105b3d8;
    }
L_0105b3f0:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_0105b404;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_0105b404;
L_0105b400:
    c.r[23] = 0x0u;
L_0105b404:
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = 0x0u;
    c.r[27] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x43300000u;
    goto L_0105b47c;
L_0105b420:
    wp::compare_unsigned(c, 0, c.r[23], c.r[30]);
    ea = c.r[25] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_0105b460;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[26]);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[5] + c.r[29];
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x1u;
    ea = c.r[27] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105b460u;
    f_80040980(c);
L_0105b460:
R_0105b460:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x105b470u;
    f_800403f0(c);
R_0105b470:
    c.r[25] = c.r[25] + 0x4u;
    c.r[29] = c.r[29] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_0105b47c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105b420;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105b4b0;
    if (wp::cr_get(c, 2)) goto L_0105b4b0;
    if (wp::cr_get(c, 2)) goto L_0105b4b0;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b4b0;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105b4b0u;
    f_801c7a8c(c);
L_0105b4b0:
R_0105b4b0:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105b4c0u;
    f_801c83f0(c);
R_0105b4c0:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mg442_0105b4d0(wp::Cpu& c) {
    WP_ENTER(0x105b4d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105b4ecu: goto R_0105b4ec;
        case 0x105b5a4u: goto R_0105b5a4;
        case 0x105b5a8u: goto R_0105b5a8;
        case 0x105b5e8u: goto R_0105b5e8;
        case 0x105b658u: goto R_0105b658;
        case 0x105b65cu: goto R_0105b65c;
        case 0x105b71cu: goto R_0105b71c;
        case 0x105b720u: goto R_0105b720;
        case 0x105b728u: goto R_0105b728;
        case 0x105b750u: goto R_0105b750;
        case 0x105b754u: goto R_0105b754;
        case 0x105b784u: goto R_0105b784;
        case 0x105b7d4u: goto R_0105b7d4;
        case 0x105b7e4u: goto R_0105b7e4;
        case 0x105b830u: goto R_0105b830;
        case 0x105bbb4u: goto R_0105bbb4;
        case 0x105bbc4u: goto R_0105bbc4;
        case 0x105bbe4u: goto R_0105bbe4;
        case 0x105bc10u: goto R_0105bc10;
        case 0x105bc30u: goto R_0105bc30;
        case 0x105bc90u: goto R_0105bc90;
        case 0x105bce0u: goto R_0105bce0;
        case 0x105bd04u: goto R_0105bd04;
        case 0x105bd18u: goto R_0105bd18;
        case 0x105bd58u: goto R_0105bd58;
        case 0x105bd68u: goto R_0105bd68;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff50u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa0u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xa8u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105b4ecu;
    f_801c838c(c);
R_0105b4ec:
    c.r[10] = ((((g_mg442_bases[4] + 0x2208u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[11]);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mg442_bases[4] + 0x2208u) & 0xFFFFu);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[10] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[11]);
    c.r[30] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    c.r[17] = c.r[7] | c.r[7];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[11]);
    c.r[31] = c.r[8] | c.r[8];
    c.r[19] = c.r[9] | c.r[9];
    if (!wp::cr_get(c, 1)) goto L_0105b530;
    c.r[6] = c.r[0] | c.r[0];
L_0105b530:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[25] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0105b834;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[24] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[24], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0105b564;
    c.r[0] = c.r[6] - c.r[24];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105b5d0;
L_0105b564:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x38u;
    c.r[23] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[4] + c.r[24];
    c.r[3] = c.r[3] - c.r[6];
    c.r[0] = c.r[0] - c.r[23];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105b5a8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105b5a4u;
    f_801cee24(c);
R_0105b5a4:
    c.lr = 0x105b5a8u;
    f_801d3940(c);
L_0105b5a8:
R_0105b5a8:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105b5bc;
    goto L_0105b5f8;
L_0105b5bc:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105b5f8;
    goto L_0105b5f8;
L_0105b5d0:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105b5e8u;
    f_80004714(c);
R_0105b5e8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[24];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_0105b844;
L_0105b5f8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x38u;
    c.r[23] = wp::rd32(ea);
    c.r[4] = c.r[0] + c.r[24];
    c.r[5] = c.r[1] + 0x38u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[6]);
    c.r[3] = c.r[4] - c.r[23];
    c.r[0] = c.r[0] - c.r[23];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[6]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0105b65c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105b658u;
    f_801cee24(c);
R_0105b658:
    c.lr = 0x105b65cu;
    f_801d3940(c);
L_0105b65c:
R_0105b65c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105b6ac;
    c.r[5] = c.r[23] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x20u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105b6a0;
    c.r[3] = c.r[1] + 0x18u;
L_0105b6a0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_0105b6f0;
L_0105b6ac:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105b6e8;
    c.r[3] = c.r[23] + 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_0105b6dc;
    c.r[3] = c.r[1] + 0x18u;
L_0105b6dc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_0105b6f0;
L_0105b6e8:
    c.r[3] = 0x40000000u;
    c.r[23] = c.r[3] + 0xffffffffu;
L_0105b6f0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105b720;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105b71cu;
    f_801cee24(c);
R_0105b71c:
    c.lr = 0x105b720u;
    f_801d3940(c);
L_0105b720:
R_0105b720:
    c.r[3] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.lr = 0x105b728u;
    f_801c79a4(c);
R_0105b728:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105b754;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105b750u;
    f_801cee24(c);
R_0105b750:
    c.lr = 0x105b754u;
    f_801d3940(c);
L_0105b754:
R_0105b754:
    ea = c.r[1] + 0x34u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[6] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[18]);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[18] + c.r[6];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[7]);
    c.lr = 0x105b784u;
    f_80004714(c);
R_0105b784:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[18] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x40u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[18] + c.r[0];
    ea = c.r[1] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] - c.r[18];
    c.r[5] = c.r[4] + c.r[24];
    c.r[4] = wp::sraw(c, c.r[3], 2);
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[23] = wp::add_extended(c, c.r[4], 0);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[0] - c.r[23];
    c.r[4] = c.r[18] | c.r[18];
    c.r[16] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[16] | c.r[16];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105b7d4u;
    f_800043c4(c);
R_0105b7d4:
    c.r[3] = c.r[18] | c.r[18];
    c.r[5] = c.r[16] | c.r[16];
    c.r[4] = 0x0u;
    c.lr = 0x105b7e4u;
    f_80004714(c);
R_0105b7e4:
    c.r[0] = wp::add_carry(c, c.r[1], 0x3cu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x38u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[23];
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0105b844;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b844;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x105b830u;
    f_801c7a8c(c);
R_0105b830:
    goto L_0105b844;
L_0105b834:
    if (!wp::cr_get(c, 0)) goto L_0105b844;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_0105b844:
    wp::compare_unsigned(c, 1, c.r[30], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0105bae8;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0105ba90;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0105b87c;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105b87c;
    c.r[7] = 0x1u;
L_0105b87c:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b890;
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105b890;
    c.r[5] = 0x1u;
L_0105b890:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105b8a8;
    c.r[0] = c.r[30] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0105b8a8;
    c.r[4] = 0x1u;
L_0105b8a8:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105ba90;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105ba90;
L_0105b8cc:
    c.r[6] = wp::mulhw(c.r[0], c.r[25]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[4] = c.r[3] + 0x2u;
    ea = c.r[1] + 0x30u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = c.r[30] - c.r[5];
    c.r[7] = c.r[30] - c.r[4];
    c.r[5] = wp::sraw(c, c.r[6], 2);
    c.r[11] = c.r[30] - c.r[3];
    c.r[4] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[9] = wp::sraw(c, c.r[6], 2);
    c.r[4] = c.r[5] + c.r[4];
    c.r[5] = c.r[3] + 0x3u;
    c.r[18] = c.r[4] * 0xau;
    c.r[10] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[6] = c.r[30] - c.r[5];
    c.r[5] = wp::rotl(c.r[11], 2) & 0xfffffffcu;
    c.r[18] = c.r[25] - c.r[18];
    c.r[25] = c.r[9] + c.r[10];
    c.r[10] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[12] + c.r[5];
    wp::wr32(ea, c.r[18]);
    c.r[18] = wp::rotl(c.r[8], 2) & 0xfffffffcu;
    c.r[4] = c.r[3] + 0x4u;
    ea = c.r[1] + 0x30u;
    c.r[20] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[6], 2) & 0xfffffffcu;
    c.r[9] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[30] - c.r[4];
    c.r[11] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x5u;
    c.r[9] = c.r[9] + c.r[11];
    c.r[10] = wp::sraw(c, c.r[10], 2);
    c.r[12] = c.r[9] * 0xau;
    c.r[4] = c.r[30] - c.r[4];
    c.r[11] = wp::rotl(c.r[10], 1) & 0x1u;
    c.r[9] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[6] = c.r[25] - c.r[12];
    c.r[25] = c.r[10] + c.r[11];
    c.r[12] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[20] + c.r[18];
    wp::wr32(ea, c.r[6]);
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    c.r[10] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[6] = wp::sraw(c, c.r[12], 2);
    c.r[11] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[12], 2);
    c.r[6] = c.r[6] + c.r[11];
    c.r[11] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[11] = c.r[25] - c.r[11];
    c.r[25] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[10] + c.r[9];
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x30u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[10] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[10];
    c.r[10] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[25] - c.r[10];
    c.r[25] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[9] + c.r[8];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x30u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[8] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[8];
    c.r[8] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[25] - c.r[8];
    c.r[25] = c.r[5] + c.r[6];
    c.r[8] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[9] + c.r[7];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[6] = c.r[6] + c.r[7];
    c.r[6] = c.r[6] * 0xau;
    c.r[6] = c.r[25] - c.r[6];
    ea = c.r[5] + c.r[4];
    wp::wr32(ea, c.r[6]);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[5] = c.r[3] + 0x6u;
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x7u;
    c.r[25] = c.r[6] + c.r[7];
    c.r[5] = c.r[30] - c.r[5];
    c.r[10] = wp::mulhw(c.r[0], c.r[25]);
    c.r[4] = c.r[30] - c.r[4];
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x8u;
    c.r[5] = wp::sraw(c, c.r[10], 2);
    c.r[9] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[5] + c.r[9];
    c.r[9] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[9] = c.r[25] - c.r[9];
    c.r[25] = c.r[4] + c.r[5];
    c.r[4] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[8] + c.r[7];
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x30u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::sraw(c, c.r[4], 2);
    c.r[8] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[4], 2);
    c.r[5] = c.r[5] + c.r[8];
    c.r[8] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[8] = c.r[25] - c.r[8];
    ea = c.r[7] + c.r[6];
    wp::wr32(ea, c.r[8]);
    c.r[25] = c.r[4] + c.r[5];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105b8cc;
    }
L_0105ba90:
    c.r[0] = c.r[30] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (wp::cr_get(c, 1)) goto L_0105bae8;
L_0105baac:
    c.r[9] = wp::mulhw(c.r[8], c.r[25]);
    c.r[0] = c.r[30] - c.r[3];
    ea = c.r[1] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = wp::sraw(c, c.r[9], 2);
    c.r[7] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = wp::sraw(c, c.r[9], 2);
    c.r[4] = c.r[4] + c.r[7];
    c.r[7] = c.r[4] * 0xau;
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[7] = c.r[25] - c.r[7];
    ea = c.r[6] + c.r[5];
    wp::wr32(ea, c.r[7]);
    c.r[25] = c.r[0] + c.r[4];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105baac;
    }
L_0105bae8:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105baf4;
    c.r[17] = c.r[31] | c.r[31];
L_0105baf4:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105bb40;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105bb30;
    c.r[0] = c.r[0] | 0x0u;
L_0105bb18:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105bb30;
    c.r[22] = c.r[22] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105bb18;
    }
L_0105bb30:
    wp::compare_unsigned(c, 0, c.r[22], c.r[30]);
    if (wp::cr_get(c, 0)) goto L_0105bb44;
    c.r[22] = c.r[30] + 0xffffffffu;
    goto L_0105bb44;
L_0105bb40:
    c.r[22] = 0x0u;
L_0105bb44:
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0105bb54;
    c.r[4] = wp::sub_carry(c, c.r[30], 0x8u);
L_0105bb54:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[17] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0105bd2c;
    c.r[5] = ((((g_mg442_bases[5] + 0x25c58u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[19], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x25c58u) & 0xFFFFu);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0x14u;
    c.r[24] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[25] = wp::rd8(ea);
    c.r[20] = c.r[4] + c.r[0];
    c.r[18] = c.r[1] + 0x25u;
    c.r[19] = 0x0u;
    c.r[26] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    c.r[23] = 0x0u;
    goto L_0105bd24;
L_0105bba0:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[23]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[23]);
    c.lr = 0x105bbb4u;
    f_801c7860(c);
R_0105bbb4:
    c.r[21] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[21] | c.r[21];
    c.lr = 0x105bbc4u;
    f_mg442_0100d7d0(c);
R_0105bbc4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[24]);
    c.r[6] = c.r[29] | c.r[29];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[29] + c.r[21];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x105bbe4u;
    f_mg442_0100d990(c);
R_0105bbe4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[20] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105bc00;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[16] = c.r[0] & 0x7fu;
    goto L_0105bc04;
L_0105bc00:
    ea = c.r[1] + 0x28u;
    c.r[16] = wp::rd32(ea);
L_0105bc04:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[25]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x105bc10u;
    f_801c7860(c);
R_0105bc10:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[16] | c.r[16];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x105bc30u;
    f_mg442_0100d990(c);
R_0105bc30:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0105bc94;
    c.r[4] = c.r[17] + c.r[22];
    wp::compare_unsigned(c, 0, c.r[4], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0105bce0;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[21] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_0105bc6c;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0105bc70;
L_0105bc6c:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0105bc70:
    ea = c.r[6] + c.r[5];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105bc90u;
    f_80040980(c);
R_0105bc90:
    goto L_0105bce0;
L_0105bc94:
    wp::compare_unsigned(c, 0, c.r[22], c.r[17]);
    if (wp::cr_get(c, 1)) goto L_0105bce0;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[21] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105bcbc;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0105bcc0;
L_0105bcbc:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0105bcc0:
    ea = c.r[5] + c.r[19];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105bce0u;
    f_80040980(c);
L_0105bce0:
R_0105bce0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105bcf8;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0105bcfc;
L_0105bcf8:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0105bcfc:
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x105bd04u;
    f_800403f0(c);
R_0105bd04:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105bd18;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105bd18u;
    f_801c7a8c(c);
L_0105bd18:
R_0105bd18:
    c.r[20] = c.r[20] + 0x4u;
    c.r[19] = c.r[19] + 0x4u;
    c.r[17] = c.r[17] + 0x1u;
L_0105bd24:
    wp::compare_unsigned(c, 0, c.r[17], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105bba0;
    }
L_0105bd2c:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105bd58;
    if (wp::cr_get(c, 2)) goto L_0105bd58;
    if (wp::cr_get(c, 2)) goto L_0105bd58;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105bd58;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105bd58u;
    f_801c7a8c(c);
L_0105bd58:
R_0105bd58:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105bd68u;
    f_801c83d8(c);
R_0105bd68:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mg442_0105bd80(wp::Cpu& c) {
    WP_ENTER(0x105bd80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105bd9cu: goto R_0105bd9c;
        case 0x105be78u: goto R_0105be78;
        case 0x105be7cu: goto R_0105be7c;
        case 0x105bebcu: goto R_0105bebc;
        case 0x105bf2cu: goto R_0105bf2c;
        case 0x105bf30u: goto R_0105bf30;
        case 0x105bff0u: goto R_0105bff0;
        case 0x105bff4u: goto R_0105bff4;
        case 0x105bffcu: goto R_0105bffc;
        case 0x105c024u: goto R_0105c024;
        case 0x105c028u: goto R_0105c028;
        case 0x105c058u: goto R_0105c058;
        case 0x105c0a8u: goto R_0105c0a8;
        case 0x105c0b8u: goto R_0105c0b8;
        case 0x105c104u: goto R_0105c104;
        case 0x105c480u: goto R_0105c480;
        case 0x105c490u: goto R_0105c490;
        case 0x105c4b0u: goto R_0105c4b0;
        case 0x105c4dcu: goto R_0105c4dc;
        case 0x105c4fcu: goto R_0105c4fc;
        case 0x105c54cu: goto R_0105c54c;
        case 0x105c570u: goto R_0105c570;
        case 0x105c584u: goto R_0105c584;
        case 0x105c5c4u: goto R_0105c5c4;
        case 0x105c5d4u: goto R_0105c5d4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff50u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa0u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xa8u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x105bd9cu;
    f_801c8390(c);
R_0105bd9c:
    c.r[10] = ((((g_mg442_bases[4] + 0x2230u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[9] = ((((g_mg442_bases[4] + 0x2208u) + 0x8000u) >> 16) << 16);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mg442_bases[4] + 0x2230u) & 0xFFFFu);
    c.r[31] = c.r[5] + c.r[6];
    ea = c.r[10] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[9] = c.r[9] + wp::sign_extend16((g_mg442_bases[4] + 0x2208u) & 0xFFFFu);
    c.r[30] = c.r[4] | c.r[4];
    c.f[0] = c.f[1] * c.f[0];
    ea = c.r[9] + c.r[0];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[11]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[22] = c.r[5] | c.r[5];
    c.r[21] = c.r[6] | c.r[6];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[11]);
    c.r[18] = c.r[7] | c.r[7];
    c.r[20] = c.r[8] | c.r[8];
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x54u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[11]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105be04;
    c.r[4] = c.r[0] | c.r[0];
L_0105be04:
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[5]);
    c.r[25] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0105c108;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[26] = c.r[31] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[26], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0105be38;
    c.r[0] = c.r[6] - c.r[26];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105bea4;
L_0105be38:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x38u;
    c.r[24] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[4] + c.r[26];
    c.r[3] = c.r[3] - c.r[6];
    c.r[0] = c.r[0] - c.r[24];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105be7c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105be78u;
    f_801cee24(c);
R_0105be78:
    c.lr = 0x105be7cu;
    f_801d3940(c);
L_0105be7c:
R_0105be7c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105be90;
    goto L_0105becc;
L_0105be90:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105becc;
    goto L_0105becc;
L_0105bea4:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[26], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105bebcu;
    f_80004714(c);
R_0105bebc:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[26];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_0105c118;
L_0105becc:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x38u;
    c.r[24] = wp::rd32(ea);
    c.r[4] = c.r[0] + c.r[26];
    c.r[5] = c.r[1] + 0x38u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[6]);
    c.r[3] = c.r[4] - c.r[24];
    c.r[0] = c.r[0] - c.r[24];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[6]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0105bf30;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105bf2cu;
    f_801cee24(c);
R_0105bf2c:
    c.lr = 0x105bf30u;
    f_801d3940(c);
L_0105bf30:
R_0105bf30:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105bf80;
    c.r[5] = c.r[24] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105bf74;
    c.r[3] = c.r[1] + 0x20u;
L_0105bf74:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_0105bfc4;
L_0105bf80:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105bfbc;
    c.r[3] = c.r[24] + 0x1u;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_0105bfb0;
    c.r[3] = c.r[1] + 0x20u;
L_0105bfb0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_0105bfc4;
L_0105bfbc:
    c.r[3] = 0x40000000u;
    c.r[24] = c.r[3] + 0xffffffffu;
L_0105bfc4:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105bff4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105bff0u;
    f_801cee24(c);
R_0105bff0:
    c.lr = 0x105bff4u;
    f_801d3940(c);
L_0105bff4:
R_0105bff4:
    c.r[3] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.lr = 0x105bffcu;
    f_801c79a4(c);
R_0105bffc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[19] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105c028;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105c024u;
    f_801cee24(c);
R_0105c024:
    c.lr = 0x105c028u;
    f_801d3940(c);
L_0105c028:
R_0105c028:
    ea = c.r[1] + 0x34u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[26], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[6] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[19]);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[19] + c.r[6];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[24]);
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[7]);
    c.lr = 0x105c058u;
    f_80004714(c);
R_0105c058:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[19] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x40u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[19] + c.r[0];
    ea = c.r[1] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] - c.r[19];
    c.r[5] = c.r[4] + c.r[26];
    c.r[4] = wp::sraw(c, c.r[3], 2);
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[23] = wp::add_extended(c, c.r[4], 0);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[0] - c.r[23];
    c.r[4] = c.r[19] | c.r[19];
    c.r[17] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[17] | c.r[17];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105c0a8u;
    f_800043c4(c);
R_0105c0a8:
    c.r[3] = c.r[19] | c.r[19];
    c.r[5] = c.r[17] | c.r[17];
    c.r[4] = 0x0u;
    c.lr = 0x105c0b8u;
    f_80004714(c);
R_0105c0b8:
    c.r[0] = wp::add_carry(c, c.r[1], 0x3cu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x38u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[23];
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0105c118;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c118;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x105c104u;
    f_801c7a8c(c);
R_0105c104:
    goto L_0105c118;
L_0105c108:
    if (!wp::cr_get(c, 0)) goto L_0105c118;
    c.r[0] = c.r[5] - c.r[31];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_0105c118:
    wp::compare_unsigned(c, 1, c.r[31], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0105c3bc;
    wp::compare_unsigned(c, 0, c.r[31], 0x8u);
    c.r[6] = c.r[31] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0105c364;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0105c150;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105c150;
    c.r[7] = 0x1u;
L_0105c150:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c164;
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105c164;
    c.r[5] = 0x1u;
L_0105c164:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c17c;
    c.r[0] = c.r[31] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0105c17c;
    c.r[4] = 0x1u;
L_0105c17c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c364;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0105c364;
L_0105c1a0:
    c.r[6] = wp::mulhw(c.r[0], c.r[25]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[4] = c.r[3] + 0x2u;
    ea = c.r[1] + 0x30u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = c.r[31] - c.r[5];
    c.r[7] = c.r[31] - c.r[4];
    c.r[5] = wp::sraw(c, c.r[6], 2);
    c.r[11] = c.r[31] - c.r[3];
    c.r[4] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[9] = wp::sraw(c, c.r[6], 2);
    c.r[4] = c.r[5] + c.r[4];
    c.r[5] = c.r[3] + 0x3u;
    c.r[19] = c.r[4] * 0xau;
    c.r[10] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[6] = c.r[31] - c.r[5];
    c.r[5] = wp::rotl(c.r[11], 2) & 0xfffffffcu;
    c.r[19] = c.r[25] - c.r[19];
    c.r[25] = c.r[9] + c.r[10];
    c.r[10] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[12] + c.r[5];
    wp::wr32(ea, c.r[19]);
    c.r[19] = wp::rotl(c.r[8], 2) & 0xfffffffcu;
    c.r[4] = c.r[3] + 0x4u;
    ea = c.r[1] + 0x30u;
    c.r[23] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[6], 2) & 0xfffffffcu;
    c.r[9] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[31] - c.r[4];
    c.r[11] = wp::rotl(c.r[9], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x5u;
    c.r[9] = c.r[9] + c.r[11];
    c.r[10] = wp::sraw(c, c.r[10], 2);
    c.r[12] = c.r[9] * 0xau;
    c.r[4] = c.r[31] - c.r[4];
    c.r[11] = wp::rotl(c.r[10], 1) & 0x1u;
    c.r[9] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[6] = c.r[25] - c.r[12];
    c.r[25] = c.r[10] + c.r[11];
    c.r[12] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[23] + c.r[19];
    wp::wr32(ea, c.r[6]);
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    c.r[10] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[6] = wp::sraw(c, c.r[12], 2);
    c.r[11] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[12], 2);
    c.r[6] = c.r[6] + c.r[11];
    c.r[11] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[11] = c.r[25] - c.r[11];
    c.r[25] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[10] + c.r[9];
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x30u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[10] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[10];
    c.r[10] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[25] - c.r[10];
    c.r[25] = c.r[5] + c.r[6];
    c.r[5] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[9] + c.r[8];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x30u;
    c.r[9] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[5], 2);
    c.r[8] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[6] = c.r[6] + c.r[8];
    c.r[8] = c.r[6] * 0xau;
    c.r[6] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[10] = c.r[25] - c.r[8];
    c.r[25] = c.r[5] + c.r[6];
    c.r[8] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[9] + c.r[7];
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[6] = c.r[6] + c.r[7];
    c.r[6] = c.r[6] * 0xau;
    c.r[6] = c.r[25] - c.r[6];
    ea = c.r[5] + c.r[4];
    wp::wr32(ea, c.r[6]);
    c.r[6] = wp::sraw(c, c.r[8], 2);
    c.r[5] = c.r[3] + 0x6u;
    c.r[7] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[4] = c.r[3] + 0x7u;
    c.r[25] = c.r[6] + c.r[7];
    c.r[5] = c.r[31] - c.r[5];
    c.r[10] = wp::mulhw(c.r[0], c.r[25]);
    c.r[4] = c.r[31] - c.r[4];
    c.r[7] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x8u;
    c.r[5] = wp::sraw(c, c.r[10], 2);
    c.r[9] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[10], 2);
    c.r[5] = c.r[5] + c.r[9];
    c.r[9] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[9] = c.r[25] - c.r[9];
    c.r[25] = c.r[4] + c.r[5];
    c.r[4] = wp::mulhw(c.r[0], c.r[25]);
    ea = c.r[8] + c.r[7];
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x30u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = wp::sraw(c, c.r[4], 2);
    c.r[8] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = wp::sraw(c, c.r[4], 2);
    c.r[5] = c.r[5] + c.r[8];
    c.r[8] = c.r[5] * 0xau;
    c.r[5] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[8] = c.r[25] - c.r[8];
    ea = c.r[7] + c.r[6];
    wp::wr32(ea, c.r[8]);
    c.r[25] = c.r[4] + c.r[5];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105c1a0;
    }
L_0105c364:
    c.r[0] = c.r[31] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_0105c3bc;
L_0105c380:
    c.r[9] = wp::mulhw(c.r[8], c.r[25]);
    c.r[0] = c.r[31] - c.r[3];
    ea = c.r[1] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = wp::sraw(c, c.r[9], 2);
    c.r[7] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = wp::sraw(c, c.r[9], 2);
    c.r[4] = c.r[4] + c.r[7];
    c.r[7] = c.r[4] * 0xau;
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[7] = c.r[25] - c.r[7];
    ea = c.r[6] + c.r[5];
    wp::wr32(ea, c.r[7]);
    c.r[25] = c.r[0] + c.r[4];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105c380;
    }
L_0105c3bc:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c408;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105c3f8;
    c.r[0] = c.r[0] | 0x0u;
L_0105c3e0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105c3f8;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0105c3e0;
    }
L_0105c3f8:
    wp::compare_unsigned(c, 0, c.r[23], c.r[22]);
    if (wp::cr_get(c, 0)) goto L_0105c40c;
    c.r[23] = c.r[22] + 0xffffffffu;
    goto L_0105c40c;
L_0105c408:
    c.r[23] = 0x0u;
L_0105c40c:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0105c420;
    c.r[0] = c.r[22] - c.r[21];
    c.r[4] = wp::sub_carry(c, c.r[0], 0x8u);
L_0105c420:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[18] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0105c598;
    c.r[5] = ((((g_mg442_bases[5] + 0x25c58u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg442_bases[4] + 0x2260u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x25c58u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    c.r[25] = wp::rd8(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0xcu;
    c.r[26] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2260u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[21] = c.r[4] + c.r[0];
    c.r[19] = c.r[1] + 0x25u;
    c.r[20] = 0x0u;
    c.r[24] = 0x0u;
    c.r[27] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[28] = 0x43300000u;
    goto L_0105c590;
L_0105c46c:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[24]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[24]);
    c.lr = 0x105c480u;
    f_801c7860(c);
R_0105c480:
    c.r[22] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[22] | c.r[22];
    c.lr = 0x105c490u;
    f_mg442_0100d7d0(c);
R_0105c490:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[25]);
    c.r[6] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[30] + c.r[22];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x105c4b0u;
    f_mg442_0100d990(c);
R_0105c4b0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[21] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105c4cc;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[17] = c.r[0] & 0x7fu;
    goto L_0105c4d0;
L_0105c4cc:
    ea = c.r[1] + 0x28u;
    c.r[17] = wp::rd32(ea);
L_0105c4d0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[26]);
    c.r[3] = c.r[22] | c.r[22];
    c.lr = 0x105c4dcu;
    f_801c7860(c);
R_0105c4dc:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[17] | c.r[17];
    c.r[6] = c.r[22] | c.r[22];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[22] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x105c4fcu;
    f_mg442_0100d990(c);
R_0105c4fc:
    wp::compare_unsigned(c, 0, c.r[23], c.r[18]);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_0105c54c;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[22] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105c528;
    c.r[4] = c.r[19] | c.r[19];
    goto L_0105c52c;
L_0105c528:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0105c52c:
    ea = c.r[5] + c.r[20];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[28]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x105c54cu;
    f_80040980(c);
L_0105c54c:
R_0105c54c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105c564;
    c.r[4] = c.r[19] | c.r[19];
    goto L_0105c568;
L_0105c564:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0105c568:
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x105c570u;
    f_800403f0(c);
R_0105c570:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105c584;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105c584u;
    f_801c7a8c(c);
L_0105c584:
R_0105c584:
    c.r[21] = c.r[21] + 0x4u;
    c.r[20] = c.r[20] + 0x4u;
    c.r[18] = c.r[18] + 0x1u;
L_0105c590:
    wp::compare_unsigned(c, 0, c.r[18], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105c46c;
    }
L_0105c598:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105c5c4;
    if (wp::cr_get(c, 2)) goto L_0105c5c4;
    if (wp::cr_get(c, 2)) goto L_0105c5c4;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c5c4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105c5c4u;
    f_801c7a8c(c);
L_0105c5c4:
R_0105c5c4:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x105c5d4u;
    f_801c83dc(c);
R_0105c5d4:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mg442_0105c5f0(wp::Cpu& c) {
    WP_ENTER(0x105c5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg442_0105d760(c);
    return;
}

void f_mg442_0105c600(wp::Cpu& c) {
    WP_ENTER(0x105c600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg442_0105f2e0(c);
    return;
}

void f_mg442_0105c610(wp::Cpu& c) {
    WP_ENTER(0x105c610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg442_0105f400(c);
    return;
}

void f_mg442_0105c620(wp::Cpu& c) {
    WP_ENTER(0x105c620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg442_0105f6d0(c);
    return;
}

void f_mg442_0105c630(wp::Cpu& c) {
    WP_ENTER(0x105c630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105c670u: goto R_0105c670;
        case 0x105c694u: goto R_0105c694;
        case 0x105c6dcu: goto R_0105c6dc;
        case 0x105c6f8u: goto R_0105c6f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] | c.r[5];
    c.r[5] = ((((g_mg442_bases[5] + 0x25cacu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[7] | c.r[7];
    c.r[7] = c.r[8] | c.r[8];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x25cacu) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[8] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x105c670u;
    f_mg442_0105d640(c);
R_0105c670:
    c.r[4] = ((((g_mg442_bases[5] + 0x25f70u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25f70u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105c694u;
    wp::call(c, c.ctr);
R_0105c694:
    c.r[3] = ((((g_mg442_bases[5] + 0x25d10u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x25d10u) & 0xFFFFu);
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[29] + 0x12cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x130u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x134u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x13cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x140u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x121u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[29] + 0x124u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x120u;
    wp::wr8(ea, c.r[5]);
    c.lr = 0x105c6dcu;
    f_800402c0(c);
R_0105c6dc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105c6f8u;
    wp::call(c, c.ctr);
R_0105c6f8:
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

void f_mg442_0105c720(wp::Cpu& c) {
    WP_ENTER(0x105c720u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105c74cu: goto R_0105c74c;
        case 0x105c75cu: goto R_0105c75c;
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
    if (wp::cr_get(c, 2)) goto L_0105c75c;
    c.r[4] = 0x0u;
    c.lr = 0x105c74cu;
    f_mg442_0105d690(c);
R_0105c74c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105c75c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x105c75cu;
    f_801c7a8c(c);
L_0105c75c:
R_0105c75c:
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

void f_mg442_0105c780(wp::Cpu& c) {
    WP_ENTER(0x105c780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105c7b4u: goto R_0105c7b4;
        case 0x105c7d8u: goto R_0105c7d8;
        case 0x105c820u: goto R_0105c820;
        case 0x105c838u: goto R_0105c838;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] | c.r[5];
    c.r[5] = ((((g_mg442_bases[5] + 0x25cacu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x25cacu) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x105c7b4u;
    f_mg442_0105d640(c);
R_0105c7b4:
    c.r[4] = ((((g_mg442_bases[5] + 0x25f70u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25f70u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105c7d8u;
    wp::call(c, c.ctr);
R_0105c7d8:
    c.r[3] = ((((g_mg442_bases[5] + 0x25d10u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x25d10u) & 0xFFFFu);
    c.r[0] = 0xffffffffu;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x12cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x130u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x134u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x138u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x13cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x140u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x121u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[30] + 0x124u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x128u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x120u;
    wp::wr8(ea, c.r[5]);
    c.lr = 0x105c820u;
    f_800402c0(c);
R_0105c820:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105c838u;
    wp::call(c, c.ctr);
R_0105c838:
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

void f_mg442_0105c860(wp::Cpu& c) {
    WP_ENTER(0x105c860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105c890u: goto R_0105c890;
        case 0x105c8b4u: goto R_0105c8b4;
        case 0x105c8fcu: goto R_0105c8fc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = c.r[6] | c.r[6];
    c.r[8] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] | c.r[5];
    c.r[5] = ((((g_mg442_bases[5] + 0x25cacu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x25cacu) & 0xFFFFu);
    c.lr = 0x105c890u;
    f_mg442_0105d640(c);
R_0105c890:
    c.r[4] = ((((g_mg442_bases[5] + 0x25f70u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25f70u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105c8b4u;
    wp::call(c, c.ctr);
R_0105c8b4:
    c.r[3] = ((((g_mg442_bases[5] + 0x25d10u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x25d10u) & 0xFFFFu);
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[31] + 0x12cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x130u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x134u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x138u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x13cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x140u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x121u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[31] + 0x124u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[31] + 0x128u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x120u;
    wp::wr8(ea, c.r[5]);
    c.lr = 0x105c8fcu;
    f_800402c0(c);
R_0105c8fc:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_0105c920(wp::Cpu& c) {
    WP_ENTER(0x105c920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105c988u: goto R_0105c988;
        case 0x105c9b4u: goto R_0105c9b4;
        case 0x105c9c8u: goto R_0105c9c8;
        case 0x105c9d8u: goto R_0105c9d8;
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
    if (wp::cr_get(c, 2)) goto L_0105c9d8;
    ea = c.r[3] + 0x130u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mg442_bases[5] + 0x25d10u) + 0x8000u) >> 16) << 16);
    c.r[5] = wp::add_carry(c, c.r[3], 0x138u, 0);
    wp::record(c, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25d10u) & 0xFFFFu);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x130u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105c988;
    if (wp::cr_get(c, 2)) goto L_0105c988;
    if (wp::cr_get(c, 2)) goto L_0105c988;
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c988;
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105c988u;
    f_801c7a8c(c);
L_0105c988:
R_0105c988:
    c.r[4] = wp::add_carry(c, c.r[30], 0x12cu, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0105c9b4;
    if (wp::cr_get(c, 2)) goto L_0105c9b4;
    if (wp::cr_get(c, 2)) goto L_0105c9b4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c9b4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105c9b4u;
    f_801c7a8c(c);
L_0105c9b4:
R_0105c9b4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105c9c8;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x105c9c8u;
    f_mg442_0105d690(c);
L_0105c9c8:
R_0105c9c8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105c9d8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x105c9d8u;
    f_801c7a8c(c);
L_0105c9d8:
R_0105c9d8:
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

void f_mg442_0105ca00(wp::Cpu& c) {
    WP_ENTER(0x105ca00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105ca48u: goto R_0105ca48;
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
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    goto L_0105ca50;
L_0105ca30:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ca48u;
    wp::call(c, c.ctr);
R_0105ca48:
    c.r[31] = c.r[31] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_0105ca50:
    wp::compare_signed(c, 0, c.r[30], c.r[29]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105ca30;
    }
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

void f_mg442_0105ca80(wp::Cpu& c) {
    WP_ENTER(0x105ca80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105ca94u: goto R_0105ca94;
        case 0x105caa8u: goto R_0105caa8;
        case 0x105cac4u: goto R_0105cac4;
        case 0x105cad0u: goto R_0105cad0;
        case 0x105cadcu: goto R_0105cadc;
        case 0x105caecu: goto R_0105caec;
        case 0x105cb0cu: goto R_0105cb0c;
        case 0x105cb6cu: goto R_0105cb6c;
        case 0x105cb70u: goto R_0105cb70;
        case 0x105cbd0u: goto R_0105cbd0;
        case 0x105cbd4u: goto R_0105cbd4;
        case 0x105cc94u: goto R_0105cc94;
        case 0x105cc98u: goto R_0105cc98;
        case 0x105cca0u: goto R_0105cca0;
        case 0x105ccc8u: goto R_0105ccc8;
        case 0x105ccccu: goto R_0105cccc;
        case 0x105cdc0u: goto R_0105cdc0;
        case 0x105cdd8u: goto R_0105cdd8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x105ca94u;
    f_801c83b8(c);
R_0105ca94:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105caa8u;
    wp::call(c, c.ctr);
R_0105caa8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x105cac4u;
    wp::call(c, c.ctr);
R_0105cac4:
    c.r[29] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x105cad0u;
    f_80043180(c);
R_0105cad0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x105cadcu;
    f_800431a0(c);
R_0105cadc:
    c.r[4] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x105caecu;
    f_80043060(c);
R_0105caec:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x105cb0cu;
    wp::call(c, c.ctr);
R_0105cb0c:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x134u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_0105cb3c;
    c.r[4] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x12cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[28] + 0x130u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    c.r[3] = ea;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[29]);
    goto L_0105cdc0;
L_0105cb3c:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0105cb70;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105cb6cu;
    f_801cee24(c);
R_0105cb6c:
    c.lr = 0x105cb70u;
    f_801d3940(c);
L_0105cb70:
R_0105cb70:
    c.r[5] = 0x0u;
    c.r[4] = c.r[28] + 0x134u;
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
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x134u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0105cbd4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105cbd0u;
    f_801cee24(c);
R_0105cbd0:
    c.lr = 0x105cbd4u;
    f_801d3940(c);
L_0105cbd4:
R_0105cbd4:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105cc24;
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
    if (!wp::cr_get(c, 0)) goto L_0105cc18;
    c.r[3] = c.r[1] + 0x10u;
L_0105cc18:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105cc68;
L_0105cc24:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105cc60;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0105cc54;
    c.r[3] = c.r[1] + 0x10u;
L_0105cc54:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105cc68;
L_0105cc60:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0105cc68:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105cc98;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105cc94u;
    f_801cee24(c);
R_0105cc94:
    c.lr = 0x105cc98u;
    f_801d3940(c);
L_0105cc98:
R_0105cc98:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x105cca0u;
    f_801c79a4(c);
R_0105cca0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105cccc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x261a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x261a4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105ccc8u;
    f_801cee24(c);
R_0105ccc8:
    c.lr = 0x105ccccu;
    f_801d3940(c);
L_0105cccc:
R_0105cccc:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[28] + 0x130u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[27] + c.r[0];
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    c.r[3] = ea;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[29]);
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
    ea = c.r[28] + 0x130u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[3] + c.r[0];
    ea = c.r[28] + 0x12cu;
    c.r[7] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[6] = c.r[7] + c.r[0];
    c.r[0] = c.r[6] + 0x7u;
    c.r[0] = c.r[0] - c.r[7];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_0105cd70;
L_0105cd38:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_0105cd54;
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0105cd54:
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
    goto L_0105cd38;
    }
L_0105cd70:
    c.r[4] = 0x0u;
    ea = c.r[28] + 0x130u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[28] + 0x134u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x134u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x12cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x12cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x130u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0105cdc0;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105cdc0;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x105cdc0u;
    f_801c7a8c(c);
L_0105cdc0:
R_0105cdc0:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x124u;
    wp::wr32(ea, c.r[3]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[28] + 0x121u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x105cdd8u;
    f_801c8404(c);
R_0105cdd8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105cdf0(wp::Cpu& c) {
    WP_ENTER(0x105cdf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105ce0cu: goto R_0105ce0c;
        case 0x105ce3cu: goto R_0105ce3c;
        case 0x105ce5cu: goto R_0105ce5c;
        case 0x105ce7cu: goto R_0105ce7c;
        case 0x105cea0u: goto R_0105cea0;
        case 0x105ceacu: goto R_0105ceac;
        case 0x105ceb8u: goto R_0105ceb8;
        case 0x105cec4u: goto R_0105cec4;
        case 0x105cedcu: goto R_0105cedc;
        case 0x105cef4u: goto R_0105cef4;
        case 0x105cf04u: goto R_0105cf04;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x28u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[30]);
    c.lr = 0x105ce0cu;
    f_801c83b8(c);
R_0105ce0c:
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    c.f[30] = c.f[1];
    c.f[31] = c.f[2];
    c.r[27] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[6] | c.r[6];
    if (!wp::cr_get(c, 2)) goto L_0105ce40;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x105ce3cu;
    f_800402c0(c);
R_0105ce3c:
    goto L_0105cef4;
L_0105ce40:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105ce60;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ce5cu;
    wp::call(c, c.ctr);
R_0105ce5c:
    goto L_0105ce84;
L_0105ce60:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ce7cu;
    wp::call(c, c.ctr);
R_0105ce7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105cef4;
L_0105ce84:
    ea = c.r[27] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = wp::rotl(c.r[28], 3) & 0xfffffff8u;
    c.f[1] = c.f[31];
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x105cea0u;
    f_80043060(c);
R_0105cea0:
    c.f[1] = c.f[30];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x105ceacu;
    f_80043120(c);
R_0105ceac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x105ceb8u;
    f_800431a0(c);
R_0105ceb8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x105cec4u;
    f_80043180(c);
R_0105cec4:
    ea = c.r[27] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105cedcu;
    f_80042650(c);
R_0105cedc:
    c.r[0] = 0x1u;
    ea = c.r[27] + 0x128u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x105cef4u;
    f_800402c0(c);
L_0105cef4:
R_0105cef4:
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x28u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    c.f[30] = wp::rdf64(ea);
    c.lr = 0x105cf04u;
    f_801c8404(c);
R_0105cf04:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg442_0105cf20(wp::Cpu& c) {
    WP_ENTER(0x105cf20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105cf80u: goto R_0105cf80;
        case 0x105cf98u: goto R_0105cf98;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 0)) goto L_0105cf4c;
    c.r[31] = c.r[4] | c.r[4];
    goto L_0105cf50;
L_0105cf4c:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_0105cf50:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105cfac;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105cf68;
    goto L_0105cfac;
L_0105cf68:
    ea = c.r[3] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105cf80u;
    f_80043180(c);
R_0105cf80:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[30];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105cf98u;
    f_80042650(c);
R_0105cf98:
    ea = c.r[29] + 0x128u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105cfac;
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_0105cfac:
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

void f_mg442_0105cfd0(wp::Cpu& c) {
    WP_ENTER(0x105cfd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d018u: goto R_0105d018;
        case 0x105d030u: goto R_0105d030;
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
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105d04c;
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
    goto L_0105d038;
L_0105d004:
    ea = c.r[29] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105d018u;
    f_80043180(c);
R_0105d018:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105d030u;
    f_80042650(c);
R_0105d030:
    c.r[31] = c.r[31] + 0x8u;
    c.r[30] = c.r[30] + 0x1u;
L_0105d038:
    ea = c.r[29] + 0x124u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0105d004;
    }
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_0105d04c:
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

void f_mg442_0105d070(wp::Cpu& c) {
    WP_ENTER(0x105d070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d084u: goto R_0105d084;
        case 0x105d0d4u: goto R_0105d0d4;
        case 0x105d0f4u: goto R_0105d0f4;
        case 0x105d11cu: goto R_0105d11c;
        case 0x105d140u: goto R_0105d140;
        case 0x105d164u: goto R_0105d164;
        case 0x105d170u: goto R_0105d170;
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
    c.lr = 0x105d084u;
    f_801c83b8(c);
R_0105d084:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 0)) goto L_0105d0a0;
    c.r[31] = c.r[4] | c.r[4];
    goto L_0105d0a4;
L_0105d0a0:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_0105d0a4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105d0b8;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105d0c0;
L_0105d0b8:
    c.r[3] = 0x1u;
    goto L_0105d168;
L_0105d0c0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x1f8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d0d4u;
    wp::call(c, c.ctr);
R_0105d0d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105d0fc;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d0f4u;
    wp::call(c, c.ctr);
R_0105d0f4:
    c.r[3] = 0x1u;
    goto L_0105d168;
L_0105d0fc:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    ea = c.r[27] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[4] + c.r[0];
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d11cu;
    wp::call(c, c.ctr);
R_0105d11c:
    wp::compare_unsigned(c, 0, c.r[3], 0x1u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105d164;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d140u;
    wp::call(c, c.ctr);
R_0105d140:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105d164;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105d164;
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x105d164u;
    f_800402c0(c);
L_0105d164:
R_0105d164:
    c.r[3] = c.r[30] | c.r[30];
L_0105d168:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x105d170u;
    f_801c8404(c);
R_0105d170:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg442_0105d180(wp::Cpu& c) {
    WP_ENTER(0x105d180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105d18c;
    goto L_0105d190;
L_0105d18c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_0105d190:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105d1a4;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105d1b0;
L_0105d1a4:
    c.r[3] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_0105d1b0:
    ea = c.r[3] + 0x12cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    f_80043110(c);
    return;
    return;
}

void f_mg442_0105d1d0(wp::Cpu& c) {
    WP_ENTER(0x105d1d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105d1dc;
    goto L_0105d1e0;
L_0105d1dc:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_0105d1e0:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105d1f4;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105d200;
L_0105d1f4:
    c.r[3] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_0105d200:
    ea = c.r[3] + 0x12cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    f_80043130(c);
    return;
    return;
}

void f_mg442_0105d220(wp::Cpu& c) {
    WP_ENTER(0x105d220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105d22c;
    goto L_0105d230;
L_0105d22c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_0105d230:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0105d244;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105d250;
L_0105d244:
    c.r[3] = ((((g_mg442_bases[4] + 0x225cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x225cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_0105d250:
    ea = c.r[3] + 0x12cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    f_80043140(c);
    return;
    return;
}

void f_mg442_0105d270(wp::Cpu& c) {
    WP_ENTER(0x105d270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d284u: goto R_0105d284;
        case 0x105d2f4u: goto R_0105d2f4;
        case 0x105d2f8u: goto R_0105d2f8;
        case 0x105d358u: goto R_0105d358;
        case 0x105d35cu: goto R_0105d35c;
        case 0x105d41cu: goto R_0105d41c;
        case 0x105d420u: goto R_0105d420;
        case 0x105d428u: goto R_0105d428;
        case 0x105d450u: goto R_0105d450;
        case 0x105d454u: goto R_0105d454;
        case 0x105d548u: goto R_0105d548;
        case 0x105d550u: goto R_0105d550;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x105d284u;
    f_801c83b8(c);
R_0105d284:
    ea = c.r[3] + 0x13cu;
    c.r[7] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x140u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    wp::compare_unsigned(c, 0, c.r[7], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_0105d2c4;
    c.r[7] = c.r[7] + 0x1u;
    ea = c.r[3] + 0x138u;
    c.r[6] = wp::rd32(ea);
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[3] + 0x13cu;
    wp::wr32(ea, c.r[7]);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[6] + c.r[0];
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[6] + c.r[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[5]);
    goto L_0105d548;
L_0105d2c4:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[6];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0105d2f8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105d2f4u;
    f_801cee24(c);
R_0105d2f4:
    c.lr = 0x105d2f8u;
    f_801d3940(c);
L_0105d2f8:
R_0105d2f8:
    c.r[5] = 0x0u;
    c.r[4] = c.r[28] + 0x140u;
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
    ea = c.r[28] + 0x13cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x140u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0105d35c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105d358u;
    f_801cee24(c);
R_0105d358:
    c.lr = 0x105d35cu;
    f_801d3940(c);
L_0105d35c:
R_0105d35c:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105d3ac;
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
    if (!wp::cr_get(c, 0)) goto L_0105d3a0;
    c.r[3] = c.r[1] + 0x10u;
L_0105d3a0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105d3f0;
L_0105d3ac:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105d3e8;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0105d3dc;
    c.r[3] = c.r[1] + 0x10u;
L_0105d3dc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105d3f0;
L_0105d3e8:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0105d3f0:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105d420;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x25c98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25c98u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105d41cu;
    f_801cee24(c);
R_0105d41c:
    c.lr = 0x105d420u;
    f_801d3940(c);
L_0105d420:
R_0105d420:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x105d428u;
    f_801c79a4(c);
R_0105d428:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105d454;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x261c0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x261c0u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105d450u;
    f_801cee24(c);
R_0105d450:
    c.lr = 0x105d454u;
    f_801d3940(c);
L_0105d454:
R_0105d454:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[28] + 0x13cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[27] + c.r[0];
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    c.r[3] = ea;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[30]);
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
    ea = c.r[28] + 0x13cu;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[3] + c.r[0];
    ea = c.r[28] + 0x138u;
    c.r[7] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[6] = c.r[7] + c.r[0];
    c.r[0] = c.r[6] + 0x7u;
    c.r[0] = c.r[0] - c.r[7];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_0105d4f8;
L_0105d4c0:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_0105d4dc;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0105d4dc:
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
    goto L_0105d4c0;
    }
L_0105d4f8:
    c.r[4] = 0x0u;
    ea = c.r[28] + 0x13cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[28] + 0x140u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x140u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x138u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x138u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x13cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0105d548;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105d548;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x105d548u;
    f_801c7a8c(c);
L_0105d548:
R_0105d548:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x105d550u;
    f_801c8404(c);
R_0105d550:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105d560(wp::Cpu& c) {
    WP_ENTER(0x105d560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d5bcu: goto R_0105d5bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mg442_bases[5] + 0x25d00u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x25d00u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x13cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x138u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[6]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    goto L_0105d5c4;
L_0105d5b0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[12] = c.r[1] + 0x14u;
    c.lr = 0x105d5bcu;
    f_801c8244(c);
R_0105d5bc:
    c.r[0] = c.r[0] | 0x0u;
    c.r[30] = c.r[30] + 0x8u;
L_0105d5c4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105d5b0;
    }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg442_0105d5f0(wp::Cpu& c) {
    WP_ENTER(0x105d5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d608u: goto R_0105d608;
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
    c.lr = 0x105d608u;
    f_8003f8f0(c);
R_0105d608:
    c.r[3] = ((((g_mg442_bases[5] + 0x270a0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x270a0u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x118u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x11cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_0105d640(wp::Cpu& c) {
    WP_ENTER(0x105d640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d658u: goto R_0105d658;
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
    c.lr = 0x105d658u;
    f_8003f640(c);
R_0105d658:
    c.r[3] = ((((g_mg442_bases[5] + 0x270a0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x270a0u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x118u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x11cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_0105d690(wp::Cpu& c) {
    WP_ENTER(0x105d690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d6e4u: goto R_0105d6e4;
        case 0x105d720u: goto R_0105d720;
        case 0x105d72cu: goto R_0105d72c;
        case 0x105d73cu: goto R_0105d73c;
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
    if (wp::cr_get(c, 2)) goto L_0105d73c;
    c.r[4] = ((((g_mg442_bases[5] + 0x270a0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x270a0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_0105d6e4;
L_0105d6c4:
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
    c.lr = 0x105d6e4u;
    wp::call(c, c.ctr);
L_0105d6e4:
R_0105d6e4:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105d6c4;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0105d720;
    if (wp::cr_get(c, 2)) goto L_0105d720;
    if (wp::cr_get(c, 2)) goto L_0105d720;
    if (wp::cr_get(c, 2)) goto L_0105d720;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105d720;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105d720u;
    f_801c7a8c(c);
L_0105d720:
R_0105d720:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x105d72cu;
    f_8003fb90(c);
R_0105d72c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0105d73c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x105d73cu;
    f_801c7a8c(c);
L_0105d73c:
R_0105d73c:
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

void f_mg442_0105d760(wp::Cpu& c) {
    WP_ENTER(0x105d760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d7a4u: goto R_0105d7a4;
        case 0x105d7c0u: goto R_0105d7c0;
        case 0x105d7c8u: goto R_0105d7c8;
        case 0x105d7f0u: goto R_0105d7f0;
        case 0x105d848u: goto R_0105d848;
        case 0x105d864u: goto R_0105d864;
        case 0x105d890u: goto R_0105d890;
        case 0x105d8bcu: goto R_0105d8bc;
        case 0x105d8e4u: goto R_0105d8e4;
        case 0x105d900u: goto R_0105d900;
        case 0x105d924u: goto R_0105d924;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x43300000u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105d7a4u;
    f_8003cc90(c);
R_0105d7a4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d7c0u;
    wp::call(c, c.ctr);
R_0105d7c0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x105d7c8u;
    f_8003d2d0(c);
R_0105d7c8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1b4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d7f0u;
    wp::call(c, c.ctr);
R_0105d7f0:
    ea = c.r[31] + 0x8u;
    c.r[5] = wp::rd8(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[31] + 0x9u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x10u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = wp::round_single(c.f[1] - c.f[3]);
    c.ps1[4] = c.f[4];
    ea = c.r[30] + 0x8u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[0] - c.f[3]);
    c.ps1[1] = c.f[1];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.f[4] = wp::round_single(c.f[4] / c.f[2]);
    c.ps1[4] = c.f[4];
    ea = c.r[30] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[1] / c.f[2]);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[3] * wp::force25(c.f[4]));
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105d848u;
    wp::call(c, c.ctr);
R_0105d848:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d864u;
    wp::call(c, c.ctr);
R_0105d864:
    ea = c.r[31] + 0xau;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0x1a4u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x105d890u;
    wp::call(c, c.ctr);
R_0105d890:
    ea = c.r[31] + 0xbu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0x1a0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x105d8bcu;
    wp::call(c, c.ctr);
R_0105d8bc:
    ea = c.r[31] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105d924;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d8e4u;
    wp::call(c, c.ctr);
R_0105d8e4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d900u;
    wp::call(c, c.ctr);
R_0105d900:
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1dcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d924u;
    wp::call(c, c.ctr);
L_0105d924:
R_0105d924:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg442_0105d950(wp::Cpu& c) {
    WP_ENTER(0x105d950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d968u: goto R_0105d968;
        case 0x105d970u: goto R_0105d970;
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
    c.lr = 0x105d968u;
    f_mg442_0105eb90(c);
R_0105d968:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x105d970u;
    f_mg442_01060fe0(c);
R_0105d970:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_0105d990(wp::Cpu& c) {
    WP_ENTER(0x105d990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105d9b4u: goto R_0105d9b4;
        case 0x105d9d0u: goto R_0105d9d0;
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
    c.r[3] = c.r[5] | c.r[5];
    c.lr = 0x105d9b4u;
    f_80010060(c);
R_0105d9b4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105d9d0u;
    wp::call(c, c.ctr);
R_0105d9d0:
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

void f_mg442_0105d9f0(wp::Cpu& c) {
    WP_ENTER(0x105d9f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105da28u: goto R_0105da28;
        case 0x105da44u: goto R_0105da44;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = ((((g_mg442_bases[5] + 0x261e0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[7] + wp::sign_extend16((g_mg442_bases[5] + 0x261e0u) & 0xFFFFu);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105da28u;
    f_801d3590(c);
R_0105da28:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105da44u;
    wp::call(c, c.ctr);
R_0105da44:
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

void f_mg442_0105da60(wp::Cpu& c) {
    WP_ENTER(0x105da60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105da74u: goto R_0105da74;
        case 0x105da88u: goto R_0105da88;
        case 0x105da9cu: goto R_0105da9c;
        case 0x105dac4u: goto R_0105dac4;
        case 0x105dad4u: goto R_0105dad4;
        case 0x105daf8u: goto R_0105daf8;
        case 0x105db58u: goto R_0105db58;
        case 0x105dbd8u: goto R_0105dbd8;
        case 0x105dc40u: goto R_0105dc40;
        case 0x105dc70u: goto R_0105dc70;
        case 0x105dc84u: goto R_0105dc84;
        case 0x105dc94u: goto R_0105dc94;
        case 0x105dcb0u: goto R_0105dcb0;
        case 0x105dcb8u: goto R_0105dcb8;
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
    c.lr = 0x105da74u;
    f_801c83b4(c);
R_0105da74:
    c.r[26] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x105da88u;
    f_8006c450(c);
R_0105da88:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_0105dc88;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x105da9cu;
    f_8006c460(c);
R_0105da9c:
    c.r[28] = ((((g_mg442_bases[5] + 0x261e8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg442_bases[5] + 0x261e8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105dac4u;
    f_801c7860(c);
R_0105dac4:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x105dad4u;
    f_mg442_0100d7d0(c);
R_0105dad4:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[28] | c.r[28];
    c.r[7] = c.r[28] + c.r[26];
    c.r[8] = c.r[1] + 0x2cu;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x105daf8u;
    f_mg442_0100d990(c);
R_0105daf8:
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
    ea = c.r[1] + 0x28u;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105db34;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0105db38;
L_0105db34:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0105db38:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x105db58u;
    f_mg442_0100d990(c);
R_0105db58:
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
    if (!wp::cr_get(c, 2)) goto L_0105dbb4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0105dbb8;
L_0105dbb4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0105dbb8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x105dbd8u;
    f_mg442_0100d990(c);
R_0105dbd8:
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
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105dc1c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0105dc20;
L_0105dc1c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0105dc20:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x105dc40u;
    f_mg442_0100d990(c);
R_0105dc40:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105dc5c;
    c.r[5] = c.r[1] + 0x35u;
    goto L_0105dc60;
L_0105dc5c:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_0105dc60:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105dc70u;
    wp::call(c, c.ctr);
R_0105dc70:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105dcb0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105dc84u;
    f_801c7a8c(c);
R_0105dc84:
    goto L_0105dcb0;
L_0105dc88:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x105dc94u;
    f_8006c4e0(c);
R_0105dc94:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105dcb0u;
    wp::call(c, c.ctr);
L_0105dcb0:
R_0105dcb0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x105dcb8u;
    f_801c8400(c);
R_0105dcb8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_0105dcd0(wp::Cpu& c) {
    WP_ENTER(0x105dcd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105dcf4u: goto R_0105dcf4;
        case 0x105dd10u: goto R_0105dd10;
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
    c.r[3] = c.r[5] | c.r[5];
    c.lr = 0x105dcf4u;
    f_8003cc90(c);
R_0105dcf4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105dd10u;
    wp::call(c, c.ctr);
R_0105dd10:
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

void f_mg442_0105dd30(wp::Cpu& c) {
    WP_ENTER(0x105dd30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105dd64u: goto R_0105dd64;
        case 0x105dd8cu: goto R_0105dd8c;
        case 0x105ddb4u: goto R_0105ddb4;
        case 0x105ddd0u: goto R_0105ddd0;
        case 0x105ddecu: goto R_0105ddec;
        case 0x105de0cu: goto R_0105de0c;
        case 0x105de34u: goto R_0105de34;
        case 0x105de50u: goto R_0105de50;
        case 0x105de78u: goto R_0105de78;
        case 0x105ded8u: goto R_0105ded8;
        case 0x105df18u: goto R_0105df18;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
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
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105dd64u;
    wp::call(c, c.ctr);
R_0105dd64:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[4] + 0x22acu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg442_bases[4] + 0x22b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[4] + 0x22acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x22b0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105dd8cu;
    wp::call(c, c.ctr);
R_0105dd8c:
    c.r[5] = ((((g_mg442_bases[4] + 0x22a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x22a0u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1b4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ddb4u;
    wp::call(c, c.ctr);
R_0105ddb4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ddd0u;
    wp::call(c, c.ctr);
R_0105ddd0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ddecu;
    wp::call(c, c.ctr);
R_0105ddec:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x105de0cu;
    wp::call(c, c.ctr);
R_0105de0c:
    c.r[5] = ((((g_mg442_bases[4] + 0x22a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x22a4u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1b4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105de34u;
    wp::call(c, c.ctr);
R_0105de34:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105de50u;
    wp::call(c, c.ctr);
R_0105de50:
    c.r[5] = ((((g_mg442_bases[4] + 0x22a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x22a8u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1dcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105de78u;
    wp::call(c, c.ctr);
R_0105de78:
    c.r[3] = ((((g_mg442_bases[5] + 0x261f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x261f0u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[3] = ea;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[28] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[5]);
    c.r[29] = c.r[28] + c.r[0];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[31]);
    goto L_0105dec0;
L_0105debc:
    c.r[28] = c.r[28] + 0x4u;
L_0105dec0:
    wp::compare_unsigned(c, 0, c.r[28], c.r[29]);
    if (wp::cr_get(c, 2)) goto L_0105dee4;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105ded8u;
    f_801c8244(c);
R_0105ded8:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105debc;
    }
L_0105dee4:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105df04;
    c.r[3] = 0x0u;
    goto L_0105df08;
L_0105df04:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105df08:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105df18;
    c.r[4] = 0x1u;
    c.lr = 0x105df18u;
    f_mg442_01061230(c);
L_0105df18:
R_0105df18:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg442_0105df40(wp::Cpu& c) {
    WP_ENTER(0x105df40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mg442_0105df50(wp::Cpu& c) {
    WP_ENTER(0x105df50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105df60u: goto R_0105df60;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105df60u;
    f_mg442_0105eb90(c);
R_0105df60:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_0105df80(wp::Cpu& c) {
    WP_ENTER(0x105df80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105df94u: goto R_0105df94;
        case 0x105dffcu: goto R_0105dffc;
        case 0x105e04cu: goto R_0105e04c;
        case 0x105e054u: goto R_0105e054;
        case 0x105e06cu: goto R_0105e06c;
        case 0x105e074u: goto R_0105e074;
        case 0x105e0d4u: goto R_0105e0d4;
        case 0x105e118u: goto R_0105e118;
        case 0x105e130u: goto R_0105e130;
        case 0x105e138u: goto R_0105e138;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x105df94u;
    f_801c83b8(c);
R_0105df94:
    c.r[5] = ((((g_mg442_bases[5] + 0x261fcu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x261fcu) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[31] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[28] = c.r[31] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105dfe4;
L_0105dfe0:
    c.r[31] = c.r[31] + 0x4u;
L_0105dfe4:
    wp::compare_unsigned(c, 0, c.r[31], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0105e008;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105dffcu;
    f_801c8244(c);
R_0105dffc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105dfe0;
    }
L_0105e008:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e028;
    c.r[31] = 0x0u;
    goto L_0105e02c;
L_0105e028:
    ea = c.r[31] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0105e02c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105e130;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105e04cu;
    wp::call(c, c.ctr);
R_0105e04c:
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105e054u;
    f_801290d0(c);
R_0105e054:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105e06cu;
    wp::call(c, c.ctr);
R_0105e06c:
    ea = c.r[31] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105e074u;
    f_801290d0(c);
R_0105e074:
    c.r[3] = ((((g_mg442_bases[5] + 0x26208u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x26208u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[3] = ea;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[27] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[5]);
    c.r[28] = c.r[27] + c.r[0];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[30]);
    goto L_0105e0bc;
L_0105e0b8:
    c.r[27] = c.r[27] + 0x4u;
L_0105e0bc:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0105e0e0;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105e0d4u;
    f_801c8244(c);
R_0105e0d4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105e0b8;
    }
L_0105e0e0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105e124;
    c.r[0] = c.r[0] - c.r[27];
    c.r[3] = c.r[27] | c.r[27];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[4] = c.r[27] + 0x4u;
    c.r[5] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.lr = 0x105e118u;
    f_801cc76c(c);
R_0105e118:
    ea = c.r[29] + 0x118u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x118u;
    wp::wr32(ea, c.r[0]);
L_0105e124:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x105e130u;
    f_mg442_01060e70(c);
L_0105e130:
R_0105e130:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x105e138u;
    f_801c8404(c);
R_0105e138:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg442_0105e150(wp::Cpu& c) {
    WP_ENTER(0x105e150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mg442_bases[5] + 0x26214u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26214u) & 0xFFFFu);
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_0105e170(wp::Cpu& c) {
    WP_ENTER(0x105e170u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e1acu: goto R_0105e1ac;
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
    ea = c.r[3] + 0x114u;
    c.r[31] = wp::rd32(ea);
    goto L_0105e1b0;
L_0105e190:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x15cu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xcu;
    c.ctr = c.r[12];
    c.lr = 0x105e1acu;
    wp::call(c, c.ctr);
R_0105e1ac:
    c.r[31] = c.r[31] + 0x4u;
L_0105e1b0:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105e190;
    }
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

void f_mg442_0105e1e0(wp::Cpu& c) {
    WP_ENTER(0x105e1e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e20cu: goto R_0105e20c;
        case 0x105e22cu: goto R_0105e22c;
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
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[5] | c.r[5];
    c.lr = 0x105e20cu;
    f_8003cc90(c);
R_0105e20c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x105e22cu;
    wp::call(c, c.ctr);
R_0105e22c:
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

void f_mg442_0105e250(wp::Cpu& c) {
    WP_ENTER(0x105e250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e274u: goto R_0105e274;
        case 0x105e28cu: goto R_0105e28c;
        case 0x105e29cu: goto R_0105e29c;
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
    c.r[30] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[5] | c.r[5];
    c.lr = 0x105e274u;
    f_mg442_0105eb90(c);
R_0105e274:
    c.r[5] = ((((g_mg442_bases[5] + 0x26218u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26218u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105e28cu;
    f_801d34c4(c);
R_0105e28c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x105e29cu;
    f_mg442_01061ee0(c);
R_0105e29c:
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

void f_mg442_0105e2c0(wp::Cpu& c) {
    WP_ENTER(0x105e2c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e304u: goto R_0105e304;
        case 0x105e324u: goto R_0105e324;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] | c.r[5];
    c.r[5] = ((((g_mg442_bases[5] + 0x261e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x261e0u) & 0xFFFFu);
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105e304u;
    f_801d3590(c);
R_0105e304:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x105e324u;
    wp::call(c, c.ctr);
R_0105e324:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x9cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x98u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x94u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_0105e340(wp::Cpu& c) {
    WP_ENTER(0x105e340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e36cu: goto R_0105e36c;
        case 0x105e38cu: goto R_0105e38c;
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
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[5] | c.r[5];
    c.lr = 0x105e36cu;
    f_80010060(c);
R_0105e36c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x105e38cu;
    wp::call(c, c.ctr);
R_0105e38c:
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

void f_mg442_0105e3b0(wp::Cpu& c) {
    WP_ENTER(0x105e3b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e3c4u: goto R_0105e3c4;
        case 0x105e3dcu: goto R_0105e3dc;
        case 0x105e3f0u: goto R_0105e3f0;
        case 0x105e418u: goto R_0105e418;
        case 0x105e428u: goto R_0105e428;
        case 0x105e44cu: goto R_0105e44c;
        case 0x105e4acu: goto R_0105e4ac;
        case 0x105e52cu: goto R_0105e52c;
        case 0x105e594u: goto R_0105e594;
        case 0x105e5c8u: goto R_0105e5c8;
        case 0x105e5dcu: goto R_0105e5dc;
        case 0x105e5ecu: goto R_0105e5ec;
        case 0x105e60cu: goto R_0105e60c;
        case 0x105e614u: goto R_0105e614;
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
    c.lr = 0x105e3c4u;
    f_801c83b0(c);
R_0105e3c4:
    c.r[25] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x105e3dcu;
    f_8006c450(c);
R_0105e3dc:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_0105e5e0;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x105e3f0u;
    f_8006c460(c);
R_0105e3f0:
    c.r[27] = ((((g_mg442_bases[5] + 0x261e8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg442_bases[5] + 0x261e8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x105e418u;
    f_801c7860(c);
R_0105e418:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x105e428u;
    f_mg442_0100d7d0(c);
R_0105e428:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[27] | c.r[27];
    c.r[7] = c.r[27] + c.r[25];
    c.r[8] = c.r[1] + 0x2cu;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x105e44cu;
    f_mg442_0100d990(c);
R_0105e44c:
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
    ea = c.r[1] + 0x28u;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e488;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0105e48c;
L_0105e488:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0105e48c:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x105e4acu;
    f_mg442_0100d990(c);
R_0105e4ac:
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
    if (!wp::cr_get(c, 2)) goto L_0105e508;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0105e50c;
L_0105e508:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0105e50c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x105e52cu;
    f_mg442_0100d990(c);
R_0105e52c:
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
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e570;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0105e574;
L_0105e570:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0105e574:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x105e594u;
    f_mg442_0100d990(c);
R_0105e594:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e5b0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_0105e5b4;
L_0105e5b0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_0105e5b4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105e5c8u;
    wp::call(c, c.ctr);
R_0105e5c8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0105e60c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x105e5dcu;
    f_801c7a8c(c);
R_0105e5dc:
    goto L_0105e60c;
L_0105e5e0:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x105e5ecu;
    f_8006c4e0(c);
R_0105e5ec:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x105e60cu;
    wp::call(c, c.ctr);
L_0105e60c:
R_0105e60c:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x105e614u;
    f_801c83fc(c);
R_0105e614:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_0105e630(wp::Cpu& c) {
    WP_ENTER(0x105e630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e6acu: goto R_0105e6ac;
        case 0x105e6f4u: goto R_0105e6f4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x26220u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26220u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105e694;
L_0105e690:
    c.r[30] = c.r[30] + 0x4u;
L_0105e694:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105e6b8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105e6acu;
    f_801c8244(c);
R_0105e6ac:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105e690;
    }
L_0105e6b8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e6d8;
    c.r[3] = 0x0u;
    goto L_0105e6dc;
L_0105e6d8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105e6dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105e6f4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x0u;
    c.lr = 0x105e6f4u;
    f_mg442_01061230(c);
L_0105e6f4:
R_0105e6f4:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105e710(wp::Cpu& c) {
    WP_ENTER(0x105e710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e78cu: goto R_0105e78c;
        case 0x105e7ecu: goto R_0105e7ec;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x2622cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x2622cu) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105e774;
L_0105e770:
    c.r[30] = c.r[30] + 0x4u;
L_0105e774:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105e798;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105e78cu;
    f_801c8244(c);
R_0105e78c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105e770;
    }
L_0105e798:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e7b8;
    c.r[3] = 0x0u;
    goto L_0105e7bc;
L_0105e7b8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105e7bc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105e7ec;
    ea = c.r[3] + 0xa8u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xacu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0105e7e4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
L_0105e7e4:
    c.r[4] = 0x0u;
    c.lr = 0x105e7ecu;
    f_mg442_01061230(c);
L_0105e7ec:
R_0105e7ec:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105e810(wp::Cpu& c) {
    WP_ENTER(0x105e810u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e88cu: goto R_0105e88c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x26238u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26238u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105e874;
L_0105e870:
    c.r[30] = c.r[30] + 0x4u;
L_0105e874:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105e898;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105e88cu;
    f_801c8244(c);
R_0105e88c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105e870;
    }
L_0105e898:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e8b8;
    c.r[3] = 0x0u;
    goto L_0105e8bc;
L_0105e8b8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105e8bc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105e8cc;
    c.r[3] = 0x0u;
    goto L_0105e8d0;
L_0105e8cc:
    ea = c.r[3] + 0xa8u;
    c.r[3] = wp::rd32(ea);
L_0105e8d0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105e8f0(wp::Cpu& c) {
    WP_ENTER(0x105e8f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105e96cu: goto R_0105e96c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x26244u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26244u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105e954;
L_0105e950:
    c.r[30] = c.r[30] + 0x4u;
L_0105e954:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105e978;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105e96cu;
    f_801c8244(c);
R_0105e96c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105e950;
    }
L_0105e978:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105e998;
    c.r[3] = 0x0u;
    goto L_0105e99c;
L_0105e998:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105e99c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105e9ac;
    c.r[3] = 0x0u;
    goto L_0105e9b0;
L_0105e9ac:
    ea = c.r[3] + 0xacu;
    c.r[3] = wp::rd32(ea);
L_0105e9b0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105e9d0(wp::Cpu& c) {
    WP_ENTER(0x105e9d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105ea4cu: goto R_0105ea4c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x26250u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26250u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105ea34;
L_0105ea30:
    c.r[30] = c.r[30] + 0x4u;
L_0105ea34:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105ea58;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105ea4cu;
    f_801c8244(c);
R_0105ea4c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105ea30;
    }
L_0105ea58:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105ea78;
    c.r[3] = 0x0u;
    goto L_0105ea7c;
L_0105ea78:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105ea7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105ea8c;
    c.r[3] = 0x0u;
    goto L_0105ea90;
L_0105ea8c:
    ea = c.r[3] + 0xbcu;
    c.r[3] = wp::rd8(ea);
L_0105ea90:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105eab0(wp::Cpu& c) {
    WP_ENTER(0x105eab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105eb2cu: goto R_0105eb2c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x2625cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x2625cu) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105eb14;
L_0105eb10:
    c.r[30] = c.r[30] + 0x4u;
L_0105eb14:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105eb38;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105eb2cu;
    f_801c8244(c);
R_0105eb2c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105eb10;
    }
L_0105eb38:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105eb58;
    c.r[3] = 0x0u;
    goto L_0105eb5c;
L_0105eb58:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105eb5c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0105eb6c;
    c.r[3] = 0x0u;
    goto L_0105eb70;
L_0105eb6c:
    ea = c.r[3] + 0xbdu;
    c.r[3] = wp::rd8(ea);
L_0105eb70:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105eb90(wp::Cpu& c) {
    WP_ENTER(0x105eb90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105eba4u: goto R_0105eba4;
        case 0x105ec0cu: goto R_0105ec0c;
        case 0x105ec60u: goto R_0105ec60;
        case 0x105ec68u: goto R_0105ec68;
        case 0x105ec80u: goto R_0105ec80;
        case 0x105ec9cu: goto R_0105ec9c;
        case 0x105ecb4u: goto R_0105ecb4;
        case 0x105ecc8u: goto R_0105ecc8;
        case 0x105ecd0u: goto R_0105ecd0;
        case 0x105ece0u: goto R_0105ece0;
        case 0x105ecf8u: goto R_0105ecf8;
        case 0x105ed08u: goto R_0105ed08;
        case 0x105ed18u: goto R_0105ed18;
        case 0x105ed28u: goto R_0105ed28;
        case 0x105ed40u: goto R_0105ed40;
        case 0x105ed50u: goto R_0105ed50;
        case 0x105ee08u: goto R_0105ee08;
        case 0x105ee20u: goto R_0105ee20;
        case 0x105ee4cu: goto R_0105ee4c;
        case 0x105ee64u: goto R_0105ee64;
        case 0x105efdcu: goto R_0105efdc;
        case 0x105efe8u: goto R_0105efe8;
        case 0x105f044u: goto R_0105f044;
        case 0x105f048u: goto R_0105f048;
        case 0x105f0a8u: goto R_0105f0a8;
        case 0x105f0acu: goto R_0105f0ac;
        case 0x105f16cu: goto R_0105f16c;
        case 0x105f170u: goto R_0105f170;
        case 0x105f178u: goto R_0105f178;
        case 0x105f1a0u: goto R_0105f1a0;
        case 0x105f1a4u: goto R_0105f1a4;
        case 0x105f218u: goto R_0105f218;
        case 0x105f228u: goto R_0105f228;
        case 0x105f284u: goto R_0105f284;
        case 0x105f2a0u: goto R_0105f2a0;
        case 0x105f2acu: goto R_0105f2ac;
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
    c.lr = 0x105eba4u;
    f_801c83b4(c);
R_0105eba4:
    c.r[5] = ((((g_mg442_bases[5] + 0x26268u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26268u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[4]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[27] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[7]);
    c.r[30] = c.r[27] + c.r[0];
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[4]);
    goto L_0105ebf4;
L_0105ebf0:
    c.r[27] = c.r[27] + 0x4u;
L_0105ebf4:
    wp::compare_unsigned(c, 0, c.r[27], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0105ec18;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105ec0cu;
    f_801c8244(c);
R_0105ec0c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105ebf0;
    }
L_0105ec18:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105ec38;
    c.r[3] = 0x0u;
    goto L_0105ec3c;
L_0105ec38:
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105ec3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105ec48;
    goto L_0105f2a4;
L_0105ec48:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ec60u;
    wp::call(c, c.ctr);
R_0105ec60:
    c.r[3] = 0xf0u;
    c.lr = 0x105ec68u;
    f_801c79a4(c);
R_0105ec68:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0105ec84;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.lr = 0x105ec80u;
    f_mg442_01060d30(c);
R_0105ec80:
    c.r[30] = c.r[3] | c.r[3];
L_0105ec84:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ec9cu;
    wp::call(c, c.ctr);
R_0105ec9c:
    ea = c.r[3] + 0x4cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x105ecb4u;
    f_80042130(c);
R_0105ecb4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x70u;
    ea = c.r[12] + 0x4cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ecc8u;
    wp::call(c, c.ctr);
R_0105ecc8:
    c.r[3] = 0x104u;
    c.lr = 0x105ecd0u;
    f_801c79a4(c);
R_0105ecd0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0105ed0c;
    c.lr = 0x105ece0u;
    f_80042130(c);
R_0105ece0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ecf8u;
    wp::call(c, c.ctr);
R_0105ecf8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x105ed08u;
    f_8012b8d0(c);
R_0105ed08:
    c.r[27] = c.r[3] | c.r[3];
L_0105ed0c:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = 0x10cu;
    c.lr = 0x105ed18u;
    f_801c79a4(c);
R_0105ed18:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0105ed70;
    c.lr = 0x105ed28u;
    f_80042130(c);
R_0105ed28:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ed40u;
    wp::call(c, c.ctr);
R_0105ed40:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x105ed50u;
    f_8012b8d0(c);
R_0105ed50:
    c.r[4] = ((((g_mg442_bases[5] + 0x27438u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg442_bases[4] + 0x22b8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x27438u) & 0xFFFFu);
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22b8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[27] + 0x108u;
    wp::wr32(ea, c.r[0]);
L_0105ed70:
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = ((((g_mg442_bases[4] + 0x22bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22bcu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x40u;
    ea = c.r[27] + 0xbbu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[0] = c.r[0] & 0xfeu;
    ea = c.r[27] + 0xbbu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x3cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x40u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.ctr = c.r[12];
    c.lr = 0x105ee08u;
    wp::call(c, c.ctr);
R_0105ee08:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x40u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ee20u;
    wp::call(c, c.ctr);
R_0105ee20:
    ea = c.r[30] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[30] + 0xd0u;
    c.r[3] = c.r[30] + 0xe0u;
    c.r[4] = 0x1u;
    ea = c.r[5] + 0xf8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0xf8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xe0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ee4cu;
    wp::call(c, c.ctr);
R_0105ee4c:
    ea = c.r[30] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0xd0u;
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105ee64u;
    wp::call(c, c.ctr);
R_0105ee64:
    c.r[4] = ((((g_mg442_bases[4] + 0x22b4u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x55550000u;
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x22b4u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x5556u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[30] + 0x8u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[6] + 0xdcu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x19u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[6] + 0xddu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x1au;
    c.r[4] = wp::rd8(ea);
    ea = c.r[6] + 0xdeu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x1bu;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[6] + 0xdfu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[6] + 0xe0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x15u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[6] + 0xe1u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x16u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[6] + 0xe2u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x17u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[6] + 0xe3u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xbau;
    c.r[7] = wp::rd8(ea);
    ea = c.r[30] + 0x4u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::mulhw(c.r[0], c.r[7]);
    ea = c.r[8] + 0xbau;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::mulhw(c.r[0], c.r[4]);
    c.r[4] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[4] = c.r[6] + c.r[4];
    c.r[6] = c.r[4] * 0x3u;
    c.r[4] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = c.r[5] + c.r[4];
    c.r[6] = c.r[7] - c.r[6];
    c.r[5] = c.r[4] & 0xffu;
    c.r[4] = wp::rotl(c.r[4], 2) & 0x3fcu;
    c.r[6] = c.r[6] & 0xffu;
    c.r[4] = c.r[4] - c.r[5];
    c.r[4] = c.r[6] + c.r[4];
    ea = c.r[8] + 0xbau;
    wp::wr8(ea, c.r[4]);
    ea = c.r[30] + 0x4u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[31] + 0xbau;
    c.r[4] = wp::rd8(ea);
    ea = c.r[9] + 0xbau;
    c.r[6] = wp::rd8(ea);
    c.r[7] = wp::mulhw(c.r[0], c.r[4]);
    c.r[4] = wp::rotl(c.r[7], 1) & 0x1u;
    c.r[8] = c.r[7] + c.r[4];
    c.r[5] = wp::mulhw(c.r[0], c.r[6]);
    c.r[7] = c.r[8] & 0xffu;
    c.r[4] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = c.r[5] + c.r[4];
    c.r[5] = wp::rotl(c.r[8], 2) & 0x3fcu;
    c.r[4] = c.r[4] * 0x3u;
    c.r[5] = c.r[5] - c.r[7];
    c.r[4] = c.r[6] - c.r[4];
    c.r[4] = c.r[4] & 0xffu;
    c.r[4] = c.r[5] + c.r[4];
    ea = c.r[9] + 0xbau;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xbau;
    c.r[7] = wp::rd8(ea);
    ea = c.r[30] + 0x8u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::mulhw(c.r[0], c.r[7]);
    ea = c.r[8] + 0xbau;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::mulhw(c.r[0], c.r[4]);
    c.r[4] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[4] = c.r[6] + c.r[4];
    c.r[6] = c.r[4] * 0x3u;
    c.r[4] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[4] = c.r[5] + c.r[4];
    c.r[6] = c.r[7] - c.r[6];
    c.r[5] = c.r[4] & 0xffu;
    c.r[4] = wp::rotl(c.r[4], 2) & 0x3fcu;
    c.r[6] = c.r[6] & 0xffu;
    c.r[4] = c.r[4] - c.r[5];
    c.r[4] = c.r[6] + c.r[4];
    ea = c.r[8] + 0xbau;
    wp::wr8(ea, c.r[4]);
    ea = c.r[30] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[31] + 0xbau;
    c.r[4] = wp::rd8(ea);
    ea = c.r[8] + 0xbau;
    c.r[5] = wp::rd8(ea);
    c.r[6] = wp::mulhw(c.r[0], c.r[4]);
    c.r[4] = wp::mulhw(c.r[0], c.r[5]);
    c.r[0] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[7] = c.r[6] + c.r[0];
    c.r[0] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[6] = c.r[7] & 0xffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[4] = wp::rotl(c.r[7], 2) & 0x3fcu;
    c.r[0] = c.r[0] * 0x3u;
    c.r[4] = c.r[4] - c.r[6];
    c.r[0] = c.r[5] - c.r[0];
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[4] + c.r[0];
    ea = c.r[8] + 0xbau;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105efdcu;
    f_80129080(c);
R_0105efdc:
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x105efe8u;
    f_80129080(c);
R_0105efe8:
    ea = c.r[28] + 0x118u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x11cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_0105f014;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    goto L_0105f284;
L_0105f014:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0105f048;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x26274u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26274u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105f044u;
    f_801cee24(c);
R_0105f044:
    c.lr = 0x105f048u;
    f_801d3940(c);
L_0105f048:
R_0105f048:
    c.r[5] = 0x0u;
    c.r[4] = c.r[28] + 0x11cu;
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[28] + 0x118u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[31];
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0105f0ac;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x26274u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26274u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105f0a8u;
    f_801cee24(c);
R_0105f0a8:
    c.lr = 0x105f0acu;
    f_801d3940(c);
L_0105f0ac:
R_0105f0ac:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105f0fc;
    c.r[5] = c.r[31] + 0x1u;
    c.r[3] = 0xcccd0000u;
    c.r[4] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[5];
    c.r[3] = c.r[3] + 0xffffcccdu;
    c.r[4] = wp::mulhwu(c.r[3], c.r[4]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105f0f0;
    c.r[3] = c.r[1] + 0x8u;
L_0105f0f0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105f140;
L_0105f0fc:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105f138;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0105f12c;
    c.r[3] = c.r[1] + 0x8u;
L_0105f12c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0105f140;
L_0105f138:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0105f140:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0105f170;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x26274u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26274u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105f16cu;
    f_801cee24(c);
R_0105f16c:
    c.lr = 0x105f170u;
    f_801d3940(c);
L_0105f170:
R_0105f170:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x105f178u;
    f_801c79a4(c);
R_0105f178:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0105f1a4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x98u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x98u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x105f1a0u;
    f_801cee24(c);
R_0105f1a0:
    c.lr = 0x105f1a4u;
    f_801d3940(c);
L_0105f1a4:
R_0105f1a4:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[27] + c.r[0];
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x84u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x90u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x80u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x118u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[31] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[31] + c.r[4];
    c.r[5] = c.r[5] - c.r[31];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[27] = wp::add_extended(c, c.r[5], 0);
    c.r[0] = c.r[0] - c.r[27];
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = wp::rotl(c.r[27], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[26] | c.r[26];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x105f218u;
    f_800043c4(c);
R_0105f218:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.lr = 0x105f228u;
    f_80004714(c);
R_0105f228:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[3] = wp::add_carry(c, c.r[1], 0x80u, 0);
    wp::record(c, c.r[3]);
    c.r[0] = c.r[0] + c.r[27];
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0x11cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x11cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x80u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0105f284;
    ea = c.r[1] + 0x80u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105f284;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x105f284u;
    f_801c7a8c(c);
L_0105f284:
R_0105f284:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x19cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105f2a0u;
    wp::call(c, c.ctr);
R_0105f2a0:
    c.r[3] = c.r[30] | c.r[30];
L_0105f2a4:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x105f2acu;
    f_801c8400(c);
R_0105f2ac:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mg442_0105f2c0(wp::Cpu& c) {
    WP_ENTER(0x105f2c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg442_0105f2d0(wp::Cpu& c) {
    WP_ENTER(0x105f2d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg442_0105f2e0(wp::Cpu& c) {
    WP_ENTER(0x105f2e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105f364u: goto R_0105f364;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg442_bases[5] + 0x26294u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x26294u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[4]);
    goto L_0105f34c;
L_0105f348:
    c.r[30] = c.r[30] + 0x4u;
L_0105f34c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105f370;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105f364u;
    f_801c8244(c);
R_0105f364:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105f348;
    }
L_0105f370:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105f390;
    c.r[3] = 0x0u;
    goto L_0105f394;
L_0105f390:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0105f394:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105f3d4;
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[29] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0xe8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[29] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0xecu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[4] + 0xe8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[4] + 0xecu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0xc0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0xc4u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
L_0105f3d4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg442_0105f400(wp::Cpu& c) {
    WP_ENTER(0x105f400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105f428u: goto R_0105f428;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x190u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105f428u;
    wp::call(c, c.ctr);
R_0105f428:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_0105f440(wp::Cpu& c) {
    WP_ENTER(0x105f440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = c.f[1];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_0105f460(wp::Cpu& c) {
    WP_ENTER(0x105f460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[8] = ((((g_mg442_bases[6] + 0x980u) + 0x8000u) >> 16) << 16);
    c.r[9] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[6] + 0x980u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105f4d0;
    c.r[7] = ((((g_mg442_bases[6] + 0x988u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x38u;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    c.r[6] = c.r[7] + wp::sign_extend16((g_mg442_bases[6] + 0x988u) & 0xFFFFu);
    ea = c.r[9] + 0x44u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[9] + 0x48u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[0] = 0x1u;
    ea = c.r[9] + 0x3cu;
    c.f[6] = wp::rdf32(ea);
    c.ps1[6] = c.f[6];
    ea = c.r[9] + 0x40u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[9] + 0x4cu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[9] + 0x50u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[9] + 0x54u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[7] + wp::sign_extend16((g_mg442_bases[6] + 0x988u) & 0xFFFFu);
    wp::wrf32(ea, static_cast<float>(c.f[7]));
    ea = c.r[6] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[6]));
    ea = c.r[6] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[5]));
    ea = c.r[6] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[6] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    ea = c.r[6] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[6] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[6] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[6] + 0x20u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[6] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[6] + 0x980u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_0105f4d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[6] + 0x988u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[12] + 0x190u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x988u) & 0xFFFFu);
    c.r[5] = c.r[6] + c.r[0];
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_0105f4f0(wp::Cpu& c) {
    WP_ENTER(0x105f4f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105f574u: goto R_0105f574;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x262a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[31]);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x262a0u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105f55c;
L_0105f558:
    c.r[30] = c.r[30] + 0x4u;
L_0105f55c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105f580;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105f574u;
    f_801c8244(c);
R_0105f574:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105f558;
    }
L_0105f580:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105f5a0;
    c.r[4] = 0x0u;
    goto L_0105f5a4;
L_0105f5a0:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0105f5a4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105f5c0;
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xf0u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xf0u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[4] + 0xccu;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
L_0105f5c0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x34u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105f5e0(wp::Cpu& c) {
    WP_ENTER(0x105f5e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105f664u: goto R_0105f664;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x262acu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[31]);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x262acu) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105f64c;
L_0105f648:
    c.r[30] = c.r[30] + 0x4u;
L_0105f64c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0105f670;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105f664u;
    f_801c8244(c);
R_0105f664:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105f648;
    }
L_0105f670:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105f690;
    c.r[4] = 0x0u;
    goto L_0105f694;
L_0105f690:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0105f694:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105f6b0;
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xf4u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xf4u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[4] + 0xc8u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
L_0105f6b0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x34u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_0105f6d0(wp::Cpu& c) {
    WP_ENTER(0x105f6d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105f754u: goto R_0105f754;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg442_bases[5] + 0x262b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x262b8u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[29] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[30] = c.r[29] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105f73c;
L_0105f738:
    c.r[29] = c.r[29] + 0x4u;
L_0105f73c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0105f760;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105f754u;
    f_801c8244(c);
R_0105f754:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105f738;
    }
L_0105f760:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105f780;
    c.r[5] = 0x0u;
    goto L_0105f784;
L_0105f780:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0105f784:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105f7e4;
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = 0x55550000u;
    c.r[4] = c.r[3] + 0x5556u;
    ea = c.r[6] + 0x100u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = wp::mulhw(c.r[4], c.r[0]);
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[3] + c.r[0];
    c.r[3] = c.r[0] & 0xffu;
    c.r[0] = wp::rotl(c.r[0], 2) & 0x3fcu;
    c.r[0] = c.r[0] - c.r[3];
    c.r[0] = c.r[31] + c.r[0];
    ea = c.r[6] + 0x100u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x100u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = wp::mulhw(c.r[4], c.r[0]);
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[3] + c.r[0];
    c.r[3] = c.r[0] & 0xffu;
    c.r[0] = wp::rotl(c.r[0], 2) & 0x3fcu;
    c.r[0] = c.r[0] - c.r[3];
    c.r[0] = c.r[31] + c.r[0];
    ea = c.r[5] + 0x100u;
    wp::wr8(ea, c.r[0]);
L_0105f7e4:
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

void f_mg442_0105f810(wp::Cpu& c) {
    WP_ENTER(0x105f810u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105f894u: goto R_0105f894;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg442_bases[5] + 0x262c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x262c4u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[29] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[30] = c.r[29] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0105f87c;
L_0105f878:
    c.r[29] = c.r[29] + 0x4u;
L_0105f87c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0105f8a0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105f894u;
    f_801c8244(c);
R_0105f894:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105f878;
    }
L_0105f8a0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105f8c0;
    c.r[6] = 0x0u;
    goto L_0105f8c4;
L_0105f8c0:
    ea = c.r[29] + 0x0u;
    c.r[6] = wp::rd32(ea);
L_0105f8c4:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105f92c;
    ea = c.r[6] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = 0x55550000u;
    c.r[0] = wp::rotl(c.r[31], 2) & 0x3fcu;
    ea = c.r[7] + 0x100u;
    c.r[5] = wp::rd8(ea);
    c.r[3] = c.r[3] + 0x5556u;
    c.r[8] = c.r[0] - c.r[31];
    c.r[4] = wp::mulhw(c.r[3], c.r[5]);
    c.r[0] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[4] + c.r[0];
    c.r[0] = c.r[0] * 0x3u;
    c.r[0] = c.r[5] - c.r[0];
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[8] + c.r[0];
    ea = c.r[7] + 0x100u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x100u;
    c.r[4] = wp::rd8(ea);
    c.r[3] = wp::mulhw(c.r[3], c.r[4]);
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[3] + c.r[0];
    c.r[0] = c.r[0] * 0x3u;
    c.r[0] = c.r[4] - c.r[0];
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[8] + c.r[0];
    ea = c.r[5] + 0x100u;
    wp::wr8(ea, c.r[0]);
L_0105f92c:
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

void f_mg442_0105f950(wp::Cpu& c) {
    WP_ENTER(0x105f950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105f990u: goto R_0105f990;
        case 0x105f9acu: goto R_0105f9ac;
        case 0x105f9c4u: goto R_0105f9c4;
        case 0x105f9e8u: goto R_0105f9e8;
        case 0x105fa0cu: goto R_0105fa0c;
        case 0x105fa2cu: goto R_0105fa2c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::sign_extend8(c.r[5]);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 0)) goto L_0105f994;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105f990u;
    wp::call(c, c.ctr);
R_0105f990:
    goto L_0105f9c4;
L_0105f994:
    if (!wp::cr_get(c, 2)) goto L_0105f9b0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105f9acu;
    wp::call(c, c.ctr);
R_0105f9ac:
    goto L_0105f9c4;
L_0105f9b0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105f9c4u;
    wp::call(c, c.ctr);
L_0105f9c4:
R_0105f9c4:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0105f9ec;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105f9e8u;
    wp::call(c, c.ctr);
R_0105f9e8:
    goto L_0105fa2c;
L_0105f9ec:
    if (!wp::cr_get(c, 2)) goto L_0105fa10;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105fa0cu;
    wp::call(c, c.ctr);
R_0105fa0c:
    goto L_0105fa2c;
L_0105fa10:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105fa2cu;
    wp::call(c, c.ctr);
L_0105fa2c:
R_0105fa2c:
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

void f_mg442_0105fa50(wp::Cpu& c) {
    WP_ENTER(0x105fa50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105fa80u: goto R_0105fa80;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x8u;
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1b8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105fa80u;
    wp::call(c, c.ctr);
R_0105fa80:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_0105fa90(wp::Cpu& c) {
    WP_ENTER(0x105fa90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105faa4u: goto R_0105faa4;
        case 0x105fb10u: goto R_0105fb10;
        case 0x105fc6cu: goto R_0105fc6c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x105faa4u;
    f_801c83b8(c);
R_0105faa4:
    c.r[9] = ((((g_mg442_bases[5] + 0x262d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mg442_bases[5] + 0x262d0u) & 0xFFFFu);
    c.r[8] = wp::rd32(ea);
    c.r[9] = ea;
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    ea = c.r[9] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[29] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[8]);
    c.r[30] = c.r[29] + c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    goto L_0105faf8;
L_0105faf4:
    c.r[29] = c.r[29] + 0x4u;
L_0105faf8:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0105fb1c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105fb10u;
    f_801c8244(c);
R_0105fb10:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105faf4;
    }
L_0105fb1c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105fb3c;
    c.r[5] = 0x0u;
    goto L_0105fb40;
L_0105fb3c:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0105fb40:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105fc64;
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[6] + 0xdcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x1du;
    c.r[0] = wp::rd8(ea);
    ea = c.r[6] + 0xddu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x1eu;
    c.r[3] = wp::rd8(ea);
    ea = c.r[6] + 0xdeu;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x1fu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[6] + 0xdfu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd8(ea);
    ea = c.r[6] + 0xe0u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x19u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[6] + 0xe1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x1au;
    c.r[3] = wp::rd8(ea);
    ea = c.r[6] + 0xe2u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x1bu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[6] + 0xe3u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_0105fc14;
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_0105fc14;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_0105fc14;
    c.r[3] = 0x80u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xdcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x15u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xddu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x16u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xdeu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x17u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0xdfu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x11u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x12u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x13u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe3u;
    wp::wr8(ea, c.r[0]);
    goto L_0105fc64;
L_0105fc14:
    c.r[3] = 0xffffff80u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xdcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xdu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xddu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xeu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xdeu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xfu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0xdfu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xbu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe3u;
    wp::wr8(ea, c.r[0]);
L_0105fc64:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x105fc6cu;
    f_801c8404(c);
R_0105fc6c:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg442_0105fc80(wp::Cpu& c) {
    WP_ENTER(0x105fc80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105fcc0u: goto R_0105fcc0;
        case 0x105fce4u: goto R_0105fce4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0u - c.r[5];
    c.r[0] = c.r[0] | c.r[5];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105fcc0u;
    wp::call(c, c.ctr);
R_0105fcc0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0u - c.r[31];
    c.r[0] = c.r[0] | c.r[31];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x105fce4u;
    wp::call(c, c.ctr);
R_0105fce4:
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

void f_mg442_0105fd00(wp::Cpu& c) {
    WP_ENTER(0x105fd00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105fd34u: goto R_0105fd34;
        case 0x105fd58u: goto R_0105fd58;
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
    c.r[31] = c.r[7] | c.r[7];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105fd34u;
    wp::call(c, c.ctr);
R_0105fd34:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0105fd58;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105fd58u;
    wp::call(c, c.ctr);
L_0105fd58:
R_0105fd58:
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

void f_mg442_0105fd80(wp::Cpu& c) {
    WP_ENTER(0x105fd80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105fdb4u: goto R_0105fdb4;
        case 0x105fddcu: goto R_0105fddc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x105fdb4u;
    wp::call(c, c.ctr);
R_0105fdb4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[4] + 0x22acu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg442_bases[4] + 0x22b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg442_bases[4] + 0x22acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[4] + 0x22b0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105fddcu;
    wp::call(c, c.ctr);
R_0105fddc:
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

void f_mg442_0105fe00(wp::Cpu& c) {
    WP_ENTER(0x105fe00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x105fe2cu: goto R_0105fe2c;
        case 0x105fe98u: goto R_0105fe98;
        case 0x105ff20u: goto R_0105ff20;
        case 0x105ff88u: goto R_0105ff88;
        case 0x106002cu: goto R_0106002c;
        case 0x1060070u: goto R_01060070;
        case 0x10600b0u: goto R_010600b0;
        case 0x10600dcu: goto R_010600dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x90u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x98u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x88u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0x78u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    c.lr = 0x105fe2cu;
    f_801c83b8(c);
R_0105fe2c:
    c.r[8] = ((((g_mg442_bases[5] + 0x262dcu) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x262dcu) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[27] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[7]);
    c.r[28] = c.r[27] + c.r[0];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[4]);
    goto L_0105fe80;
L_0105fe7c:
    c.r[27] = c.r[27] + 0x4u;
L_0105fe80:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0105fea4;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x105fe98u;
    f_801c8244(c);
R_0105fe98:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0105fe7c;
    }
L_0105fea4:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0105fec4;
    c.r[28] = 0x0u;
    goto L_0105fec8;
L_0105fec4:
    ea = c.r[27] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_0105fec8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[27] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0105fedc;
    c.r[3] = 0x0u;
    goto L_010600bc;
L_0105fedc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[28] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1c8u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[7] + 0x4cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[6] = 0x0u;
    ea = c.r[7] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[28] + 0xc0u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[28] + 0xc4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.ctr = c.r[12];
    c.lr = 0x105ff20u;
    wp::call(c, c.ctr);
R_0105ff20:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[1] + 0x18u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x1cu;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    if (!wp::cr_get(c, 2)) goto L_0105ff8c;
    c.r[3] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[2] + c.f[1]);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[2] + c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[2] = wp::round_single(c.f[1] / c.f[4]);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[5] * wp::force25(c.f[2]));
    c.ps1[1] = c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_0105ff60;
    c.f[2] = wp::round_single(c.f[0] / c.f[5]);
    c.ps1[2] = c.f[2];
L_0105ff60:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x20u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x24u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[2]));
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x105ff88u;
    wp::call(c, c.ctr);
R_0105ff88:
    goto L_0106002c;
L_0105ff8c:
    c.r[3] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[3] + c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[3] + c.f[1]);
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[0] / c.f[5]);
    c.ps1[2] = c.f[2];
    c.f[0] = wp::round_single(c.f[1] / c.f[4]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[3]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_0105ffbc;
    goto L_0105ffc0;
L_0105ffbc:
    c.f[3] = c.f[2];
L_0105ffc0:
    c.r[3] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[0], c.f[2]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_0105ffd8;
    goto L_0105ffdc;
L_0105ffd8:
    c.f[2] = c.f[0];
L_0105ffdc:
    wp::compare_float(c, 0, c.f[2], c.f[3]);
    if (!wp::cr_get(c, 1)) goto L_0105ffe8;
    c.f[2] = c.f[3];
L_0105ffe8:
    c.r[3] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (wp::cr_get(c, 0)) goto L_01060000;
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01060004;
L_01060000:
    c.r[27] = 0x1u;
L_01060004:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x20u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x24u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[2]));
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[3]));
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x106002cu;
    wp::call(c, c.ctr);
L_0106002c:
R_0106002c:
    c.r[4] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg442_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[1] + 0x28u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
L_01060040:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[28] + 0xc0u;
    c.r[7] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1c8u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[28] + 0xc4u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.ctr = c.r[12];
    c.lr = 0x1060070u;
    wp::call(c, c.ctr);
R_01060070:
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[30]);
    c.r[0] = wp::mfcr(c);
    c.r[0] = wp::rotl(c.r[0], 2) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010600b8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[1]));
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[31] * wp::force25(c.f[0]));
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10600b0u;
    wp::call(c, c.ctr);
R_010600b0:
    c.r[27] = 0x1u;
    WP_POLL(c);
    goto L_01060040;
L_010600b8:
    c.r[3] = c.r[27] | c.r[27];
L_010600bc:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[29] = wp::rdf64(ea);
    c.lr = 0x10600dcu;
    f_801c8404(c);
R_010600dc:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_010600f0(wp::Cpu& c) {
    WP_ENTER(0x10600f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060104u: goto R_01060104;
        case 0x1060174u: goto R_01060174;
        case 0x1060280u: goto R_01060280;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1060104u;
    f_801c83b4(c);
R_01060104:
    c.r[10] = ((((g_mg442_bases[5] + 0x262e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[10] + wp::sign_extend16((g_mg442_bases[5] + 0x262e8u) & 0xFFFFu);
    c.r[9] = wp::rd32(ea);
    c.r[10] = ea;
    c.r[29] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[10] + 0x4u;
    c.r[8] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[10] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[30] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[9]);
    c.r[31] = c.r[7] | c.r[7];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[27] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[9]);
    c.r[28] = c.r[27] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_0106015c;
L_01060158:
    c.r[27] = c.r[27] + 0x4u;
L_0106015c:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01060180;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1060174u;
    f_801c8244(c);
R_01060174:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01060158;
    }
L_01060180:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010601a0;
    c.r[5] = 0x0u;
    goto L_010601a4;
L_010601a0:
    ea = c.r[27] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010601a4:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01060278;
    ea = c.r[5] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010601cc;
    goto L_01060278;
L_010601cc:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_01060254;
L_010601e8:
    wp::compare_unsigned(c, 0, c.r[0], 0xbu);
    if (!wp::cr_get(c, 2)) goto L_010601f8;
    c.r[7] = c.r[7] + 0x3u;
    goto L_01060254;
L_010601f8:
    wp::compare_unsigned(c, 0, c.r[0], 0xcu);
    if (!wp::cr_get(c, 2)) goto L_01060220;
    ea = c.r[5] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[6];
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[0] = wp::rotl(c.r[0], 24) & 0xffu;
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[4]);
    c.r[3] = c.r[0] + c.r[7];
    c.r[7] = c.r[3] + 0x2u;
    goto L_01060250;
L_01060220:
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_0106024c;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01060244;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_01060244:
    c.r[8] = 0x0u;
    goto L_01060250;
L_0106024c:
    c.r[8] = c.r[8] + 0x1u;
L_01060250:
    c.r[7] = c.r[7] + 0x1u;
L_01060254:
    ea = c.r[5] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[6];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010601e8;
    }
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01060278;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_01060278:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1060280u;
    f_801c8400(c);
R_01060280:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01060290(wp::Cpu& c) {
    WP_ENTER(0x1060290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10602a4u: goto R_010602a4;
        case 0x1060318u: goto R_01060318;
        case 0x106035cu: goto R_0106035c;
        case 0x10603c8u: goto R_010603c8;
        case 0x1060414u: goto R_01060414;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x70u;
    c.lr = 0x10602a4u;
    f_801c83b4(c);
R_010602a4:
    c.r[9] = ((((g_mg442_bases[5] + 0x262f4u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mg442_bases[5] + 0x262f4u) & 0xFFFFu);
    c.r[8] = wp::rd32(ea);
    c.r[9] = ea;
    c.r[27] = c.r[5] | c.r[5];
    c.r[30] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[9] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[29] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[8]);
    c.r[31] = c.r[29] + c.r[0];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[4]);
    goto L_01060300;
L_010602fc:
    c.r[29] = c.r[29] + 0x4u;
L_01060300:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01060324;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1060318u;
    f_801c8244(c);
R_01060318:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010602fc;
    }
L_01060324:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01060344;
    c.r[31] = 0x0u;
    goto L_01060348;
L_01060344:
    ea = c.r[29] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_01060348:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060390;
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x106035cu;
    f_8012be00(c);
R_0106035c:
    ea = c.r[1] + 0x48u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[0] = std::fabs(c.f[0]);
    c.f[0] = wp::round_single(c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[27] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x4cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[0] = c.f[0];
    c.f[0] = std::fabs(c.f[0]);
    c.f[0] = wp::round_single(c.f[0]);
    c.ps1[0] = c.f[0];
    ea = c.r[27] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_0106040c;
L_01060390:
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x38u;
    ea = c.r[30] + 0x64u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[4] + 0x50u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[30] + 0x68u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[4] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x10603c8u;
    f_8012be00(c);
R_010603c8:
    ea = c.r[1] + 0x38u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x40u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[2] - c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[2] = std::fabs(c.f[2]);
    c.f[2] = wp::round_single(c.f[2]);
    c.ps1[2] = c.f[2];
    ea = c.r[27] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x3cu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0x44u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[2] = wp::round_single(c.f[3] - c.f[2]);
    c.ps1[2] = c.f[2];
    c.f[2] = std::fabs(c.f[2]);
    c.f[2] = wp::round_single(c.f[2]);
    c.ps1[2] = c.f[2];
    ea = c.r[27] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_0106040c:
    c.r[11] = c.r[1] + 0x70u;
    c.lr = 0x1060414u;
    f_801c8400(c);
R_01060414:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mg442_01060430(wp::Cpu& c) {
    WP_ENTER(0x1060430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060444u: goto R_01060444;
        case 0x10604b0u: goto R_010604b0;
        case 0x10604f8u: goto R_010604f8;
        case 0x1060528u: goto R_01060528;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1060444u;
    f_801c83b8(c);
R_01060444:
    c.r[8] = ((((g_mg442_bases[5] + 0x26300u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x26300u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    c.r[29] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_01060498;
L_01060494:
    c.r[30] = c.r[30] + 0x4u;
L_01060498:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010604bc;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10604b0u;
    f_801c8244(c);
R_010604b0:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01060494;
    }
L_010604bc:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010604dc;
    c.r[31] = 0x0u;
    goto L_010604e0;
L_010604dc:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010604e0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10604f8u;
    wp::call(c, c.ctr);
R_010604f8:
    ea = c.r[29] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[3] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[29] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[3] + 0x50u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x1060528u;
    f_801c8404(c);
R_01060528:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01060540(wp::Cpu& c) {
    WP_ENTER(0x1060540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10605c4u: goto R_010605c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg442_bases[5] + 0x2630cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x2630cu) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_010605ac;
L_010605a8:
    c.r[30] = c.r[30] + 0x4u;
L_010605ac:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010605d0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10605c4u;
    f_801c8244(c);
R_010605c4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010605a8;
    }
L_010605d0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010605f0;
    c.r[3] = 0x0u;
    goto L_010605f4;
L_010605f0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010605f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060614;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[29] & 0xffu;
    ea = c.r[4] + 0xbbu;
    c.r[3] = wp::rd8(ea);
    c.r[3] = c.r[3] & 0xfeu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0xbbu;
    wp::wr8(ea, c.r[0]);
L_01060614:
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

void f_mg442_01060640(wp::Cpu& c) {
    WP_ENTER(0x1060640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10606c4u: goto R_010606c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg442_bases[5] + 0x26318u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x26318u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[4]);
    goto L_010606ac;
L_010606a8:
    c.r[30] = c.r[30] + 0x4u;
L_010606ac:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010606d0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10606c4u;
    f_801c8244(c);
R_010606c4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010606a8;
    }
L_010606d0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010606f0;
    c.r[4] = 0x0u;
    goto L_010606f4;
L_010606f0:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_010606f4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106074c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xdcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xdu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xddu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xeu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xdeu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xfu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0xdfu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0xbu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0xe3u;
    wp::wr8(ea, c.r[0]);
L_0106074c:
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

void f_mg442_01060770(wp::Cpu& c) {
    WP_ENTER(0x1060770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10607f4u: goto R_010607f4;
        case 0x1060844u: goto R_01060844;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x26324u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[31]);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26324u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_010607dc;
L_010607d8:
    c.r[30] = c.r[30] + 0x4u;
L_010607dc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01060800;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10607f4u;
    f_801c8244(c);
R_010607f4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010607d8;
    }
L_01060800:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01060820;
    c.r[3] = 0x0u;
    goto L_01060824;
L_01060820:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01060824:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060844;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.f[1] = c.f[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x84u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1060844u;
    wp::call(c, c.ctr);
L_01060844:
R_01060844:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x34u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01060870(wp::Cpu& c) {
    WP_ENTER(0x1060870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mg442_01060880(wp::Cpu& c) {
    WP_ENTER(0x1060880u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060904u: goto R_01060904;
        case 0x106095cu: goto R_0106095c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg442_bases[5] + 0x26330u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[8] + wp::sign_extend16((g_mg442_bases[5] + 0x26330u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_010608ec;
L_010608e8:
    c.r[30] = c.r[30] + 0x4u;
L_010608ec:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01060910;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1060904u;
    f_801c8244(c);
R_01060904:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010608e8;
    }
L_01060910:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01060930;
    c.r[3] = 0x0u;
    goto L_01060934;
L_01060930:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01060934:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106095c;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[29];
    c.r[0] = c.r[0] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[12] + 0x88u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106095cu;
    wp::call(c, c.ctr);
L_0106095c:
R_0106095c:
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

void f_mg442_01060980(wp::Cpu& c) {
    WP_ENTER(0x1060980u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x108u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg442_01060990(wp::Cpu& c) {
    WP_ENTER(0x1060990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10609ccu: goto R_010609cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = c.r[4] ^ 0x80000000u;
    c.r[4] = ((((g_mg442_bases[4] + 0x22f8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x22f8u) & 0xFFFFu);
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mg442_bases[4] + 0x22f4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22f4u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    c.f[1] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[1] = c.f[1];
    c.lr = 0x10609ccu;
    f_80071fe0(c);
R_010609cc:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_010609e0(wp::Cpu& c) {
    WP_ENTER(0x10609e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060a5cu: goto R_01060a5c;
        case 0x1060ab4u: goto R_01060ab4;
        case 0x1060ad8u: goto R_01060ad8;
        case 0x1060ae8u: goto R_01060ae8;
        case 0x1060afcu: goto R_01060afc;
        case 0x1060b0cu: goto R_01060b0c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x2633cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x2633cu) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_01060a44;
L_01060a40:
    c.r[30] = c.r[30] + 0x4u;
L_01060a44:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01060a68;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1060a5cu;
    f_801c8244(c);
R_01060a5c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01060a40;
    }
L_01060a68:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01060a88;
    c.r[31] = 0x0u;
    goto L_01060a8c;
L_01060a88:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_01060a8c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01060a9c;
    c.r[3] = 0x0u;
    goto L_01060b58;
L_01060a9c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x64u;
    ea = c.r[12] + 0x1e8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1060ab4u;
    wp::call(c, c.ctr);
R_01060ab4:
    ea = c.r[31] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x51ec0000u;
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] * c.r[3];
    c.r[3] = c.r[4] + 0xffff851fu;
    c.r[0] = wp::mulhwu(c.r[3], c.r[0]);
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1060ad8u;
    f_80071fe0(c);
R_01060ad8:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01060af0;
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1060ae8u;
    f_80071fe0(c);
R_01060ae8:
    c.r[30] = c.r[3] | c.r[3];
    goto L_01060b10;
L_01060af0:
    c.r[31] = ((((g_mg442_bases[4] + 0x2304u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2304u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1060afcu;
    f_80071fe0(c);
R_01060afc:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01060b10;
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2304u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1060b0cu;
    f_80071fe0(c);
R_01060b0c:
    c.r[30] = c.r[3] | c.r[3];
L_01060b10:
    c.r[4] = (((0x802f5ed0u + 0x8000u) >> 16) << 16);
    c.r[3] = 0x88890000u;
    ea = c.r[4] + wp::sign_extend16(0x802f5ed0u & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xffff8889u;
    c.r[0] = c.r[0] * 0x28u;
    c.r[3] = wp::mulhw(c.r[3], c.r[0]);
    c.r[0] = c.r[3] + c.r[0];
    c.r[0] = wp::sraw(c, c.r[0], 5);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01060b48;
    c.r[30] = c.r[0] | c.r[0];
    goto L_01060b54;
L_01060b48:
    wp::compare_signed(c, 0, c.r[30], 0x190u);
    if (!wp::cr_get(c, 1)) goto L_01060b54;
    c.r[30] = 0x190u;
L_01060b54:
    c.r[3] = c.r[30] | c.r[30];
L_01060b58:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01060b80(wp::Cpu& c) {
    WP_ENTER(0x1060b80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060bfcu: goto R_01060bfc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x26348u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26348u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    goto L_01060be4;
L_01060be0:
    c.r[30] = c.r[30] + 0x4u;
L_01060be4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01060c08;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1060bfcu;
    f_801c8244(c);
R_01060bfc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01060be0;
    }
L_01060c08:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01060c28;
    c.r[5] = 0x0u;
    goto L_01060c2c;
L_01060c28:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_01060c2c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01060c3c;
    c.r[3] = 0x0u;
    goto L_01060c84;
L_01060c3c:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[9] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = c.r[3] | c.r[3];
    goto L_01060c6c;
L_01060c50:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[6] = c.r[6] + 0x2u;
    c.r[0] = c.r[8] + c.r[0];
    c.r[9] = c.r[9] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_01060c6c:
    wp::compare_unsigned(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_01060c84;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[6];
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01060c50;
    }
L_01060c84:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01060ca0(wp::Cpu& c) {
    WP_ENTER(0x1060ca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060cd0u: goto R_01060cd0;
        case 0x1060cecu: goto R_01060cec;
        case 0x1060cf4u: goto R_01060cf4;
        case 0x1060d0cu: goto R_01060d0c;
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
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1ecu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1060cd0u;
    wp::call(c, c.ctr);
R_01060cd0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1f0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1060cecu;
    wp::call(c, c.ctr);
R_01060cec:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1060cf4u;
    f_80019f20(c);
R_01060cf4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1ecu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1060d0cu;
    wp::call(c, c.ctr);
R_01060d0c:
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

void f_mg442_01060d30(wp::Cpu& c) {
    WP_ENTER(0x1060d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060d44u: goto R_01060d44;
        case 0x1060d64u: goto R_01060d64;
        case 0x1060d70u: goto R_01060d70;
        case 0x1060d8cu: goto R_01060d8c;
        case 0x1060e54u: goto R_01060e54;
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
    c.lr = 0x1060d44u;
    f_801c83b8(c);
R_01060d44:
    c.r[30] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0xd0u;
    c.lr = 0x1060d64u;
    f_mg442_01067120(c);
R_01060d64:
    c.r[3] = c.r[27] + 0xe0u;
    c.r[4] = 0x0u;
    c.lr = 0x1060d70u;
    f_mg442_01067120(c);
R_01060d70:
    c.r[31] = 0x0u;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + 0xcu;
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x1060d8cu;
    f_801cf394(c);
R_01060d8c:
    ea = c.r[27] + 0x20u;
    wp::wr32(ea, c.r[31]);
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[30] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[27] + 0x24u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[30] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[27] + 0x28u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[30] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[27] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x30u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x34u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x38u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x40u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x44u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x48u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x50u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x54u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x58u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x5cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x60u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x64u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x68u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x6cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x70u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x74u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x78u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x80u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x84u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x88u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x90u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x94u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x98u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x9cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0xa0u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0xacu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0xa8u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0xb0u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[27] + 0xb8u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0xb4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0xbdu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[27] + 0xbcu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[27] + 0xc0u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[27] + 0xc4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[27] + 0xccu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[27] + 0xc8u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    c.lr = 0x1060e54u;
    f_801c8404(c);
R_01060e54:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg442_01060e70(wp::Cpu& c) {
    WP_ENTER(0x1060e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060eacu: goto R_01060eac;
        case 0x1060ebcu: goto R_01060ebc;
        case 0x1060ee0u: goto R_01060ee0;
        case 0x1060f04u: goto R_01060f04;
        case 0x1060f20u: goto R_01060f20;
        case 0x1060f3cu: goto R_01060f3c;
        case 0x1060f48u: goto R_01060f48;
        case 0x1060f58u: goto R_01060f58;
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
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01060f58;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060eac;
    c.lr = 0x1060eacu;
    f_80048f30(c);
L_01060eac:
R_01060eac:
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060ebc;
    c.lr = 0x1060ebcu;
    f_80048f30(c);
L_01060ebc:
R_01060ebc:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060ee0;
    if (wp::cr_get(c, 2)) goto L_01060ee0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1060ee0u;
    wp::call(c, c.ctr);
L_01060ee0:
R_01060ee0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060f04;
    if (wp::cr_get(c, 2)) goto L_01060f04;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1060f04u;
    wp::call(c, c.ctr);
L_01060f04:
R_01060f04:
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
L_01060f0c:
    c.r[3] = c.r[28] + c.r[31];
    ea = c.r[3] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01060f20;
    c.lr = 0x1060f20u;
    f_80048f30(c);
L_01060f20:
R_01060f20:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0xau);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01060f0c;
    }
    c.r[3] = c.r[28] + 0xe0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1060f3cu;
    f_mg442_01067180(c);
R_01060f3c:
    c.r[3] = c.r[28] + 0xd0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1060f48u;
    f_mg442_01067180(c);
R_01060f48:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01060f58;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1060f58u;
    f_801c7a8c(c);
L_01060f58:
R_01060f58:
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

void f_mg442_01060f80(wp::Cpu& c) {
    WP_ENTER(0x1060f80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1060facu: goto R_01060fac;
        case 0x1060fbcu: goto R_01060fbc;
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
    if (wp::cr_get(c, 2)) goto L_01060fbc;
    c.r[4] = 0x0u;
    c.lr = 0x1060facu;
    f_8012bbc0(c);
R_01060fac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01060fbc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1060fbcu;
    f_801c7a8c(c);
L_01060fbc:
R_01060fbc:
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

void f_mg442_01060fe0(wp::Cpu& c) {
    WP_ENTER(0x1060fe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1061018u: goto R_01061018;
        case 0x1061050u: goto R_01061050;
        case 0x1061204u: goto R_01061204;
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
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x20u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061018;
    c.r[3] = c.r[0] | c.r[0];
    c.lr = 0x1061018u;
    f_80048f30(c);
L_01061018:
R_01061018:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[31] = 0x0u;
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01061204;
    c.r[30] = 0x0u;
    goto L_01061038;
L_01061030:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x2u;
L_01061038:
    ea = c.r[29] + c.r[31];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061030;
    }
    c.r[0] = c.r[30] + 0x1u;
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x1061050u;
    f_80048ec0(c);
R_01061050:
    wp::compare_signed(c, 1, c.r[30], 0x0u);
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 5)) goto L_01061168;
    wp::compare_signed(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_01061138;
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_01061088;
    c.r[3] = 0x80000000u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01061088;
    c.r[4] = 0x1u;
L_01061088:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061138;
    c.r[0] = c.r[6] + 0x7u;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = 0x0u;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01061138;
L_010610ac:
    ea = c.r[28] + 0x20u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[5] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[6] + c.r[4];
    wp::wr16(ea, c.r[0]);
    ea = c.r[3] + 0x2u;
    c.r[8] = wp::rd16(ea);
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd16(ea);
    c.r[6] = c.r[0] + c.r[4];
    ea = c.r[3] + 0x6u;
    c.r[11] = wp::rd16(ea);
    ea = c.r[6] + 0x2u;
    wp::wr16(ea, c.r[8]);
    ea = c.r[3] + 0x8u;
    c.r[10] = wp::rd16(ea);
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xau;
    c.r[9] = wp::rd16(ea);
    c.r[6] = c.r[0] + c.r[4];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd16(ea);
    ea = c.r[6] + 0x4u;
    wp::wr16(ea, c.r[7]);
    ea = c.r[3] + 0xeu;
    c.r[7] = wp::rd16(ea);
    c.r[3] = c.r[3] + 0x10u;
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[4];
    ea = c.r[6] + 0x6u;
    wp::wr16(ea, c.r[11]);
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[4];
    ea = c.r[6] + 0x8u;
    wp::wr16(ea, c.r[10]);
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[4];
    ea = c.r[6] + 0xau;
    wp::wr16(ea, c.r[9]);
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[4];
    ea = c.r[6] + 0xcu;
    wp::wr16(ea, c.r[8]);
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[4];
    c.r[4] = c.r[4] + 0x10u;
    ea = c.r[6] + 0xeu;
    wp::wr16(ea, c.r[7]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010610ac;
    }
L_01061138:
    c.r[6] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    c.r[0] = c.r[30] - c.r[5];
    c.r[4] = c.r[29] + c.r[6];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01061168;
L_01061150:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[4] = c.r[4] + 0x2u;
    ea = c.r[3] + c.r[6];
    wp::wr16(ea, c.r[0]);
    c.r[6] = c.r[6] + 0x2u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01061150;
    }
L_01061168:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x0u;
    c.r[0] = wp::add_carry(c, c.r[30], 0xfffffffdu, 0);
    wp::record(c, c.r[0]);
    c.r[4] = c.r[30] + 0x1u;
    ea = c.r[3] + c.r[31];
    wp::wr16(ea, c.r[5]);
    c.r[3] = 0x1u;
    c.r[7] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[28] + 0xa0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0xa8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[28] + 0xacu;
    wp::wr32(ea, c.r[3]);
    c.ctr = c.r[0];
    if (!wp::cr_get(c, 1)) goto L_010611f8;
    c.r[0] = c.r[0] | 0x0u;
L_010611a0:
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[6];
    ea = c.r[6] + c.r[0];
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5bu);
    if (!wp::cr_get(c, 2)) goto L_010611ec;
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x77u);
    if (!wp::cr_get(c, 2)) goto L_010611ec;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5du);
    if (!wp::cr_get(c, 2)) goto L_010611ec;
    ea = c.r[28] + 0xacu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[7] + 0x3u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[28] + c.r[0];
    ea = c.r[3] + 0x78u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0xacu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0xacu;
    wp::wr32(ea, c.r[0]);
L_010611ec:
    c.r[6] = c.r[6] + 0x2u;
    c.r[7] = c.r[7] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010611a0;
    }
L_010611f8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1061204u;
    f_mg442_01061230(c);
L_01061204:
R_01061204:
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

void f_mg442_01061230(wp::Cpu& c) {
    WP_ENTER(0x1061230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1061244u: goto R_01061244;
        case 0x1061310u: goto R_01061310;
        case 0x1061318u: goto R_01061318;
        case 0x1061328u: goto R_01061328;
        case 0x1061340u: goto R_01061340;
        case 0x1061358u: goto R_01061358;
        case 0x1061ea4u: goto R_01061ea4;
        case 0x1061ec0u: goto R_01061ec0;
        case 0x1061ec8u: goto R_01061ec8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x1061244u;
    f_801c8384(c);
R_01061244:
    c.r[31] = 0x0u;
    ea = c.r[3] + 0xbdu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[3] + 0xa0u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = ((((g_mg442_bases[5] + 0x261e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0xbcu;
    wp::wr8(ea, c.r[31]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = c.r[5] + 0x1u;
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xa4u;
    wp::wr32(ea, c.r[31]);
    c.r[14] = c.r[0] & 0xffffu;
    c.r[16] = c.r[16] + wp::sign_extend16((g_mg442_bases[5] + 0x261e0u) & 0xFFFFu);
    c.r[30] = 0x0u;
    ea = c.r[3] + 0x50u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[3] + 0x54u;
    c.r[6] = wp::rd32(ea);
    c.r[7] = c.r[7] & 0xffffu;
    ea = c.r[3] + 0x58u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    c.r[14] = c.r[14] + c.r[7];
    c.r[6] = c.r[6] & 0xffffu;
    ea = c.r[3] + 0x60u;
    c.r[0] = wp::rd32(ea);
    c.r[14] = c.r[14] + c.r[6];
    c.r[5] = c.r[5] & 0xffffu;
    ea = c.r[3] + 0x64u;
    c.r[7] = wp::rd32(ea);
    c.r[14] = c.r[14] + c.r[5];
    c.r[4] = c.r[4] & 0xffffu;
    ea = c.r[3] + 0x68u;
    c.r[6] = wp::rd32(ea);
    c.r[14] = c.r[14] + c.r[4];
    c.r[0] = c.r[0] & 0xffffu;
    ea = c.r[3] + 0x6cu;
    c.r[5] = wp::rd32(ea);
    c.r[14] = c.r[14] + c.r[0];
    c.r[7] = c.r[7] & 0xffffu;
    ea = c.r[3] + 0x70u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.r[14] = c.r[14] + c.r[7];
    c.r[6] = c.r[6] & 0xffffu;
    c.r[5] = c.r[5] & 0xffffu;
    c.r[14] = c.r[14] + c.r[6];
    c.r[4] = c.r[4] & 0xffffu;
    c.r[14] = c.r[14] + c.r[5];
    c.r[0] = c.r[0] & 0xffffu;
    c.r[14] = c.r[14] + c.r[4];
    c.r[14] = c.r[14] + c.r[0];
    c.r[0] = c.r[14] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x40u);
    if (!wp::cr_get(c, 0)) goto L_010612fc;
    c.r[14] = 0x40u;
L_010612fc:
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[15] = wp::rotl(c.r[14], 1) & 0x1fffeu;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061310;
    c.lr = 0x1061310u;
    f_80048f30(c);
L_01061310:
R_01061310:
    c.r[3] = c.r[15] | c.r[15];
    c.lr = 0x1061318u;
    f_80048ec0(c);
R_01061318:
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x1061328u;
    f_80004714(c);
R_01061328:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1061340u;
    wp::call(c, c.ctr);
R_01061340:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1061358u;
    wp::call(c, c.ctr);
R_01061358:
    ea = c.r[28] + 0xa8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[28] + c.r[0];
    ea = c.r[3] + 0x78u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    ea = c.r[4] + c.r[0];
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_01061380;
    c.r[30] = 0x1u;
L_01061380:
    c.r[26] = c.r[16] + 0x1a0u;
    c.r[14] = c.r[16] + 0x174u;
    c.r[15] = c.r[16] + 0x17cu;
    c.r[9] = c.r[16] + 0x184u;
    c.r[10] = c.r[16] + 0x18cu;
    c.r[11] = c.r[16] + 0x194u;
    c.r[12] = c.r[16] + 0x19cu;
    c.r[21] = 0x0u;
    c.r[7] = 0x5u;
    c.r[0] = 0x1u;
    c.r[8] = 0x10000u;
    goto L_01061e68;
L_010613b0:
    ea = c.r[28] + 0xa8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[28] + 0x20u;
    c.r[6] = wp::rd32(ea);
    c.r[16] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[28] + c.r[3];
    ea = c.r[3] + 0x78u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[21] + c.r[3];
    c.r[3] = c.r[30] + c.r[3];
    c.r[4] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[6] + c.r[4];
    c.r[6] = wp::rd16(ea);
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    if (!wp::cr_get(c, 2)) goto L_010614e8;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[14] | c.r[14];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_01061474;
L_01061400:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106141c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01061474;
L_0106141c:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106144c;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106144c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01061474;
L_0106144c:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01061468;
    c.r[5] = 0x0u;
    goto L_01061484;
L_01061468:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_01061474:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061400;
    }
    c.r[5] = 0x1u;
L_01061484:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010614e8;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[5] = c.r[5] + 0xffffffd0u;
    c.r[5] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[6] = c.r[28] + c.r[5];
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010614dc;
    c.r[17] = 0x0u;
    goto L_010614cc;
    c.r[0] = c.r[0] | 0x0u;
L_010614b8:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[17] + 0x2u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[18]);
    c.r[16] = c.r[16] + 0x2u;
L_010614cc:
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[17];
    c.r[18] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010614b8;
    }
L_010614dc:
    c.r[31] = c.r[31] + 0xffffffffu;
    c.r[21] = c.r[21] + 0x4u;
    goto L_01061854;
L_010614e8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010616d4;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[15] | c.r[15];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_0106157c;
L_01061508:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01061524;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0106157c;
L_01061524:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01061554;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061554;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0106157c;
L_01061554:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01061570;
    c.r[5] = 0x0u;
    goto L_0106158c;
L_01061570:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_0106157c:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061508;
    }
    c.r[5] = 0x1u;
L_0106158c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010616d4;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x6u;
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x63u);
    if (wp::cr_get(c, 2)) goto L_010616b0;
    if (!wp::cr_get(c, 0)) goto L_010615f0;
    wp::compare_signed(c, 0, c.r[5], 0x31u);
    if (wp::cr_get(c, 2)) goto L_01061690;
    if (!wp::cr_get(c, 0)) goto L_010615d8;
    wp::compare_signed(c, 0, c.r[5], 0x2cu);
    if (wp::cr_get(c, 2)) goto L_010616cc;
    if (!wp::cr_get(c, 0)) goto L_010615cc;
    wp::compare_signed(c, 0, c.r[5], 0x2bu);
    if (!wp::cr_get(c, 0)) goto L_01061670;
    goto L_010616cc;
L_010615cc:
    wp::compare_signed(c, 0, c.r[5], 0x2eu);
    if (!wp::cr_get(c, 0)) goto L_010616cc;
    goto L_01061680;
L_010615d8:
    wp::compare_signed(c, 0, c.r[5], 0x61u);
    if (wp::cr_get(c, 2)) goto L_01061640;
    if (!wp::cr_get(c, 0)) goto L_01061650;
    wp::compare_signed(c, 0, c.r[5], 0x33u);
    if (!wp::cr_get(c, 0)) goto L_010616cc;
    goto L_010616a0;
L_010615f0:
    wp::compare_signed(c, 0, c.r[5], 0x78u);
    if (wp::cr_get(c, 2)) goto L_01061630;
    if (!wp::cr_get(c, 0)) goto L_01061614;
    wp::compare_signed(c, 0, c.r[5], 0x70u);
    if (wp::cr_get(c, 2)) goto L_01061620;
    if (!wp::cr_get(c, 0)) goto L_010616cc;
    wp::compare_signed(c, 0, c.r[5], 0x68u);
    if (wp::cr_get(c, 2)) goto L_01061660;
    goto L_010616cc;
L_01061614:
    wp::compare_signed(c, 0, c.r[5], 0x7au);
    if (wp::cr_get(c, 2)) goto L_010616c0;
    goto L_010616cc;
L_01061620:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe040u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_01061630:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe041u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_01061640:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe042u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_01061650:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe043u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_01061660:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe044u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_01061670:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe045u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_01061680:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe046u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_01061690:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe047u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_010616a0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe048u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_010616b0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04au;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010616cc;
L_010616c0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04bu;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
L_010616cc:
    c.r[21] = c.r[21] + 0x5u;
    goto L_01061854;
L_010616d4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061798;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[19] = c.r[9] | c.r[9];
    c.r[6] = 0x0u;
    c.r[18] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0106176c;
    c.r[0] = c.r[0] | 0x0u;
L_010616f8:
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::compare_signed(c, 0, c.r[20], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01061714;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_0106176c;
L_01061714:
    wp::compare_signed(c, 0, c.r[20], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01061744;
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[20] = c.r[20] + 0x10000u;
    c.r[20] = c.r[20] + 0xffffffd0u;
    c.r[20] = c.r[20] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061744;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_0106176c;
L_01061744:
    c.r[17] = wp::sign_extend8(c.r[17]);
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], c.r[17]);
    if (wp::cr_get(c, 2)) goto L_01061760;
    c.r[5] = 0x0u;
    goto L_0106177c;
L_01061760:
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_0106176c:
    ea = c.r[19] + 0x0u;
    c.r[17] = wp::rd8(ea);
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::record(c, c.r[20]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010616f8;
    }
    c.r[5] = 0x1u;
L_0106177c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061798;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe049u;
    c.r[21] = c.r[21] + 0x5u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01061854;
L_01061798:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061854;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0106182c;
L_010617b8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010617d4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106182c;
L_010617d4:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01061804;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061804;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106182c;
L_01061804:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01061820;
    c.r[5] = 0x0u;
    goto L_0106183c;
L_01061820:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0106182c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010617b8;
    }
    c.r[5] = 0x1u;
L_0106183c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061854;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbcu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
    goto L_01061e74;
L_01061854:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061bd8;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[11] | c.r[11];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010618ec;
    c.r[0] = c.r[0] | 0x0u;
L_01061878:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01061894;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010618ec;
L_01061894:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010618c4;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010618c4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010618ec;
L_010618c4:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010618e0;
    c.r[5] = 0x0u;
    goto L_010618fc;
L_010618e0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_010618ec:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061878;
    }
    c.r[5] = 0x1u;
L_010618fc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061bd8;
    ea = c.r[28] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = 0xffffffffu;
    c.r[3] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    c.r[5] = 0xbu;
    ea = c.r[6] + c.r[3];
    wp::wr16(ea, c.r[5]);
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = c.r[5] + c.r[4];
    ea = c.r[16] + 0xau;
    c.r[5] = wp::rd16(ea);
    c.r[17] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061938;
    goto L_01061964;
L_01061938:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106194c;
    c.r[17] = c.r[6] + 0xau;
    goto L_01061964;
L_0106194c:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_01061964:
    ea = c.r[16] + 0x8u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061978;
    goto L_010619a4;
L_01061978:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106198c;
    c.r[6] = c.r[6] + 0xau;
    goto L_010619a4;
L_0106198c:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_010619a4:
    ea = c.r[28] + 0x20u;
    c.r[16] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[6], 4) & 0xfffffff0u;
    c.r[5] = c.r[17] + c.r[5];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[5]);
    c.r[16] = c.r[16] + c.r[4];
    ea = c.r[16] + 0xeu;
    c.r[5] = wp::rd16(ea);
    c.r[17] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010619cc;
    goto L_010619f8;
L_010619cc:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010619e0;
    c.r[17] = c.r[6] + 0xau;
    goto L_010619f8;
L_010619e0:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010619f8:
    ea = c.r[16] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061a0c;
    goto L_01061a38;
L_01061a0c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01061a20;
    c.r[6] = c.r[6] + 0xau;
    goto L_01061a38;
L_01061a20:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_01061a38:
    ea = c.r[28] + 0x20u;
    c.r[16] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[6], 4) & 0xfffffff0u;
    c.r[5] = c.r[17] + c.r[5];
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[5]);
    c.r[16] = c.r[16] + c.r[4];
    ea = c.r[16] + 0x12u;
    c.r[5] = wp::rd16(ea);
    c.r[17] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061a60;
    goto L_01061a8c;
L_01061a60:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01061a74;
    c.r[17] = c.r[6] + 0xau;
    goto L_01061a8c;
L_01061a74:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_01061a8c:
    ea = c.r[16] + 0x10u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061aa0;
    goto L_01061acc;
L_01061aa0:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01061ab4;
    c.r[6] = c.r[6] + 0xau;
    goto L_01061acc;
L_01061ab4:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_01061acc:
    ea = c.r[28] + 0x20u;
    c.r[16] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[6], 4) & 0xfffffff0u;
    c.r[5] = c.r[17] + c.r[5];
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[5]);
    c.r[6] = c.r[16] + c.r[4];
    ea = c.r[6] + 0x16u;
    c.r[4] = wp::rd16(ea);
    c.r[16] = c.r[4] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[16], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061af4;
    goto L_01061b20;
L_01061af4:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01061b08;
    c.r[16] = c.r[5] + 0xau;
    goto L_01061b20;
L_01061b08:
    c.r[16] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[16], 0);
    c.r[4] = c.r[16] + 0xau;
    c.r[5] = c.r[16] - c.r[5];
    c.r[16] = c.r[4] & c.r[5];
L_01061b20:
    ea = c.r[6] + 0x14u;
    c.r[4] = wp::rd16(ea);
    c.r[5] = c.r[4] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[5], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061b34;
    goto L_01061b60;
L_01061b34:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01061b48;
    c.r[5] = c.r[5] + 0xau;
    goto L_01061b60;
L_01061b48:
    c.r[6] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[6], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[6], 0);
    c.r[4] = c.r[6] + 0xau;
    c.r[5] = c.r[6] - c.r[5];
    c.r[5] = c.r[4] & c.r[5];
L_01061b60:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::rotl(c.r[5], 4) & 0xfffffff0u;
    c.r[5] = c.r[16] + c.r[5];
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061b7c;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
L_01061b7c:
    ea = c.r[1] + 0x9u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061b8c;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[0]);
L_01061b8c:
    ea = c.r[1] + 0xau;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061b9c;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_01061b9c:
    ea = c.r[1] + 0xbu;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061bac;
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
L_01061bac:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x2u;
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[3] = c.r[5] + c.r[3];
    c.r[21] = c.r[21] + 0xcu;
    c.r[5] = wp::rotl(c.r[6], 16) & 0xffffu;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[5]);
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    wp::wr16(ea, c.r[6]);
    goto L_01061e60;
L_01061bd8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061e44;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[12] | c.r[12];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_01061c6c;
L_01061bf8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01061c14;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_01061c6c;
L_01061c14:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01061c44;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061c44;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_01061c6c;
L_01061c44:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01061c60;
    c.r[5] = 0x0u;
    goto L_01061c7c;
L_01061c60:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_01061c6c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061bf8;
    }
    c.r[5] = 0x1u;
L_01061c7c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061e44;
    ea = c.r[28] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[4] = 0xcu;
    c.r[3] = c.r[3] + 0x3u;
    ea = c.r[6] + c.r[5];
    wp::wr16(ea, c.r[4]);
    c.r[17] = c.r[31] | c.r[31];
    c.r[18] = c.r[31] + 0x1u;
    c.r[31] = c.r[31] + 0x2u;
    c.r[6] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[16] = 0x0u;
    c.r[4] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[19] = 0x0u;
    goto L_01061ce4;
L_01061cb8:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061cc8;
    c.r[16] = 0x1u;
    goto L_01061cfc;
L_01061cc8:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x1u;
    c.r[6] = c.r[6] + 0x2u;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[20]);
    c.r[4] = c.r[4] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_01061ce4:
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[6];
    c.r[20] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[20], 0x5du);
    if (wp::cr_get(c, 2)) goto L_01061cfc;
    wp::compare_signed(c, 0, c.r[19], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01061cb8;
    }
L_01061cfc:
    c.r[4] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[5] + c.r[4];
    c.r[4] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061d10;
    c.r[3] = c.r[3] + 0x1u;
L_01061d10:
    c.r[24] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[20] = 0x0u;
    goto L_01061d4c;
L_01061d20:
    ea = c.r[23] + c.r[24];
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061d34;
    c.r[16] = 0x1u;
    goto L_01061dfc;
L_01061d34:
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[24] = c.r[24] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[4] + c.r[3];
    wp::wr16(ea, c.r[5]);
    c.r[3] = c.r[3] + 0x2u;
L_01061d4c:
    ea = c.r[28] + 0x20u;
    c.r[23] = wp::rd32(ea);
    c.r[5] = c.r[26] | c.r[26];
    c.r[25] = 0x0u;
    c.r[4] = 0x0u;
    c.r[27] = c.r[23] + c.r[24];
    goto L_01061ddc;
    c.r[0] = c.r[0] | 0x0u;
L_01061d68:
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01061d84;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_01061ddc;
L_01061d84:
    wp::compare_signed(c, 0, c.r[6], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01061db4;
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[6] = c.r[6] + 0x10000u;
    c.r[6] = c.r[6] + 0xffffffd0u;
    c.r[6] = c.r[6] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061db4;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_01061ddc;
L_01061db4:
    c.r[22] = wp::sign_extend8(c.r[22]);
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], c.r[22]);
    if (wp::cr_get(c, 2)) goto L_01061dd0;
    c.r[4] = 0x0u;
    goto L_01061dec;
L_01061dd0:
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
L_01061ddc:
    ea = c.r[5] + 0x0u;
    c.r[22] = wp::rd8(ea);
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061d68;
    }
    c.r[4] = 0x1u;
L_01061dec:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061dfc;
    wp::compare_signed(c, 0, c.r[20], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01061d20;
    }
L_01061dfc:
    wp::compare_signed(c, 0, c.r[16], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061e1c;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[17], 1) & 0xfffffffeu;
    c.r[3] = 0x0u;
    c.r[31] = c.r[17] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[3]);
    goto L_01061e60;
L_01061e1c:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[19] + c.r[20];
    c.r[4] = wp::rotl(c.r[18], 1) & 0xfffffffeu;
    c.r[6] = c.r[20] & 0xffu;
    c.r[6] = (wp::rotl(c.r[19], 8) & 0xff00u) | (c.r[6] & 0xffff00ffu);
    c.r[3] = c.r[21] + c.r[3];
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[6]);
    c.r[21] = c.r[3] + 0x7u;
    c.r[31] = c.r[31] + 0xffffffffu;
    goto L_01061e60;
L_01061e44:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01061e60;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbdu;
    wp::wr8(ea, c.r[0]);
    goto L_01061e74;
L_01061e60:
    c.r[21] = c.r[21] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
L_01061e68:
    ea = c.r[28] + 0xa0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[21], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010613b0;
    }
L_01061e74:
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    ea = c.r[3] + c.r[0];
    wp::wr16(ea, c.r[4]);
    ea = c.r[28] + 0xa4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x7cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1061ea4u;
    wp::call(c, c.ctr);
R_01061ea4:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x7cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1061ec0u;
    wp::call(c, c.ctr);
R_01061ec0:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x1061ec8u;
    f_801c83d0(c);
R_01061ec8:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg442_01061ee0(wp::Cpu& c) {
    WP_ENTER(0x1061ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1061ef4u: goto R_01061ef4;
        case 0x1061f18u: goto R_01061f18;
        case 0x1061f60u: goto R_01061f60;
        case 0x106224cu: goto R_0106224c;
        case 0x1062254u: goto R_01062254;
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
    c.lr = 0x1061ef4u;
    f_801c8390(c);
R_01061ef4:
    c.r[18] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[29] = c.r[3] | c.r[3];
    c.r[17] = c.r[3] + c.r[18];
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[17] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01061f18;
    c.lr = 0x1061f18u;
    f_80048f30(c);
L_01061f18:
R_01061f18:
    c.r[4] = 0x0u;
    ea = c.r[17] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] + c.r[18];
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    ea = c.r[3] + 0x50u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106224c;
    c.r[3] = 0x0u;
    goto L_01061f40;
L_01061f38:
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
L_01061f40:
    ea = c.r[30] + c.r[4];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061f38;
    }
    c.r[17] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + 0x10u;
    c.r[28] = c.r[29] + c.r[17];
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x1061f60u;
    f_80048ec0(c);
R_01061f60:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[12] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[27] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062220;
    c.r[4] = ((((g_mg442_bases[5] + 0x2637cu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg442_bases[5] + 0x26380u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x2637cu) & 0xFFFFu);
    c.r[7] = c.r[28] | c.r[28];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26380u) & 0xFFFFu);
    c.r[3] = 0xcu;
    c.r[0] = 0x5bu;
    goto L_01062210;
L_01061f98:
    c.r[18] = c.r[30] + c.r[8];
    c.r[9] = c.r[4] | c.r[4];
    c.r[17] = 0x0u;
    c.r[8] = 0x0u;
    goto L_01062024;
    c.r[0] = c.r[0] | 0x0u;
L_01061fb0:
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[10], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01061fcc;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_01062024;
L_01061fcc:
    wp::compare_signed(c, 0, c.r[10], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01061ffc;
    ea = c.r[18] + c.r[8];
    c.r[10] = wp::rd16(ea);
    c.r[10] = c.r[10] + 0x10000u;
    c.r[10] = c.r[10] + 0xffffffd0u;
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[10], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01061ffc;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_01062024;
L_01061ffc:
    c.r[10] = wp::sign_extend8(c.r[11]);
    ea = c.r[18] + c.r[8];
    c.r[11] = wp::rd16(ea);
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[11], c.r[10]);
    if (wp::cr_get(c, 2)) goto L_01062018;
    c.r[8] = 0x0u;
    goto L_01062034;
L_01062018:
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
L_01062024:
    ea = c.r[9] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[10]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061fb0;
    }
    c.r[8] = 0x1u;
L_01062034:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010621fc;
    ea = c.r[7] + 0x28u;
    c.r[9] = wp::rd32(ea);
    c.r[22] = c.r[27] | c.r[27];
    c.r[8] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[27] = c.r[27] + 0x3u;
    c.r[6] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[9] + c.r[8];
    wp::wr16(ea, c.r[3]);
    c.r[23] = c.r[12] | c.r[12];
    c.r[24] = c.r[12] + 0x1u;
    c.r[12] = c.r[12] + 0x2u;
    c.r[9] = c.r[30] + c.r[6];
    c.r[6] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[21] = 0x0u;
    c.r[25] = 0x0u;
    goto L_010620a4;
    c.r[0] = c.r[0] | 0x0u;
L_01062078:
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01062088;
    c.r[21] = 0x1u;
    goto L_010620b8;
L_01062088:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[12] = c.r[12] + 0x1u;
    c.r[9] = c.r[9] + 0x2u;
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[10]);
    c.r[6] = c.r[6] + 0x2u;
    c.r[25] = c.r[25] + 0x1u;
L_010620a4:
    ea = c.r[9] + 0x0u;
    c.r[10] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[10], 0x5du);
    if (wp::cr_get(c, 2)) goto L_010620b8;
    wp::compare_signed(c, 0, c.r[25], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01062078;
    }
L_010620b8:
    c.r[6] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[6];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010620cc;
    c.r[27] = c.r[27] + 0x1u;
L_010620cc:
    c.r[10] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    c.r[20] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[26] = 0x0u;
    c.r[9] = c.r[30] + c.r[10];
    goto L_01062114;
L_010620e0:
    ea = c.r[9] + 0x0u;
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010620f4;
    c.r[21] = 0x1u;
    goto L_010621bc;
L_010620f4:
    ea = c.r[7] + 0x28u;
    c.r[6] = wp::rd32(ea);
    c.r[26] = c.r[26] + 0x1u;
    c.r[12] = c.r[12] + 0x1u;
    c.r[9] = c.r[9] + 0x2u;
    ea = c.r[6] + c.r[20];
    wp::wr16(ea, c.r[8]);
    c.r[20] = c.r[20] + 0x2u;
    c.r[10] = c.r[10] + 0x2u;
    c.r[27] = c.r[27] + 0x1u;
L_01062114:
    c.r[18] = c.r[5] | c.r[5];
    c.r[8] = c.r[30] + c.r[10];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    goto L_0106219c;
L_01062128:
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[17], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01062144;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0106219c;
L_01062144:
    wp::compare_signed(c, 0, c.r[17], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01062174;
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[17] = c.r[17] + 0x10000u;
    c.r[17] = c.r[17] + 0xffffffd0u;
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01062174;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0106219c;
L_01062174:
    c.r[11] = wp::sign_extend8(c.r[11]);
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[11] = c.r[11] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], c.r[11]);
    if (wp::cr_get(c, 2)) goto L_01062190;
    c.r[6] = 0x0u;
    goto L_010621ac;
L_01062190:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
L_0106219c:
    ea = c.r[18] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[17]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01062128;
    }
    c.r[6] = 0x1u;
L_010621ac:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010621bc;
    wp::compare_signed(c, 0, c.r[26], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010620e0;
    }
L_010621bc:
    wp::compare_signed(c, 0, c.r[21], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010621dc;
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[23], 1) & 0xfffffffeu;
    c.r[12] = c.r[23] | c.r[23];
    c.r[27] = c.r[22] | c.r[22];
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[0]);
    goto L_01062208;
L_010621dc:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[9] = c.r[26] & 0xffu;
    c.r[6] = wp::rotl(c.r[24], 1) & 0xfffffffeu;
    c.r[27] = c.r[27] + 0x3u;
    c.r[9] = (wp::rotl(c.r[25], 8) & 0xff00u) | (c.r[9] & 0xffff00ffu);
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[9]);
    c.r[12] = c.r[12] + 0xffffffffu;
    goto L_01062208;
L_010621fc:
    ea = c.r[7] + 0x28u;
    c.r[9] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    ea = c.r[9] + c.r[8];
    wp::wr16(ea, c.r[6]);
L_01062208:
    c.r[27] = c.r[27] + 0x1u;
    c.r[12] = c.r[12] + 0x1u;
L_01062210:
    c.r[8] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[8];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01061f98;
    }
L_01062220:
    ea = c.r[28] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[5] = 0x0u;
    c.r[0] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    ea = c.r[4] + c.r[3];
    wp::wr16(ea, c.r[5]);
    c.r[4] = c.r[29] + c.r[0];
    c.r[0] = c.r[12] + 0x1u;
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[4] + 0x50u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x0u;
    c.lr = 0x106224cu;
    f_mg442_01061230(c);
L_0106224c:
R_0106224c:
    c.r[11] = c.r[1] + 0x50u;
    c.lr = 0x1062254u;
    f_801c83dc(c);
R_01062254:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg442_01062270(wp::Cpu& c) {
    WP_ENTER(0x1062270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1062284u: goto R_01062284;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = c.r[3] + 0xcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1062284u;
    f_801cf510(c);
R_01062284:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_010622a0(wp::Cpu& c) {
    WP_ENTER(0x10622a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10622f8u: goto R_010622f8;
        case 0x1062334u: goto R_01062334;
        case 0x1062340u: goto R_01062340;
        case 0x1062350u: goto R_01062350;
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
    if (wp::cr_get(c, 2)) goto L_01062350;
    if (wp::cr_get(c, 2)) goto L_01062340;
    c.r[4] = ((((g_mg442_bases[5] + 0x270a0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x270a0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_010622f8;
L_010622d8:
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
    c.lr = 0x10622f8u;
    wp::call(c, c.ctr);
L_010622f8:
R_010622f8:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010622d8;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01062334;
    if (wp::cr_get(c, 2)) goto L_01062334;
    if (wp::cr_get(c, 2)) goto L_01062334;
    if (wp::cr_get(c, 2)) goto L_01062334;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062334;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1062334u;
    f_801c7a8c(c);
L_01062334:
R_01062334:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1062340u;
    f_8003fb90(c);
L_01062340:
R_01062340:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01062350;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1062350u;
    f_801c7a8c(c);
L_01062350:
R_01062350:
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

void f_mg442_01062370(wp::Cpu& c) {
    WP_ENTER(0x1062370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10623acu: goto R_010623ac;
        case 0x10623d4u: goto R_010623d4;
        case 0x10623fcu: goto R_010623fc;
        case 0x1062424u: goto R_01062424;
        case 0x106244cu: goto R_0106244c;
        case 0x1062458u: goto R_01062458;
        case 0x1062490u: goto R_01062490;
        case 0x10624ccu: goto R_010624cc;
        case 0x10624d8u: goto R_010624d8;
        case 0x10624e8u: goto R_010624e8;
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
    if (wp::cr_get(c, 2)) goto L_010624e8;
    c.r[4] = ((((g_mg442_bases[5] + 0x26bf8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26bf8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x1f8u;
    ea = c.r[3] + 0x120u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10623acu;
    f_8001a010(c);
R_010623ac:
    c.r[3] = wp::add_carry(c, c.r[30], 0x198u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010623d4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010623d4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10623d4u;
    wp::call(c, c.ctr);
L_010623d4:
R_010623d4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x194u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010623fc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010623fc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10623fcu;
    wp::call(c, c.ctr);
L_010623fc:
R_010623fc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x190u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01062424;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062424;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062424u;
    wp::call(c, c.ctr);
L_01062424:
R_01062424:
    c.r[3] = wp::add_carry(c, c.r[30], 0x18cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0106244c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106244c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106244cu;
    wp::call(c, c.ctr);
L_0106244c:
R_0106244c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1062458u;
    f_80063bb0(c);
R_01062458:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010624d8;
    c.r[3] = ((((g_mg442_bases[5] + 0x270a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x270a0u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01062490;
L_01062470:
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
    c.lr = 0x1062490u;
    wp::call(c, c.ctr);
L_01062490:
R_01062490:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01062470;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010624cc;
    if (wp::cr_get(c, 2)) goto L_010624cc;
    if (wp::cr_get(c, 2)) goto L_010624cc;
    if (wp::cr_get(c, 2)) goto L_010624cc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010624cc;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10624ccu;
    f_801c7a8c(c);
L_010624cc:
R_010624cc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10624d8u;
    f_8003fb90(c);
L_010624d8:
R_010624d8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010624e8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10624e8u;
    f_801c7a8c(c);
L_010624e8:
R_010624e8:
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

void f_mg442_01062510(wp::Cpu& c) {
    WP_ENTER(0x1062510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    wp::wr16(ea, c.r[4]);
    return;
}

void f_mg442_01062520(wp::Cpu& c) {
    WP_ENTER(0x1062520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    c.r[3] = wp::rd16(ea);
    return;
}

void f_mg442_01062530(wp::Cpu& c) {
    WP_ENTER(0x1062530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1062568u: goto R_01062568;
        case 0x1062570u: goto R_01062570;
        case 0x106258cu: goto R_0106258c;
        case 0x10625a8u: goto R_010625a8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01062568;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062568u;
    wp::call(c, c.ctr);
L_01062568:
R_01062568:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1062570u;
    f_8000fc20(c);
R_01062570:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0x1u;
    c.r[31] = wp::slw(c.r[0], c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106258cu;
    wp::call(c, c.ctr);
R_0106258c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x10625a8u;
    wp::call(c, c.ctr);
R_010625a8:
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

void f_mg442_010625c0(wp::Cpu& c) {
    WP_ENTER(0x10625c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10625d4u: goto R_010625d4;
        case 0x10625fcu: goto R_010625fc;
        case 0x1062614u: goto R_01062614;
        case 0x1062630u: goto R_01062630;
        case 0x1062648u: goto R_01062648;
        case 0x1062664u: goto R_01062664;
        case 0x1062678u: goto R_01062678;
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
    c.lr = 0x10625d4u;
    f_801c83b4(c);
R_010625d4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010625fc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10625fcu;
    wp::call(c, c.ctr);
L_010625fc:
R_010625fc:
    c.r[29] = 0x0u;
    c.r[30] = 0x1u;
L_01062604:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106261c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1062614u;
    f_8000fc40(c);
R_01062614:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01062664;
L_0106261c:
    c.r[0] = wp::slw(c.r[30], c.r[29]);
    c.r[0] = c.r[27] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01062664;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1062630u;
    f_8000fc20(c);
R_01062630:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = wp::slw(c.r[30], c.r[3]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062648u;
    wp::call(c, c.ctr);
R_01062648:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x1062664u;
    wp::call(c, c.ctr);
L_01062664:
R_01062664:
    c.r[29] = c.r[29] + 0x1u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01062604;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1062678u;
    f_801c8400(c);
R_01062678:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg442_01062690(wp::Cpu& c) {
    WP_ENTER(0x1062690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10626c0u: goto R_010626c0;
        case 0x10626d8u: goto R_010626d8;
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
    c.r[31] = 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
L_010626b8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10626c0u;
    f_8000fc20(c);
R_010626c0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = wp::slw(c.r[31], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10626d8u;
    wp::call(c, c.ctr);
R_010626d8:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[29] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010626ec;
    c.r[3] = c.r[30] | c.r[30];
    goto L_010626fc;
L_010626ec:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010626b8;
    }
    c.r[3] = 0xffffffffu;
L_010626fc:
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

void f_mg442_01062720(wp::Cpu& c) {
    WP_ENTER(0x1062720u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x169u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg442_01062730(wp::Cpu& c) {
    WP_ENTER(0x1062730u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106274cu: goto R_0106274c;
        case 0x1062760u: goto R_01062760;
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
    goto L_0106274c;
L_01062748:
    c.lr = 0x106274cu;
    f_8006a940(c);
L_0106274c:
R_0106274c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062760u;
    wp::call(c, c.ctr);
R_01062760:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01062748;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01062780(wp::Cpu& c) {
    WP_ENTER(0x1062780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10627acu: goto R_010627ac;
        case 0x10627c4u: goto R_010627c4;
        case 0x10627e4u: goto R_010627e4;
        case 0x1062804u: goto R_01062804;
        case 0x1062828u: goto R_01062828;
        case 0x1062840u: goto R_01062840;
        case 0x1062858u: goto R_01062858;
        case 0x1062870u: goto R_01062870;
        case 0x106289cu: goto R_0106289c;
        case 0x10628b4u: goto R_010628b4;
        case 0x10628d0u: goto R_010628d0;
        case 0x10628ecu: goto R_010628ec;
        case 0x10628fcu: goto R_010628fc;
        case 0x1062914u: goto R_01062914;
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
    if (!wp::cr_get(c, 2)) goto L_01062808;
    c.r[4] = 0x0u;
    c.lr = 0x10627acu;
    f_800402c0(c);
R_010627ac:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010627c4;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x10627c4u;
    f_80052250(c);
L_010627c4:
R_010627c4:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010627e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10627e4u;
    wp::call(c, c.ctr);
L_010627e4:
R_010627e4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062914;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062804u;
    wp::call(c, c.ctr);
R_01062804:
    goto L_01062914;
L_01062808:
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010628f0;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010628f0;
    c.r[4] = 0x0u;
    c.lr = 0x1062828u;
    f_800402c0(c);
R_01062828:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062840;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x1062840u;
    f_80052250(c);
L_01062840:
R_01062840:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062858u;
    wp::call(c, c.ctr);
R_01062858:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062870u;
    wp::call(c, c.ctr);
R_01062870:
    ea = c.r[30] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062890;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010628b8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010628d4;
    goto L_01062914;
L_01062890:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x106289cu;
    f_800402c0(c);
R_0106289c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062914;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x10628b4u;
    f_80052250(c);
R_010628b4:
    goto L_01062914;
L_010628b8:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10628d0u;
    wp::call(c, c.ctr);
R_010628d0:
    goto L_01062914;
L_010628d4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10628ecu;
    wp::call(c, c.ctr);
R_010628ec:
    goto L_01062914;
L_010628f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10628fcu;
    f_800402c0(c);
R_010628fc:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062914;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x1062914u;
    f_80052250(c);
L_01062914:
R_01062914:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[30] + 0x185u;
    wp::wr8(ea, c.r[31]);
    if (!wp::cr_get(c, 2)) goto L_01062924;
    ea = c.r[30] + 0x154u;
    wp::wr8(ea, c.r[31]);
L_01062924:
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

void f_mg442_01062940(wp::Cpu& c) {
    WP_ENTER(0x1062940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1062974u: goto R_01062974;
        case 0x10629f8u: goto R_010629f8;
        case 0x1062a24u: goto R_01062a24;
        case 0x1062a54u: goto R_01062a54;
        case 0x1062a78u: goto R_01062a78;
        case 0x1062a84u: goto R_01062a84;
        case 0x1062aa4u: goto R_01062aa4;
        case 0x1062ab8u: goto R_01062ab8;
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
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062974u;
    wp::call(c, c.ctr);
R_01062974:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062984;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062ae4;
L_01062984:
    ea = c.r[29] + 0x154u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) goto L_01062998;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062ae4;
L_01062998:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010629b4;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010629b4;
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01062ae4;
L_010629b4:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x154u;
    wp::wr8(ea, c.r[30]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010629c8;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_010629c8:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010629d8;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_010629d8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010629f8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10629f8u;
    wp::call(c, c.ctr);
L_010629f8:
R_010629f8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062a30;
    ea = c.r[29] + 0x144u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01062a84;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062a24u;
    wp::call(c, c.ctr);
R_01062a24:
    ea = c.r[29] + 0x144u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01062a84;
L_01062a30:
    ea = c.r[29] + 0x148u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01062a60;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062a54u;
    wp::call(c, c.ctr);
R_01062a54:
    ea = c.r[29] + 0x148u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01062a78;
L_01062a60:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062a78u;
    wp::call(c, c.ctr);
L_01062a78:
R_01062a78:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1062a84u;
    f_8001a010(c);
L_01062a84:
R_01062a84:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01062aa4;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062aa4u;
    wp::call(c, c.ctr);
L_01062aa4:
R_01062aa4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x290u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062ab8u;
    wp::call(c, c.ctr);
R_01062ab8:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x186u;
    wp::wr8(ea, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01062ad4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_01062ad4:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062ae4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_01062ae4:
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

void f_mg442_01062b00(wp::Cpu& c) {
    WP_ENTER(0x1062b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1062b40u: goto R_01062b40;
        case 0x1062b60u: goto R_01062b60;
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
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x187u;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062b40;
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062b40u;
    wp::call(c, c.ctr);
L_01062b40:
R_01062b40:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062b60;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062b60u;
    wp::call(c, c.ctr);
L_01062b60:
R_01062b60:
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

void f_mg442_01062b80(wp::Cpu& c) {
    WP_ENTER(0x1062b80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1062ba8u: goto R_01062ba8;
        case 0x1062bacu: goto R_01062bac;
        case 0x1062bd0u: goto R_01062bd0;
        case 0x1062bd4u: goto R_01062bd4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01062bbc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x144u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062ba8u;
    wp::call(c, c.ctr);
R_01062ba8:
    c.lr = 0x1062bacu;
    f_80043140(c);
R_01062bac:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    goto L_01062be0;
L_01062bbc:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x148u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062bd0u;
    wp::call(c, c.ctr);
R_01062bd0:
    c.lr = 0x1062bd4u;
    f_80043140(c);
R_01062bd4:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
L_01062be0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg442_01062bf0(wp::Cpu& c) {
    WP_ENTER(0x1062bf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1062c04u: goto R_01062c04;
        case 0x1062c2cu: goto R_01062c2c;
        case 0x1062c48u: goto R_01062c48;
        case 0x1062c50u: goto R_01062c50;
        case 0x1062c78u: goto R_01062c78;
        case 0x1062cd0u: goto R_01062cd0;
        case 0x1062cecu: goto R_01062cec;
        case 0x1062d18u: goto R_01062d18;
        case 0x1062d44u: goto R_01062d44;
        case 0x1062d6cu: goto R_01062d6c;
        case 0x1062d88u: goto R_01062d88;
        case 0x1062dacu: goto R_01062dac;
        case 0x1062dc8u: goto R_01062dc8;
        case 0x1062de0u: goto R_01062de0;
        case 0x1062e08u: goto R_01062e08;
        case 0x1062e20u: goto R_01062e20;
        case 0x1062e50u: goto R_01062e50;
        case 0x1062e98u: goto R_01062e98;
        case 0x1062ea8u: goto R_01062ea8;
        case 0x1062ed0u: goto R_01062ed0;
        case 0x1062eecu: goto R_01062eec;
        case 0x1062f04u: goto R_01062f04;
        case 0x1062f24u: goto R_01062f24;
        case 0x1062f48u: goto R_01062f48;
        case 0x1062f6cu: goto R_01062f6c;
        case 0x1062f90u: goto R_01062f90;
        case 0x1062f98u: goto R_01062f98;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1062c04u;
    f_801c83ac(c);
R_01062c04:
    c.r[0] = 0x43300000u;
    c.r[28] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1062c2cu;
    f_8003cc90(c);
R_01062c2c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062c48u;
    wp::call(c, c.ctr);
R_01062c48:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1062c50u;
    f_8003d2d0(c);
R_01062c50:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1b4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062c78u;
    wp::call(c, c.ctr);
R_01062c78:
    ea = c.r[27] + 0x8u;
    c.r[5] = wp::rd8(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[27] + 0x9u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[28] + 0x10u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = wp::round_single(c.f[1] - c.f[3]);
    c.ps1[4] = c.f[4];
    ea = c.r[28] + 0x8u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[0] - c.f[3]);
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[28] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.f[4] = wp::round_single(c.f[4] / c.f[2]);
    c.ps1[4] = c.f[4];
    ea = c.r[28] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.f[2] = wp::round_single(c.f[1] / c.f[2]);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[3] * wp::force25(c.f[4]));
    c.ps1[1] = c.f[1];
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1062cd0u;
    wp::call(c, c.ctr);
R_01062cd0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062cecu;
    wp::call(c, c.ctr);
R_01062cec:
    ea = c.r[27] + 0xau;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[28] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0x1a4u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x1062d18u;
    wp::call(c, c.ctr);
R_01062d18:
    ea = c.r[27] + 0xbu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[28] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[12] + 0x1a0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[1] = c.f[1];
    c.ctr = c.r[12];
    c.lr = 0x1062d44u;
    wp::call(c, c.ctr);
R_01062d44:
    ea = c.r[27] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062dac;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062d6cu;
    wp::call(c, c.ctr);
R_01062d6c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062d88u;
    wp::call(c, c.ctr);
R_01062d88:
    ea = c.r[27] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1dcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062dacu;
    wp::call(c, c.ctr);
L_01062dac:
R_01062dac:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062dc8u;
    wp::call(c, c.ctr);
R_01062dc8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062de0u;
    wp::call(c, c.ctr);
R_01062de0:
    ea = c.r[29] + 0x170u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    c.r[27] = 0x1u;
    ea = c.r[29] + 0x16cu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[29] + 0x174u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[29] + 0x16au;
    wp::wr8(ea, c.r[27]);
    c.lr = 0x1062e08u;
    f_801cf394(c);
R_01062e08:
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062e18;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_01062e18:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1062e20u;
    f_8003cfb0(c);
R_01062e20:
    c.r[0] = 0x0u;
    c.r[26] = ((((g_mg442_bases[4] + 0x2330u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg442_bases[4] + 0x2330u) & 0xFFFFu);
    c.r[24] = 0x0u;
    ea = c.r[29] + 0x188u;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ((((g_mg442_bases[5] + 0x26508u) + 0x8000u) >> 16) << 16);
    goto L_01062eb0;
L_01062e44:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x1062e50u;
    f_801cf510(c);
R_01062e50:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01062e9c;
    c.r[0] = c.r[24] * 0xcu;
    c.r[4] = ((((g_mg442_bases[4] + 0x2330u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x194u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x2330u) & 0xFFFFu);
    c.r[5] = c.r[4] + c.r[0];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[5] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[29] + 0x188u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01062ebc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + 0xau;
    c.r[4] = wp::rd16(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062e98u;
    wp::call(c, c.ctr);
R_01062e98:
    goto L_01062ebc;
L_01062e9c:
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + wp::sign_extend16((g_mg442_bases[5] + 0x26508u) & 0xFFFFu);
    c.lr = 0x1062ea8u;
    f_801cf510(c);
R_01062ea8:
    c.r[26] = c.r[26] + 0xcu;
    c.r[24] = c.r[24] + 0x1u;
L_01062eb0:
    ea = c.r[26] + 0x0u;
    c.r[28] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01062e44;
    }
L_01062ebc:
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062f24;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1062ed0u;
    f_8003d2d0(c);
R_01062ed0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x194u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062eecu;
    wp::call(c, c.ctr);
R_01062eec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062f04u;
    wp::call(c, c.ctr);
R_01062f04:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[6] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xb4u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[27] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062f24u;
    wp::call(c, c.ctr);
L_01062f24:
R_01062f24:
    ea = c.r[29] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062f48;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062f48u;
    wp::call(c, c.ctr);
L_01062f48:
R_01062f48:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062f6c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062f6cu;
    wp::call(c, c.ctr);
L_01062f6c:
R_01062f6c:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01062f90;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1062f90u;
    wp::call(c, c.ctr);
L_01062f90:
R_01062f90:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1062f98u;
    f_801c83f8(c);
R_01062f98:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_01062fb0(wp::Cpu& c) {
    WP_ENTER(0x1062fb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063034u: goto R_01063034;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mg442_bases[5] + 0x273e0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg442_bases[5] + 0x26514u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x273e0u) & 0xFFFFu);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26514u) & 0xFFFFu);
    c.r[7] = wp::rd32(ea);
    c.r[5] = ea;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[5] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x114u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    goto L_0106301c;
L_01063018:
    c.r[30] = c.r[30] + 0x4u;
L_0106301c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01063040;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1063034u;
    f_801c8244(c);
R_01063034:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01063018;
    }
L_01063040:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01063060;
    c.r[5] = 0x0u;
    goto L_01063064;
L_01063060:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_01063064:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01063074;
    c.r[3] = 0x0u;
    goto L_010630bc;
L_01063074:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = c.r[3] | c.r[3];
    goto L_010630a4;
L_01063088:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[7] = c.r[7] + 0x2u;
    c.r[0] = c.r[9] + c.r[0];
    c.r[6] = c.r[6] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_010630a4:
    wp::compare_unsigned(c, 0, c.r[6], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010630bc;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[7];
    c.r[9] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01063088;
    }
L_010630bc:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_010630e0(wp::Cpu& c) {
    WP_ENTER(0x10630e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg442_bases[5] + 0x273d8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x273d8u) & 0xFFFFu);
    f_mg442_010609e0(c);
    return;
}

void f_mg442_010630f0(wp::Cpu& c) {
    WP_ENTER(0x10630f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063118u: goto R_01063118;
        case 0x1063120u: goto R_01063120;
        case 0x106313cu: goto R_0106313c;
        case 0x1063154u: goto R_01063154;
        case 0x106317cu: goto R_0106317c;
        case 0x10631a0u: goto R_010631a0;
        case 0x10631c4u: goto R_010631c4;
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
    c.lr = 0x1063118u;
    f_mg442_0105eb90(c);
R_01063118:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1063120u;
    f_mg442_01060fe0(c);
R_01063120:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106313cu;
    wp::call(c, c.ctr);
R_0106313c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063154u;
    wp::call(c, c.ctr);
R_01063154:
    ea = c.r[29] + 0x170u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x16cu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[29] + 0x174u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[29] + 0x169u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[29] + 0x16au;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x106317cu;
    f_801cf394(c);
R_0106317c:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010631a0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10631a0u;
    wp::call(c, c.ctr);
L_010631a0:
R_010631a0:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010631c4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10631c4u;
    wp::call(c, c.ctr);
L_010631c4:
R_010631c4:
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

void f_mg442_010631e0(wp::Cpu& c) {
    WP_ENTER(0x10631e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063214u: goto R_01063214;
        case 0x1063234u: goto R_01063234;
        case 0x106324cu: goto R_0106324c;
        case 0x1063274u: goto R_01063274;
        case 0x106329cu: goto R_0106329c;
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
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1063214u;
    f_8003cc90(c);
R_01063214:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x1063234u;
    wp::call(c, c.ctr);
R_01063234:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106324cu;
    wp::call(c, c.ctr);
R_0106324c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063274;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063274u;
    wp::call(c, c.ctr);
L_01063274:
R_01063274:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106329c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106329cu;
    wp::call(c, c.ctr);
L_0106329c:
R_0106329c:
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

void f_mg442_010632c0(wp::Cpu& c) {
    WP_ENTER(0x10632c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10632d4u: goto R_010632d4;
        case 0x10632e8u: goto R_010632e8;
        case 0x1063300u: goto R_01063300;
        case 0x1063310u: goto R_01063310;
        case 0x1063328u: goto R_01063328;
        case 0x1063350u: goto R_01063350;
        case 0x1063378u: goto R_01063378;
        case 0x1063380u: goto R_01063380;
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
    c.lr = 0x10632d4u;
    f_801c83b8(c);
R_010632d4:
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[6] | c.r[6];
    c.lr = 0x10632e8u;
    f_mg442_0105eb90(c);
R_010632e8:
    c.r[5] = ((((g_mg442_bases[5] + 0x26218u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26218u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1063300u;
    f_801d34c4(c);
R_01063300:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x1063310u;
    f_mg442_01061ee0(c);
R_01063310:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063328u;
    wp::call(c, c.ctr);
R_01063328:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063350;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063350u;
    wp::call(c, c.ctr);
L_01063350:
R_01063350:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063378;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063378u;
    wp::call(c, c.ctr);
L_01063378:
R_01063378:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1063380u;
    f_801c8404(c);
R_01063380:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg442_01063390(wp::Cpu& c) {
    WP_ENTER(0x1063390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10633d8u: goto R_010633d8;
        case 0x10633f8u: goto R_010633f8;
        case 0x1063410u: goto R_01063410;
        case 0x1063438u: goto R_01063438;
        case 0x1063460u: goto R_01063460;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    c.r[5] = ((((g_mg442_bases[5] + 0x261e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x261e0u) & 0xFFFFu);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10633d8u;
    f_801d3590(c);
R_010633d8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10633f8u;
    wp::call(c, c.ctr);
R_010633f8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063410u;
    wp::call(c, c.ctr);
R_01063410:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063438;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063438u;
    wp::call(c, c.ctr);
L_01063438:
R_01063438:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063460;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063460u;
    wp::call(c, c.ctr);
L_01063460:
R_01063460:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x9cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x98u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x94u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x90u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_01063480(wp::Cpu& c) {
    WP_ENTER(0x1063480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10634b4u: goto R_010634b4;
        case 0x10634d4u: goto R_010634d4;
        case 0x10634ecu: goto R_010634ec;
        case 0x1063514u: goto R_01063514;
        case 0x106353cu: goto R_0106353c;
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
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10634b4u;
    f_80010060(c);
R_010634b4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10634d4u;
    wp::call(c, c.ctr);
R_010634d4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10634ecu;
    wp::call(c, c.ctr);
R_010634ec:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063514;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063514u;
    wp::call(c, c.ctr);
L_01063514:
R_01063514:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106353c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106353cu;
    wp::call(c, c.ctr);
L_0106353c:
R_0106353c:
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

void f_mg442_01063560(wp::Cpu& c) {
    WP_ENTER(0x1063560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063574u: goto R_01063574;
        case 0x106358cu: goto R_0106358c;
        case 0x10635a0u: goto R_010635a0;
        case 0x10635c8u: goto R_010635c8;
        case 0x10635d8u: goto R_010635d8;
        case 0x10635fcu: goto R_010635fc;
        case 0x106365cu: goto R_0106365c;
        case 0x10636dcu: goto R_010636dc;
        case 0x1063744u: goto R_01063744;
        case 0x1063778u: goto R_01063778;
        case 0x106378cu: goto R_0106378c;
        case 0x106379cu: goto R_0106379c;
        case 0x10637bcu: goto R_010637bc;
        case 0x10637d4u: goto R_010637d4;
        case 0x10637fcu: goto R_010637fc;
        case 0x1063824u: goto R_01063824;
        case 0x106382cu: goto R_0106382c;
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
    c.lr = 0x1063574u;
    f_801c83ac(c);
R_01063574:
    c.r[29] = c.r[5] | c.r[5];
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x106358cu;
    f_8006c450(c);
R_0106358c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01063790;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10635a0u;
    f_8006c460(c);
R_010635a0:
    c.r[25] = ((((g_mg442_bases[5] + 0x261e8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mg442_bases[5] + 0x261e8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10635c8u;
    f_801c7860(c);
R_010635c8:
    c.r[24] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[24] | c.r[24];
    c.lr = 0x10635d8u;
    f_mg442_0100d7d0(c);
R_010635d8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[25] | c.r[25];
    c.r[7] = c.r[25] + c.r[24];
    c.r[8] = c.r[1] + 0xcu;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10635fcu;
    f_mg442_0100d990(c);
R_010635fc:
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
    if (!wp::cr_get(c, 2)) goto L_01063638;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0106363c;
L_01063638:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0106363c:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x106365cu;
    f_mg442_0100d990(c);
R_0106365c:
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
    if (!wp::cr_get(c, 2)) goto L_010636b8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010636bc;
L_010636b8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010636bc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10636dcu;
    f_mg442_0100d990(c);
R_010636dc:
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
    if (!wp::cr_get(c, 2)) goto L_01063720;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01063724;
L_01063720:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01063724:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1063744u;
    f_mg442_0100d990(c);
R_01063744:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01063760;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01063764;
L_01063760:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01063764:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063778u;
    wp::call(c, c.ctr);
R_01063778:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010637bc;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106378cu;
    f_801c7a8c(c);
R_0106378c:
    goto L_010637bc;
L_01063790:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x106379cu;
    f_8006c4e0(c);
R_0106379c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10637bcu;
    wp::call(c, c.ctr);
L_010637bc:
R_010637bc:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10637d4u;
    wp::call(c, c.ctr);
R_010637d4:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010637fc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10637fcu;
    wp::call(c, c.ctr);
L_010637fc:
R_010637fc:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063824;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063824u;
    wp::call(c, c.ctr);
L_01063824:
R_01063824:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x106382cu;
    f_801c83f8(c);
R_0106382c:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_01063840(wp::Cpu& c) {
    WP_ENTER(0x1063840u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106386cu: goto R_0106386c;
        case 0x1063888u: goto R_01063888;
        case 0x10638a0u: goto R_010638a0;
        case 0x10638c4u: goto R_010638c4;
        case 0x10638e8u: goto R_010638e8;
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
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106386cu;
    f_80010060(c);
R_0106386c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063888u;
    wp::call(c, c.ctr);
R_01063888:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10638a0u;
    wp::call(c, c.ctr);
R_010638a0:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010638c4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10638c4u;
    wp::call(c, c.ctr);
L_010638c4:
R_010638c4:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010638e8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10638e8u;
    wp::call(c, c.ctr);
L_010638e8:
R_010638e8:
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

void f_mg442_01063910(wp::Cpu& c) {
    WP_ENTER(0x1063910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063924u: goto R_01063924;
        case 0x1063938u: goto R_01063938;
        case 0x106394cu: goto R_0106394c;
        case 0x1063974u: goto R_01063974;
        case 0x1063984u: goto R_01063984;
        case 0x10639a8u: goto R_010639a8;
        case 0x1063a08u: goto R_01063a08;
        case 0x1063a88u: goto R_01063a88;
        case 0x1063af0u: goto R_01063af0;
        case 0x1063b20u: goto R_01063b20;
        case 0x1063b34u: goto R_01063b34;
        case 0x1063b44u: goto R_01063b44;
        case 0x1063b60u: goto R_01063b60;
        case 0x1063b78u: goto R_01063b78;
        case 0x1063b9cu: goto R_01063b9c;
        case 0x1063bc0u: goto R_01063bc0;
        case 0x1063bc8u: goto R_01063bc8;
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
    c.lr = 0x1063924u;
    f_801c83b0(c);
R_01063924:
    c.r[30] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1063938u;
    f_8006c450(c);
R_01063938:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01063b38;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106394cu;
    f_8006c460(c);
R_0106394c:
    c.r[26] = ((((g_mg442_bases[5] + 0x261e8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg442_bases[5] + 0x261e8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1063974u;
    f_801c7860(c);
R_01063974:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x1063984u;
    f_mg442_0100d7d0(c);
R_01063984:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[26] | c.r[26];
    c.r[7] = c.r[26] + c.r[25];
    c.r[8] = c.r[1] + 0xcu;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10639a8u;
    f_mg442_0100d990(c);
R_010639a8:
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
    if (!wp::cr_get(c, 2)) goto L_010639e4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010639e8;
L_010639e4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010639e8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x1063a08u;
    f_mg442_0100d990(c);
R_01063a08:
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
    if (!wp::cr_get(c, 2)) goto L_01063a64;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01063a68;
L_01063a64:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01063a68:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1063a88u;
    f_mg442_0100d990(c);
R_01063a88:
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
    if (!wp::cr_get(c, 2)) goto L_01063acc;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01063ad0;
L_01063acc:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01063ad0:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1063af0u;
    f_mg442_0100d990(c);
R_01063af0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01063b0c;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01063b10;
L_01063b0c:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01063b10:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063b20u;
    wp::call(c, c.ctr);
R_01063b20:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01063b60;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1063b34u;
    f_801c7a8c(c);
R_01063b34:
    goto L_01063b60;
L_01063b38:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1063b44u;
    f_8006c4e0(c);
R_01063b44:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063b60u;
    wp::call(c, c.ctr);
L_01063b60:
R_01063b60:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063b78u;
    wp::call(c, c.ctr);
R_01063b78:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063b9c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063b9cu;
    wp::call(c, c.ctr);
L_01063b9c:
R_01063b9c:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063bc0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063bc0u;
    wp::call(c, c.ctr);
L_01063bc0:
R_01063bc0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1063bc8u;
    f_801c83fc(c);
R_01063bc8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_01063be0(wp::Cpu& c) {
    WP_ENTER(0x1063be0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063c28u: goto R_01063c28;
        case 0x1063c4cu: goto R_01063c4c;
        case 0x1063c74u: goto R_01063c74;
        case 0x1063c9cu: goto R_01063c9c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0u - c.r[5];
    c.r[0] = c.r[0] | c.r[5];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063c28u;
    wp::call(c, c.ctr);
R_01063c28:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0u - c.r[31];
    c.r[0] = c.r[0] | c.r[31];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x1063c4cu;
    wp::call(c, c.ctr);
R_01063c4c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063c74;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063c74u;
    wp::call(c, c.ctr);
L_01063c74:
R_01063c74:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063c9c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063c9cu;
    wp::call(c, c.ctr);
L_01063c9c:
R_01063c9c:
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

void f_mg442_01063cc0(wp::Cpu& c) {
    WP_ENTER(0x1063cc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[6] + 0x9b0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg442_bases[6] + 0x9b0u) & 0xFFFFu);
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01063ce0(wp::Cpu& c) {
    WP_ENTER(0x1063ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063d10u: goto R_01063d10;
        case 0x1063d30u: goto R_01063d30;
        case 0x1063d60u: goto R_01063d60;
        case 0x1063d68u: goto R_01063d68;
        case 0x1063d7cu: goto R_01063d7c;
        case 0x1063d8cu: goto R_01063d8c;
        case 0x1063da0u: goto R_01063da0;
        case 0x1063dbcu: goto R_01063dbc;
        case 0x1063dc4u: goto R_01063dc4;
        case 0x1063dd8u: goto R_01063dd8;
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
    c.r[30] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063d10u;
    wp::call(c, c.ctr);
R_01063d10:
    c.r[31] = 0x0u;
    goto L_01063d38;
L_01063d18:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063d30u;
    wp::call(c, c.ctr);
R_01063d30:
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_01063d38:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01063d18;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063d60u;
    wp::call(c, c.ctr);
R_01063d60:
    goto L_01063d68;
L_01063d64:
    c.lr = 0x1063d68u;
    f_8006a940(c);
L_01063d68:
R_01063d68:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063d7cu;
    wp::call(c, c.ctr);
R_01063d7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01063d64;
    }
    goto L_01063d8c;
L_01063d88:
    c.lr = 0x1063d8cu;
    f_8006a940(c);
L_01063d8c:
R_01063d8c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063da0u;
    wp::call(c, c.ctr);
R_01063da0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01063d88;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xa4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063dbcu;
    wp::call(c, c.ctr);
R_01063dbc:
    goto L_01063dc4;
L_01063dc0:
    c.lr = 0x1063dc4u;
    f_8006a940(c);
L_01063dc4:
R_01063dc4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063dd8u;
    wp::call(c, c.ctr);
R_01063dd8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01063dc0;
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

void f_mg442_01063e00(wp::Cpu& c) {
    WP_ENTER(0x1063e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063e28u: goto R_01063e28;
        case 0x1063e4cu: goto R_01063e4c;
        case 0x1063e70u: goto R_01063e70;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[31]);
    c.f[31] = c.f[2];
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[30]);
    c.f[30] = c.f[1];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x1063e28u;
    f_80043290(c);
R_01063e28:
    ea = c.r[31] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063e4c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063e4cu;
    wp::call(c, c.ctr);
L_01063e4c:
R_01063e4c:
    ea = c.r[31] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063e70;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063e70u;
    wp::call(c, c.ctr);
L_01063e70:
R_01063e70:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg442_01063e90(wp::Cpu& c) {
    WP_ENTER(0x1063e90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063eb0u: goto R_01063eb0;
        case 0x1063ed0u: goto R_01063ed0;
        case 0x1063ef0u: goto R_01063ef0;
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
    c.lr = 0x1063eb0u;
    f_800402f0(c);
R_01063eb0:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063ed0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063ed0u;
    wp::call(c, c.ctr);
L_01063ed0:
R_01063ed0:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063ef0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063ef0u;
    wp::call(c, c.ctr);
L_01063ef0:
R_01063ef0:
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

void f_mg442_01063f10(wp::Cpu& c) {
    WP_ENTER(0x1063f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1063f38u: goto R_01063f38;
        case 0x1063f54u: goto R_01063f54;
        case 0x1063f84u: goto R_01063f84;
        case 0x1063fa4u: goto R_01063fa4;
        case 0x1063fb8u: goto R_01063fb8;
        case 0x1063fe8u: goto R_01063fe8;
        case 0x1064008u: goto R_01064008;
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
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = 0x350u;
    c.lr = 0x1063f38u;
    f_801c79a4(c);
R_01063f38:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01063f54;
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x1063f54u;
    f_mg442_010227d0(c);
L_01063f54:
R_01063f54:
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01063f84;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01063f84;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063f84u;
    wp::call(c, c.ctr);
L_01063f84:
R_01063f84:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg442_bases[5] + 0x26520u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x198u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26520u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1063fa4u;
    wp::call(c, c.ctr);
R_01063fa4:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[6] = 0x1u;
    c.lr = 0x1063fb8u;
    f_80043490(c);
R_01063fb8:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01063fe8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1063fe8u;
    wp::call(c, c.ctr);
L_01063fe8:
R_01063fe8:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064008;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064008u;
    wp::call(c, c.ctr);
L_01064008:
R_01064008:
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

void f_mg442_01064030(wp::Cpu& c) {
    WP_ENTER(0x1064030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064050u: goto R_01064050;
        case 0x106406cu: goto R_0106406c;
        case 0x1064080u: goto R_01064080;
        case 0x1064094u: goto R_01064094;
        case 0x10640a8u: goto R_010640a8;
        case 0x10640bcu: goto R_010640bc;
        case 0x10640e0u: goto R_010640e0;
        case 0x10640f8u: goto R_010640f8;
        case 0x1064114u: goto R_01064114;
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
    c.lr = 0x1064050u;
    f_mg442_0105eb90(c);
R_01064050:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106406cu;
    wp::call(c, c.ctr);
R_0106406c:
    c.r[31] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1064080u;
    f_80071fe0(c);
R_01064080:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0106409c;
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1064094u;
    f_80071fe0(c);
R_01064094:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
    goto L_010640c0;
L_0106409c:
    c.r[31] = ((((g_mg442_bases[4] + 0x2304u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2304u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10640a8u;
    f_80071fe0(c);
R_010640a8:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010640c0;
    ea = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2304u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10640bcu;
    f_80071fe0(c);
R_010640bc:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
L_010640c0:
    ea = c.r[29] + 0x194u;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064114;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10640e0u;
    wp::call(c, c.ctr);
R_010640e0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10640f8u;
    wp::call(c, c.ctr);
R_010640f8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064114u;
    wp::call(c, c.ctr);
L_01064114:
R_01064114:
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

void f_mg442_01064130(wp::Cpu& c) {
    WP_ENTER(0x1064130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064144u: goto R_01064144;
        case 0x1064164u: goto R_01064164;
        case 0x106418cu: goto R_0106418c;
        case 0x10641d0u: goto R_010641d0;
        case 0x10641e8u: goto R_010641e8;
        case 0x10641fcu: goto R_010641fc;
        case 0x1064208u: goto R_01064208;
        case 0x1064210u: goto R_01064210;
        case 0x106423cu: goto R_0106423c;
        case 0x1064284u: goto R_01064284;
        case 0x10642d0u: goto R_010642d0;
        case 0x10642e4u: goto R_010642e4;
        case 0x10642fcu: goto R_010642fc;
        case 0x1064318u: goto R_01064318;
        case 0x1064328u: goto R_01064328;
        case 0x1064334u: goto R_01064334;
        case 0x1064344u: goto R_01064344;
        case 0x1064348u: goto R_01064348;
        case 0x1064350u: goto R_01064350;
        case 0x106437cu: goto R_0106437c;
        case 0x1064388u: goto R_01064388;
        case 0x1064394u: goto R_01064394;
        case 0x10643a4u: goto R_010643a4;
        case 0x10643a8u: goto R_010643a8;
        case 0x10643b0u: goto R_010643b0;
        case 0x10643e0u: goto R_010643e0;
        case 0x1064408u: goto R_01064408;
        case 0x1064414u: goto R_01064414;
        case 0x1064424u: goto R_01064424;
        case 0x1064428u: goto R_01064428;
        case 0x1064430u: goto R_01064430;
        case 0x10644a0u: goto R_010644a0;
        case 0x10644d4u: goto R_010644d4;
        case 0x10644f0u: goto R_010644f0;
        case 0x1064518u: goto R_01064518;
        case 0x1064534u: goto R_01064534;
        case 0x1064554u: goto R_01064554;
        case 0x106457cu: goto R_0106457c;
        case 0x10645b8u: goto R_010645b8;
        case 0x10645e0u: goto R_010645e0;
        case 0x1064620u: goto R_01064620;
        case 0x106463cu: goto R_0106463c;
        case 0x1064690u: goto R_01064690;
        case 0x1064698u: goto R_01064698;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1064144u;
    f_801c83ac(c);
R_01064144:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    ea = c.r[12] + 0xa0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1064164u;
    wp::call(c, c.ctr);
R_01064164:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106418c;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106418c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106418cu;
    wp::call(c, c.ctr);
L_0106418c:
R_0106418c:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064210;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010641b0;
    ea = c.r[28] + 0x186u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010641bc;
L_010641b0:
    ea = c.r[28] + 0x187u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010641d4;
L_010641bc:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10641d0u;
    wp::call(c, c.ctr);
R_010641d0:
    goto L_010641e8;
L_010641d4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10641e8u;
    wp::call(c, c.ctr);
L_010641e8:
R_010641e8:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10641fcu;
    wp::call(c, c.ctr);
R_010641fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064210;
    c.lr = 0x1064208u;
    f_8004a110(c);
R_01064208:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x1064210u;
    f_8004a100(c);
L_01064210:
R_01064210:
    ea = c.r[28] + 0x140u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01064690;
    ea = c.r[28] + 0x150u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01064294;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106423cu;
    wp::call(c, c.ctr);
R_0106423c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064690;
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106425c;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[0]);
L_0106425c:
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01064284;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064284u;
    wp::call(c, c.ctr);
L_01064284:
R_01064284:
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01064294;
    goto L_01064690;
L_01064294:
    ea = c.r[28] + 0x16au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106457c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106457c;
    ea = c.r[28] + 0x16cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010642c4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    goto L_01064690;
L_010642c4:
    c.r[30] = 0x0u;
    c.r[29] = 0x1u;
    c.lr = 0x10642d0u;
    f_8000e2a0(c);
R_010642d0:
    c.r[25] = c.r[3] | c.r[3];
    c.r[24] = 0x0u;
    c.r[26] = 0x1u;
L_010642dc:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10642e4u;
    f_8000fc20(c);
R_010642e4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = wp::slw(c.r[26], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10642fcu;
    wp::call(c, c.ctr);
R_010642fc:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[0] & c.r[27];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106435c;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01064320;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1064318u;
    f_8000fc40(c);
R_01064318:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106435c;
L_01064320:
    c.r[29] = 0x0u;
    c.lr = 0x1064328u;
    f_8000dd70(c);
R_01064328:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1064334u;
    f_8000fc20(c);
R_01064334:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0106435c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1064344u;
    f_8000fc20(c);
R_01064344:
    c.lr = 0x1064348u;
    f_800699d0(c);
R_01064348:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1064350u;
    f_80066cd0(c);
R_01064350:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106435c;
    c.r[30] = 0x1u;
L_0106435c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010642dc;
    }
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010643c8;
    c.r[24] = 0x0u;
L_01064374:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x106437cu;
    f_8000fc40(c);
R_0106437c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010643bc;
    c.lr = 0x1064388u;
    f_8000dd70(c);
R_01064388:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1064394u;
    f_8000fc20(c);
R_01064394:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010643bc;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10643a4u;
    f_8000fc20(c);
R_010643a4:
    c.lr = 0x10643a8u;
    f_800699d0(c);
R_010643a8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10643b0u;
    f_80066cd0(c);
R_010643b0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010643bc;
    c.r[30] = 0x1u;
L_010643bc:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01064374;
    }
L_010643c8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064448;
    c.r[24] = 0x1u;
    c.r[25] = 0x0u;
L_010643d8:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10643e0u;
    f_8000fc40(c);
R_010643e0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010643ec;
    c.r[24] = 0x0u;
L_010643ec:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010643d8;
    }
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064448;
    c.r[24] = 0x0u;
L_01064404:
    c.lr = 0x1064408u;
    f_8000dd70(c);
R_01064408:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1064414u;
    f_8000fc20(c);
R_01064414:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0106443c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1064424u;
    f_8000fc20(c);
R_01064424:
    c.lr = 0x1064428u;
    f_800699d0(c);
R_01064428:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1064430u;
    f_80066cd0(c);
R_01064430:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106443c;
    c.r[30] = 0x1u;
L_0106443c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01064404;
    }
L_01064448:
    ea = c.r[28] + 0x15eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064478;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064478;
    ea = c.r[28] + 0x160u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01064478;
    c.r[30] = 0x1u;
L_01064478:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106457c;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106457c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10644a0u;
    wp::call(c, c.ctr);
R_010644a0:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010644f0;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010644f0;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010644f0;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10644d4u;
    wp::call(c, c.ctr);
R_010644d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010644f0;
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[31] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10644f0u;
    f_80018e30(c);
L_010644f0:
R_010644f0:
    ea = c.r[28] + 0x170u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = 0x0u;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x184u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064518u;
    wp::call(c, c.ctr);
R_01064518:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x180u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064534u;
    wp::call(c, c.ctr);
R_01064534:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01064558;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x17cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064554u;
    wp::call(c, c.ctr);
R_01064554:
    goto L_01064564;
L_01064558:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_01064564:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106457cu;
    wp::call(c, c.ctr);
L_0106457c:
R_0106457c:
    ea = c.r[28] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010645ec;
    ea = c.r[28] + 0x15du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010645ec;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010645ec;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10645b8u;
    wp::call(c, c.ctr);
R_010645b8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010645ec;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010645ec;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10645e0u;
    wp::call(c, c.ctr);
R_010645e0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010645ec;
    c.r[30] = 0x1u;
L_010645ec:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064690;
    ea = c.r[31] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01064670;
    c.r[24] = 0x0u;
    c.r[29] = 0x1u;
L_0106460c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064620u;
    wp::call(c, c.ctr);
R_01064620:
    c.r[3] = c.r[3] & 0xffffu;
    c.r[0] = wp::slw(c.r[29], c.r[24]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_01064664;
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.lr = 0x106463cu;
    f_8000ffd0(c);
R_0106463c:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd8(ea);
    ea = c.r[1] + 0xdu;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0xeu;
    c.r[3] = wp::rd8(ea);
    ea = c.r[1] + 0xfu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x11u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x12u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x13u;
    wp::wr8(ea, c.r[0]);
    goto L_01064670;
L_01064664:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106460c;
    }
L_01064670:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x294u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064690u;
    wp::call(c, c.ctr);
L_01064690:
R_01064690:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1064698u;
    f_801c83f8(c);
R_01064698:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg442_010646b0(wp::Cpu& c) {
    WP_ENTER(0x10646b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg442_010646c0(wp::Cpu& c) {
    WP_ENTER(0x10646c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg442_bases[4] + 0x22bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x22bcu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x0u;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010646e8;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010646e8;
    c.r[4] = 0x1u;
L_010646e8:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mg442_010646f0(wp::Cpu& c) {
    WP_ENTER(0x10646f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x154u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg442_01064700(wp::Cpu& c) {
    WP_ENTER(0x1064700u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064738u: goto R_01064738;
        case 0x1064750u: goto R_01064750;
        case 0x1064758u: goto R_01064758;
        case 0x1064784u: goto R_01064784;
        case 0x106479cu: goto R_0106479c;
        case 0x10647a4u: goto R_010647a4;
        case 0x10647d0u: goto R_010647d0;
        case 0x10647e8u: goto R_010647e8;
        case 0x10647f0u: goto R_010647f0;
        case 0x106481cu: goto R_0106481c;
        case 0x1064834u: goto R_01064834;
        case 0x106483cu: goto R_0106483c;
        case 0x106484cu: goto R_0106484c;
        case 0x1064864u: goto R_01064864;
        case 0x106487cu: goto R_0106487c;
        case 0x1064894u: goto R_01064894;
        case 0x10648acu: goto R_010648ac;
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
    if (wp::cr_get(c, 2)) goto L_01064758;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064738u;
    wp::call(c, c.ctr);
R_01064738:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064750u;
    wp::call(c, c.ctr);
R_01064750:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1064758u;
    f_80019f20(c);
L_01064758:
R_01064758:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064898;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010647a4;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064784u;
    wp::call(c, c.ctr);
R_01064784:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106479cu;
    wp::call(c, c.ctr);
R_0106479c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10647a4u;
    f_80019f20(c);
L_010647a4:
R_010647a4:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064880;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010647f0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10647d0u;
    wp::call(c, c.ctr);
R_010647d0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10647e8u;
    wp::call(c, c.ctr);
R_010647e8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10647f0u;
    f_80019f20(c);
L_010647f0:
R_010647f0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064868;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106483c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106481cu;
    wp::call(c, c.ctr);
R_0106481c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064834u;
    wp::call(c, c.ctr);
R_01064834:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x106483cu;
    f_80019f20(c);
L_0106483c:
R_0106483c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064850;
    c.lr = 0x106484cu;
    f_mg442_01064700(c);
R_0106484c:
    goto L_010648ac;
L_01064850:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064864u;
    wp::call(c, c.ctr);
R_01064864:
    goto L_010648ac;
L_01064868:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106487cu;
    wp::call(c, c.ctr);
R_0106487c:
    goto L_010648ac;
L_01064880:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064894u;
    wp::call(c, c.ctr);
R_01064894:
    goto L_010648ac;
L_01064898:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10648acu;
    wp::call(c, c.ctr);
L_010648ac:
R_010648ac:
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

void f_mg442_010648d0(wp::Cpu& c) {
    WP_ENTER(0x10648d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064918u: goto R_01064918;
        case 0x1064948u: goto R_01064948;
        case 0x1064950u: goto R_01064950;
        case 0x106496cu: goto R_0106496c;
        case 0x1064974u: goto R_01064974;
        case 0x1064994u: goto R_01064994;
        case 0x106499cu: goto R_0106499c;
        case 0x10649c0u: goto R_010649c0;
        case 0x10649e4u: goto R_010649e4;
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
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    c.r[5] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064918u;
    wp::call(c, c.ctr);
R_01064918:
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01064930;
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01064954;
L_01064930:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064948u;
    wp::call(c, c.ctr);
R_01064948:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1064950u;
    f_80043120(c);
R_01064950:
    goto L_01064974;
L_01064954:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106496cu;
    wp::call(c, c.ctr);
R_0106496c:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1064974u;
    f_80043120(c);
L_01064974:
R_01064974:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106499c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064994u;
    wp::call(c, c.ctr);
R_01064994:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106499cu;
    f_80043060(c);
L_0106499c:
R_0106499c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010649c0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10649c0u;
    wp::call(c, c.ctr);
L_010649c0:
R_010649c0:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010649e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10649e4u;
    wp::call(c, c.ctr);
L_010649e4:
R_010649e4:
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

void f_mg442_01064a10(wp::Cpu& c) {
    WP_ENTER(0x1064a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mg442_01064a20(wp::Cpu& c) {
    WP_ENTER(0x1064a20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064ab0u: goto R_01064ab0;
        case 0x1064ad4u: goto R_01064ad4;
        case 0x1064b10u: goto R_01064b10;
        case 0x1064b24u: goto R_01064b24;
        case 0x1064b48u: goto R_01064b48;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064b48;
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064ad8;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064ad8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064a88;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01064a90;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01064ab4;
    goto L_01064adc;
L_01064a88:
    c.r[31] = 0x1u;
    goto L_01064adc;
L_01064a90:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x294u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064ab0u;
    wp::call(c, c.ctr);
R_01064ab0:
    goto L_01064adc;
L_01064ab4:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x190u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x294u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064ad4u;
    wp::call(c, c.ctr);
R_01064ad4:
    goto L_01064adc;
L_01064ad8:
    c.r[31] = 0x1u;
L_01064adc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064b48;
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064b48;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x318u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064b10u;
    wp::call(c, c.ctr);
R_01064b10:
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064b24u;
    wp::call(c, c.ctr);
R_01064b24:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01064b48;
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064b48u;
    wp::call(c, c.ctr);
L_01064b48:
R_01064b48:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg442_01064b70(wp::Cpu& c) {
    WP_ENTER(0x1064b70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064b84;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_01064b84:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064c04;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064c04;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064bbc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01064bdc;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01064bf0;
    return;
L_01064bbc:
    ea = c.r[3] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01064bdc:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01064bf0:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01064c04:
    ea = c.r[3] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mg442_01064c30(wp::Cpu& c) {
    WP_ENTER(0x1064c30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x154u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01064c58;
    return;
L_01064c58:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064cd8;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064cd8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064c90;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01064cb0;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01064cc4;
    return;
L_01064c90:
    ea = c.r[3] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01064cb0:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01064cc4:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01064cd8:
    ea = c.r[3] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_mg442_01064d00(wp::Cpu& c) {
    WP_ENTER(0x1064d00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064d38u: goto R_01064d38;
        case 0x1064d48u: goto R_01064d48;
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
    if (wp::cr_get(c, 2)) goto L_01064d48;
    c.r[4] = ((((g_mg442_bases[5] + 0x272acu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x272acu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1064d38u;
    f_8003b480(c);
R_01064d38:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01064d48;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1064d48u;
    f_801c7a8c(c);
L_01064d48:
R_01064d48:
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

void f_mg442_01064d70(wp::Cpu& c) {
    WP_ENTER(0x1064d70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064db0u: goto R_01064db0;
        case 0x1064dc0u: goto R_01064dc0;
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
    if (wp::cr_get(c, 2)) goto L_01064dc0;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01064db0;
    c.r[4] = ((((g_mg442_bases[5] + 0x272acu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x272acu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1064db0u;
    f_8003b480(c);
L_01064db0:
R_01064db0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01064dc0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1064dc0u;
    f_801c7a8c(c);
L_01064dc0:
R_01064dc0:
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

void f_mg442_01064de0(wp::Cpu& c) {
    WP_ENTER(0x1064de0u);
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

void f_mg442_01064e00(wp::Cpu& c) {
    WP_ENTER(0x1064e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064e44u: goto R_01064e44;
        case 0x1064e54u: goto R_01064e54;
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
    if (wp::cr_get(c, 2)) goto L_01064e54;
    if (wp::cr_get(c, 2)) goto L_01064e44;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01064e44;
    c.r[4] = ((((g_mg442_bases[5] + 0x272acu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x272acu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1064e44u;
    f_8003b480(c);
L_01064e44:
R_01064e44:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01064e54;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1064e54u;
    f_801c7a8c(c);
L_01064e54:
R_01064e54:
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

void f_mg442_01064e70(wp::Cpu& c) {
    WP_ENTER(0x1064e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064ec0u: goto R_01064ec0;
        case 0x1064ee8u: goto R_01064ee8;
        case 0x1064ef4u: goto R_01064ef4;
        case 0x1064f00u: goto R_01064f00;
        case 0x1064f10u: goto R_01064f10;
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
    if (wp::cr_get(c, 2)) goto L_01064f10;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01064ec0;
    if (wp::cr_get(c, 2)) goto L_01064ec0;
    if (wp::cr_get(c, 2)) goto L_01064ec0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064ec0;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1064ec0u;
    f_801c7a8c(c);
L_01064ec0:
R_01064ec0:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01064ee8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01064ee8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1064ee8u;
    wp::call(c, c.ctr);
L_01064ee8:
R_01064ee8:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x1064ef4u;
    f_80063bb0(c);
R_01064ef4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1064f00u;
    f_mg442_0101be80(c);
R_01064f00:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01064f10;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1064f10u;
    f_801c7a8c(c);
L_01064f10:
R_01064f10:
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

void f_mg442_01064f30(wp::Cpu& c) {
    WP_ENTER(0x1064f30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1064f44u: goto R_01064f44;
        case 0x1064f64u: goto R_01064f64;
        case 0x1064ffcu: goto R_01064ffc;
        case 0x1065044u: goto R_01065044;
        case 0x10650a0u: goto R_010650a0;
        case 0x1065134u: goto R_01065134;
        case 0x106517cu: goto R_0106517c;
        case 0x10651d8u: goto R_010651d8;
        case 0x106521cu: goto R_0106521c;
        case 0x1065254u: goto R_01065254;
        case 0x10652f0u: goto R_010652f0;
        case 0x1065334u: goto R_01065334;
        case 0x1065394u: goto R_01065394;
        case 0x10653d8u: goto R_010653d8;
        case 0x1065434u: goto R_01065434;
        case 0x1065450u: goto R_01065450;
        case 0x1065458u: goto R_01065458;
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
    c.lr = 0x1064f44u;
    f_801c83ac(c);
R_01064f44:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x1064f64u;
    wp::call(c, c.ctr);
R_01064f64:
    c.r[4] = ((((g_mg442_bases[5] + 0x26700u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26700u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01064fac;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01064fac;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01064fac;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010650a0;
L_01064fac:
    c.r[3] = ((((g_mg442_bases[5] + 0x26700u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x26700u) & 0xFFFFu);
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
    c.lr = 0x1064ffcu;
    wp::call(c, c.ctr);
R_01064ffc:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065044;
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
    c.lr = 0x1065044u;
    wp::call(c, c.ctr);
L_01065044:
R_01065044:
    c.r[3] = ((((g_mg442_bases[5] + 0x26700u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x26700u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010650a0;
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
    c.lr = 0x10650a0u;
    wp::call(c, c.ctr);
L_010650a0:
R_010650a0:
    c.r[4] = ((((g_mg442_bases[5] + 0x26760u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26760u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010650e0;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010650e0;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010650e0;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065254;
L_010650e0:
    c.r[3] = ((((g_mg442_bases[5] + 0x26760u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x26760u) & 0xFFFFu);
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
    c.lr = 0x1065134u;
    wp::call(c, c.ctr);
R_01065134:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106517c;
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
    c.lr = 0x106517cu;
    wp::call(c, c.ctr);
L_0106517c:
R_0106517c:
    c.r[3] = ((((g_mg442_bases[5] + 0x26760u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x26760u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010651d8;
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
    c.lr = 0x10651d8u;
    wp::call(c, c.ctr);
L_010651d8:
R_010651d8:
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
    c.lr = 0x106521cu;
    wp::call(c, c.ctr);
R_0106521c:
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
    c.lr = 0x1065254u;
    wp::call(c, c.ctr);
L_01065254:
R_01065254:
    c.r[4] = ((((g_mg442_bases[5] + 0x267c0u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x267c0u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0106529c;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0106529c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0106529c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010653d8;
L_0106529c:
    c.r[4] = ((((g_mg442_bases[5] + 0x267c0u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x267c0u) & 0xFFFFu);
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
    c.lr = 0x10652f0u;
    wp::call(c, c.ctr);
R_010652f0:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065334;
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
    c.lr = 0x1065334u;
    wp::call(c, c.ctr);
L_01065334:
R_01065334:
    c.r[3] = ((((g_mg442_bases[5] + 0x267c0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x267c0u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065394;
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
    c.lr = 0x1065394u;
    wp::call(c, c.ctr);
L_01065394:
R_01065394:
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
    c.lr = 0x10653d8u;
    wp::call(c, c.ctr);
L_010653d8:
R_010653d8:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01065434;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01065434;
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
    c.lr = 0x1065434u;
    wp::call(c, c.ctr);
L_01065434:
R_01065434:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1065450u;
    wp::call(c, c.ctr);
R_01065450:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x1065458u;
    f_801c83f8(c);
R_01065458:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mg442_01065470(wp::Cpu& c) {
    WP_ENTER(0x1065470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106552cu: goto R_0106552c;
        case 0x1065530u: goto R_01065530;
        case 0x1065590u: goto R_01065590;
        case 0x1065594u: goto R_01065594;
        case 0x1065654u: goto R_01065654;
        case 0x1065658u: goto R_01065658;
        case 0x1065660u: goto R_01065660;
        case 0x1065688u: goto R_01065688;
        case 0x106568cu: goto R_0106568c;
        case 0x10657e4u: goto R_010657e4;
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
    if (!wp::cr_get(c, 0)) goto L_010654fc;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010654ec;
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
L_010654ec:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_010657e4;
L_010654fc:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01065530;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x26274u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26274u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106552cu;
    f_801cee24(c);
R_0106552c:
    c.lr = 0x1065530u;
    f_801d3940(c);
L_01065530:
R_01065530:
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
    if (!wp::cr_get(c, 1)) goto L_01065594;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x26274u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26274u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1065590u;
    f_801cee24(c);
R_01065590:
    c.lr = 0x1065594u;
    f_801d3940(c);
L_01065594:
R_01065594:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010655e4;
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
    if (!wp::cr_get(c, 0)) goto L_010655d8;
    c.r[3] = c.r[1] + 0x10u;
L_010655d8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01065628;
L_010655e4:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01065620;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01065614;
    c.r[3] = c.r[1] + 0x10u;
L_01065614:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01065628;
L_01065620:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_01065628:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01065658;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x26274u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x26274u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1065654u;
    f_801cee24(c);
R_01065654:
    c.lr = 0x1065658u;
    f_801d3940(c);
L_01065658:
R_01065658:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x1065660u;
    f_801c79a4(c);
R_01065660:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106568c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x27340u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x27340u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1065688u;
    f_801cee24(c);
R_01065688:
    c.lr = 0x106568cu;
    f_801d3940(c);
L_0106568c:
R_0106568c:
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
    if (wp::cr_get(c, 2)) goto L_010656ec;
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
L_010656ec:
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
    if (!wp::cr_get(c, 1)) goto L_01065798;
    c.r[0] = c.r[0] | 0x0u;
L_01065738:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_0106577c;
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
L_0106577c:
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
    goto L_01065738;
    }
L_01065798:
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
    if (wp::cr_get(c, 2)) goto L_010657e4;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010657e4;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10657e4u;
    f_801c7a8c(c);
L_010657e4:
R_010657e4:
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

void f_mg442_01065810(wp::Cpu& c) {
    WP_ENTER(0x1065810u);
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

void f_mg442_01065830(wp::Cpu& c) {
    WP_ENTER(0x1065830u);
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
    if (wp::cr_get(c, 2)) goto L_01065b24;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_01065b24;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_01065ac4;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_010658d4;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_010658c8;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010658c8;
    c.r[9] = 0x0u;
L_010658c8:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010658d4;
    c.r[7] = 0x1u;
L_010658d4:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01065ac4;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01065ac4;
L_010658f8:
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
    goto L_010658f8;
    }
L_01065ac4:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01065b24;
L_01065ae0:
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
    goto L_01065ae0;
    }
L_01065b24:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mg442_01065b40(wp::Cpu& c) {
    WP_ENTER(0x1065b40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mg442_01065b50(wp::Cpu& c) {
    WP_ENTER(0x1065b50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mg442_01065b60(wp::Cpu& c) {
    WP_ENTER(0x1065b60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1065c60u: goto R_01065c60;
        case 0x1065c90u: goto R_01065c90;
        case 0x1065cacu: goto R_01065cac;
        case 0x1065cc8u: goto R_01065cc8;
        case 0x1065d08u: goto R_01065d08;
        case 0x1065d10u: goto R_01065d10;
        case 0x1065d1cu: goto R_01065d1c;
        case 0x1065d20u: goto R_01065d20;
        case 0x1065d9cu: goto R_01065d9c;
        case 0x1065dacu: goto R_01065dac;
        case 0x1065dc8u: goto R_01065dc8;
        case 0x1065ddcu: goto R_01065ddc;
        case 0x1065e24u: goto R_01065e24;
        case 0x1065e58u: goto R_01065e58;
        case 0x1065e6cu: goto R_01065e6c;
        case 0x1065e7cu: goto R_01065e7c;
        case 0x1065e90u: goto R_01065e90;
        case 0x1065eb0u: goto R_01065eb0;
        case 0x1065ee0u: goto R_01065ee0;
        case 0x1065f10u: goto R_01065f10;
        case 0x1065f30u: goto R_01065f30;
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
    c.r[31] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01065bf4;
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
    if (!wp::cr_get(c, 1)) goto L_01065be8;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01065be8:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_01065c44;
L_01065bf4:
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
    if (!wp::cr_get(c, 0)) goto L_01065c44;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01065c44:
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
    c.lr = 0x1065c60u;
    f_mg442_010185e0(c);
R_01065c60:
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
    if (!wp::cr_get(c, 1)) goto L_01065ee4;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01065d28;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1065c90u;
    f_80053d40(c);
R_01065c90:
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
    c.lr = 0x1065cacu;
    f_8006b460(c);
R_01065cac:
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
    c.lr = 0x1065cc8u;
    f_8006b460(c);
R_01065cc8:
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
    c.lr = 0x1065d08u;
    wp::call(c, c.ctr);
R_01065d08:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1065d10u;
    f_80071fe0(c);
R_01065d10:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x1065d1cu;
    f_80071fe0(c);
R_01065d1c:
    c.lr = 0x1065d20u;
    f_8006b590(c);
R_01065d20:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_01065d28:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01065eb0;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01065eb0;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065d54;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_01065d54:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01065d88;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01065d94;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01065dcc;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_01065e70;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01065e94;
    goto L_01065eb0;
L_01065d88:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_01065eb0;
L_01065d94:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1065d9cu;
    f_80055bb0(c);
R_01065d9c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01065eb0;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1065dacu;
    f_80055d80(c);
R_01065dac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01065eb0;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1065dc8u;
    wp::call(c, c.ctr);
R_01065dc8:
    goto L_01065eb0;
L_01065dcc:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065ddc;
    c.lr = 0x1065ddcu;
    f_80019fa0(c);
L_01065ddc:
R_01065ddc:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065e30;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01065e30;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_01065e08;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_01065e0c;
L_01065e08:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_01065e0c:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x1065e24u;
    f_80055290(c);
R_01065e24:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_01065e30:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01065e58;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1065e58u;
    wp::call(c, c.ctr);
L_01065e58:
R_01065e58:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1065e6cu;
    wp::call(c, c.ctr);
R_01065e6c:
    goto L_01065eb0;
L_01065e70:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1065e7cu;
    f_80019f20(c);
R_01065e7c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1065e90u;
    wp::call(c, c.ctr);
R_01065e90:
    goto L_01065eb0;
L_01065e94:
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
    c.lr = 0x1065eb0u;
    wp::call(c, c.ctr);
L_01065eb0:
R_01065eb0:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01065ec4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_01065ec4:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x1065ee0u;
    f_mg442_01018080(c);
R_01065ee0:
    goto L_01065f34;
L_01065ee4:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01065f34;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01065f34;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x1065f10u;
    f_80055290(c);
R_01065f10:
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
    c.lr = 0x1065f30u;
    wp::call(c, c.ctr);
R_01065f30:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_01065f34:
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

void f_mg442_01065f60(wp::Cpu& c) {
    WP_ENTER(0x1065f60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1065facu: goto R_01065fac;
        case 0x1065fb8u: goto R_01065fb8;
        case 0x1065ff0u: goto R_01065ff0;
        case 0x106602cu: goto R_0106602c;
        case 0x1066038u: goto R_01066038;
        case 0x1066048u: goto R_01066048;
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
    if (wp::cr_get(c, 2)) goto L_01066048;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01065fac;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01065fac;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1065facu;
    wp::call(c, c.ctr);
L_01065fac:
R_01065fac:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1065fb8u;
    f_80069c40(c);
R_01065fb8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066038;
    c.r[3] = ((((g_mg442_bases[5] + 0x270a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg442_bases[5] + 0x270a0u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01065ff0;
L_01065fd0:
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
    c.lr = 0x1065ff0u;
    wp::call(c, c.ctr);
L_01065ff0:
R_01065ff0:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01065fd0;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106602c;
    if (wp::cr_get(c, 2)) goto L_0106602c;
    if (wp::cr_get(c, 2)) goto L_0106602c;
    if (wp::cr_get(c, 2)) goto L_0106602c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106602c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106602cu;
    f_801c7a8c(c);
L_0106602c:
R_0106602c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1066038u;
    f_8003fb90(c);
L_01066038:
R_01066038:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01066048;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1066048u;
    f_801c7a8c(c);
L_01066048:
R_01066048:
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

void f_mg442_01066070(wp::Cpu& c) {
    WP_ENTER(0x1066070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106609cu: goto R_0106609c;
        case 0x10660a8u: goto R_010660a8;
        case 0x10660b4u: goto R_010660b4;
        case 0x10660c0u: goto R_010660c0;
        case 0x10660d8u: goto R_010660d8;
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
    if (wp::cr_get(c, 2)) goto L_010660ac;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x106609cu;
    f_80069e30(c);
R_0106609c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x10660a8u;
    f_800403b0(c);
R_010660a8:
    goto L_010660c0;
L_010660ac:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x10660b4u;
    f_80069e40(c);
R_010660b4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x10660c0u;
    f_800403a0(c);
L_010660c0:
R_010660c0:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10660d8u;
    wp::call(c, c.ctr);
R_010660d8:
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

void f_mg442_010660f0(wp::Cpu& c) {
    WP_ENTER(0x10660f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066110u: goto R_01066110;
        case 0x1066130u: goto R_01066130;
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
    c.lr = 0x1066110u;
    f_800402c0(c);
R_01066110:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066130;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066130u;
    wp::call(c, c.ctr);
L_01066130:
R_01066130:
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

void f_mg442_01066150(wp::Cpu& c) {
    WP_ENTER(0x1066150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10661a0u: goto R_010661a0;
        case 0x10661bcu: goto R_010661bc;
        case 0x10661fcu: goto R_010661fc;
        case 0x1066214u: goto R_01066214;
        case 0x106621cu: goto R_0106621c;
        case 0x1066234u: goto R_01066234;
        case 0x106623cu: goto R_0106623c;
        case 0x1066268u: goto R_01066268;
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
    c.r[31] = ((((g_mg442_bases[4] + 0x2288u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2288u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01066268;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010661a4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10661a0u;
    f_80071fe0(c);
R_010661a0:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_010661a4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10661bcu;
    wp::call(c, c.ctr);
R_010661bc:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010661d4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010661dc;
L_010661d4:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_010661dc:
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
    c.lr = 0x10661fcu;
    wp::call(c, c.ctr);
R_010661fc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066214u;
    wp::call(c, c.ctr);
R_01066214:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106621cu;
    f_80043060(c);
R_0106621c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066234u;
    wp::call(c, c.ctr);
R_01066234:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106623cu;
    f_80043120(c);
R_0106623c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01066268;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066268;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066268u;
    wp::call(c, c.ctr);
L_01066268:
R_01066268:
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

void f_mg442_01066290(wp::Cpu& c) {
    WP_ENTER(0x1066290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mg442_010662a0(wp::Cpu& c) {
    WP_ENTER(0x10662a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg442_010662b0(wp::Cpu& c) {
    WP_ENTER(0x10662b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg442_010662c0(wp::Cpu& c) {
    WP_ENTER(0x10662c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10662e8u: goto R_010662e8;
        case 0x10662f0u: goto R_010662f0;
        case 0x1066304u: goto R_01066304;
        case 0x1066314u: goto R_01066314;
        case 0x1066328u: goto R_01066328;
        case 0x1066348u: goto R_01066348;
        case 0x1066350u: goto R_01066350;
        case 0x1066364u: goto R_01066364;
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
    c.lr = 0x10662e8u;
    wp::call(c, c.ctr);
R_010662e8:
    goto L_010662f0;
L_010662ec:
    c.lr = 0x10662f0u;
    f_8006a940(c);
L_010662f0:
R_010662f0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066304u;
    wp::call(c, c.ctr);
R_01066304:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010662ec;
    }
    goto L_01066314;
L_01066310:
    c.lr = 0x1066314u;
    f_8006a940(c);
L_01066314:
R_01066314:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066328u;
    wp::call(c, c.ctr);
R_01066328:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01066310;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066348u;
    wp::call(c, c.ctr);
R_01066348:
    goto L_01066350;
L_0106634c:
    c.lr = 0x1066350u;
    f_8006a940(c);
L_01066350:
R_01066350:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066364u;
    wp::call(c, c.ctr);
R_01066364:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106634c;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01066380(wp::Cpu& c) {
    WP_ENTER(0x1066380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066394u: goto R_01066394;
        case 0x10663b4u: goto R_010663b4;
        case 0x1066404u: goto R_01066404;
        case 0x1066428u: goto R_01066428;
        case 0x1066434u: goto R_01066434;
        case 0x1066448u: goto R_01066448;
        case 0x1066468u: goto R_01066468;
        case 0x1066478u: goto R_01066478;
        case 0x1066484u: goto R_01066484;
        case 0x1066494u: goto R_01066494;
        case 0x1066498u: goto R_01066498;
        case 0x10664a0u: goto R_010664a0;
        case 0x10664ccu: goto R_010664cc;
        case 0x10664d8u: goto R_010664d8;
        case 0x10664e4u: goto R_010664e4;
        case 0x10664f4u: goto R_010664f4;
        case 0x10664f8u: goto R_010664f8;
        case 0x1066500u: goto R_01066500;
        case 0x1066530u: goto R_01066530;
        case 0x1066558u: goto R_01066558;
        case 0x1066564u: goto R_01066564;
        case 0x1066574u: goto R_01066574;
        case 0x1066578u: goto R_01066578;
        case 0x1066580u: goto R_01066580;
        case 0x10665bcu: goto R_010665bc;
        case 0x10665d8u: goto R_010665d8;
        case 0x10665e8u: goto R_010665e8;
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
    c.lr = 0x1066394u;
    f_801c83b0(c);
R_01066394:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010663c8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10663b4u;
    wp::call(c, c.ctr);
R_010663b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010665e0;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010665e0;
L_010663c8:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010665e0;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010665e0;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010665e0;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066404u;
    wp::call(c, c.ctr);
R_01066404:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01066428;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066428u;
    wp::call(c, c.ctr);
L_01066428:
R_01066428:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x1066434u;
    f_8000e2a0(c);
R_01066434:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_01066440:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1066448u;
    f_8000fc20(c);
R_01066448:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010664ac;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01066470;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1066468u;
    f_8000fc40(c);
R_01066468:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010664ac;
L_01066470:
    c.r[26] = 0x0u;
    c.lr = 0x1066478u;
    f_8000dd70(c);
R_01066478:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1066484u;
    f_8000fc20(c);
R_01066484:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010664ac;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1066494u;
    f_8000fc20(c);
R_01066494:
    c.lr = 0x1066498u;
    f_800699d0(c);
R_01066498:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10664a0u;
    f_80066cd0(c);
R_010664a0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010664ac;
    c.r[27] = 0x1u;
L_010664ac:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01066440;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066518;
    c.r[25] = 0x0u;
L_010664c4:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10664ccu;
    f_8000fc40(c);
R_010664cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106650c;
    c.lr = 0x10664d8u;
    f_8000dd70(c);
R_010664d8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10664e4u;
    f_8000fc20(c);
R_010664e4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0106650c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10664f4u;
    f_8000fc20(c);
R_010664f4:
    c.lr = 0x10664f8u;
    f_800699d0(c);
R_010664f8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1066500u;
    f_80066cd0(c);
R_01066500:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106650c;
    c.r[27] = 0x1u;
L_0106650c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010664c4;
    }
L_01066518:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066598;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_01066528:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1066530u;
    f_8000fc40(c);
R_01066530:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106653c;
    c.r[25] = 0x0u;
L_0106653c:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01066528;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066598;
    c.r[25] = 0x0u;
L_01066554:
    c.lr = 0x1066558u;
    f_8000dd70(c);
R_01066558:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1066564u;
    f_8000fc20(c);
R_01066564:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0106658c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1066574u;
    f_8000fc20(c);
R_01066574:
    c.lr = 0x1066578u;
    f_800699d0(c);
R_01066578:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1066580u;
    f_80066cd0(c);
R_01066580:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106658c;
    c.r[27] = 0x1u;
L_0106658c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01066554;
    }
L_01066598:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010665e0;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10665bcu;
    wp::call(c, c.ctr);
R_010665bc:
    c.r[3] = ((((g_mg442_bases[4] + 0x22e4u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[4] + 0x22bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x22e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x22bcu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10665d8u;
    f_80018e30(c);
R_010665d8:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_010665e0:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10665e8u;
    f_801c83fc(c);
R_010665e8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg442_01066600(wp::Cpu& c) {
    WP_ENTER(0x1066600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066628u: goto R_01066628;
        case 0x106662cu: goto R_0106662c;
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
L_01066614:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066628u;
    wp::call(c, c.ctr);
R_01066628:
    c.lr = 0x106662cu;
    f_8006a940(c);
R_0106662c:
    WP_POLL(c);
    goto L_01066614;
}

void f_mg442_01066630(wp::Cpu& c) {
    WP_ENTER(0x1066630u);
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

void f_mg442_01066650(wp::Cpu& c) {
    WP_ENTER(0x1066650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066674u: goto R_01066674;
        case 0x1066698u: goto R_01066698;
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
    c.lr = 0x1066674u;
    f_80010060(c);
R_01066674:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg442_bases[5] + 0x273b4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x273b4u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1066698u;
    wp::call(c, c.ctr);
R_01066698:
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

void f_mg442_010666b0(wp::Cpu& c) {
    WP_ENTER(0x10666b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10666c4u: goto R_010666c4;
        case 0x10666d8u: goto R_010666d8;
        case 0x10666ecu: goto R_010666ec;
        case 0x1066714u: goto R_01066714;
        case 0x1066724u: goto R_01066724;
        case 0x1066748u: goto R_01066748;
        case 0x10667a8u: goto R_010667a8;
        case 0x1066828u: goto R_01066828;
        case 0x1066890u: goto R_01066890;
        case 0x10668c8u: goto R_010668c8;
        case 0x10668dcu: goto R_010668dc;
        case 0x10668ecu: goto R_010668ec;
        case 0x1066910u: goto R_01066910;
        case 0x1066918u: goto R_01066918;
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
    c.lr = 0x10666c4u;
    f_801c83b4(c);
R_010666c4:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10666d8u;
    f_8006c450(c);
R_010666d8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010668e0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10666ecu;
    f_8006c460(c);
R_010666ec:
    c.r[27] = ((((g_mg442_bases[5] + 0x261e8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg442_bases[5] + 0x261e8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1066714u;
    f_801c7860(c);
R_01066714:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x1066724u;
    f_mg442_0100d7d0(c);
R_01066724:
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
    c.lr = 0x1066748u;
    f_mg442_0100d990(c);
R_01066748:
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
    if (!wp::cr_get(c, 2)) goto L_01066784;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01066788;
L_01066784:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01066788:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10667a8u;
    f_mg442_0100d990(c);
R_010667a8:
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
    if (!wp::cr_get(c, 2)) goto L_01066804;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01066808;
L_01066804:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01066808:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1066828u;
    f_mg442_0100d990(c);
R_01066828:
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
    if (!wp::cr_get(c, 2)) goto L_0106686c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01066870;
L_0106686c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01066870:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1066890u;
    f_mg442_0100d990(c);
R_01066890:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mg442_bases[5] + 0x273c0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x273c0u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_010668b0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010668b4;
L_010668b0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010668b4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10668c8u;
    wp::call(c, c.ctr);
R_010668c8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01066910;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10668dcu;
    f_801c7a8c(c);
R_010668dc:
    goto L_01066910;
L_010668e0:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10668ecu;
    f_8006c4e0(c);
R_010668ec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg442_bases[5] + 0x273c0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x273c0u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x1066910u;
    wp::call(c, c.ctr);
L_01066910:
R_01066910:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1066918u;
    f_801c8400(c);
R_01066918:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_01066930(wp::Cpu& c) {
    WP_ENTER(0x1066930u);
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

void f_mg442_01066950(wp::Cpu& c) {
    WP_ENTER(0x1066950u);
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

void f_mg442_01066970(wp::Cpu& c) {
    WP_ENTER(0x1066970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106699cu: goto R_0106699c;
        case 0x10669b4u: goto R_010669b4;
        case 0x10669c4u: goto R_010669c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mg442_bases[5] + 0x2739cu) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x2739cu) & 0xFFFFu);
    c.lr = 0x106699cu;
    f_mg442_0105eb90(c);
R_0106699c:
    c.r[5] = ((((g_mg442_bases[5] + 0x26218u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x26218u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10669b4u;
    f_801d34c4(c);
R_010669b4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10669c4u;
    f_mg442_01061ee0(c);
R_010669c4:
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

void f_mg442_010669e0(wp::Cpu& c) {
    WP_ENTER(0x10669e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066a18u: goto R_01066a18;
        case 0x1066a3cu: goto R_01066a3c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mg442_bases[5] + 0x261e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mg442_bases[5] + 0x261e0u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1066a18u;
    f_801d3590(c);
R_01066a18:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg442_bases[5] + 0x273a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x273a8u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x1066a3cu;
    wp::call(c, c.ctr);
R_01066a3c:
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

void f_mg442_01066a60(wp::Cpu& c) {
    WP_ENTER(0x1066a60u);
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

void f_mg442_01066a80(wp::Cpu& c) {
    WP_ENTER(0x1066a80u);
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

void f_mg442_01066aa0(wp::Cpu& c) {
    WP_ENTER(0x1066aa0u);
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

void f_mg442_01066ac0(wp::Cpu& c) {
    WP_ENTER(0x1066ac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066ae0u: goto R_01066ae0;
        case 0x1066ae8u: goto R_01066ae8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg442_bases[5] + 0x27384u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mg442_bases[5] + 0x27384u) & 0xFFFFu);
    c.lr = 0x1066ae0u;
    f_mg442_0105eb90(c);
R_01066ae0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1066ae8u;
    f_mg442_01060fe0(c);
R_01066ae8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01066b00(wp::Cpu& c) {
    WP_ENTER(0x1066b00u);
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

void f_mg442_01066b20(wp::Cpu& c) {
    WP_ENTER(0x1066b20u);
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

void f_mg442_01066b40(wp::Cpu& c) {
    WP_ENTER(0x1066b40u);
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

void f_mg442_01066b60(wp::Cpu& c) {
    WP_ENTER(0x1066b60u);
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

void f_mg442_01066b80(wp::Cpu& c) {
    WP_ENTER(0x1066b80u);
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

void f_mg442_01066ba0(wp::Cpu& c) {
    WP_ENTER(0x1066ba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg442_bases[4] + 0x2428u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[4] + 0x2428u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01066bd0;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066bd0;
    c.r[4] = 0x1u;
L_01066bd0:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mg442_01066be0(wp::Cpu& c) {
    WP_ENTER(0x1066be0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066c18u: goto R_01066c18;
        case 0x1066c30u: goto R_01066c30;
        case 0x1066c38u: goto R_01066c38;
        case 0x1066c64u: goto R_01066c64;
        case 0x1066c7cu: goto R_01066c7c;
        case 0x1066c84u: goto R_01066c84;
        case 0x1066cb0u: goto R_01066cb0;
        case 0x1066cc8u: goto R_01066cc8;
        case 0x1066cd0u: goto R_01066cd0;
        case 0x1066cfcu: goto R_01066cfc;
        case 0x1066d14u: goto R_01066d14;
        case 0x1066d1cu: goto R_01066d1c;
        case 0x1066d2cu: goto R_01066d2c;
        case 0x1066d44u: goto R_01066d44;
        case 0x1066d5cu: goto R_01066d5c;
        case 0x1066d74u: goto R_01066d74;
        case 0x1066d8cu: goto R_01066d8c;
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
    if (wp::cr_get(c, 2)) goto L_01066c38;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066c18u;
    wp::call(c, c.ctr);
R_01066c18:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066c30u;
    wp::call(c, c.ctr);
R_01066c30:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1066c38u;
    f_80019f20(c);
L_01066c38:
R_01066c38:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066d78;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066c84;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066c64u;
    wp::call(c, c.ctr);
R_01066c64:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066c7cu;
    wp::call(c, c.ctr);
R_01066c7c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1066c84u;
    f_80019f20(c);
L_01066c84:
R_01066c84:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066d60;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066cd0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066cb0u;
    wp::call(c, c.ctr);
R_01066cb0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066cc8u;
    wp::call(c, c.ctr);
R_01066cc8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1066cd0u;
    f_80019f20(c);
L_01066cd0:
R_01066cd0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066d48;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066d1c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066cfcu;
    wp::call(c, c.ctr);
R_01066cfc:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066d14u;
    wp::call(c, c.ctr);
R_01066d14:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1066d1cu;
    f_80019f20(c);
L_01066d1c:
R_01066d1c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01066d30;
    c.lr = 0x1066d2cu;
    f_mg442_01064700(c);
R_01066d2c:
    goto L_01066d8c;
L_01066d30:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066d44u;
    wp::call(c, c.ctr);
R_01066d44:
    goto L_01066d8c;
L_01066d48:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066d5cu;
    wp::call(c, c.ctr);
R_01066d5c:
    goto L_01066d8c;
L_01066d60:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066d74u;
    wp::call(c, c.ctr);
R_01066d74:
    goto L_01066d8c;
L_01066d78:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066d8cu;
    wp::call(c, c.ctr);
L_01066d8c:
R_01066d8c:
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

void f_mg442_01066db0(wp::Cpu& c) {
    WP_ENTER(0x1066db0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg442_bases[5] + 0x27430u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x27430u) & 0xFFFFu);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01066dd0(wp::Cpu& c) {
    WP_ENTER(0x1066dd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066de0u: goto R_01066de0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1066de0u;
    f_mg442_0105eb90(c);
R_01066de0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg442_01066e00(wp::Cpu& c) {
    WP_ENTER(0x1066e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg442_bases[5] + 0x27428u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x27428u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01066e30(wp::Cpu& c) {
    WP_ENTER(0x1066e30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg442_bases[5] + 0x27410u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x27410u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01066e60(wp::Cpu& c) {
    WP_ENTER(0x1066e60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg442_bases[5] + 0x27418u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x27418u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01066e90(wp::Cpu& c) {
    WP_ENTER(0x1066e90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[5] + 0x273f8u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x258u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x273f8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01066eb0(wp::Cpu& c) {
    WP_ENTER(0x1066eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg442_bases[5] + 0x27400u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x27400u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01066ee0(wp::Cpu& c) {
    WP_ENTER(0x1066ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg442_bases[5] + 0x273f0u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg442_bases[5] + 0x273f0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg442_01066f00(wp::Cpu& c) {
    WP_ENTER(0x1066f00u);
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

void f_mg442_01066f20(wp::Cpu& c) {
    WP_ENTER(0x1066f20u);
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

void f_mg442_01066f30(wp::Cpu& c) {
    WP_ENTER(0x1066f30u);
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

void f_mg442_01066f40(wp::Cpu& c) {
    WP_ENTER(0x1066f40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1066f74u: goto R_01066f74;
        case 0x1066f8cu: goto R_01066f8c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::cntlzw(c.r[4]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x220u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066f74u;
    wp::call(c, c.ctr);
R_01066f74:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x228u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1066f8cu;
    wp::call(c, c.ctr);
R_01066f8c:
    ea = c.r[30] + 0x168u;
    wp::wr8(ea, c.r[31]);
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

void f_mg442_01066fb0(wp::Cpu& c) {
    WP_ENTER(0x1066fb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15eu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg442_01066fc0(wp::Cpu& c) {
    WP_ENTER(0x1066fc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg442_01066fd0(wp::Cpu& c) {
    WP_ENTER(0x1066fd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x160u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x164u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg442_01066fe0(wp::Cpu& c) {
    WP_ENTER(0x1066fe0u);
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

void f_mg442_01067000(wp::Cpu& c) {
    WP_ENTER(0x1067000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1067044u: goto R_01067044;
        case 0x1067054u: goto R_01067054;
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
    if (wp::cr_get(c, 2)) goto L_01067054;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01067038;
    c.r[3] = ((((g_mg442_bases[6] + 0x9b4u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[6] + 0x9b4u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_01067038:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1067044u;
    f_8001bfe0(c);
R_01067044:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01067054;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1067054u;
    f_801c7a8c(c);
L_01067054:
R_01067054:
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

void f_mg442_01067070(wp::Cpu& c) {
    WP_ENTER(0x1067070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg442_01064130(c);
    return;
}

void f_mg442_01067080(wp::Cpu& c) {
    WP_ENTER(0x1067080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg442_01062370(c);
    return;
}

void f_mg442_01067090(wp::Cpu& c) {
    WP_ENTER(0x1067090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mg442_010670a0(wp::Cpu& c) {
    WP_ENTER(0x10670a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mg442_01067000(c);
    return;
}

void f_mg442_010670b0(wp::Cpu& c) {
    WP_ENTER(0x10670b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mg442_01064e70(c);
    return;
}

void f_mg442_010670c0(wp::Cpu& c) {
    WP_ENTER(0x10670c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mg442_01064e70(c);
    return;
}

void f_mg442_010670d0(wp::Cpu& c) {
    WP_ENTER(0x10670d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mg442_01064e70(c);
    return;
}

void f_mg442_010670e0(wp::Cpu& c) {
    WP_ENTER(0x10670e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mg442_01065b60(c);
    return;
}

void f_mg442_010670f0(wp::Cpu& c) {
    WP_ENTER(0x10670f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mg442_01064e70(c);
    return;
}

void f_mg442_01067100(wp::Cpu& c) {
    WP_ENTER(0x1067100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg442_01066600(c);
    return;
}

void f_mg442_01067110(wp::Cpu& c) {
    WP_ENTER(0x1067110u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg442_01065f60(c);
    return;
}

void f_mg442_01067120(wp::Cpu& c) {
    WP_ENTER(0x1067120u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1067140u: goto R_01067140;
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
    c.lr = 0x1067140u;
    f_8011bd40(c);
R_01067140:
    c.r[3] = ((((g_mg442_bases[4] + 0x2430u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg442_bases[5] + 0x274c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2430u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg442_bases[5] + 0x274c8u) & 0xFFFFu);
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

void f_mg442_01067180(wp::Cpu& c) {
    WP_ENTER(0x1067180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10671acu: goto R_010671ac;
        case 0x10671bcu: goto R_010671bc;
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
    if (wp::cr_get(c, 2)) goto L_010671bc;
    c.r[4] = 0x0u;
    c.lr = 0x10671acu;
    f_8011bd50(c);
R_010671ac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010671bc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10671bcu;
    f_801c7a8c(c);
L_010671bc:
R_010671bc:
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

void f_mg442_010671e0(wp::Cpu& c) {
    WP_ENTER(0x10671e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1067214u: goto R_01067214;
        case 0x10672ecu: goto R_010672ec;
        case 0x106746cu: goto R_0106746c;
        case 0x1067480u: goto R_01067480;
        case 0x10674e0u: goto R_010674e0;
        case 0x10674ecu: goto R_010674ec;
        case 0x1067514u: goto R_01067514;
        case 0x106752cu: goto R_0106752c;
        case 0x106754cu: goto R_0106754c;
        case 0x1067558u: goto R_01067558;
        case 0x1067580u: goto R_01067580;
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
    c.lr = 0x1067214u;
    f_801c83ac(c);
R_01067214:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mg442_bases[4] + 0x2430u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2430u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01067234;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_01067300;
    goto L_01067554;
L_01067234:
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
    if (wp::cr_get(c, 2)) goto L_010672b0;
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
L_010672b0:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010672ec;
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
    c.lr = 0x10672ecu;
    f_8011eeb0(c);
L_010672ec:
R_010672ec:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01067558;
L_01067300:
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
    if (!wp::cr_get(c, 2)) goto L_0106732c;
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
L_0106732c:
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
    c.lr = 0x106746cu;
    f_801225e0(c);
R_0106746c:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1067480u;
    f_801225e0(c);
R_01067480:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010674c0;
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
L_010674c0:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_010674d8;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_010674d8:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10674e0u;
    f_8011eaa0(c);
R_010674e0:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10674ecu;
    f_8011ea40(c);
R_010674ec:
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
    c.lr = 0x1067514u;
    f_80122d80(c);
R_01067514:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x106752cu;
    f_80122d80(c);
R_0106752c:
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
    c.lr = 0x106754cu;
    f_80121cf0(c);
R_0106754c:
    c.r[3] = 0x2u;
    goto L_01067558;
L_01067554:
    c.lr = 0x1067558u;
    f_8011bd90(c);
L_01067558:
R_01067558:
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
    c.lr = 0x1067580u;
    f_801c83f8(c);
R_01067580:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mg442_01067590(wp::Cpu& c) {
    WP_ENTER(0x1067590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10675acu: goto R_010675ac;
        case 0x1067730u: goto R_01067730;
        case 0x1067784u: goto R_01067784;
        case 0x10677a8u: goto R_010677a8;
        case 0x10677b4u: goto R_010677b4;
        case 0x10677c4u: goto R_010677c4;
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
    c.lr = 0x10675acu;
    f_801c83b0(c);
R_010675ac:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010675c8;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010675dc;
    goto L_010677b0;
L_010675c8:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010677b4;
L_010675dc:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mg442_bases[4] + 0x243cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mg442_bases[4] + 0x2440u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mg442_bases[4] + 0x243cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mg442_bases[4] + 0x2440u) & 0xFFFFu);
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
    c.lr = 0x1067730u;
    f_801225e0(c);
R_01067730:
    ea = c.r[26] + wp::sign_extend16((g_mg442_bases[4] + 0x2440u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01067740;
    goto L_01067744;
L_01067740:
    c.f[2] = c.f[1];
L_01067744:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01067754;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_0106775c;
L_01067754:
    c.r[3] = ((((g_mg442_bases[4] + 0x2440u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg442_bases[4] + 0x2440u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_0106775c:
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
    c.lr = 0x1067784u;
    f_8011e9e0(c);
R_01067784:
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
    c.lr = 0x10677a8u;
    f_80121cf0(c);
R_010677a8:
    c.r[3] = 0x2u;
    goto L_010677b4;
L_010677b0:
    c.lr = 0x10677b4u;
    f_8011bec0(c);
L_010677b4:
R_010677b4:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10677c4u;
    f_801c83fc(c);
R_010677c4:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg442_010677e0(wp::Cpu& c) {
    WP_ENTER(0x10677e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10677f4u: goto R_010677f4;
        case 0x1067824u: goto R_01067824;
        case 0x106793cu: goto R_0106793c;
        case 0x10679c4u: goto R_010679c4;
        case 0x10679d0u: goto R_010679d0;
        case 0x10679dcu: goto R_010679dc;
        case 0x1067af4u: goto R_01067af4;
        case 0x1067c3cu: goto R_01067c3c;
        case 0x1067c58u: goto R_01067c58;
        case 0x1067c60u: goto R_01067c60;
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
    c.lr = 0x10677f4u;
    f_801c83b4(c);
R_010677f4:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mg442_bases[4] + 0x2430u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg442_bases[4] + 0x2430u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_0106781c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010679d4;
    goto L_01067c58;
L_0106781c:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x1067824u;
    f_80132a30(c);
R_01067824:
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
    if (!wp::cr_get(c, 2)) goto L_0106793c;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x106793cu;
    f_8014b090(c);
L_0106793c:
R_0106793c:
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
    c.lr = 0x10679c4u;
    f_8012be60(c);
R_010679c4:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10679d0u;
    f_80132ab0(c);
R_010679d0:
    goto L_01067c58;
L_010679d4:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x10679dcu;
    f_80132a30(c);
R_010679dc:
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
    if (!wp::cr_get(c, 2)) goto L_01067af4;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x1067af4u;
    f_8014b090(c);
L_01067af4:
R_01067af4:
    c.r[5] = ((((g_mg442_bases[6] + 0x9b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[6] + 0x9b8u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01067b60;
    c.r[4] = ((((g_mg442_bases[6] + 0x9c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x9c0u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mg442_bases[6] + 0x9c0u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mg442_bases[6] + 0x9b8u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01067b60:
    c.r[26] = ((((g_mg442_bases[6] + 0x9c0u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg442_bases[6] + 0x9c0u) & 0xFFFFu);
L_01067b6c:
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
    c.lr = 0x1067c3cu;
    f_8012be60(c);
R_01067c3c:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01067b6c;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1067c58u;
    f_80132ab0(c);
L_01067c58:
R_01067c58:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x1067c60u;
    f_801c8400(c);
R_01067c60:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mg442_01067c70(wp::Cpu& c) {
    WP_ENTER(0x1067c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mg442_01067c80(wp::Cpu& c) {
    WP_ENTER(0x1067c80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

