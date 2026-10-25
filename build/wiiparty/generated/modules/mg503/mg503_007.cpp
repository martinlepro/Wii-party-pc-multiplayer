#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mg503_bases[17];
void f_800043c4(wp::Cpu& c);
void f_80004714(wp::Cpu& c);
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
void f_mg503_01000000(wp::Cpu& c);
void f_mg503_01004710(wp::Cpu& c);
void f_mg503_01014470(wp::Cpu& c);
void f_mg503_01048380(wp::Cpu& c);
void f_mg503_01052920(wp::Cpu& c);
void f_mg503_01052e80(wp::Cpu& c);
void f_mg503_01056590(wp::Cpu& c);
void f_mg503_0105bba0(wp::Cpu& c);
void f_mg503_0105ee70(wp::Cpu& c);
void f_mg503_0108b740(wp::Cpu& c);
void f_mg503_01091f10(wp::Cpu& c);
void f_mg503_01091f30(wp::Cpu& c);
void f_mg503_01091f50(wp::Cpu& c);
void f_mg503_01093298(wp::Cpu& c);
void f_mg503_01093454(wp::Cpu& c);
void f_mg503_0109362c(wp::Cpu& c);
void f_mg503_01093a40(wp::Cpu& c);
void f_mg503_01093c84(wp::Cpu& c);
void f_mg503_01093cd0(wp::Cpu& c);
void f_mg503_01093d00(wp::Cpu& c);
void f_mg503_01093d20(wp::Cpu& c);
void f_mg503_01093dc0(wp::Cpu& c);
void f_mg503_01093e30(wp::Cpu& c);
void f_mg503_01093f00(wp::Cpu& c);
void f_mg503_01094250(wp::Cpu& c);
void f_mg503_01094360(wp::Cpu& c);
void f_mg503_01094400(wp::Cpu& c);
void f_mg503_01094550(wp::Cpu& c);
void f_mg503_01094c60(wp::Cpu& c);
void f_mg503_01094da0(wp::Cpu& c);
void f_mg503_01094ea0(wp::Cpu& c);
void f_mg503_01094ee0(wp::Cpu& c);
void f_mg503_01094f20(wp::Cpu& c);
void f_mg503_01094fc0(wp::Cpu& c);
void f_mg503_01095130(wp::Cpu& c);
void f_mg503_010951a0(wp::Cpu& c);
void f_mg503_01095240(wp::Cpu& c);
void f_mg503_01095370(wp::Cpu& c);
void f_mg503_01095490(wp::Cpu& c);
void f_mg503_01095d40(wp::Cpu& c);
void f_mg503_01095db0(wp::Cpu& c);
void f_mg503_01095dc0(wp::Cpu& c);
void f_mg503_01095df0(wp::Cpu& c);
void f_mg503_01095e40(wp::Cpu& c);
void f_mg503_01095e60(wp::Cpu& c);
void f_mg503_01095e70(wp::Cpu& c);
void f_mg503_01095e90(wp::Cpu& c);
void f_mg503_01095ea0(wp::Cpu& c);
void f_mg503_01095eb0(wp::Cpu& c);
void f_mg503_01095ec0(wp::Cpu& c);
void f_mg503_01095f20(wp::Cpu& c);
void f_mg503_01095f70(wp::Cpu& c);
void f_mg503_01095fa0(wp::Cpu& c);
void f_mg503_01096020(wp::Cpu& c);
void f_mg503_01096030(wp::Cpu& c);
void f_mg503_01096040(wp::Cpu& c);
void f_mg503_01096050(wp::Cpu& c);
void f_mg503_01096060(wp::Cpu& c);
void f_mg503_01096070(wp::Cpu& c);
void f_mg503_01096080(wp::Cpu& c);
void f_mg503_01096090(wp::Cpu& c);
void f_mg503_010960a0(wp::Cpu& c);
void f_mg503_010960b0(wp::Cpu& c);
void f_mg503_010960c0(wp::Cpu& c);
void f_mg503_010960d0(wp::Cpu& c);
void f_mg503_010960e0(wp::Cpu& c);
void f_mg503_010960f0(wp::Cpu& c);
void f_mg503_01096100(wp::Cpu& c);
void f_mg503_01096240(wp::Cpu& c);
void f_mg503_01096360(wp::Cpu& c);
void f_mg503_010964f0(wp::Cpu& c);
void f_mg503_01096560(wp::Cpu& c);
void f_mg503_01096570(wp::Cpu& c);
void f_mg503_01096620(wp::Cpu& c);
void f_mg503_010966d0(wp::Cpu& c);
void f_mg503_01096780(wp::Cpu& c);
void f_mg503_01096950(wp::Cpu& c);
void f_mg503_01096ae0(wp::Cpu& c);
void f_mg503_01096c70(wp::Cpu& c);
void f_mg503_01097400(wp::Cpu& c);
void f_mg503_01097b50(wp::Cpu& c);
void f_mg503_01098400(wp::Cpu& c);
void f_mg503_01098c70(wp::Cpu& c);
void f_mg503_01098c80(wp::Cpu& c);
void f_mg503_01098c90(wp::Cpu& c);
void f_mg503_01098ca0(wp::Cpu& c);
void f_mg503_01098cb0(wp::Cpu& c);
void f_mg503_01098da0(wp::Cpu& c);
void f_mg503_01098e00(wp::Cpu& c);
void f_mg503_01098ee0(wp::Cpu& c);
void f_mg503_01098fa0(wp::Cpu& c);
void f_mg503_01099080(wp::Cpu& c);
void f_mg503_01099100(wp::Cpu& c);
void f_mg503_01099470(wp::Cpu& c);
void f_mg503_010995a0(wp::Cpu& c);
void f_mg503_01099650(wp::Cpu& c);
void f_mg503_010996f0(wp::Cpu& c);
void f_mg503_01099800(wp::Cpu& c);
void f_mg503_01099850(wp::Cpu& c);
void f_mg503_010998a0(wp::Cpu& c);
void f_mg503_010998f0(wp::Cpu& c);
void f_mg503_01099be0(wp::Cpu& c);
void f_mg503_01099c70(wp::Cpu& c);
void f_mg503_01099cc0(wp::Cpu& c);
void f_mg503_01099d10(wp::Cpu& c);
void f_mg503_01099de0(wp::Cpu& c);
void f_mg503_01099fd0(wp::Cpu& c);
void f_mg503_0109a010(wp::Cpu& c);
void f_mg503_0109a070(wp::Cpu& c);
void f_mg503_0109a0e0(wp::Cpu& c);
void f_mg503_0109a350(wp::Cpu& c);
void f_mg503_0109a3b0(wp::Cpu& c);
void f_mg503_0109a5c0(wp::Cpu& c);
void f_mg503_0109a5d0(wp::Cpu& c);
void f_mg503_0109a600(wp::Cpu& c);
void f_mg503_0109a7d0(wp::Cpu& c);
void f_mg503_0109a7f0(wp::Cpu& c);
void f_mg503_0109a860(wp::Cpu& c);
void f_mg503_0109a8d0(wp::Cpu& c);
void f_mg503_0109a940(wp::Cpu& c);
void f_mg503_0109a9c0(wp::Cpu& c);
void f_mg503_0109aa30(wp::Cpu& c);
void f_mg503_0109acb0(wp::Cpu& c);
void f_mg503_0109ad90(wp::Cpu& c);
void f_mg503_0109ae90(wp::Cpu& c);
void f_mg503_0109af70(wp::Cpu& c);
void f_mg503_0109b050(wp::Cpu& c);
void f_mg503_0109b130(wp::Cpu& c);
void f_mg503_0109b210(wp::Cpu& c);
void f_mg503_0109b940(wp::Cpu& c);
void f_mg503_0109b950(wp::Cpu& c);
void f_mg503_0109b960(wp::Cpu& c);
void f_mg503_0109ba80(wp::Cpu& c);
void f_mg503_0109bac0(wp::Cpu& c);
void f_mg503_0109bae0(wp::Cpu& c);
void f_mg503_0109bb70(wp::Cpu& c);
void f_mg503_0109bc60(wp::Cpu& c);
void f_mg503_0109bd50(wp::Cpu& c);
void f_mg503_0109be90(wp::Cpu& c);
void f_mg503_0109bfd0(wp::Cpu& c);
void f_mg503_0109c0d0(wp::Cpu& c);
void f_mg503_0109c110(wp::Cpu& c);
void f_mg503_0109c300(wp::Cpu& c);
void f_mg503_0109c380(wp::Cpu& c);
void f_mg503_0109c400(wp::Cpu& c);
void f_mg503_0109c480(wp::Cpu& c);
void f_mg503_0109c770(wp::Cpu& c);
void f_mg503_0109c910(wp::Cpu& c);
void f_mg503_0109cab0(wp::Cpu& c);
void f_mg503_0109cbc0(wp::Cpu& c);
void f_mg503_0109ccc0(wp::Cpu& c);
void f_mg503_0109cdf0(wp::Cpu& c);
void f_mg503_0109cef0(wp::Cpu& c);
void f_mg503_0109cf00(wp::Cpu& c);
void f_mg503_0109d000(wp::Cpu& c);
void f_mg503_0109d010(wp::Cpu& c);
void f_mg503_0109d060(wp::Cpu& c);
void f_mg503_0109d200(wp::Cpu& c);
void f_mg503_0109d320(wp::Cpu& c);
void f_mg503_0109d3b0(wp::Cpu& c);
void f_mg503_0109d4f0(wp::Cpu& c);
void f_mg503_0109d600(wp::Cpu& c);
void f_mg503_0109d660(wp::Cpu& c);
void f_mg503_0109d8b0(wp::Cpu& c);
void f_mg503_0109e560(wp::Cpu& c);
void f_mg503_0109e8f0(wp::Cpu& c);
void f_mg503_0109e920(wp::Cpu& c);
void f_mg503_0109e9f0(wp::Cpu& c);
void f_mg503_0109eb90(wp::Cpu& c);
void f_mg503_0109eba0(wp::Cpu& c);
void f_mg503_0109ebb0(wp::Cpu& c);
void f_mg503_0109ec40(wp::Cpu& c);
void f_mg503_0109ed10(wp::Cpu& c);
void f_mg503_0109eda0(wp::Cpu& c);
void f_mg503_0109edb0(wp::Cpu& c);
void f_mg503_0109ee00(wp::Cpu& c);
void f_mg503_0109efc0(wp::Cpu& c);
void f_mg503_0109f180(wp::Cpu& c);
void f_mg503_0109f200(wp::Cpu& c);
void f_mg503_0109f270(wp::Cpu& c);
void f_mg503_0109f630(wp::Cpu& c);
void f_mg503_0109f760(wp::Cpu& c);
void f_mg503_0109f770(wp::Cpu& c);
void f_mg503_0109f860(wp::Cpu& c);
void f_mg503_0109f940(wp::Cpu& c);
void f_mg503_0109fa10(wp::Cpu& c);
void f_mg503_0109fb00(wp::Cpu& c);
void f_mg503_0109fbe0(wp::Cpu& c);
void f_mg503_0109fec0(wp::Cpu& c);
void f_mg503_0109ff90(wp::Cpu& c);
void f_mg503_010a0260(wp::Cpu& c);
void f_mg503_010a0340(wp::Cpu& c);
void f_mg503_010a0360(wp::Cpu& c);
void f_mg503_010a0480(wp::Cpu& c);
void f_mg503_010a0510(wp::Cpu& c);
void f_mg503_010a0590(wp::Cpu& c);
void f_mg503_010a06b0(wp::Cpu& c);
void f_mg503_010a07b0(wp::Cpu& c);
void f_mg503_010a0d30(wp::Cpu& c);
void f_mg503_010a0d40(wp::Cpu& c);
void f_mg503_010a0d70(wp::Cpu& c);
void f_mg503_010a0d80(wp::Cpu& c);
void f_mg503_010a0f50(wp::Cpu& c);
void f_mg503_010a1090(wp::Cpu& c);
void f_mg503_010a10a0(wp::Cpu& c);
void f_mg503_010a11f0(wp::Cpu& c);
void f_mg503_010a12b0(wp::Cpu& c);
void f_mg503_010a1380(wp::Cpu& c);
void f_mg503_010a13f0(wp::Cpu& c);
void f_mg503_010a1460(wp::Cpu& c);
void f_mg503_010a1480(wp::Cpu& c);
void f_mg503_010a14f0(wp::Cpu& c);
void f_mg503_010a15b0(wp::Cpu& c);
void f_mg503_010a1af0(wp::Cpu& c);
void f_mg503_010a1e90(wp::Cpu& c);
void f_mg503_010a1eb0(wp::Cpu& c);
void f_mg503_010a21c0(wp::Cpu& c);
void f_mg503_010a21d0(wp::Cpu& c);
void f_mg503_010a21e0(wp::Cpu& c);
void f_mg503_010a25e0(wp::Cpu& c);
void f_mg503_010a26f0(wp::Cpu& c);
void f_mg503_010a2770(wp::Cpu& c);
void f_mg503_010a27d0(wp::Cpu& c);
void f_mg503_010a2910(wp::Cpu& c);
void f_mg503_010a2920(wp::Cpu& c);
void f_mg503_010a2930(wp::Cpu& c);
void f_mg503_010a2940(wp::Cpu& c);
void f_mg503_010a2a00(wp::Cpu& c);
void f_mg503_010a2c80(wp::Cpu& c);
void f_mg503_010a2cb0(wp::Cpu& c);
void f_mg503_010a2cd0(wp::Cpu& c);
void f_mg503_010a2d30(wp::Cpu& c);
void f_mg503_010a2fb0(wp::Cpu& c);
void f_mg503_010a2fd0(wp::Cpu& c);
void f_mg503_010a2ff0(wp::Cpu& c);
void f_mg503_010a3060(wp::Cpu& c);
void f_mg503_010a30e0(wp::Cpu& c);
void f_mg503_010a3100(wp::Cpu& c);
void f_mg503_010a3120(wp::Cpu& c);
void f_mg503_010a3140(wp::Cpu& c);
void f_mg503_010a3180(wp::Cpu& c);
void f_mg503_010a31a0(wp::Cpu& c);
void f_mg503_010a31c0(wp::Cpu& c);
void f_mg503_010a31e0(wp::Cpu& c);
void f_mg503_010a3200(wp::Cpu& c);
void f_mg503_010a3220(wp::Cpu& c);
void f_mg503_010a3260(wp::Cpu& c);
void f_mg503_010a3430(wp::Cpu& c);
void f_mg503_010a3450(wp::Cpu& c);
void f_mg503_010a3480(wp::Cpu& c);
void f_mg503_010a34b0(wp::Cpu& c);
void f_mg503_010a34e0(wp::Cpu& c);
void f_mg503_010a3510(wp::Cpu& c);
void f_mg503_010a3530(wp::Cpu& c);
void f_mg503_010a3560(wp::Cpu& c);
void f_mg503_010a3580(wp::Cpu& c);
void f_mg503_010a35a0(wp::Cpu& c);
void f_mg503_010a35b0(wp::Cpu& c);
void f_mg503_010a35c0(wp::Cpu& c);
void f_mg503_010a3630(wp::Cpu& c);
void f_mg503_010a3640(wp::Cpu& c);
void f_mg503_010a3650(wp::Cpu& c);
void f_mg503_010a3660(wp::Cpu& c);
void f_mg503_010a3680(wp::Cpu& c);
void f_mg503_010a36f0(wp::Cpu& c);
void f_mg503_010a3700(wp::Cpu& c);
void f_mg503_010a3710(wp::Cpu& c);
void f_mg503_010a3720(wp::Cpu& c);
void f_mg503_010a3730(wp::Cpu& c);
void f_mg503_010a3740(wp::Cpu& c);
void f_mg503_010a3750(wp::Cpu& c);
void f_mg503_010a3760(wp::Cpu& c);
void f_mg503_010a3770(wp::Cpu& c);
void f_mg503_010a3780(wp::Cpu& c);
void f_mg503_010a3790(wp::Cpu& c);
void f_mg503_010a37a0(wp::Cpu& c);
void f_mg503_010a3800(wp::Cpu& c);
void f_mg503_010a3860(wp::Cpu& c);
void f_mg503_010a3c10(wp::Cpu& c);
void f_mg503_010a3e60(wp::Cpu& c);
void f_mg503_010a42f0(wp::Cpu& c);
void f_mg503_010a4300(wp::Cpu& c);

void f_mg503_01093298(wp::Cpu& c) {
    WP_ENTER(0x1093298u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10932e0u: goto R_010932e0;
        case 0x1093320u: goto R_01093320;
        case 0x1093328u: goto R_01093328;
        case 0x1093388u: goto R_01093388;
        case 0x10933ccu: goto R_010933cc;
        case 0x1093430u: goto R_01093430;
        default: wp::bad_resume(c);
        }
    }
    wp::compare_signed(c, 0, c.r[8], 0x2710u);
    c.r[14] = 0x0u;
    if (wp::cr_get(c, 0)) goto L_010932ac;
    c.r[14] = 0x4u;
    goto L_010932d8;
L_010932ac:
    wp::compare_signed(c, 0, c.r[8], 0x3e8u);
    if (wp::cr_get(c, 0)) goto L_010932bc;
    c.r[14] = 0x3u;
    goto L_010932d8;
L_010932bc:
    wp::compare_signed(c, 0, c.r[8], 0x64u);
    if (wp::cr_get(c, 0)) goto L_010932cc;
    c.r[14] = 0x2u;
    goto L_010932d8;
L_010932cc:
    wp::compare_signed(c, 0, c.r[8], 0xau);
    if (wp::cr_get(c, 0)) goto L_010932d8;
    c.r[14] = 0x1u;
L_010932d8:
    c.r[3] = 0x164u;
    c.lr = 0x10932e0u;
    f_801c79a4(c);
R_010932e0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01093324;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg503_bases[5] + 0x28f30u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x28f30u) & 0xFFFFu);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1093320u;
    f_mg503_01093f00(c);
R_01093320:
    c.r[28] = c.r[3] | c.r[3];
L_01093324:
    c.lr = 0x1093328u;
    f_800476a0(c);
R_01093328:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010933cc;
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01093340;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_0109338c;
L_01093340:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2de8u;
    c.r[0] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01093364;
    wp::compare_signed(c, 0, c.r[24], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01093364;
    c.r[0] = 0x1u;
L_01093364:
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
    c.lr = 0x1093388u;
    wp::call(c, c.ctr);
R_01093388:
    goto L_010933cc;
L_0109338c:
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
    c.lr = 0x10933ccu;
    wp::call(c, c.ctr);
L_010933cc:
R_010933cc:
    c.r[3] = 0x66660000u;
    c.r[15] = ((((g_mg503_bases[5] + 0x28f80u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xbf0u;
    c.f[31] = wp::rdf64(ea);
    c.r[15] = c.r[15] + wp::sign_extend16((g_mg503_bases[5] + 0x28f80u) & 0xFFFFu);
    c.r[14] = c.r[3] + 0x6667u;
    c.r[16] = 0x0u;
L_010933e4:
    c.r[0] = wp::mulhw(c.r[14], c.r[24]);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[24] - c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 1)) goto L_01093408;
    c.r[0] = 0x9u;
L_01093408:
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
    c.lr = 0x1093430u;
    wp::call(c, c.ctr);
R_01093430:
    c.r[0] = wp::mulhw(c.r[14], c.r[24]);
    c.r[16] = c.r[16] + 0x1u;
    c.r[15] = c.r[15] + 0x4u;
    wp::compare_signed(c, 0, c.r[16], 0x5u);
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[24] = c.r[0] + c.r[3];
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010933e4;
    }
    f_mg503_01093cd0(c);
    return;
}

void f_mg503_01093454(wp::Cpu& c) {
    WP_ENTER(0x1093454u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109345cu: goto R_0109345c;
        case 0x1093494u: goto R_01093494;
        case 0x1093534u: goto R_01093534;
        case 0x1093578u: goto R_01093578;
        case 0x10935c4u: goto R_010935c4;
        case 0x1093628u: goto R_01093628;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x109345cu;
    f_801c79a4(c);
R_0109345c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01093498;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg503_bases[5] + 0x28fc0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x28fc0u) & 0xFFFFu);
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1093494u;
    f_mg503_01093f00(c);
R_01093494:
    c.r[28] = c.r[3] | c.r[3];
L_01093498:
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
    c.lr = 0x1093534u;
    wp::call(c, c.ctr);
R_01093534:
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
    c.lr = 0x1093578u;
    wp::call(c, c.ctr);
R_01093578:
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
    c.lr = 0x10935c4u;
    wp::call(c, c.ctr);
R_010935c4:
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
    c.lr = 0x1093628u;
    wp::call(c, c.ctr);
R_01093628:
    f_mg503_01093cd0(c);
    return;
}

void f_mg503_0109362c(wp::Cpu& c) {
    WP_ENTER(0x109362cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109365cu: goto R_0109365c;
        case 0x109369cu: goto R_0109369c;
        case 0x1093708u: goto R_01093708;
        case 0x1093754u: goto R_01093754;
        case 0x10937a8u: goto R_010937a8;
        case 0x10937c0u: goto R_010937c0;
        case 0x10937c8u: goto R_010937c8;
        case 0x10937e0u: goto R_010937e0;
        case 0x10937e4u: goto R_010937e4;
        case 0x10937f0u: goto R_010937f0;
        case 0x1093808u: goto R_01093808;
        case 0x109380cu: goto R_0109380c;
        case 0x1093818u: goto R_01093818;
        case 0x1093820u: goto R_01093820;
        case 0x1093858u: goto R_01093858;
        case 0x1093860u: goto R_01093860;
        case 0x1093890u: goto R_01093890;
        case 0x1093898u: goto R_01093898;
        case 0x1093948u: goto R_01093948;
        case 0x109398cu: goto R_0109398c;
        case 0x10939d8u: goto R_010939d8;
        case 0x1093a3cu: goto R_01093a3c;
        default: wp::bad_resume(c);
        }
    }
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01093640;
    c.r[14] = 0x2u;
    c.r[24] = 0x1u;
    goto L_01093654;
L_01093640:
    c.r[0] = c.r[10] ^ c.r[8];
    c.r[3] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[0] & c.r[10];
    c.r[0] = c.r[3] - c.r[0];
    c.r[14] = wp::rotl(c.r[0], 1) & 0x1u;
L_01093654:
    c.r[3] = 0x174u;
    c.lr = 0x109365cu;
    f_801c79a4(c);
R_0109365c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010936a0;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg503_bases[5] + 0x29070u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x29070u) & 0xFFFFu);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x109369cu;
    f_mg503_01094550(c);
R_0109369c:
    c.r[28] = c.r[3] | c.r[3];
L_010936a0:
    wp::compare_signed(c, 0, c.r[24], 0xau);
    if (wp::cr_get(c, 0)) goto L_01093758;
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
    c.lr = 0x1093708u;
    wp::call(c, c.ctr);
R_01093708:
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
    c.lr = 0x1093754u;
    wp::call(c, c.ctr);
R_01093754:
    goto L_01093860;
L_01093758:
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
    c.lr = 0x10937a8u;
    wp::call(c, c.ctr);
R_010937a8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10937c0u;
    wp::call(c, c.ctr);
R_010937c0:
    c.r[4] = 0x0u;
    c.lr = 0x10937c8u;
    f_mg503_01091f10(c);
R_010937c8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2df0u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10937e0u;
    wp::call(c, c.ctr);
R_010937e0:
    c.lr = 0x10937e4u;
    f_mg503_0105bba0(c);
R_010937e4:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x10937f0u;
    f_mg503_01091f30(c);
R_010937f0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1093808u;
    wp::call(c, c.ctr);
R_01093808:
    c.lr = 0x109380cu;
    f_mg503_0105bba0(c);
R_0109380c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x3cu;
    c.lr = 0x1093818u;
    f_mg503_01091f30(c);
R_01093818:
    c.r[3] = c.r[1] + 0x30u;
    c.lr = 0x1093820u;
    f_mg503_01014470(c);
R_01093820:
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
    c.lr = 0x1093858u;
    wp::call(c, c.ctr);
R_01093858:
    c.r[4] = c.r[1] + 0x48u;
    c.lr = 0x1093860u;
    f_mg503_01091f50(c);
L_01093860:
R_01093860:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010938ac;
    c.r[14] = ((((g_mg503_bases[5] + 0x290c0u) + 0x8000u) >> 16) << 16);
    c.r[15] = 0x0u;
    c.r[14] = c.r[14] + wp::sign_extend16((g_mg503_bases[5] + 0x290c0u) & 0xFFFFu);
L_01093878:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[14] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1093890u;
    wp::call(c, c.ctr);
R_01093890:
    c.r[4] = 0x0u;
    c.lr = 0x1093898u;
    f_mg503_01091f10(c);
R_01093898:
    c.r[15] = c.r[15] + 0x1u;
    c.r[14] = c.r[14] + 0x4u;
    wp::compare_signed(c, 0, c.r[15], 0x7u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01093878;
    }
    f_mg503_01093cd0(c);
    return;
L_010938ac:
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
    c.lr = 0x1093948u;
    wp::call(c, c.ctr);
R_01093948:
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
    c.lr = 0x109398cu;
    wp::call(c, c.ctr);
R_0109398c:
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
    c.lr = 0x10939d8u;
    wp::call(c, c.ctr);
R_010939d8:
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
    c.lr = 0x1093a3cu;
    wp::call(c, c.ctr);
R_01093a3c:
    f_mg503_01093cd0(c);
    return;
}

void f_mg503_01093a40(wp::Cpu& c) {
    WP_ENTER(0x1093a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1093a7cu: goto R_01093a7c;
        case 0x1093abcu: goto R_01093abc;
        case 0x1093b28u: goto R_01093b28;
        case 0x1093b74u: goto R_01093b74;
        case 0x1093bc8u: goto R_01093bc8;
        case 0x1093be0u: goto R_01093be0;
        case 0x1093be8u: goto R_01093be8;
        case 0x1093c00u: goto R_01093c00;
        case 0x1093c04u: goto R_01093c04;
        case 0x1093c10u: goto R_01093c10;
        case 0x1093c28u: goto R_01093c28;
        case 0x1093c2cu: goto R_01093c2c;
        case 0x1093c38u: goto R_01093c38;
        case 0x1093c40u: goto R_01093c40;
        case 0x1093c78u: goto R_01093c78;
        case 0x1093c80u: goto R_01093c80;
        default: wp::bad_resume(c);
        }
    }
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01093a50;
    wp::compare_signed(c, 0, c.r[8], c.r[9]);
    if (!wp::cr_get(c, 0)) goto L_01093a70;
L_01093a50:
    wp::compare_signed(c, 0, c.r[8], 0x1u);
    c.r[14] = 0x1u;
    if (!wp::cr_get(c, 0)) goto L_01093a60;
    c.r[24] = 0x1u;
L_01093a60:
    wp::compare_signed(c, 0, c.r[24], c.r[9]);
    if (!wp::cr_get(c, 0)) goto L_01093a74;
    c.r[24] = c.r[25] | c.r[25];
    goto L_01093a74;
L_01093a70:
    c.r[14] = 0x0u;
L_01093a74:
    c.r[3] = 0x164u;
    c.lr = 0x1093a7cu;
    f_801c79a4(c);
R_01093a7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01093ac0;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg503_bases[5] + 0x29140u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x29140u) & 0xFFFFu);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + c.r[0];
    c.r[7] = 0x2u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1093abcu;
    f_mg503_01093f00(c);
R_01093abc:
    c.r[28] = c.r[3] | c.r[3];
L_01093ac0:
    wp::compare_signed(c, 0, c.r[24], 0xau);
    if (wp::cr_get(c, 0)) goto L_01093b78;
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
    c.lr = 0x1093b28u;
    wp::call(c, c.ctr);
R_01093b28:
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
    c.lr = 0x1093b74u;
    wp::call(c, c.ctr);
R_01093b74:
    f_mg503_01093cd0(c);
    return;
L_01093b78:
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
    c.lr = 0x1093bc8u;
    wp::call(c, c.ctr);
R_01093bc8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1093be0u;
    wp::call(c, c.ctr);
R_01093be0:
    c.r[4] = 0x0u;
    c.lr = 0x1093be8u;
    f_mg503_01091f10(c);
R_01093be8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2df0u;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1093c00u;
    wp::call(c, c.ctr);
R_01093c00:
    c.lr = 0x1093c04u;
    f_mg503_0105bba0(c);
R_01093c04:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.lr = 0x1093c10u;
    f_mg503_01091f30(c);
R_01093c10:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x2dfcu;
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1093c28u;
    wp::call(c, c.ctr);
R_01093c28:
    c.lr = 0x1093c2cu;
    f_mg503_0105bba0(c);
R_01093c2c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x1093c38u;
    f_mg503_01091f30(c);
R_01093c38:
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x1093c40u;
    f_mg503_01014470(c);
R_01093c40:
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
    c.lr = 0x1093c78u;
    wp::call(c, c.ctr);
R_01093c78:
    c.r[4] = c.r[1] + 0x24u;
    c.lr = 0x1093c80u;
    f_mg503_01091f50(c);
R_01093c80:
    f_mg503_01093cd0(c);
    return;
}

void f_mg503_01093c84(wp::Cpu& c) {
    WP_ENTER(0x1093c84u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1093c8cu: goto R_01093c8c;
        case 0x1093cccu: goto R_01093ccc;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x164u;
    c.lr = 0x1093c8cu;
    f_801c79a4(c);
R_01093c8c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01093ccc;
    c.r[0] = c.r[21] + 0xffffff69u;
    c.r[4] = c.r[1] + 0xc0u;
    c.r[0] = c.r[0] * 0xcu;
    c.r[5] = c.r[1] + 0xc4u;
    c.r[6] = ((((g_mg503_bases[5] + 0x29294u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + c.r[29];
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + c.r[29];
    c.r[5] = wp::rd32(ea);
    c.r[10] = c.r[22] | c.r[22];
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x29294u) & 0xFFFFu);
    c.r[7] = 0x3u;
    c.r[6] = c.r[6] + c.r[0];
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1093cccu;
    f_mg503_01093f00(c);
L_01093ccc:
R_01093ccc:
    c.r[28] = c.r[3] | c.r[3];
    f_mg503_01093cd0(c);
}

void f_mg503_01093cd0(wp::Cpu& c) {
    WP_ENTER(0x1093cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1093ce4u: goto R_01093ce4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0x448u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x440u;
    c.f[31] = wp::rdf64(ea);
    c.r[11] = c.r[1] + 0x440u;
    c.lr = 0x1093ce4u;
    f_801c83d0(c);
R_01093ce4:
    ea = c.r[1] + 0x454u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x450u;
    return;
}

void f_mg503_01093d00(wp::Cpu& c) {
    WP_ENTER(0x1093d00u);
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

void f_mg503_01093d20(wp::Cpu& c) {
    WP_ENTER(0x1093d20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1093d48u: goto R_01093d48;
        case 0x1093d5cu: goto R_01093d5c;
        case 0x1093d94u: goto R_01093d94;
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
    c.lr = 0x1093d48u;
    f_mg503_01098cb0(c);
R_01093d48:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[29] + 0x144u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x1093d5cu;
    f_80063370(c);
R_01093d5c:
    c.r[3] = ((((g_mg503_bases[5] + 0x29b78u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x29b78u) & 0xFFFFu);
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
    c.lr = 0x1093d94u;
    wp::call(c, c.ctr);
R_01093d94:
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

void f_mg503_01093dc0(wp::Cpu& c) {
    WP_ENTER(0x1093dc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1093df0u: goto R_01093df0;
        case 0x1093dfcu: goto R_01093dfc;
        case 0x1093e0cu: goto R_01093e0c;
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
    if (wp::cr_get(c, 2)) goto L_01093e0c;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x144u;
    c.lr = 0x1093df0u;
    f_80063bb0(c);
R_01093df0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1093dfcu;
    f_mg503_01098fa0(c);
R_01093dfc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01093e0c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1093e0cu;
    f_801c7a8c(c);
L_01093e0c:
R_01093e0c:
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

void f_mg503_01093e30(wp::Cpu& c) {
    WP_ENTER(0x1093e30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1093e78u: goto R_01093e78;
        case 0x1093e94u: goto R_01093e94;
        case 0x1093eecu: goto R_01093eec;
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
    if (!wp::cr_get(c, 0)) goto L_01093eec;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01093e80;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1093e78u;
    wp::call(c, c.ctr);
R_01093e78:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01093eec;
L_01093e80:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1093e94u;
    wp::call(c, c.ctr);
R_01093e94:
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
    if (wp::cr_get(c, 2)) goto L_01093ecc;
    ea = c.r[31] + 0x158u;
    c.r[7] = wp::rd32(ea);
    c.r[0] = c.r[7] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01093ecc;
    c.r[6] = 0x1u;
L_01093ecc:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    c.r[7] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[7] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1093eecu;
    wp::call(c, c.ctr);
L_01093eec:
R_01093eec:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01093f00(wp::Cpu& c) {
    WP_ENTER(0x1093f00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1093f14u: goto R_01093f14;
        case 0x1093f30u: goto R_01093f30;
        case 0x1093f44u: goto R_01093f44;
        case 0x1093f8cu: goto R_01093f8c;
        case 0x1093ff0u: goto R_01093ff0;
        case 0x1093ff4u: goto R_01093ff4;
        case 0x109405cu: goto R_0109405c;
        case 0x1094060u: goto R_01094060;
        case 0x1094120u: goto R_01094120;
        case 0x1094124u: goto R_01094124;
        case 0x109412cu: goto R_0109412c;
        case 0x1094154u: goto R_01094154;
        case 0x1094158u: goto R_01094158;
        case 0x10941d4u: goto R_010941d4;
        case 0x10941e4u: goto R_010941e4;
        case 0x1094230u: goto R_01094230;
        case 0x109423cu: goto R_0109423c;
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
    c.lr = 0x1093f14u;
    f_801c83b4(c);
R_01093f14:
    c.r[28] = c.r[8] | c.r[8];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[7] | c.r[7];
    c.r[26] = c.r[9] | c.r[9];
    c.r[8] = c.r[10] | c.r[10];
    c.r[27] = c.r[3] | c.r[3];
    c.lr = 0x1093f30u;
    f_mg503_01098cb0(c);
R_01093f30:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[27] + 0x144u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x1093f44u;
    f_80063370(c);
R_01093f44:
    c.r[3] = ((((g_mg503_bases[5] + 0x29900u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x29900u) & 0xFFFFu);
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
    c.lr = 0x1093f8cu;
    wp::call(c, c.ctr);
R_01093f8c:
    c.r[6] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01093fc0;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    goto L_01094230;
L_01093fc0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01093ff4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1093ff0u;
    f_801cee24(c);
R_01093ff0:
    c.lr = 0x1093ff4u;
    f_801d3940(c);
L_01093ff4:
R_01093ff4:
    c.r[6] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[7] = 0x0u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_01094060;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109405cu;
    f_801cee24(c);
R_0109405c:
    c.lr = 0x1094060u;
    f_801d3940(c);
L_01094060:
R_01094060:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010940b0;
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
    if (!wp::cr_get(c, 0)) goto L_010940a4;
    c.r[3] = c.r[1] + 0x8u;
L_010940a4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[30] + c.r[0];
    goto L_010940f4;
L_010940b0:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010940ec;
    c.r[3] = c.r[30] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010940e0;
    c.r[3] = c.r[1] + 0x8u;
L_010940e0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[30] + c.r[0];
    goto L_010940f4;
L_010940ec:
    c.r[3] = 0x40000000u;
    c.r[27] = c.r[3] + 0xffffffffu;
L_010940f4:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01094124;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094120u;
    f_801cee24(c);
R_01094120:
    c.lr = 0x1094124u;
    f_801d3940(c);
L_01094124:
R_01094124:
    c.r[3] = wp::rotl(c.r[27], 2) & 0xfffffffcu;
    c.lr = 0x109412cu;
    f_801c79a4(c);
R_0109412c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01094158;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094154u;
    f_801cee24(c);
R_01094154:
    c.lr = 0x1094158u;
    f_801d3940(c);
L_01094158:
R_01094158:
    c.r[30] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[30] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    ea = c.r[30] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    c.lr = 0x10941d4u;
    f_800043c4(c);
R_010941d4:
    c.r[3] = c.r[26] | c.r[26];
    c.r[5] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x10941e4u;
    f_80004714(c);
R_010941e4:
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
    ea = c.r[30] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[30] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01094230;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094230;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1094230u;
    f_801c7a8c(c);
L_01094230:
R_01094230:
    c.r[11] = c.r[1] + 0x40u;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x109423cu;
    f_801c8400(c);
R_0109423c:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg503_01094250(wp::Cpu& c) {
    WP_ENTER(0x1094250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1094300u: goto R_01094300;
        case 0x1094318u: goto R_01094318;
        case 0x1094324u: goto R_01094324;
        case 0x1094334u: goto R_01094334;
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
    if (wp::cr_get(c, 2)) goto L_01094334;
    c.r[4] = ((((g_mg503_bases[5] + 0x29900u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29900u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x260u;
    ea = c.r[3] + 0x144u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[5] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = c.r[6] + c.r[0];
    goto L_010942ac;
L_010942a8:
    c.r[6] = c.r[6] + 0x4u;
L_010942ac:
    wp::compare_unsigned(c, 0, c.r[6], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010942c0;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010942a8;
    }
L_010942c0:
    wp::compare_unsigned(c, 0, c.r[6], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0109430c;
    c.r[4] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[6] | c.r[6];
    c.r[29] = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    c.lr = 0x1094300u;
    f_801cc76c(c);
R_01094300:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0109430c:
    c.r[3] = c.r[30] + 0x144u;
    c.r[4] = 0x0u;
    c.lr = 0x1094318u;
    f_80063bb0(c);
R_01094318:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1094324u;
    f_mg503_01098fa0(c);
R_01094324:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01094334;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1094334u;
    f_801c7a8c(c);
L_01094334:
R_01094334:
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

void f_mg503_01094360(wp::Cpu& c) {
    WP_ENTER(0x1094360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10943c4u: goto R_010943c4;
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
    if (wp::cr_get(c, 2)) goto L_01094384;
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010943e0;
L_01094384:
    ea = c.r[3] + 0x163u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010943e0;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x158u;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    ea = c.r[31] + 0x160u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[7] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10943c4u;
    wp::call(c, c.ctr);
R_010943c4:
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
L_010943e0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01094400(wp::Cpu& c) {
    WP_ENTER(0x1094400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1094454u: goto R_01094454;
        case 0x1094490u: goto R_01094490;
        case 0x10944c8u: goto R_010944c8;
        case 0x10944e4u: goto R_010944e4;
        case 0x109452cu: goto R_0109452c;
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
    if (wp::cr_get(c, 2)) goto L_01094494;
    ea = c.r[3] + 0x161u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094538;
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01094538;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] + 0xffffffffu;
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1094454u;
    wp::call(c, c.ctr);
R_01094454:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094538;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[7] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1094490u;
    wp::call(c, c.ctr);
R_01094490:
    goto L_01094538;
L_01094494:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01094538;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010944d0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10944c8u;
    wp::call(c, c.ctr);
R_010944c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094538;
L_010944d0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10944e4u;
    wp::call(c, c.ctr);
R_010944e4:
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01094530;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    c.r[6] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x109452cu;
    wp::call(c, c.ctr);
R_0109452c:
    goto L_01094538;
L_01094530:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x162u;
    wp::wr8(ea, c.r[0]);
L_01094538:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01094550(wp::Cpu& c) {
    WP_ENTER(0x1094550u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1094564u: goto R_01094564;
        case 0x1094588u: goto R_01094588;
        case 0x109459cu: goto R_0109459c;
        case 0x10945e4u: goto R_010945e4;
        case 0x1094648u: goto R_01094648;
        case 0x109464cu: goto R_0109464c;
        case 0x10946b4u: goto R_010946b4;
        case 0x10946b8u: goto R_010946b8;
        case 0x1094778u: goto R_01094778;
        case 0x109477cu: goto R_0109477c;
        case 0x1094784u: goto R_01094784;
        case 0x10947acu: goto R_010947ac;
        case 0x10947b0u: goto R_010947b0;
        case 0x109482cu: goto R_0109482c;
        case 0x109483cu: goto R_0109483c;
        case 0x1094888u: goto R_01094888;
        case 0x10948f4u: goto R_010948f4;
        case 0x10948f8u: goto R_010948f8;
        case 0x1094900u: goto R_01094900;
        case 0x1094928u: goto R_01094928;
        case 0x109492cu: goto R_0109492c;
        case 0x1094964u: goto R_01094964;
        case 0x1094974u: goto R_01094974;
        case 0x10949b8u: goto R_010949b8;
        case 0x1094a00u: goto R_01094a00;
        case 0x1094a50u: goto R_01094a50;
        case 0x1094a54u: goto R_01094a54;
        case 0x1094aa0u: goto R_01094aa0;
        case 0x1094aa4u: goto R_01094aa4;
        case 0x1094b44u: goto R_01094b44;
        case 0x1094b48u: goto R_01094b48;
        case 0x1094b50u: goto R_01094b50;
        case 0x1094b6cu: goto R_01094b6c;
        case 0x1094b70u: goto R_01094b70;
        case 0x1094bd0u: goto R_01094bd0;
        case 0x1094be0u: goto R_01094be0;
        case 0x1094c28u: goto R_01094c28;
        case 0x1094c4cu: goto R_01094c4c;
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
    c.lr = 0x1094564u;
    f_801c8388(c);
R_01094564:
    c.r[29] = c.r[6] | c.r[6];
    c.r[30] = c.r[7] | c.r[7];
    c.r[16] = c.r[8] | c.r[8];
    c.r[28] = c.r[3] | c.r[3];
    c.r[15] = c.r[9] | c.r[9];
    c.r[8] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x1094588u;
    f_mg503_01098cb0(c);
R_01094588:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[28] + 0x144u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x109459cu;
    f_80063370(c);
R_0109459c:
    c.r[3] = ((((g_mg503_bases[5] + 0x29900u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x29900u) & 0xFFFFu);
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
    c.lr = 0x10945e4u;
    wp::call(c, c.ctr);
R_010945e4:
    c.r[6] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01094618;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[28]);
    goto L_01094888;
L_01094618:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0109464c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094648u;
    f_801cee24(c);
R_01094648:
    c.lr = 0x109464cu;
    f_801d3940(c);
L_0109464c:
R_0109464c:
    c.r[6] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[7] = 0x0u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_010946b8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10946b4u;
    f_801cee24(c);
R_010946b4:
    c.lr = 0x10946b8u;
    f_801d3940(c);
L_010946b8:
R_010946b8:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[18], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01094708;
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
    if (!wp::cr_get(c, 0)) goto L_010946fc;
    c.r[3] = c.r[1] + 0x1cu;
L_010946fc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[15] = c.r[18] + c.r[0];
    goto L_0109474c;
L_01094708:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[18], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01094744;
    c.r[3] = c.r[18] + 0x1u;
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x18u;
    if (!wp::cr_get(c, 0)) goto L_01094738;
    c.r[3] = c.r[1] + 0x1cu;
L_01094738:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[15] = c.r[18] + c.r[0];
    goto L_0109474c;
L_01094744:
    c.r[3] = 0x40000000u;
    c.r[15] = c.r[3] + 0xffffffffu;
L_0109474c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[15], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0109477c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094778u;
    f_801cee24(c);
R_01094778:
    c.lr = 0x109477cu;
    f_801d3940(c);
L_0109477c:
R_0109477c:
    c.r[3] = wp::rotl(c.r[15], 2) & 0xfffffffcu;
    c.lr = 0x1094784u;
    f_801c79a4(c);
R_01094784:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[16] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010947b0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10947acu;
    f_801cee24(c);
R_010947ac:
    c.lr = 0x10947b0u;
    f_801d3940(c);
L_010947b0:
R_010947b0:
    c.r[19] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.r[18] = c.r[19] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    ea = c.r[19] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    c.lr = 0x109482cu;
    f_800043c4(c);
R_0109482c:
    c.r[3] = c.r[15] | c.r[15];
    c.r[5] = c.r[17] | c.r[17];
    c.r[4] = 0x0u;
    c.lr = 0x109483cu;
    f_80004714(c);
R_0109483c:
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
    ea = c.r[19] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[18] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[19] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[18] + 0x4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01094888;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094888;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1094888u;
    f_801c7a8c(c);
L_01094888:
R_01094888:
    c.r[4] = 0x0u;
    c.r[5] = ((((g_mg503_bases[5] + 0x29688u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x29688u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_010949b8;
    c.r[3] = 0x40000000u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_010948f8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10948f4u;
    f_801cee24(c);
R_010948f4:
    c.lr = 0x10948f8u;
    f_801d3940(c);
L_010948f8:
R_010948f8:
    c.r[3] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.lr = 0x1094900u;
    f_801c79a4(c);
R_01094900:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[16] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0109492c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094928u;
    f_801cee24(c);
R_01094928:
    c.lr = 0x109492cu;
    f_801d3940(c);
L_0109492c:
R_0109492c:
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
    c.lr = 0x1094964u;
    f_800043c4(c);
R_01094964:
    c.r[3] = c.r[17] | c.r[17];
    c.r[5] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.lr = 0x1094974u;
    f_80004714(c);
R_01094974:
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
    if (wp::cr_get(c, 2)) goto L_010949b8;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10949b8u;
    f_801c7a8c(c);
L_010949b8:
R_010949b8:
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[17] = c.r[1] + 0x2cu;
    c.r[21] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[31] = 0x0u;
    c.r[25] = 0xcccd0000u;
    c.r[20] = ((((g_mg503_bases[5] + 0x265a4u) + 0x8000u) >> 16) << 16);
    c.r[19] = 0x40000000u;
    c.r[22] = 0x0u;
    c.r[24] = 0x15550000u;
    c.r[26] = 0x2aab0000u;
    c.r[27] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    goto L_01094c30;
L_010949e8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x78u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1094a00u;
    wp::call(c, c.ctr);
R_01094a00:
    ea = c.r[28] + 0x168u;
    c.r[5] = wp::rd32(ea);
    c.r[18] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x16cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01094a30;
    c.r[5] = c.r[5] + 0x1u;
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[28] + 0x168u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + c.r[0];
    ea = c.r[4] + 0xfffffffcu;
    wp::wr32(ea, c.r[3]);
    goto L_01094c28;
L_01094a30:
    c.r[0] = c.r[19] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01094a54;
    c.r[4] = c.r[20] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094a50u;
    f_801cee24(c);
R_01094a50:
    c.lr = 0x1094a54u;
    f_801d3940(c);
L_01094a54:
R_01094a54:
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
    if (!wp::cr_get(c, 1)) goto L_01094aa4;
    c.r[4] = c.r[20] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094aa0u;
    f_801cee24(c);
R_01094aa0:
    c.lr = 0x1094aa4u;
    f_801d3940(c);
L_01094aa4:
R_01094aa4:
    c.r[0] = c.r[24] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01094aec;
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
    if (!wp::cr_get(c, 0)) goto L_01094ae0;
    c.r[3] = c.r[1] + 0x8u;
L_01094ae0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[16] = c.r[23] + c.r[0];
    goto L_01094b28;
L_01094aec:
    c.r[0] = c.r[26] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01094b24;
    c.r[3] = c.r[23] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01094b18;
    c.r[3] = c.r[1] + 0x8u;
L_01094b18:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[16] = c.r[23] + c.r[0];
    goto L_01094b28;
L_01094b24:
    c.r[16] = c.r[19] + 0xffffffffu;
L_01094b28:
    c.r[0] = c.r[19] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[16], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01094b48;
    c.r[4] = c.r[20] + wp::sign_extend16((g_mg503_bases[5] + 0x265a4u) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094b44u;
    f_801cee24(c);
R_01094b44:
    c.lr = 0x1094b48u;
    f_801d3940(c);
L_01094b48:
R_01094b48:
    c.r[3] = wp::rotl(c.r[16], 2) & 0xfffffffcu;
    c.lr = 0x1094b50u;
    f_801c79a4(c);
R_01094b50:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01094b70;
    c.r[3] = c.r[21] + 0xa0u;
    c.r[4] = c.r[27] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1094b6cu;
    f_801cee24(c);
R_01094b6c:
    c.lr = 0x1094b70u;
    f_801d3940(c);
L_01094b70:
R_01094b70:
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
    c.lr = 0x1094bd0u;
    f_800043c4(c);
R_01094bd0:
    c.r[3] = c.r[16] | c.r[16];
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x1094be0u;
    f_80004714(c);
R_01094be0:
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
    if (wp::cr_get(c, 2)) goto L_01094c28;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094c28;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[22]);
    c.lr = 0x1094c28u;
    f_801c7a8c(c);
L_01094c28:
R_01094c28:
    c.r[29] = c.r[29] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_01094c30:
    wp::compare_signed(c, 0, c.r[31], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010949e8;
    }
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd32(ea);
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[28] + 0x158u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1094c4cu;
    f_801c83d4(c);
R_01094c4c:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_01094c60(wp::Cpu& c) {
    WP_ENTER(0x1094c60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1094cb8u: goto R_01094cb8;
        case 0x1094d44u: goto R_01094d44;
        case 0x1094d5cu: goto R_01094d5c;
        case 0x1094d68u: goto R_01094d68;
        case 0x1094d78u: goto R_01094d78;
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
    if (wp::cr_get(c, 2)) goto L_01094d78;
    c.r[4] = wp::add_carry(c, c.r[3], 0x164u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01094cb8;
    if (wp::cr_get(c, 2)) goto L_01094cb8;
    if (wp::cr_get(c, 2)) goto L_01094cb8;
    if (wp::cr_get(c, 2)) goto L_01094cb8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094cb8;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1094cb8u;
    f_801c7a8c(c);
L_01094cb8:
R_01094cb8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01094d68;
    c.r[3] = ((((g_mg503_bases[5] + 0x29900u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x29900u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0x260u;
    ea = c.r[30] + 0x144u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = c.r[3] + c.r[0];
    goto L_01094cf4;
L_01094cf0:
    c.r[3] = c.r[3] + 0x4u;
L_01094cf4:
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01094d08;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01094cf0;
    }
L_01094d08:
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01094d50;
    c.r[4] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
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
    c.lr = 0x1094d44u;
    f_801cc76c(c);
R_01094d44:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01094d50:
    c.r[3] = c.r[30] + 0x144u;
    c.r[4] = 0x0u;
    c.lr = 0x1094d5cu;
    f_80063bb0(c);
R_01094d5c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1094d68u;
    f_mg503_01098fa0(c);
L_01094d68:
R_01094d68:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01094d78;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1094d78u;
    f_801c7a8c(c);
L_01094d78:
R_01094d78:
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

void f_mg503_01094da0(wp::Cpu& c) {
    WP_ENTER(0x1094da0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1094e18u: goto R_01094e18;
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
    if (wp::cr_get(c, 0)) goto L_01094e6c;
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01094e6c;
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
    c.lr = 0x1094e18u;
    wp::call(c, c.ctr);
R_01094e18:
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 0)) goto L_01094e50;
    c.f[31] = c.f[0];
    goto L_01094e64;
L_01094e50:
    ea = c.r[3] + 0x30u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_01094e64;
    c.f[31] = c.f[0];
L_01094e64:
    ea = c.r[3] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[28] + 0x170u;
    wp::wr32(ea, c.r[29]);
L_01094e6c:
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

void f_mg503_01094ea0(wp::Cpu& c) {
    WP_ENTER(0x1094ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01094eac;
    ea = c.r[3] + 0x170u;
    c.r[4] = wp::rd32(ea);
L_01094eac:
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01094ec0;
    c.r[3] = 0x1u;
    return;
L_01094ec0:
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

void f_mg503_01094ee0(wp::Cpu& c) {
    WP_ENTER(0x1094ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01094eec;
    ea = c.r[3] + 0x170u;
    c.r[4] = wp::rd32(ea);
L_01094eec:
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01094f00;
    c.r[3] = 0x1u;
    return;
L_01094f00:
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

void f_mg503_01094f20(wp::Cpu& c) {
    WP_ENTER(0x1094f20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1094f84u: goto R_01094f84;
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
    if (wp::cr_get(c, 2)) goto L_01094f44;
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_01094fa0;
L_01094f44:
    ea = c.r[3] + 0x163u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01094fa0;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x158u;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    ea = c.r[31] + 0x160u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[7] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1094f84u;
    wp::call(c, c.ctr);
R_01094f84:
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
L_01094fa0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01094fc0(wp::Cpu& c) {
    WP_ENTER(0x1094fc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1095014u: goto R_01095014;
        case 0x1095050u: goto R_01095050;
        case 0x1095088u: goto R_01095088;
        case 0x10950a4u: goto R_010950a4;
        case 0x10950ecu: goto R_010950ec;
        case 0x1095104u: goto R_01095104;
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
    if (wp::cr_get(c, 2)) goto L_01095054;
    ea = c.r[3] + 0x161u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095110;
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01095110;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] + 0xffffffffu;
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1095014u;
    wp::call(c, c.ctr);
R_01095014:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095110;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[7] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x1095050u;
    wp::call(c, c.ctr);
R_01095050:
    goto L_01095110;
L_01095054:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01095110;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01095090;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1095088u;
    wp::call(c, c.ctr);
R_01095088:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095110;
L_01095090:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10950a4u;
    wp::call(c, c.ctr);
R_010950a4:
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01095108;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    c.r[6] = ((((g_mg503_bases[4] + 0x22ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[4] + 0x22ecu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x10950ecu;
    wp::call(c, c.ctr);
R_010950ec:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1095104u;
    wp::call(c, c.ctr);
R_01095104:
    goto L_01095110;
L_01095108:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x162u;
    wp::wr8(ea, c.r[0]);
L_01095110:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01095130(wp::Cpu& c) {
    WP_ENTER(0x1095130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1095174u: goto R_01095174;
        case 0x1095184u: goto R_01095184;
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
    if (wp::cr_get(c, 2)) goto L_01095184;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095174;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1095174u;
    wp::call(c, c.ctr);
L_01095174:
R_01095174:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01095184;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1095184u;
    f_801c7a8c(c);
L_01095184:
R_01095184:
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

void f_mg503_010951a0(wp::Cpu& c) {
    WP_ENTER(0x10951a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10951e0u: goto R_010951e0;
        case 0x10951f8u: goto R_010951f8;
        case 0x1095204u: goto R_01095204;
        case 0x1095210u: goto R_01095210;
        case 0x1095220u: goto R_01095220;
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
    if (wp::cr_get(c, 2)) goto L_01095220;
    c.r[4] = ((((g_mg503_bases[5] + 0x29654u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29654u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x20u;
    ea = c.r[3] + 0x144u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10951e0u;
    f_8006dfe0(c);
R_010951e0:
    c.r[4] = ((((g_mg503_bases[1] + 0x95130u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] + 0x15cu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[1] + 0x95130u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.r[6] = 0x2u;
    c.lr = 0x10951f8u;
    f_801c8160(c);
R_010951f8:
    c.r[3] = c.r[30] + 0x144u;
    c.r[4] = 0x0u;
    c.lr = 0x1095204u;
    f_80063bb0(c);
R_01095204:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1095210u;
    f_80051600(c);
R_01095210:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01095220;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1095220u;
    f_801c7a8c(c);
L_01095220:
R_01095220:
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

void f_mg503_01095240(wp::Cpu& c) {
    WP_ENTER(0x1095240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10952e4u: goto R_010952e4;
        case 0x10952f4u: goto R_010952f4;
        case 0x1095304u: goto R_01095304;
        case 0x1095310u: goto R_01095310;
        case 0x109531cu: goto R_0109531c;
        case 0x1095350u: goto R_01095350;
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
    if (!wp::cr_get(c, 1)) goto L_01095284;
    ea = c.r[3] + 0x184u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x184u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[5]);
    if (wp::cr_get(c, 0)) goto L_01095350;
    c.r[0] = 0xffffffffu;
    ea = c.r[3] + 0x188u;
    wp::wr32(ea, c.r[0]);
L_01095284:
    ea = c.r[3] + 0x180u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01095350;
    ea = c.r[3] + 0x17cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = 0x43300000u;
    c.r[5] = ((((g_mg503_bases[4] + 0x2300u) + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[0] ^ 0x80000000u;
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x17cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[4] ^ 0x80000000u;
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x2300u) & 0xFFFFu);
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
    c.lr = 0x10952e4u;
    f_8014c120(c);
R_010952e4:
    c.f[1] = c.f[31];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[3] | c.r[3];
    c.lr = 0x10952f4u;
    f_8014c150(c);
R_010952f4:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[31] + 0x164u;
    c.r[5] = c.r[3] | c.r[3];
    c.lr = 0x1095304u;
    f_8014c0f0(c);
R_01095304:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x1095310u;
    f_80052250(c);
R_01095310:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x109531cu;
    f_80053d20(c);
R_0109531c:
    c.r[3] = ((((g_mg503_bases[4] + 0x22e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x22e8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_01095350;
    ea = c.r[31] + 0x18cu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = 0xffffffffu;
    ea = c.r[31] + 0x180u;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095350;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x1095350u;
    f_80052250(c);
L_01095350:
R_01095350:
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

void f_mg503_01095370(wp::Cpu& c) {
    WP_ENTER(0x1095370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10953d4u: goto R_010953d4;
        case 0x1095424u: goto R_01095424;
        case 0x1095454u: goto R_01095454;
        case 0x1095460u: goto R_01095460;
        case 0x1095470u: goto R_01095470;
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
    if (wp::cr_get(c, 2)) goto L_01095470;
    c.r[4] = ((((g_mg503_bases[5] + 0x29620u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x30u;
    c.r[31] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29620u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x10u;
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_010953d8;
L_010953b4:
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010953d4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10953d4u;
    wp::call(c, c.ctr);
L_010953d4:
R_010953d4:
    c.r[31] = c.r[31] + 0x4u;
L_010953d8:
    ea = c.r[29] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010953b4;
    }
    c.r[4] = wp::add_carry(c, c.r[29], 0x3cu, 0);
    wp::record(c, c.r[4]);
    c.r[0] = c.r[5] - c.r[5];
    ea = c.r[29] + 0x34u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01095424;
    if (wp::cr_get(c, 2)) goto L_01095424;
    if (wp::cr_get(c, 2)) goto L_01095424;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095424;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1095424u;
    f_801c7a8c(c);
L_01095424:
R_01095424:
    c.r[4] = wp::add_carry(c, c.r[29], 0x30u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01095454;
    if (wp::cr_get(c, 2)) goto L_01095454;
    if (wp::cr_get(c, 2)) goto L_01095454;
    if (wp::cr_get(c, 2)) goto L_01095454;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095454;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1095454u;
    f_801c7a8c(c);
L_01095454:
R_01095454:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1095460u;
    f_80063bb0(c);
R_01095460:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01095470;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1095470u;
    f_801c7a8c(c);
L_01095470:
R_01095470:
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

void f_mg503_01095490(wp::Cpu& c) {
    WP_ENTER(0x1095490u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109550cu: goto R_0109550c;
        case 0x10956acu: goto R_010956ac;
        case 0x10956bcu: goto R_010956bc;
        case 0x10956ccu: goto R_010956cc;
        case 0x10956d8u: goto R_010956d8;
        case 0x10956e4u: goto R_010956e4;
        case 0x10956f0u: goto R_010956f0;
        case 0x10956fcu: goto R_010956fc;
        case 0x1095708u: goto R_01095708;
        case 0x1095714u: goto R_01095714;
        case 0x1095720u: goto R_01095720;
        case 0x109572cu: goto R_0109572c;
        case 0x1095738u: goto R_01095738;
        case 0x1095744u: goto R_01095744;
        case 0x1095750u: goto R_01095750;
        case 0x109575cu: goto R_0109575c;
        case 0x1095768u: goto R_01095768;
        case 0x1095774u: goto R_01095774;
        case 0x1095780u: goto R_01095780;
        case 0x109578cu: goto R_0109578c;
        case 0x1095798u: goto R_01095798;
        case 0x10957a8u: goto R_010957a8;
        case 0x10957b0u: goto R_010957b0;
        case 0x1095818u: goto R_01095818;
        case 0x1095838u: goto R_01095838;
        case 0x1095858u: goto R_01095858;
        case 0x10958ecu: goto R_010958ec;
        case 0x1095900u: goto R_01095900;
        case 0x1095960u: goto R_01095960;
        case 0x1095964u: goto R_01095964;
        case 0x1095970u: goto R_01095970;
        case 0x1095a38u: goto R_01095a38;
        case 0x1095a60u: goto R_01095a60;
        case 0x1095a7cu: goto R_01095a7c;
        case 0x1095ad8u: goto R_01095ad8;
        case 0x1095b50u: goto R_01095b50;
        case 0x1095b64u: goto R_01095b64;
        case 0x1095bc4u: goto R_01095bc4;
        case 0x1095bc8u: goto R_01095bc8;
        case 0x1095bd4u: goto R_01095bd4;
        case 0x1095c90u: goto R_01095c90;
        case 0x1095d28u: goto R_01095d28;
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
    c.lr = 0x109550cu;
    f_801c83a0(c);
R_0109550c:
    c.r[5] = ((((g_mg503_bases[6] + 0x9deu) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_mg503_bases[4] + 0x1b00u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[6] + 0x9deu) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[23] = c.r[3] | c.r[3];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg503_bases[4] + 0x1b00u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01095694;
    c.r[4] = ((((g_mg503_bases[6] + 0x9e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xd34u;
    c.f[19] = wp::rdf32(ea);
    c.ps1[19] = c.f[19];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9e0u) & 0xFFFFu);
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
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0x9e0u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[6] + 0x9deu) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01095694:
    c.r[22] = ((((g_mg503_bases[6] + 0xb20u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mg503_bases[6] + 0xb20u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010957a4;
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10956acu;
    f_80071fe0(c);
R_010956ac:
    c.r[21] = ((((g_mg503_bases[6] + 0xad0u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[21] + wp::sign_extend16((g_mg503_bases[6] + 0xad0u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    c.lr = 0x10956bcu;
    f_80071fe0(c);
R_010956bc:
    c.r[21] = c.r[21] + wp::sign_extend16((g_mg503_bases[6] + 0xad0u) & 0xFFFFu);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[21] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.lr = 0x10956ccu;
    f_80071fe0(c);
R_010956cc:
    ea = c.r[21] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10956d8u;
    f_80071fe0(c);
R_010956d8:
    ea = c.r[21] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10956e4u;
    f_80071fe0(c);
R_010956e4:
    ea = c.r[21] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10956f0u;
    f_80071fe0(c);
R_010956f0:
    ea = c.r[21] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10956fcu;
    f_80071fe0(c);
R_010956fc:
    ea = c.r[21] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095708u;
    f_80071fe0(c);
R_01095708:
    ea = c.r[21] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095714u;
    f_80071fe0(c);
R_01095714:
    ea = c.r[21] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095720u;
    f_80071fe0(c);
R_01095720:
    ea = c.r[21] + 0x24u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x109572cu;
    f_80071fe0(c);
R_0109572c:
    ea = c.r[21] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095738u;
    f_80071fe0(c);
R_01095738:
    ea = c.r[21] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095744u;
    f_80071fe0(c);
R_01095744:
    ea = c.r[21] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095750u;
    f_80071fe0(c);
R_01095750:
    ea = c.r[21] + 0x34u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x109575cu;
    f_80071fe0(c);
R_0109575c:
    ea = c.r[21] + 0x38u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095768u;
    f_80071fe0(c);
R_01095768:
    ea = c.r[21] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095774u;
    f_80071fe0(c);
R_01095774:
    ea = c.r[21] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095780u;
    f_80071fe0(c);
R_01095780:
    ea = c.r[21] + 0x44u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x109578cu;
    f_80071fe0(c);
R_0109578c:
    ea = c.r[21] + 0x48u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095798u;
    f_80071fe0(c);
R_01095798:
    c.r[0] = 0x1u;
    ea = c.r[21] + 0x4cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[22] + wp::sign_extend16((g_mg503_bases[6] + 0xb20u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_010957a4:
    c.lr = 0x10957a8u;
    f_8004a110(c);
R_010957a8:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x10957b0u;
    f_8004a100(c);
R_010957b0:
    ea = c.r[23] + 0x18u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010957e0;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01095890;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01095a98;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01095af0;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_01095c88;
    goto L_01095cb8;
L_010957e0:
    c.r[21] = ((((g_mg503_bases[6] + 0x9e0u) + 0x8000u) >> 16) << 16);
    c.r[24] = ((((g_mg503_bases[4] + 0x2780u) + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mg503_bases[4] + 0x27d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0x7ecu;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[21] = c.r[21] + wp::sign_extend16((g_mg503_bases[6] + 0x9e0u) & 0xFFFFu);
    c.r[24] = c.r[24] + wp::sign_extend16((g_mg503_bases[4] + 0x2780u) & 0xFFFFu);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mg503_bases[4] + 0x27d0u) & 0xFFFFu);
    c.r[26] = 0x0u;
    c.r[22] = 0x0u;
    goto L_0109586c;
L_01095808:
    ea = c.r[23] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[21] | c.r[21];
    ea = c.r[3] + c.r[22];
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1095818u;
    f_80053d20(c);
R_01095818:
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
    c.lr = 0x1095838u;
    f_80053df0(c);
R_01095838:
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
    c.lr = 0x1095858u;
    f_80053e70(c);
R_01095858:
    c.r[21] = c.r[21] + 0xcu;
    c.r[22] = c.r[22] + 0x4u;
    c.r[24] = c.r[24] + 0x4u;
    c.r[25] = c.r[25] + 0x4u;
    c.r[26] = c.r[26] + 0x1u;
L_0109586c:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01095808;
    }
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01095cb8;
L_01095890:
    c.r[3] = (((0x802f5ed8u + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mg503_bases[6] + 0x9e0u) + 0x8000u) >> 16) << 16);
    c.r[26] = ((((g_mg503_bases[4] + 0x2730u) + 0x8000u) >> 16) << 16);
    c.r[27] = ((((g_mg503_bases[4] + 0x2820u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5ed8u & 0xFFFFu);
    c.r[29] = wp::rd8(ea);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mg503_bases[6] + 0x9e0u) & 0xFFFFu);
    ea = c.r[30] + 0xda4u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg503_bases[4] + 0x2730u) & 0xFFFFu);
    ea = c.r[30] + 0xda8u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg503_bases[4] + 0x2820u) & 0xFFFFu);
    c.r[31] = 0x0u;
    c.r[28] = 0x0u;
    c.r[21] = 0x0u;
    goto L_01095a00;
L_010958c8:
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
    c.lr = 0x10958ecu;
    f_80047ad0(c);
R_010958ec:
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
    c.lr = 0x1095900u;
    f_80047ac0(c);
R_01095900:
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
    if (wp::cr_get(c, 2)) goto L_01095958;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01095944;
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
    goto L_01095958;
L_01095944:
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
L_01095958:
    ea = c.r[30] + 0xdacu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095960u;
    f_80071fe0(c);
R_01095960:
    c.lr = 0x1095964u;
    f_8006b500(c);
R_01095964:
    ea = c.r[30] + 0xdb0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[22] = c.r[3] | c.r[3];
    c.lr = 0x1095970u;
    f_80071fe0(c);
R_01095970:
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
L_01095a00:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010958c8;
    }
    ea = c.r[23] + 0x2bu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095a80;
    ea = c.r[23] + 0x29u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01095a40;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x345u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1095a38u;
    f_80018e30(c);
R_01095a38:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    goto L_01095a80;
L_01095a40:
    ea = c.r[23] + 0x2au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095a68;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x344u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1095a60u;
    f_80018e30(c);
R_01095a60:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    goto L_01095a80;
L_01095a68:
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x343u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1095a7cu;
    f_80018e30(c);
R_01095a7c:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
L_01095a80:
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01095cb8;
L_01095a98:
    ea = c.r[23] + 0x28u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01095ac4;
    ea = c.r[23] + 0x20u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01095cb8;
    ea = c.r[23] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 0)) goto L_01095cb8;
L_01095ac4:
    ea = c.r[23] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095ad8;
    c.r[4] = 0x5u;
    c.lr = 0x1095ad8u;
    f_800195d0(c);
L_01095ad8:
R_01095ad8:
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01095cb8;
L_01095af0:
    c.r[3] = (((0x802f5ed8u + 0x8000u) >> 16) << 16);
    c.r[29] = ((((g_mg503_bases[6] + 0x9e0u) + 0x8000u) >> 16) << 16);
    c.r[28] = ((((g_mg503_bases[4] + 0x2730u) + 0x8000u) >> 16) << 16);
    c.r[27] = ((((g_mg503_bases[4] + 0x2820u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5ed8u & 0xFFFFu);
    c.r[25] = wp::rd8(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mg503_bases[6] + 0x9e0u) & 0xFFFFu);
    ea = c.r[30] + 0xda4u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg503_bases[4] + 0x2730u) & 0xFFFFu);
    ea = c.r[30] + 0xda8u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg503_bases[4] + 0x2820u) & 0xFFFFu);
    c.r[24] = 0x0u;
    c.r[26] = 0x0u;
    c.r[21] = 0x0u;
    c.r[22] = 0x1u;
    goto L_01095c64;
L_01095b2c:
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
    c.lr = 0x1095b50u;
    f_80047ad0(c);
R_01095b50:
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
    c.lr = 0x1095b64u;
    f_80047ac0(c);
R_01095b64:
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
    if (wp::cr_get(c, 2)) goto L_01095bbc;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01095ba8;
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
    goto L_01095bbc;
L_01095ba8:
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
L_01095bbc:
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095bc4u;
    f_80071fe0(c);
R_01095bc4:
    c.lr = 0x1095bc8u;
    f_8006b500(c);
R_01095bc8:
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x1095bd4u;
    f_80071fe0(c);
R_01095bd4:
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
L_01095c64:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01095b2c;
    }
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01095cb8;
L_01095c88:
    ea = c.r[30] + 0xdb4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1095c90u;
    f_80071fe0(c);
R_01095c90:
    ea = c.r[23] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_01095cb8;
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01095cb8:
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
    c.lr = 0x1095d28u;
    f_801c83ec(c);
R_01095d28:
    ea = c.r[1] + 0x184u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x180u;
    return;
}

void f_mg503_01095d40(wp::Cpu& c) {
    WP_ENTER(0x1095d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1095d70u: goto R_01095d70;
        case 0x1095d7cu: goto R_01095d7c;
        case 0x1095d8cu: goto R_01095d8c;
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
    if (wp::cr_get(c, 2)) goto L_01095d8c;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x144u;
    c.lr = 0x1095d70u;
    f_80063bb0(c);
R_01095d70:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1095d7cu;
    f_80051600(c);
R_01095d7c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01095d8c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1095d8cu;
    f_801c7a8c(c);
L_01095d8c:
R_01095d8c:
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

void f_mg503_01095db0(wp::Cpu& c) {
    WP_ENTER(0x1095db0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x15cu;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mg503_01095dc0(wp::Cpu& c) {
    WP_ENTER(0x1095dc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = ((((g_mg503_bases[6] + 0xb24u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[6] + 0xb24u) & 0xFFFFu);
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

void f_mg503_01095df0(wp::Cpu& c) {
    WP_ENTER(0x1095df0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1095e24u: goto R_01095e24;
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
    c.lr = 0x1095e24u;
    f_mg503_0108b740(c);
R_01095e24:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01095e40(wp::Cpu& c) {
    WP_ENTER(0x1095e40u);
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

void f_mg503_01095e60(wp::Cpu& c) {
    WP_ENTER(0x1095e60u);
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

void f_mg503_01095e70(wp::Cpu& c) {
    WP_ENTER(0x1095e70u);
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

void f_mg503_01095e90(wp::Cpu& c) {
    WP_ENTER(0x1095e90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = wp::cntlzw(c.r[4]);
    c.r[0] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[3] + 0x2bu;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mg503_01095ea0(wp::Cpu& c) {
    WP_ENTER(0x1095ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2au;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg503_01095eb0(wp::Cpu& c) {
    WP_ENTER(0x1095eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x28u;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mg503_01095ec0(wp::Cpu& c) {
    WP_ENTER(0x1095ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095ed4;
    c.r[3] = 0x0u;
    return;
L_01095ed4:
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01095ef0;
    c.r[3] = 0x0u;
    return;
L_01095ef0:
    ea = c.r[3] + 0x162u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095f04;
    c.r[3] = 0x0u;
    return;
L_01095f04:
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

void f_mg503_01095f20(wp::Cpu& c) {
    WP_ENTER(0x1095f20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095f34;
    c.r[3] = 0x0u;
    return;
L_01095f34:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01095f50;
    c.r[3] = 0x0u;
    return;
L_01095f50:
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

void f_mg503_01095f70(wp::Cpu& c) {
    WP_ENTER(0x1095f70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = ((((g_mg503_bases[6] + 0x9ccu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    c.r[4] = ((((g_mg503_bases[1] + 0x95fa0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg503_bases[6] + 0x9c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0x9ccu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[1] + 0x95fa0u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[6] + 0x9c0u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    f_mg503_01000000(c);
    return;
}

void f_mg503_01095fa0(wp::Cpu& c) {
    WP_ENTER(0x1095fa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1095ff0u: goto R_01095ff0;
        case 0x1096000u: goto R_01096000;
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
    if (wp::cr_get(c, 2)) goto L_01096000;
    if (wp::cr_get(c, 2)) goto L_01095ff0;
    if (wp::cr_get(c, 2)) goto L_01095ff0;
    if (wp::cr_get(c, 2)) goto L_01095ff0;
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01095ff0;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] | c.r[4];
    c.lr = 0x1095ff0u;
    f_801c7a8c(c);
L_01095ff0:
R_01095ff0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01096000;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1096000u;
    f_801c7a8c(c);
L_01096000:
R_01096000:
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

void f_mg503_01096020(wp::Cpu& c) {
    WP_ENTER(0x1096020u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01093e30(c);
    return;
}

void f_mg503_01096030(wp::Cpu& c) {
    WP_ENTER(0x1096030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01093dc0(c);
    return;
}

void f_mg503_01096040(wp::Cpu& c) {
    WP_ENTER(0x1096040u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01094400(c);
    return;
}

void f_mg503_01096050(wp::Cpu& c) {
    WP_ENTER(0x1096050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01094250(c);
    return;
}

void f_mg503_01096060(wp::Cpu& c) {
    WP_ENTER(0x1096060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01094fc0(c);
    return;
}

void f_mg503_01096070(wp::Cpu& c) {
    WP_ENTER(0x1096070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01094c60(c);
    return;
}

void f_mg503_01096080(wp::Cpu& c) {
    WP_ENTER(0x1096080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01095240(c);
    return;
}

void f_mg503_01096090(wp::Cpu& c) {
    WP_ENTER(0x1096090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_010951a0(c);
    return;
}

void f_mg503_010960a0(wp::Cpu& c) {
    WP_ENTER(0x10960a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mg503_01095e60(c);
    return;
}

void f_mg503_010960b0(wp::Cpu& c) {
    WP_ENTER(0x10960b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mg503_01095370(c);
    return;
}

void f_mg503_010960c0(wp::Cpu& c) {
    WP_ENTER(0x10960c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01095db0(c);
    return;
}

void f_mg503_010960d0(wp::Cpu& c) {
    WP_ENTER(0x10960d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mg503_01095d40(c);
    return;
}

void f_mg503_010960e0(wp::Cpu& c) {
    WP_ENTER(0x10960e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mg503_01095e40(c);
    return;
}

void f_mg503_010960f0(wp::Cpu& c) {
    WP_ENTER(0x10960f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mg503_01095d40(c);
    return;
}

void f_mg503_01096100(wp::Cpu& c) {
    WP_ENTER(0x1096100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1096148u: goto R_01096148;
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
    if (wp::cr_get(c, 1)) goto L_0109613c;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_0109621c;
L_0109613c:
    c.r[3] = ((((g_mg503_bases[4] + 0x2910u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2910u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1096148u;
    f_80071fe0(c);
R_01096148:
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
    if (wp::cr_get(c, 1)) goto L_01096204;
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
    goto L_0109621c;
L_01096204:
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
L_0109621c:
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

void f_mg503_01096240(wp::Cpu& c) {
    WP_ENTER(0x1096240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1096288u: goto R_01096288;
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
    if (wp::cr_get(c, 1)) goto L_0109627c;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_0109633c;
L_0109627c:
    c.r[3] = ((((g_mg503_bases[4] + 0x2910u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2910u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1096288u;
    f_80071fe0(c);
R_01096288:
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
    if (wp::cr_get(c, 1)) goto L_01096328;
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
    goto L_0109633c;
L_01096328:
    c.r[0] = 0x9u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_0109633c:
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

void f_mg503_01096360(wp::Cpu& c) {
    WP_ENTER(0x1096360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10963b0u: goto R_010963b0;
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
    if (wp::cr_get(c, 1)) goto L_010963a4;
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
    goto L_010964cc;
L_010963a4:
    c.r[3] = ((((g_mg503_bases[4] + 0x2910u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2910u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10963b0u;
    f_80071fe0(c);
R_010963b0:
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
    if (wp::cr_get(c, 1)) goto L_010964ac;
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
    goto L_010964cc;
L_010964ac:
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
L_010964cc:
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

void f_mg503_010964f0(wp::Cpu& c) {
    WP_ENTER(0x10964f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1096538u: goto R_01096538;
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
    if (wp::cr_get(c, 1)) goto L_01096540;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01096540;
    c.r[5] = ((((g_mg503_bases[4] + 0x2910u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x2910u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1096538u;
    f_80018e30(c);
R_01096538:
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01096540:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01096560(wp::Cpu& c) {
    WP_ENTER(0x1096560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[4]);
    f_800402c0(c);
    return;
}

void f_mg503_01096570(wp::Cpu& c) {
    WP_ENTER(0x1096570u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109658cu: goto R_0109658c;
        case 0x10965a0u: goto R_010965a0;
        case 0x10965e0u: goto R_010965e0;
        case 0x1096604u: goto R_01096604;
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
    c.lr = 0x109658cu;
    f_801c83b4(c);
R_0109658c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10965a0u;
    f_mg503_01096100(c);
R_010965a0:
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_010965b8:
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
    ea = c.r[30] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10965e0u;
    f_80040980(c);
R_010965e0:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010965b8;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1096604u;
    f_801c8400(c);
R_01096604:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg503_01096620(wp::Cpu& c) {
    WP_ENTER(0x1096620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109663cu: goto R_0109663c;
        case 0x1096650u: goto R_01096650;
        case 0x1096690u: goto R_01096690;
        case 0x10966b4u: goto R_010966b4;
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
    c.lr = 0x109663cu;
    f_801c83b4(c);
R_0109663c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x1096650u;
    f_mg503_01096240(c);
R_01096650:
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_01096668:
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
    ea = c.r[30] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1096690u;
    f_80040980(c);
R_01096690:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01096668;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10966b4u;
    f_801c8400(c);
R_010966b4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg503_010966d0(wp::Cpu& c) {
    WP_ENTER(0x10966d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10966ecu: goto R_010966ec;
        case 0x1096700u: goto R_01096700;
        case 0x1096740u: goto R_01096740;
        case 0x1096764u: goto R_01096764;
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
    c.lr = 0x10966ecu;
    f_801c83b4(c);
R_010966ec:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x1096700u;
    f_mg503_01096360(c);
R_01096700:
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_01096718:
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
    ea = c.r[30] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1096740u;
    f_80040980(c);
R_01096740:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01096718;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1096764u;
    f_801c8400(c);
R_01096764:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg503_01096780(wp::Cpu& c) {
    WP_ENTER(0x1096780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109679cu: goto R_0109679c;
        case 0x1096808u: goto R_01096808;
        case 0x1096860u: goto R_01096860;
        case 0x1096880u: goto R_01096880;
        case 0x10968acu: goto R_010968ac;
        case 0x10968ccu: goto R_010968cc;
        case 0x1096908u: goto R_01096908;
        case 0x1096930u: goto R_01096930;
        case 0x1096940u: goto R_01096940;
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
    c.lr = 0x109679cu;
    f_801c839c(c);
R_0109679c:
    c.r[22] = ((((g_mg503_bases[4] + 0x2920u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mg503_bases[4] + 0x2920u) & 0xFFFFu);
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
    c.lr = 0x1096808u;
    f_mg503_01096100(c);
R_01096808:
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    c.r[30] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    c.r[30] = c.r[30] + c.r[0];
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_01096838:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01096850;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_01096854;
L_01096850:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_01096854:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1096860u;
    f_801c7860(c);
R_01096860:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1096880u;
    f_mg503_01004710(c);
R_01096880:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109689c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_010968a0;
L_0109689c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_010968a0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x10968acu;
    f_801c7860(c);
R_010968ac:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10968ccu;
    f_mg503_01004710(c);
R_010968cc:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010968e4;
    c.r[4] = c.r[28] | c.r[28];
    goto L_010968e8;
L_010968e4:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_010968e8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1096908u;
    f_80040980(c);
R_01096908:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01096838;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01096930;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1096930u;
    f_801c7a8c(c);
L_01096930:
R_01096930:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1096940u;
    f_801c83e8(c);
R_01096940:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_01096950(wp::Cpu& c) {
    WP_ENTER(0x1096950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109696cu: goto R_0109696c;
        case 0x1096994u: goto R_01096994;
        case 0x10969f0u: goto R_010969f0;
        case 0x1096a10u: goto R_01096a10;
        case 0x1096a3cu: goto R_01096a3c;
        case 0x1096a5cu: goto R_01096a5c;
        case 0x1096a98u: goto R_01096a98;
        case 0x1096ac0u: goto R_01096ac0;
        case 0x1096ad0u: goto R_01096ad0;
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
    c.lr = 0x109696cu;
    f_801c839c(c);
R_0109696c:
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
    c.lr = 0x1096994u;
    f_mg503_01096100(c);
R_01096994:
    c.r[4] = ((((g_mg503_bases[5] + 0x29eb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29eb8u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_010969c8:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010969e0;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_010969e4;
L_010969e0:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_010969e4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10969f0u;
    f_801c7860(c);
R_010969f0:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1096a10u;
    f_mg503_01004710(c);
R_01096a10:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01096a2c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_01096a30;
L_01096a2c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_01096a30:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x1096a3cu;
    f_801c7860(c);
R_01096a3c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x1096a5cu;
    f_mg503_01004710(c);
R_01096a5c:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01096a74;
    c.r[4] = c.r[28] | c.r[28];
    goto L_01096a78;
L_01096a74:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_01096a78:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1096a98u;
    f_80040980(c);
R_01096a98:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010969c8;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01096ac0;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1096ac0u;
    f_801c7a8c(c);
L_01096ac0:
R_01096ac0:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1096ad0u;
    f_801c83e8(c);
R_01096ad0:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mg503_01096ae0(wp::Cpu& c) {
    WP_ENTER(0x1096ae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1096afcu: goto R_01096afc;
        case 0x1096b24u: goto R_01096b24;
        case 0x1096b80u: goto R_01096b80;
        case 0x1096ba0u: goto R_01096ba0;
        case 0x1096bccu: goto R_01096bcc;
        case 0x1096becu: goto R_01096bec;
        case 0x1096c28u: goto R_01096c28;
        case 0x1096c50u: goto R_01096c50;
        case 0x1096c60u: goto R_01096c60;
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
    c.lr = 0x1096afcu;
    f_801c839c(c);
R_01096afc:
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
    c.lr = 0x1096b24u;
    f_mg503_01096360(c);
R_01096b24:
    c.r[0] = c.r[20] * 0x18u;
    c.r[4] = ((((g_mg503_bases[5] + 0x29ed8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ed8u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x28u;
    c.r[28] = c.r[1] + 0x19u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_01096b58:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01096b70;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_01096b74;
L_01096b70:
    ea = c.r[1] + 0x1cu;
    c.r[21] = wp::rd32(ea);
L_01096b74:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1096b80u;
    f_801c7860(c);
R_01096b80:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1096ba0u;
    f_mg503_01004710(c);
R_01096ba0:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01096bbc;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_01096bc0;
L_01096bbc:
    ea = c.r[1] + 0x1cu;
    c.r[20] = wp::rd32(ea);
L_01096bc0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x1096bccu;
    f_801c7860(c);
R_01096bcc:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x1096becu;
    f_mg503_01004710(c);
R_01096bec:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01096c04;
    c.r[4] = c.r[28] | c.r[28];
    goto L_01096c08;
L_01096c04:
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
L_01096c08:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1096c28u;
    f_80040980(c);
R_01096c28:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01096b58;
    }
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01096c50;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1096c50u;
    f_801c7a8c(c);
L_01096c50:
R_01096c50:
    c.r[11] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1096c60u;
    f_801c83e8(c);
R_01096c60:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mg503_01096c70(wp::Cpu& c) {
    WP_ENTER(0x1096c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1096c8cu: goto R_01096c8c;
        case 0x1096d40u: goto R_01096d40;
        case 0x1096d44u: goto R_01096d44;
        case 0x1096d84u: goto R_01096d84;
        case 0x1096df4u: goto R_01096df4;
        case 0x1096df8u: goto R_01096df8;
        case 0x1096eb8u: goto R_01096eb8;
        case 0x1096ebcu: goto R_01096ebc;
        case 0x1096ec4u: goto R_01096ec4;
        case 0x1096eecu: goto R_01096eec;
        case 0x1096ef0u: goto R_01096ef0;
        case 0x1096f20u: goto R_01096f20;
        case 0x1096f70u: goto R_01096f70;
        case 0x1096f80u: goto R_01096f80;
        case 0x1096fccu: goto R_01096fcc;
        case 0x1097348u: goto R_01097348;
        case 0x1097384u: goto R_01097384;
        case 0x1097394u: goto R_01097394;
        case 0x10973d4u: goto R_010973d4;
        case 0x10973e4u: goto R_010973e4;
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
    c.lr = 0x1096c8cu;
    f_801c83a0(c);
R_01096c8c:
    c.r[9] = ((((g_mg503_bases[4] + 0x28c0u) + 0x8000u) >> 16) << 16);
    c.r[10] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[10]);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mg503_bases[4] + 0x28c0u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_01096ccc;
    c.r[6] = c.r[0] | c.r[0];
L_01096ccc:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[29] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_01096fd0;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[30] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[30], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_01096d00;
    c.r[0] = c.r[6] - c.r[30];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01096d6c;
L_01096d00:
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
    if (!wp::cr_get(c, 1)) goto L_01096d44;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1096d40u;
    f_801cee24(c);
R_01096d40:
    c.lr = 0x1096d44u;
    f_801d3940(c);
L_01096d44:
R_01096d44:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01096d58;
    goto L_01096d94;
L_01096d58:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01096d94;
    goto L_01096d94;
L_01096d6c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x1096d84u;
    f_80004714(c);
R_01096d84:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01096fe0;
L_01096d94:
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
    if (!wp::cr_get(c, 1)) goto L_01096df8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1096df4u;
    f_801cee24(c);
R_01096df4:
    c.lr = 0x1096df8u;
    f_801d3940(c);
L_01096df8:
R_01096df8:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01096e48;
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
    if (!wp::cr_get(c, 0)) goto L_01096e3c;
    c.r[3] = c.r[1] + 0x8u;
L_01096e3c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01096e8c;
L_01096e48:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01096e84;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01096e78;
    c.r[3] = c.r[1] + 0x8u;
L_01096e78:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01096e8c;
L_01096e84:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_01096e8c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01096ebc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1096eb8u;
    f_801cee24(c);
R_01096eb8:
    c.lr = 0x1096ebcu;
    f_801d3940(c);
L_01096ebc:
R_01096ebc:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x1096ec4u;
    f_801c79a4(c);
R_01096ec4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01096ef0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1096eecu;
    f_801cee24(c);
R_01096eec:
    c.lr = 0x1096ef0u;
    f_801d3940(c);
L_01096ef0:
R_01096ef0:
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
    c.lr = 0x1096f20u;
    f_80004714(c);
R_01096f20:
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
    c.lr = 0x1096f70u;
    f_800043c4(c);
R_01096f70:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[23] | c.r[23];
    c.r[4] = 0x0u;
    c.lr = 0x1096f80u;
    f_80004714(c);
R_01096f80:
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
    if (wp::cr_get(c, 2)) goto L_01096fe0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01096fe0;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1096fccu;
    f_801c7a8c(c);
R_01096fcc:
    goto L_01096fe0;
L_01096fd0:
    if (!wp::cr_get(c, 0)) goto L_01096fe0;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01096fe0:
    wp::compare_unsigned(c, 1, c.r[26], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01097284;
    wp::compare_unsigned(c, 0, c.r[26], 0x8u);
    c.r[6] = c.r[26] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0109722c;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_01097018;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097018;
    c.r[7] = 0x1u;
L_01097018:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109702c;
    wp::compare_unsigned(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0109702c;
    c.r[5] = 0x1u;
L_0109702c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01097044;
    c.r[0] = c.r[26] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01097044;
    c.r[4] = 0x1u;
L_01097044:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109722c;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0109722c;
L_01097068:
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
    goto L_01097068;
    }
L_0109722c:
    c.r[0] = c.r[26] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[26]);
    if (wp::cr_get(c, 1)) goto L_01097284;
L_01097248:
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
    goto L_01097248;
    }
L_01097284:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01097290;
    c.r[27] = c.r[28] | c.r[28];
L_01097290:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010972d8;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010972c8;
L_010972b0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010972c8;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010972b0;
    }
L_010972c8:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_010972dc;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_010972dc;
L_010972d8:
    c.r[23] = 0x0u;
L_010972dc:
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = 0x0u;
    c.r[29] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    goto L_010973a0;
L_010972f8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    ea = c.r[25] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0109734c;
    c.r[0] = c.r[31] + c.r[23];
    wp::compare_unsigned(c, 0, c.r[0], c.r[26]);
    if (!wp::cr_get(c, 0)) goto L_01097384;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[4] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[29] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
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
    c.lr = 0x1097348u;
    f_80040980(c);
R_01097348:
    goto L_01097384;
L_0109734c:
    wp::compare_unsigned(c, 0, c.r[23], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_01097384;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[5] + c.r[30];
    c.r[0] = wp::rd32(ea);
    c.r[21] = 0x1u;
    ea = c.r[29] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1097384u;
    f_80040980(c);
L_01097384:
R_01097384:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[22] | c.r[22];
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x1097394u;
    f_800403f0(c);
R_01097394:
    c.r[25] = c.r[25] + 0x4u;
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_010973a0:
    wp::compare_unsigned(c, 0, c.r[31], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010972f8;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010973d4;
    if (wp::cr_get(c, 2)) goto L_010973d4;
    if (wp::cr_get(c, 2)) goto L_010973d4;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010973d4;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10973d4u;
    f_801c7a8c(c);
L_010973d4:
R_010973d4:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10973e4u;
    f_801c83ec(c);
R_010973e4:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mg503_01097400(wp::Cpu& c) {
    WP_ENTER(0x1097400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109741cu: goto R_0109741c;
        case 0x10974f0u: goto R_010974f0;
        case 0x10974f4u: goto R_010974f4;
        case 0x1097534u: goto R_01097534;
        case 0x10975a4u: goto R_010975a4;
        case 0x10975a8u: goto R_010975a8;
        case 0x1097668u: goto R_01097668;
        case 0x109766cu: goto R_0109766c;
        case 0x1097674u: goto R_01097674;
        case 0x109769cu: goto R_0109769c;
        case 0x10976a0u: goto R_010976a0;
        case 0x10976d0u: goto R_010976d0;
        case 0x1097720u: goto R_01097720;
        case 0x1097730u: goto R_01097730;
        case 0x109777cu: goto R_0109777c;
        case 0x1097ae0u: goto R_01097ae0;
        case 0x1097af0u: goto R_01097af0;
        case 0x1097b30u: goto R_01097b30;
        case 0x1097b40u: goto R_01097b40;
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
    c.lr = 0x109741cu;
    f_801c83a4(c);
R_0109741c:
    c.r[8] = ((((g_mg503_bases[4] + 0x28e8u) + 0x8000u) >> 16) << 16);
    c.r[9] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[28] = c.r[5] + c.r[6];
    c.r[8] = c.r[8] + wp::sign_extend16((g_mg503_bases[4] + 0x28e8u) & 0xFFFFu);
    c.r[6] = ((((g_mg503_bases[4] + 0x28c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[28], 2) & 0xfffffffcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[4] + 0x28c0u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_0109747c;
    c.r[4] = c.r[0] | c.r[0];
L_0109747c:
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[5]);
    c.r[30] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_01097780;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[28] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[29], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010974b0;
    c.r[0] = c.r[6] - c.r[29];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0109751c;
L_010974b0:
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
    if (!wp::cr_get(c, 1)) goto L_010974f4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10974f0u;
    f_801cee24(c);
R_010974f0:
    c.lr = 0x10974f4u;
    f_801d3940(c);
L_010974f4:
R_010974f4:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097508;
    goto L_01097544;
L_01097508:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097544;
    goto L_01097544;
L_0109751c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[29], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x1097534u;
    f_80004714(c);
R_01097534:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[29];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01097790;
L_01097544:
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
    if (!wp::cr_get(c, 1)) goto L_010975a8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10975a4u;
    f_801cee24(c);
R_010975a4:
    c.lr = 0x10975a8u;
    f_801d3940(c);
L_010975a8:
R_010975a8:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010975f8;
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
    if (!wp::cr_get(c, 0)) goto L_010975ec;
    c.r[3] = c.r[1] + 0x10u;
L_010975ec:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0109763c;
L_010975f8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097634;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01097628;
    c.r[3] = c.r[1] + 0x10u;
L_01097628:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0109763c;
L_01097634:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0109763c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0109766c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1097668u;
    f_801cee24(c);
R_01097668:
    c.lr = 0x109766cu;
    f_801d3940(c);
L_0109766c:
R_0109766c:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x1097674u;
    f_801c79a4(c);
R_01097674:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010976a0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109769cu;
    f_801cee24(c);
R_0109769c:
    c.lr = 0x10976a0u;
    f_801d3940(c);
L_010976a0:
R_010976a0:
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
    c.lr = 0x10976d0u;
    f_80004714(c);
R_010976d0:
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
    c.lr = 0x1097720u;
    f_800043c4(c);
R_01097720:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1097730u;
    f_80004714(c);
R_01097730:
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
    if (wp::cr_get(c, 2)) goto L_01097790;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01097790;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x109777cu;
    f_801c7a8c(c);
R_0109777c:
    goto L_01097790;
L_01097780:
    if (!wp::cr_get(c, 0)) goto L_01097790;
    c.r[0] = c.r[5] - c.r[28];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01097790:
    wp::compare_unsigned(c, 1, c.r[28], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01097a34;
    wp::compare_unsigned(c, 0, c.r[28], 0x8u);
    c.r[6] = c.r[28] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010979dc;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010977c8;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010977c8;
    c.r[7] = 0x1u;
L_010977c8:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010977dc;
    wp::compare_unsigned(c, 0, c.r[28], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010977dc;
    c.r[5] = 0x1u;
L_010977dc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010977f4;
    c.r[0] = c.r[28] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010977f4;
    c.r[4] = 0x1u;
L_010977f4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010979dc;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010979dc;
L_01097818:
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
    goto L_01097818;
    }
L_010979dc:
    c.r[0] = c.r[28] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[28]);
    if (wp::cr_get(c, 1)) goto L_01097a34;
L_010979f8:
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
    goto L_010979f8;
    }
L_01097a34:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01097a80;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01097a70;
    c.r[0] = c.r[0] | 0x0u;
L_01097a58:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01097a70;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01097a58;
    }
L_01097a70:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_01097a84;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_01097a84;
L_01097a80:
    c.r[23] = 0x0u;
L_01097a84:
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = 0x0u;
    c.r[27] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x43300000u;
    goto L_01097afc;
L_01097aa0:
    wp::compare_unsigned(c, 0, c.r[23], c.r[30]);
    ea = c.r[25] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_01097ae0;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[26]);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[5] + c.r[29];
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x1u;
    ea = c.r[27] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1097ae0u;
    f_80040980(c);
L_01097ae0:
R_01097ae0:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x1097af0u;
    f_800403f0(c);
R_01097af0:
    c.r[25] = c.r[25] + 0x4u;
    c.r[29] = c.r[29] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_01097afc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01097aa0;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01097b30;
    if (wp::cr_get(c, 2)) goto L_01097b30;
    if (wp::cr_get(c, 2)) goto L_01097b30;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01097b30;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1097b30u;
    f_801c7a8c(c);
L_01097b30:
R_01097b30:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1097b40u;
    f_801c83f0(c);
R_01097b40:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mg503_01097b50(wp::Cpu& c) {
    WP_ENTER(0x1097b50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1097b6cu: goto R_01097b6c;
        case 0x1097c24u: goto R_01097c24;
        case 0x1097c28u: goto R_01097c28;
        case 0x1097c68u: goto R_01097c68;
        case 0x1097cd8u: goto R_01097cd8;
        case 0x1097cdcu: goto R_01097cdc;
        case 0x1097d9cu: goto R_01097d9c;
        case 0x1097da0u: goto R_01097da0;
        case 0x1097da8u: goto R_01097da8;
        case 0x1097dd0u: goto R_01097dd0;
        case 0x1097dd4u: goto R_01097dd4;
        case 0x1097e04u: goto R_01097e04;
        case 0x1097e54u: goto R_01097e54;
        case 0x1097e64u: goto R_01097e64;
        case 0x1097eb0u: goto R_01097eb0;
        case 0x1098234u: goto R_01098234;
        case 0x1098244u: goto R_01098244;
        case 0x1098264u: goto R_01098264;
        case 0x1098290u: goto R_01098290;
        case 0x10982b0u: goto R_010982b0;
        case 0x1098310u: goto R_01098310;
        case 0x1098360u: goto R_01098360;
        case 0x1098384u: goto R_01098384;
        case 0x1098398u: goto R_01098398;
        case 0x10983d8u: goto R_010983d8;
        case 0x10983e8u: goto R_010983e8;
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
    c.lr = 0x1097b6cu;
    f_801c838c(c);
R_01097b6c:
    c.r[10] = ((((g_mg503_bases[4] + 0x28c0u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[11]);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mg503_bases[4] + 0x28c0u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_01097bb0;
    c.r[6] = c.r[0] | c.r[0];
L_01097bb0:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[25] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_01097eb4;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[24] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[24], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_01097be4;
    c.r[0] = c.r[6] - c.r[24];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01097c50;
L_01097be4:
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
    if (!wp::cr_get(c, 1)) goto L_01097c28;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1097c24u;
    f_801cee24(c);
R_01097c24:
    c.lr = 0x1097c28u;
    f_801d3940(c);
L_01097c28:
R_01097c28:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097c3c;
    goto L_01097c78;
L_01097c3c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097c78;
    goto L_01097c78;
L_01097c50:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x1097c68u;
    f_80004714(c);
R_01097c68:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[24];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_01097ec4;
L_01097c78:
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
    if (!wp::cr_get(c, 1)) goto L_01097cdc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1097cd8u;
    f_801cee24(c);
R_01097cd8:
    c.lr = 0x1097cdcu;
    f_801d3940(c);
L_01097cdc:
R_01097cdc:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097d2c;
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
    if (!wp::cr_get(c, 0)) goto L_01097d20;
    c.r[3] = c.r[1] + 0x18u;
L_01097d20:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_01097d70;
L_01097d2c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097d68;
    c.r[3] = c.r[23] + 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_01097d5c;
    c.r[3] = c.r[1] + 0x18u;
L_01097d5c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_01097d70;
L_01097d68:
    c.r[3] = 0x40000000u;
    c.r[23] = c.r[3] + 0xffffffffu;
L_01097d70:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01097da0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1097d9cu;
    f_801cee24(c);
R_01097d9c:
    c.lr = 0x1097da0u;
    f_801d3940(c);
L_01097da0:
R_01097da0:
    c.r[3] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.lr = 0x1097da8u;
    f_801c79a4(c);
R_01097da8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01097dd4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1097dd0u;
    f_801cee24(c);
R_01097dd0:
    c.lr = 0x1097dd4u;
    f_801d3940(c);
L_01097dd4:
R_01097dd4:
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
    c.lr = 0x1097e04u;
    f_80004714(c);
R_01097e04:
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
    c.lr = 0x1097e54u;
    f_800043c4(c);
R_01097e54:
    c.r[3] = c.r[18] | c.r[18];
    c.r[5] = c.r[16] | c.r[16];
    c.r[4] = 0x0u;
    c.lr = 0x1097e64u;
    f_80004714(c);
R_01097e64:
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
    if (wp::cr_get(c, 2)) goto L_01097ec4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01097ec4;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1097eb0u;
    f_801c7a8c(c);
R_01097eb0:
    goto L_01097ec4;
L_01097eb4:
    if (!wp::cr_get(c, 0)) goto L_01097ec4;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_01097ec4:
    wp::compare_unsigned(c, 1, c.r[30], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01098168;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_01098110;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_01097efc;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01097efc;
    c.r[7] = 0x1u;
L_01097efc:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01097f10;
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (wp::cr_get(c, 0)) goto L_01097f10;
    c.r[5] = 0x1u;
L_01097f10:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01097f28;
    c.r[0] = c.r[30] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01097f28;
    c.r[4] = 0x1u;
L_01097f28:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01098110;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_01098110;
L_01097f4c:
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
    goto L_01097f4c;
    }
L_01098110:
    c.r[0] = c.r[30] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (wp::cr_get(c, 1)) goto L_01098168;
L_0109812c:
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
    goto L_0109812c;
    }
L_01098168:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01098174;
    c.r[17] = c.r[31] | c.r[31];
L_01098174:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010981c0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010981b0;
    c.r[0] = c.r[0] | 0x0u;
L_01098198:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010981b0;
    c.r[22] = c.r[22] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01098198;
    }
L_010981b0:
    wp::compare_unsigned(c, 0, c.r[22], c.r[30]);
    if (wp::cr_get(c, 0)) goto L_010981c4;
    c.r[22] = c.r[30] + 0xffffffffu;
    goto L_010981c4;
L_010981c0:
    c.r[22] = 0x0u;
L_010981c4:
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010981d4;
    c.r[4] = wp::sub_carry(c, c.r[30], 0x8u);
L_010981d4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[17] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010983ac;
    c.r[5] = ((((g_mg503_bases[5] + 0x29e60u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[19], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x29e60u) & 0xFFFFu);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0x14u;
    c.r[24] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[25] = wp::rd8(ea);
    c.r[20] = c.r[4] + c.r[0];
    c.r[18] = c.r[1] + 0x25u;
    c.r[19] = 0x0u;
    c.r[26] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    c.r[23] = 0x0u;
    goto L_010983a4;
L_01098220:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[23]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[23]);
    c.lr = 0x1098234u;
    f_801c7860(c);
R_01098234:
    c.r[21] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[21] | c.r[21];
    c.lr = 0x1098244u;
    f_mg503_01048380(c);
R_01098244:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[24]);
    c.r[6] = c.r[29] | c.r[29];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[29] + c.r[21];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x1098264u;
    f_mg503_01004710(c);
R_01098264:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[20] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01098280;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[16] = c.r[0] & 0x7fu;
    goto L_01098284;
L_01098280:
    ea = c.r[1] + 0x28u;
    c.r[16] = wp::rd32(ea);
L_01098284:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[25]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x1098290u;
    f_801c7860(c);
R_01098290:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[16] | c.r[16];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10982b0u;
    f_mg503_01004710(c);
R_010982b0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01098314;
    c.r[4] = c.r[17] + c.r[22];
    wp::compare_unsigned(c, 0, c.r[4], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01098360;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[21] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_010982ec;
    c.r[4] = c.r[18] | c.r[18];
    goto L_010982f0;
L_010982ec:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_010982f0:
    ea = c.r[6] + c.r[5];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1098310u;
    f_80040980(c);
R_01098310:
    goto L_01098360;
L_01098314:
    wp::compare_unsigned(c, 0, c.r[22], c.r[17]);
    if (wp::cr_get(c, 1)) goto L_01098360;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[21] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109833c;
    c.r[4] = c.r[18] | c.r[18];
    goto L_01098340;
L_0109833c:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_01098340:
    ea = c.r[5] + c.r[19];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1098360u;
    f_80040980(c);
L_01098360:
R_01098360:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01098378;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0109837c;
L_01098378:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0109837c:
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x1098384u;
    f_800403f0(c);
R_01098384:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01098398;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1098398u;
    f_801c7a8c(c);
L_01098398:
R_01098398:
    c.r[20] = c.r[20] + 0x4u;
    c.r[19] = c.r[19] + 0x4u;
    c.r[17] = c.r[17] + 0x1u;
L_010983a4:
    wp::compare_unsigned(c, 0, c.r[17], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01098220;
    }
L_010983ac:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010983d8;
    if (wp::cr_get(c, 2)) goto L_010983d8;
    if (wp::cr_get(c, 2)) goto L_010983d8;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010983d8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10983d8u;
    f_801c7a8c(c);
L_010983d8:
R_010983d8:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10983e8u;
    f_801c83d8(c);
R_010983e8:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mg503_01098400(wp::Cpu& c) {
    WP_ENTER(0x1098400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109841cu: goto R_0109841c;
        case 0x10984f8u: goto R_010984f8;
        case 0x10984fcu: goto R_010984fc;
        case 0x109853cu: goto R_0109853c;
        case 0x10985acu: goto R_010985ac;
        case 0x10985b0u: goto R_010985b0;
        case 0x1098670u: goto R_01098670;
        case 0x1098674u: goto R_01098674;
        case 0x109867cu: goto R_0109867c;
        case 0x10986a4u: goto R_010986a4;
        case 0x10986a8u: goto R_010986a8;
        case 0x10986d8u: goto R_010986d8;
        case 0x1098728u: goto R_01098728;
        case 0x1098738u: goto R_01098738;
        case 0x1098784u: goto R_01098784;
        case 0x1098b00u: goto R_01098b00;
        case 0x1098b10u: goto R_01098b10;
        case 0x1098b30u: goto R_01098b30;
        case 0x1098b5cu: goto R_01098b5c;
        case 0x1098b7cu: goto R_01098b7c;
        case 0x1098bccu: goto R_01098bcc;
        case 0x1098bf0u: goto R_01098bf0;
        case 0x1098c04u: goto R_01098c04;
        case 0x1098c44u: goto R_01098c44;
        case 0x1098c54u: goto R_01098c54;
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
    c.lr = 0x109841cu;
    f_801c8390(c);
R_0109841c:
    c.r[10] = ((((g_mg503_bases[4] + 0x28e8u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[9] = ((((g_mg503_bases[4] + 0x28c0u) + 0x8000u) >> 16) << 16);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mg503_bases[4] + 0x28e8u) & 0xFFFFu);
    c.r[31] = c.r[5] + c.r[6];
    ea = c.r[10] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[9] = c.r[9] + wp::sign_extend16((g_mg503_bases[4] + 0x28c0u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_01098484;
    c.r[4] = c.r[0] | c.r[0];
L_01098484:
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[5]);
    c.r[25] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_01098788;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[26] = c.r[31] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[26], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010984b8;
    c.r[0] = c.r[6] - c.r[26];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01098524;
L_010984b8:
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
    if (!wp::cr_get(c, 1)) goto L_010984fc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10984f8u;
    f_801cee24(c);
R_010984f8:
    c.lr = 0x10984fcu;
    f_801d3940(c);
L_010984fc:
R_010984fc:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01098510;
    goto L_0109854c;
L_01098510:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0109854c;
    goto L_0109854c;
L_01098524:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[26], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x109853cu;
    f_80004714(c);
R_0109853c:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[26];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_01098798;
L_0109854c:
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
    if (!wp::cr_get(c, 1)) goto L_010985b0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10985acu;
    f_801cee24(c);
R_010985ac:
    c.lr = 0x10985b0u;
    f_801d3940(c);
L_010985b0:
R_010985b0:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01098600;
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
    if (!wp::cr_get(c, 0)) goto L_010985f4;
    c.r[3] = c.r[1] + 0x20u;
L_010985f4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_01098644;
L_01098600:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0109863c;
    c.r[3] = c.r[24] + 0x1u;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_01098630;
    c.r[3] = c.r[1] + 0x20u;
L_01098630:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_01098644;
L_0109863c:
    c.r[3] = 0x40000000u;
    c.r[24] = c.r[3] + 0xffffffffu;
L_01098644:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01098674;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1098670u;
    f_801cee24(c);
R_01098670:
    c.lr = 0x1098674u;
    f_801d3940(c);
L_01098674:
R_01098674:
    c.r[3] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.lr = 0x109867cu;
    f_801c79a4(c);
R_0109867c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[19] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010986a8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10986a4u;
    f_801cee24(c);
R_010986a4:
    c.lr = 0x10986a8u;
    f_801d3940(c);
L_010986a8:
R_010986a8:
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
    c.lr = 0x10986d8u;
    f_80004714(c);
R_010986d8:
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
    c.lr = 0x1098728u;
    f_800043c4(c);
R_01098728:
    c.r[3] = c.r[19] | c.r[19];
    c.r[5] = c.r[17] | c.r[17];
    c.r[4] = 0x0u;
    c.lr = 0x1098738u;
    f_80004714(c);
R_01098738:
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
    if (wp::cr_get(c, 2)) goto L_01098798;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01098798;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1098784u;
    f_801c7a8c(c);
R_01098784:
    goto L_01098798;
L_01098788:
    if (!wp::cr_get(c, 0)) goto L_01098798;
    c.r[0] = c.r[5] - c.r[31];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_01098798:
    wp::compare_unsigned(c, 1, c.r[31], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01098a3c;
    wp::compare_unsigned(c, 0, c.r[31], 0x8u);
    c.r[6] = c.r[31] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010989e4;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010987d0;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010987d0;
    c.r[7] = 0x1u;
L_010987d0:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010987e4;
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010987e4;
    c.r[5] = 0x1u;
L_010987e4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010987fc;
    c.r[0] = c.r[31] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010987fc;
    c.r[4] = 0x1u;
L_010987fc:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010989e4;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010989e4;
L_01098820:
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
    goto L_01098820;
    }
L_010989e4:
    c.r[0] = c.r[31] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_01098a3c;
L_01098a00:
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
    goto L_01098a00;
    }
L_01098a3c:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01098a88;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01098a78;
    c.r[0] = c.r[0] | 0x0u;
L_01098a60:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01098a78;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01098a60;
    }
L_01098a78:
    wp::compare_unsigned(c, 0, c.r[23], c.r[22]);
    if (wp::cr_get(c, 0)) goto L_01098a8c;
    c.r[23] = c.r[22] + 0xffffffffu;
    goto L_01098a8c;
L_01098a88:
    c.r[23] = 0x0u;
L_01098a8c:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01098aa0;
    c.r[0] = c.r[22] - c.r[21];
    c.r[4] = wp::sub_carry(c, c.r[0], 0x8u);
L_01098aa0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[18] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01098c18;
    c.r[5] = ((((g_mg503_bases[5] + 0x29e60u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg503_bases[4] + 0x2918u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x29e60u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    c.r[25] = wp::rd8(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0xcu;
    c.r[26] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2918u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[21] = c.r[4] + c.r[0];
    c.r[19] = c.r[1] + 0x25u;
    c.r[20] = 0x0u;
    c.r[24] = 0x0u;
    c.r[27] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[28] = 0x43300000u;
    goto L_01098c10;
L_01098aec:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[24]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[24]);
    c.lr = 0x1098b00u;
    f_801c7860(c);
R_01098b00:
    c.r[22] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[22] | c.r[22];
    c.lr = 0x1098b10u;
    f_mg503_01048380(c);
R_01098b10:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[25]);
    c.r[6] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[30] + c.r[22];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x1098b30u;
    f_mg503_01004710(c);
R_01098b30:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[21] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01098b4c;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[17] = c.r[0] & 0x7fu;
    goto L_01098b50;
L_01098b4c:
    ea = c.r[1] + 0x28u;
    c.r[17] = wp::rd32(ea);
L_01098b50:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[26]);
    c.r[3] = c.r[22] | c.r[22];
    c.lr = 0x1098b5cu;
    f_801c7860(c);
R_01098b5c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[17] | c.r[17];
    c.r[6] = c.r[22] | c.r[22];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[22] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x1098b7cu;
    f_mg503_01004710(c);
R_01098b7c:
    wp::compare_unsigned(c, 0, c.r[23], c.r[18]);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_01098bcc;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[22] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01098ba8;
    c.r[4] = c.r[19] | c.r[19];
    goto L_01098bac;
L_01098ba8:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_01098bac:
    ea = c.r[5] + c.r[20];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[28]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1098bccu;
    f_80040980(c);
L_01098bcc:
R_01098bcc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01098be4;
    c.r[4] = c.r[19] | c.r[19];
    goto L_01098be8;
L_01098be4:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_01098be8:
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x1098bf0u;
    f_800403f0(c);
R_01098bf0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01098c04;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1098c04u;
    f_801c7a8c(c);
L_01098c04:
R_01098c04:
    c.r[21] = c.r[21] + 0x4u;
    c.r[20] = c.r[20] + 0x4u;
    c.r[18] = c.r[18] + 0x1u;
L_01098c10:
    wp::compare_unsigned(c, 0, c.r[18], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01098aec;
    }
L_01098c18:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01098c44;
    if (wp::cr_get(c, 2)) goto L_01098c44;
    if (wp::cr_get(c, 2)) goto L_01098c44;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01098c44;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1098c44u;
    f_801c7a8c(c);
L_01098c44:
R_01098c44:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1098c54u;
    f_801c83dc(c);
R_01098c54:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mg503_01098c70(wp::Cpu& c) {
    WP_ENTER(0x1098c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg503_01099de0(c);
    return;
}

void f_mg503_01098c80(wp::Cpu& c) {
    WP_ENTER(0x1098c80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg503_0109b960(c);
    return;
}

void f_mg503_01098c90(wp::Cpu& c) {
    WP_ENTER(0x1098c90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg503_0109ba80(c);
    return;
}

void f_mg503_01098ca0(wp::Cpu& c) {
    WP_ENTER(0x1098ca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mg503_0109bd50(c);
    return;
}

void f_mg503_01098cb0(wp::Cpu& c) {
    WP_ENTER(0x1098cb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1098cf0u: goto R_01098cf0;
        case 0x1098d14u: goto R_01098d14;
        case 0x1098d5cu: goto R_01098d5c;
        case 0x1098d78u: goto R_01098d78;
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
    c.r[5] = ((((g_mg503_bases[5] + 0x29eb4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[7] | c.r[7];
    c.r[7] = c.r[8] | c.r[8];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x29eb4u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[8] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x1098cf0u;
    f_mg503_01099cc0(c);
R_01098cf0:
    c.r[4] = ((((g_mg503_bases[5] + 0x2a178u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a178u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1098d14u;
    wp::call(c, c.ctr);
R_01098d14:
    c.r[3] = ((((g_mg503_bases[5] + 0x29f18u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x29f18u) & 0xFFFFu);
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
    c.lr = 0x1098d5cu;
    f_800402c0(c);
R_01098d5c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1098d78u;
    wp::call(c, c.ctr);
R_01098d78:
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

void f_mg503_01098da0(wp::Cpu& c) {
    WP_ENTER(0x1098da0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1098dccu: goto R_01098dcc;
        case 0x1098ddcu: goto R_01098ddc;
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
    if (wp::cr_get(c, 2)) goto L_01098ddc;
    c.r[4] = 0x0u;
    c.lr = 0x1098dccu;
    f_mg503_01099d10(c);
R_01098dcc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01098ddc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1098ddcu;
    f_801c7a8c(c);
L_01098ddc:
R_01098ddc:
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

void f_mg503_01098e00(wp::Cpu& c) {
    WP_ENTER(0x1098e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1098e34u: goto R_01098e34;
        case 0x1098e58u: goto R_01098e58;
        case 0x1098ea0u: goto R_01098ea0;
        case 0x1098eb8u: goto R_01098eb8;
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
    c.r[5] = ((((g_mg503_bases[5] + 0x29eb4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x29eb4u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x1098e34u;
    f_mg503_01099cc0(c);
R_01098e34:
    c.r[4] = ((((g_mg503_bases[5] + 0x2a178u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a178u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1098e58u;
    wp::call(c, c.ctr);
R_01098e58:
    c.r[3] = ((((g_mg503_bases[5] + 0x29f18u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x29f18u) & 0xFFFFu);
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
    c.lr = 0x1098ea0u;
    f_800402c0(c);
R_01098ea0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1098eb8u;
    wp::call(c, c.ctr);
R_01098eb8:
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

void f_mg503_01098ee0(wp::Cpu& c) {
    WP_ENTER(0x1098ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1098f10u: goto R_01098f10;
        case 0x1098f34u: goto R_01098f34;
        case 0x1098f7cu: goto R_01098f7c;
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
    c.r[5] = ((((g_mg503_bases[5] + 0x29eb4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x29eb4u) & 0xFFFFu);
    c.lr = 0x1098f10u;
    f_mg503_01099cc0(c);
R_01098f10:
    c.r[4] = ((((g_mg503_bases[5] + 0x2a178u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a178u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1098f34u;
    wp::call(c, c.ctr);
R_01098f34:
    c.r[3] = ((((g_mg503_bases[5] + 0x29f18u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x29f18u) & 0xFFFFu);
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
    c.lr = 0x1098f7cu;
    f_800402c0(c);
R_01098f7c:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_01098fa0(wp::Cpu& c) {
    WP_ENTER(0x1098fa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099008u: goto R_01099008;
        case 0x1099034u: goto R_01099034;
        case 0x1099048u: goto R_01099048;
        case 0x1099058u: goto R_01099058;
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
    if (wp::cr_get(c, 2)) goto L_01099058;
    ea = c.r[3] + 0x130u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mg503_bases[5] + 0x29f18u) + 0x8000u) >> 16) << 16);
    c.r[5] = wp::add_carry(c, c.r[3], 0x138u, 0);
    wp::record(c, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29f18u) & 0xFFFFu);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x130u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01099008;
    if (wp::cr_get(c, 2)) goto L_01099008;
    if (wp::cr_get(c, 2)) goto L_01099008;
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099008;
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1099008u;
    f_801c7a8c(c);
L_01099008:
R_01099008:
    c.r[4] = wp::add_carry(c, c.r[30], 0x12cu, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01099034;
    if (wp::cr_get(c, 2)) goto L_01099034;
    if (wp::cr_get(c, 2)) goto L_01099034;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099034;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1099034u;
    f_801c7a8c(c);
L_01099034:
R_01099034:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099048;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1099048u;
    f_mg503_01099d10(c);
L_01099048:
R_01099048:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01099058;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1099058u;
    f_801c7a8c(c);
L_01099058:
R_01099058:
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

void f_mg503_01099080(wp::Cpu& c) {
    WP_ENTER(0x1099080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10990c8u: goto R_010990c8;
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
    goto L_010990d0;
L_010990b0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10990c8u;
    wp::call(c, c.ctr);
R_010990c8:
    c.r[31] = c.r[31] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_010990d0:
    wp::compare_signed(c, 0, c.r[30], c.r[29]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010990b0;
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

void f_mg503_01099100(wp::Cpu& c) {
    WP_ENTER(0x1099100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099114u: goto R_01099114;
        case 0x1099128u: goto R_01099128;
        case 0x1099144u: goto R_01099144;
        case 0x1099150u: goto R_01099150;
        case 0x109915cu: goto R_0109915c;
        case 0x109916cu: goto R_0109916c;
        case 0x109918cu: goto R_0109918c;
        case 0x10991ecu: goto R_010991ec;
        case 0x10991f0u: goto R_010991f0;
        case 0x1099250u: goto R_01099250;
        case 0x1099254u: goto R_01099254;
        case 0x1099314u: goto R_01099314;
        case 0x1099318u: goto R_01099318;
        case 0x1099320u: goto R_01099320;
        case 0x1099348u: goto R_01099348;
        case 0x109934cu: goto R_0109934c;
        case 0x1099440u: goto R_01099440;
        case 0x1099458u: goto R_01099458;
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
    c.lr = 0x1099114u;
    f_801c83b8(c);
R_01099114:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1099128u;
    wp::call(c, c.ctr);
R_01099128:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x1099144u;
    wp::call(c, c.ctr);
R_01099144:
    c.r[29] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x1099150u;
    f_80043180(c);
R_01099150:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x109915cu;
    f_800431a0(c);
R_0109915c:
    c.r[4] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x109916cu;
    f_80043060(c);
R_0109916c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x109918cu;
    wp::call(c, c.ctr);
R_0109918c:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x134u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010991bc;
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
    goto L_01099440;
L_010991bc:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010991f0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10991ecu;
    f_801cee24(c);
R_010991ec:
    c.lr = 0x10991f0u;
    f_801d3940(c);
L_010991f0:
R_010991f0:
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
    if (!wp::cr_get(c, 1)) goto L_01099254;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1099250u;
    f_801cee24(c);
R_01099250:
    c.lr = 0x1099254u;
    f_801d3940(c);
L_01099254:
R_01099254:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010992a4;
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
    if (!wp::cr_get(c, 0)) goto L_01099298;
    c.r[3] = c.r[1] + 0x10u;
L_01099298:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010992e8;
L_010992a4:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010992e0;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010992d4;
    c.r[3] = c.r[1] + 0x10u;
L_010992d4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010992e8;
L_010992e0:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010992e8:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01099318;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1099314u;
    f_801cee24(c);
R_01099314:
    c.lr = 0x1099318u;
    f_801d3940(c);
L_01099318:
R_01099318:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x1099320u;
    f_801c79a4(c);
R_01099320:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0109934c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a3acu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3acu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1099348u;
    f_801cee24(c);
R_01099348:
    c.lr = 0x109934cu;
    f_801d3940(c);
L_0109934c:
R_0109934c:
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
    if (!wp::cr_get(c, 1)) goto L_010993f0;
L_010993b8:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010993d4;
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010993d4:
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
    goto L_010993b8;
    }
L_010993f0:
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
    if (wp::cr_get(c, 2)) goto L_01099440;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099440;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1099440u;
    f_801c7a8c(c);
L_01099440:
R_01099440:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x124u;
    wp::wr32(ea, c.r[3]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[28] + 0x121u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1099458u;
    f_801c8404(c);
R_01099458:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg503_01099470(wp::Cpu& c) {
    WP_ENTER(0x1099470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109948cu: goto R_0109948c;
        case 0x10994bcu: goto R_010994bc;
        case 0x10994dcu: goto R_010994dc;
        case 0x10994fcu: goto R_010994fc;
        case 0x1099520u: goto R_01099520;
        case 0x109952cu: goto R_0109952c;
        case 0x1099538u: goto R_01099538;
        case 0x1099544u: goto R_01099544;
        case 0x109955cu: goto R_0109955c;
        case 0x1099574u: goto R_01099574;
        case 0x1099584u: goto R_01099584;
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
    c.lr = 0x109948cu;
    f_801c83b8(c);
R_0109948c:
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    c.f[30] = c.f[1];
    c.f[31] = c.f[2];
    c.r[27] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[6] | c.r[6];
    if (!wp::cr_get(c, 2)) goto L_010994c0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10994bcu;
    f_800402c0(c);
R_010994bc:
    goto L_01099574;
L_010994c0:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010994e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10994dcu;
    wp::call(c, c.ctr);
R_010994dc:
    goto L_01099504;
L_010994e0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10994fcu;
    wp::call(c, c.ctr);
R_010994fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099574;
L_01099504:
    ea = c.r[27] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = wp::rotl(c.r[28], 3) & 0xfffffff8u;
    c.f[1] = c.f[31];
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1099520u;
    f_80043060(c);
R_01099520:
    c.f[1] = c.f[30];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x109952cu;
    f_80043120(c);
R_0109952c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x1099538u;
    f_800431a0(c);
R_01099538:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1099544u;
    f_80043180(c);
R_01099544:
    ea = c.r[27] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109955cu;
    f_80042650(c);
R_0109955c:
    c.r[0] = 0x1u;
    ea = c.r[27] + 0x128u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1099574u;
    f_800402c0(c);
L_01099574:
R_01099574:
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x28u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    c.f[30] = wp::rdf64(ea);
    c.lr = 0x1099584u;
    f_801c8404(c);
R_01099584:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg503_010995a0(wp::Cpu& c) {
    WP_ENTER(0x10995a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099600u: goto R_01099600;
        case 0x1099618u: goto R_01099618;
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
    if (wp::cr_get(c, 0)) goto L_010995cc;
    c.r[31] = c.r[4] | c.r[4];
    goto L_010995d0;
L_010995cc:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_010995d0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0109962c;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010995e8;
    goto L_0109962c;
L_010995e8:
    ea = c.r[3] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1099600u;
    f_80043180(c);
R_01099600:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[30];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1099618u;
    f_80042650(c);
R_01099618:
    ea = c.r[29] + 0x128u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109962c;
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_0109962c:
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

void f_mg503_01099650(wp::Cpu& c) {
    WP_ENTER(0x1099650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099698u: goto R_01099698;
        case 0x10996b0u: goto R_010996b0;
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
    if (wp::cr_get(c, 2)) goto L_010996cc;
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
    goto L_010996b8;
L_01099684:
    ea = c.r[29] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1099698u;
    f_80043180(c);
R_01099698:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10996b0u;
    f_80042650(c);
R_010996b0:
    c.r[31] = c.r[31] + 0x8u;
    c.r[30] = c.r[30] + 0x1u;
L_010996b8:
    ea = c.r[29] + 0x124u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01099684;
    }
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_010996cc:
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

void f_mg503_010996f0(wp::Cpu& c) {
    WP_ENTER(0x10996f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099704u: goto R_01099704;
        case 0x1099754u: goto R_01099754;
        case 0x1099774u: goto R_01099774;
        case 0x109979cu: goto R_0109979c;
        case 0x10997c0u: goto R_010997c0;
        case 0x10997e4u: goto R_010997e4;
        case 0x10997f0u: goto R_010997f0;
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
    c.lr = 0x1099704u;
    f_801c83b8(c);
R_01099704:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 0)) goto L_01099720;
    c.r[31] = c.r[4] | c.r[4];
    goto L_01099724;
L_01099720:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_01099724:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01099738;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01099740;
L_01099738:
    c.r[3] = 0x1u;
    goto L_010997e8;
L_01099740:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x1f8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1099754u;
    wp::call(c, c.ctr);
R_01099754:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109977c;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1099774u;
    wp::call(c, c.ctr);
R_01099774:
    c.r[3] = 0x1u;
    goto L_010997e8;
L_0109977c:
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
    c.lr = 0x109979cu;
    wp::call(c, c.ctr);
R_0109979c:
    wp::compare_unsigned(c, 0, c.r[3], 0x1u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010997e4;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10997c0u;
    wp::call(c, c.ctr);
R_010997c0:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010997e4;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010997e4;
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x10997e4u;
    f_800402c0(c);
L_010997e4:
R_010997e4:
    c.r[3] = c.r[30] | c.r[30];
L_010997e8:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10997f0u;
    f_801c8404(c);
R_010997f0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg503_01099800(wp::Cpu& c) {
    WP_ENTER(0x1099800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0109980c;
    goto L_01099810;
L_0109980c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_01099810:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01099824;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01099830;
L_01099824:
    c.r[3] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_01099830:
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

void f_mg503_01099850(wp::Cpu& c) {
    WP_ENTER(0x1099850u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0109985c;
    goto L_01099860;
L_0109985c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_01099860:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01099874;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01099880;
L_01099874:
    c.r[3] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_01099880:
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

void f_mg503_010998a0(wp::Cpu& c) {
    WP_ENTER(0x10998a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010998ac;
    goto L_010998b0;
L_010998ac:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_010998b0:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010998c4;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010998d0;
L_010998c4:
    c.r[3] = ((((g_mg503_bases[4] + 0x2914u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2914u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_010998d0:
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

void f_mg503_010998f0(wp::Cpu& c) {
    WP_ENTER(0x10998f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099904u: goto R_01099904;
        case 0x1099974u: goto R_01099974;
        case 0x1099978u: goto R_01099978;
        case 0x10999d8u: goto R_010999d8;
        case 0x10999dcu: goto R_010999dc;
        case 0x1099a9cu: goto R_01099a9c;
        case 0x1099aa0u: goto R_01099aa0;
        case 0x1099aa8u: goto R_01099aa8;
        case 0x1099ad0u: goto R_01099ad0;
        case 0x1099ad4u: goto R_01099ad4;
        case 0x1099bc8u: goto R_01099bc8;
        case 0x1099bd0u: goto R_01099bd0;
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
    c.lr = 0x1099904u;
    f_801c83b8(c);
R_01099904:
    ea = c.r[3] + 0x13cu;
    c.r[7] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x140u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    wp::compare_unsigned(c, 0, c.r[7], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01099944;
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
    goto L_01099bc8;
L_01099944:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[6];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01099978;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1099974u;
    f_801cee24(c);
R_01099974:
    c.lr = 0x1099978u;
    f_801d3940(c);
L_01099978:
R_01099978:
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
    if (!wp::cr_get(c, 1)) goto L_010999dc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10999d8u;
    f_801cee24(c);
R_010999d8:
    c.lr = 0x10999dcu;
    f_801d3940(c);
L_010999dc:
R_010999dc:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01099a2c;
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
    if (!wp::cr_get(c, 0)) goto L_01099a20;
    c.r[3] = c.r[1] + 0x10u;
L_01099a20:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01099a70;
L_01099a2c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01099a68;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01099a5c;
    c.r[3] = c.r[1] + 0x10u;
L_01099a5c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01099a70;
L_01099a68:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_01099a70:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01099aa0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x29ea0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29ea0u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1099a9cu;
    f_801cee24(c);
R_01099a9c:
    c.lr = 0x1099aa0u;
    f_801d3940(c);
L_01099aa0:
R_01099aa0:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x1099aa8u;
    f_801c79a4(c);
R_01099aa8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01099ad4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a3c8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3c8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1099ad0u;
    f_801cee24(c);
R_01099ad0:
    c.lr = 0x1099ad4u;
    f_801d3940(c);
L_01099ad4:
R_01099ad4:
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
    if (!wp::cr_get(c, 1)) goto L_01099b78;
L_01099b40:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_01099b5c;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01099b5c:
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
    goto L_01099b40;
    }
L_01099b78:
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
    if (wp::cr_get(c, 2)) goto L_01099bc8;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099bc8;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1099bc8u;
    f_801c7a8c(c);
L_01099bc8:
R_01099bc8:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1099bd0u;
    f_801c8404(c);
R_01099bd0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg503_01099be0(wp::Cpu& c) {
    WP_ENTER(0x1099be0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099c3cu: goto R_01099c3c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mg503_bases[5] + 0x29f08u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x29f08u) & 0xFFFFu);
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
    goto L_01099c44;
L_01099c30:
    c.r[3] = c.r[30] | c.r[30];
    c.r[12] = c.r[1] + 0x14u;
    c.lr = 0x1099c3cu;
    f_801c8244(c);
R_01099c3c:
    c.r[0] = c.r[0] | 0x0u;
    c.r[30] = c.r[30] + 0x8u;
L_01099c44:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01099c30;
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

void f_mg503_01099c70(wp::Cpu& c) {
    WP_ENTER(0x1099c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099c88u: goto R_01099c88;
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
    c.lr = 0x1099c88u;
    f_8003f8f0(c);
R_01099c88:
    c.r[3] = ((((g_mg503_bases[5] + 0x2b2a8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2b2a8u) & 0xFFFFu);
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

void f_mg503_01099cc0(wp::Cpu& c) {
    WP_ENTER(0x1099cc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099cd8u: goto R_01099cd8;
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
    c.lr = 0x1099cd8u;
    f_8003f640(c);
R_01099cd8:
    c.r[3] = ((((g_mg503_bases[5] + 0x2b2a8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2b2a8u) & 0xFFFFu);
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

void f_mg503_01099d10(wp::Cpu& c) {
    WP_ENTER(0x1099d10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099d64u: goto R_01099d64;
        case 0x1099da0u: goto R_01099da0;
        case 0x1099dacu: goto R_01099dac;
        case 0x1099dbcu: goto R_01099dbc;
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
    if (wp::cr_get(c, 2)) goto L_01099dbc;
    c.r[4] = ((((g_mg503_bases[5] + 0x2b2a8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b2a8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_01099d64;
L_01099d44:
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
    c.lr = 0x1099d64u;
    wp::call(c, c.ctr);
L_01099d64:
R_01099d64:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01099d44;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01099da0;
    if (wp::cr_get(c, 2)) goto L_01099da0;
    if (wp::cr_get(c, 2)) goto L_01099da0;
    if (wp::cr_get(c, 2)) goto L_01099da0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099da0;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1099da0u;
    f_801c7a8c(c);
L_01099da0:
R_01099da0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1099dacu;
    f_8003fb90(c);
R_01099dac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01099dbc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1099dbcu;
    f_801c7a8c(c);
L_01099dbc:
R_01099dbc:
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

void f_mg503_01099de0(wp::Cpu& c) {
    WP_ENTER(0x1099de0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099e24u: goto R_01099e24;
        case 0x1099e40u: goto R_01099e40;
        case 0x1099e48u: goto R_01099e48;
        case 0x1099e70u: goto R_01099e70;
        case 0x1099ec8u: goto R_01099ec8;
        case 0x1099ee4u: goto R_01099ee4;
        case 0x1099f10u: goto R_01099f10;
        case 0x1099f3cu: goto R_01099f3c;
        case 0x1099f64u: goto R_01099f64;
        case 0x1099f80u: goto R_01099f80;
        case 0x1099fa4u: goto R_01099fa4;
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
    c.r[30] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
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
    c.lr = 0x1099e24u;
    f_8003cc90(c);
R_01099e24:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1099e40u;
    wp::call(c, c.ctr);
R_01099e40:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1099e48u;
    f_8003d2d0(c);
R_01099e48:
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
    c.lr = 0x1099e70u;
    wp::call(c, c.ctr);
R_01099e70:
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
    c.lr = 0x1099ec8u;
    wp::call(c, c.ctr);
R_01099ec8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1099ee4u;
    wp::call(c, c.ctr);
R_01099ee4:
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
    c.lr = 0x1099f10u;
    wp::call(c, c.ctr);
R_01099f10:
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
    c.lr = 0x1099f3cu;
    wp::call(c, c.ctr);
R_01099f3c:
    ea = c.r[31] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01099fa4;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1099f64u;
    wp::call(c, c.ctr);
R_01099f64:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1099f80u;
    wp::call(c, c.ctr);
R_01099f80:
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
    c.lr = 0x1099fa4u;
    wp::call(c, c.ctr);
L_01099fa4:
R_01099fa4:
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

void f_mg503_01099fd0(wp::Cpu& c) {
    WP_ENTER(0x1099fd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1099fe8u: goto R_01099fe8;
        case 0x1099ff0u: goto R_01099ff0;
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
    c.lr = 0x1099fe8u;
    f_mg503_0109b210(c);
R_01099fe8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1099ff0u;
    f_mg503_0109d660(c);
R_01099ff0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_0109a010(wp::Cpu& c) {
    WP_ENTER(0x109a010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a034u: goto R_0109a034;
        case 0x109a050u: goto R_0109a050;
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
    c.lr = 0x109a034u;
    f_80010060(c);
R_0109a034:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a050u;
    wp::call(c, c.ctr);
R_0109a050:
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

void f_mg503_0109a070(wp::Cpu& c) {
    WP_ENTER(0x109a070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a0a8u: goto R_0109a0a8;
        case 0x109a0c4u: goto R_0109a0c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = ((((g_mg503_bases[5] + 0x2a3e8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[7] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3e8u) & 0xFFFFu);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109a0a8u;
    f_801d3590(c);
R_0109a0a8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a0c4u;
    wp::call(c, c.ctr);
R_0109a0c4:
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

void f_mg503_0109a0e0(wp::Cpu& c) {
    WP_ENTER(0x109a0e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a0f4u: goto R_0109a0f4;
        case 0x109a108u: goto R_0109a108;
        case 0x109a11cu: goto R_0109a11c;
        case 0x109a144u: goto R_0109a144;
        case 0x109a154u: goto R_0109a154;
        case 0x109a178u: goto R_0109a178;
        case 0x109a1d8u: goto R_0109a1d8;
        case 0x109a258u: goto R_0109a258;
        case 0x109a2c0u: goto R_0109a2c0;
        case 0x109a2f0u: goto R_0109a2f0;
        case 0x109a304u: goto R_0109a304;
        case 0x109a314u: goto R_0109a314;
        case 0x109a330u: goto R_0109a330;
        case 0x109a338u: goto R_0109a338;
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
    c.lr = 0x109a0f4u;
    f_801c83b4(c);
R_0109a0f4:
    c.r[26] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x109a108u;
    f_8006c450(c);
R_0109a108:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_0109a308;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x109a11cu;
    f_8006c460(c);
R_0109a11c:
    c.r[28] = ((((g_mg503_bases[5] + 0x2a3f0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3f0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109a144u;
    f_801c7860(c);
R_0109a144:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x109a154u;
    f_mg503_01048380(c);
R_0109a154:
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
    c.lr = 0x109a178u;
    f_mg503_01004710(c);
R_0109a178:
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
    if (!wp::cr_get(c, 2)) goto L_0109a1b4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109a1b8;
L_0109a1b4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109a1b8:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x109a1d8u;
    f_mg503_01004710(c);
R_0109a1d8:
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
    if (!wp::cr_get(c, 2)) goto L_0109a234;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109a238;
L_0109a234:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109a238:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x109a258u;
    f_mg503_01004710(c);
R_0109a258:
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
    if (!wp::cr_get(c, 2)) goto L_0109a29c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109a2a0;
L_0109a29c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109a2a0:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x109a2c0u;
    f_mg503_01004710(c);
R_0109a2c0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109a2dc;
    c.r[5] = c.r[1] + 0x35u;
    goto L_0109a2e0;
L_0109a2dc:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_0109a2e0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a2f0u;
    wp::call(c, c.ctr);
R_0109a2f0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109a330;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x109a304u;
    f_801c7a8c(c);
R_0109a304:
    goto L_0109a330;
L_0109a308:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x109a314u;
    f_8006c4e0(c);
R_0109a314:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a330u;
    wp::call(c, c.ctr);
L_0109a330:
R_0109a330:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x109a338u;
    f_801c8400(c);
R_0109a338:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_0109a350(wp::Cpu& c) {
    WP_ENTER(0x109a350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a374u: goto R_0109a374;
        case 0x109a390u: goto R_0109a390;
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
    c.lr = 0x109a374u;
    f_8003cc90(c);
R_0109a374:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a390u;
    wp::call(c, c.ctr);
R_0109a390:
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

void f_mg503_0109a3b0(wp::Cpu& c) {
    WP_ENTER(0x109a3b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a3e4u: goto R_0109a3e4;
        case 0x109a40cu: goto R_0109a40c;
        case 0x109a434u: goto R_0109a434;
        case 0x109a450u: goto R_0109a450;
        case 0x109a46cu: goto R_0109a46c;
        case 0x109a48cu: goto R_0109a48c;
        case 0x109a4b4u: goto R_0109a4b4;
        case 0x109a4d0u: goto R_0109a4d0;
        case 0x109a4f8u: goto R_0109a4f8;
        case 0x109a558u: goto R_0109a558;
        case 0x109a598u: goto R_0109a598;
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
    c.lr = 0x109a3e4u;
    wp::call(c, c.ctr);
R_0109a3e4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[4] + 0x2964u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg503_bases[4] + 0x2968u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[4] + 0x2964u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x2968u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x109a40cu;
    wp::call(c, c.ctr);
R_0109a40c:
    c.r[5] = ((((g_mg503_bases[4] + 0x2958u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x2958u) & 0xFFFFu);
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
    c.lr = 0x109a434u;
    wp::call(c, c.ctr);
R_0109a434:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a450u;
    wp::call(c, c.ctr);
R_0109a450:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a46cu;
    wp::call(c, c.ctr);
R_0109a46c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x109a48cu;
    wp::call(c, c.ctr);
R_0109a48c:
    c.r[5] = ((((g_mg503_bases[4] + 0x295cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x295cu) & 0xFFFFu);
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
    c.lr = 0x109a4b4u;
    wp::call(c, c.ctr);
R_0109a4b4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a4d0u;
    wp::call(c, c.ctr);
R_0109a4d0:
    c.r[5] = ((((g_mg503_bases[4] + 0x2960u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x2960u) & 0xFFFFu);
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
    c.lr = 0x109a4f8u;
    wp::call(c, c.ctr);
R_0109a4f8:
    c.r[3] = ((((g_mg503_bases[5] + 0x2a3f8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3f8u) & 0xFFFFu);
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
    goto L_0109a540;
L_0109a53c:
    c.r[28] = c.r[28] + 0x4u;
L_0109a540:
    wp::compare_unsigned(c, 0, c.r[28], c.r[29]);
    if (wp::cr_get(c, 2)) goto L_0109a564;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109a558u;
    f_801c8244(c);
R_0109a558:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109a53c;
    }
L_0109a564:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109a584;
    c.r[3] = 0x0u;
    goto L_0109a588;
L_0109a584:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109a588:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109a598;
    c.r[4] = 0x1u;
    c.lr = 0x109a598u;
    f_mg503_0109d8b0(c);
L_0109a598:
R_0109a598:
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

void f_mg503_0109a5c0(wp::Cpu& c) {
    WP_ENTER(0x109a5c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mg503_0109a5d0(wp::Cpu& c) {
    WP_ENTER(0x109a5d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a5e0u: goto R_0109a5e0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109a5e0u;
    f_mg503_0109b210(c);
R_0109a5e0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_0109a600(wp::Cpu& c) {
    WP_ENTER(0x109a600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a614u: goto R_0109a614;
        case 0x109a67cu: goto R_0109a67c;
        case 0x109a6ccu: goto R_0109a6cc;
        case 0x109a6d4u: goto R_0109a6d4;
        case 0x109a6ecu: goto R_0109a6ec;
        case 0x109a6f4u: goto R_0109a6f4;
        case 0x109a754u: goto R_0109a754;
        case 0x109a798u: goto R_0109a798;
        case 0x109a7b0u: goto R_0109a7b0;
        case 0x109a7b8u: goto R_0109a7b8;
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
    c.lr = 0x109a614u;
    f_801c83b8(c);
R_0109a614:
    c.r[5] = ((((g_mg503_bases[5] + 0x2a404u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a404u) & 0xFFFFu);
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
    goto L_0109a664;
L_0109a660:
    c.r[31] = c.r[31] + 0x4u;
L_0109a664:
    wp::compare_unsigned(c, 0, c.r[31], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0109a688;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109a67cu;
    f_801c8244(c);
R_0109a67c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109a660;
    }
L_0109a688:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109a6a8;
    c.r[31] = 0x0u;
    goto L_0109a6ac;
L_0109a6a8:
    ea = c.r[31] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0109a6ac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109a7b0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a6ccu;
    wp::call(c, c.ctr);
R_0109a6cc:
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109a6d4u;
    f_801290d0(c);
R_0109a6d4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109a6ecu;
    wp::call(c, c.ctr);
R_0109a6ec:
    ea = c.r[31] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109a6f4u;
    f_801290d0(c);
R_0109a6f4:
    c.r[3] = ((((g_mg503_bases[5] + 0x2a410u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2a410u) & 0xFFFFu);
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
    goto L_0109a73c;
L_0109a738:
    c.r[27] = c.r[27] + 0x4u;
L_0109a73c:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0109a760;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109a754u;
    f_801c8244(c);
R_0109a754:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109a738;
    }
L_0109a760:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109a7a4;
    c.r[0] = c.r[0] - c.r[27];
    c.r[3] = c.r[27] | c.r[27];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[4] = c.r[27] + 0x4u;
    c.r[5] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.lr = 0x109a798u;
    f_801cc76c(c);
R_0109a798:
    ea = c.r[29] + 0x118u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x118u;
    wp::wr32(ea, c.r[0]);
L_0109a7a4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x109a7b0u;
    f_mg503_0109d4f0(c);
L_0109a7b0:
R_0109a7b0:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x109a7b8u;
    f_801c8404(c);
R_0109a7b8:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg503_0109a7d0(wp::Cpu& c) {
    WP_ENTER(0x109a7d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mg503_bases[5] + 0x2a41cu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a41cu) & 0xFFFFu);
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_0109a7f0(wp::Cpu& c) {
    WP_ENTER(0x109a7f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a82cu: goto R_0109a82c;
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
    goto L_0109a830;
L_0109a810:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x15cu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xcu;
    c.ctr = c.r[12];
    c.lr = 0x109a82cu;
    wp::call(c, c.ctr);
R_0109a82c:
    c.r[31] = c.r[31] + 0x4u;
L_0109a830:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109a810;
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

void f_mg503_0109a860(wp::Cpu& c) {
    WP_ENTER(0x109a860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a88cu: goto R_0109a88c;
        case 0x109a8acu: goto R_0109a8ac;
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
    c.lr = 0x109a88cu;
    f_8003cc90(c);
R_0109a88c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x109a8acu;
    wp::call(c, c.ctr);
R_0109a8ac:
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

void f_mg503_0109a8d0(wp::Cpu& c) {
    WP_ENTER(0x109a8d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a8f4u: goto R_0109a8f4;
        case 0x109a90cu: goto R_0109a90c;
        case 0x109a91cu: goto R_0109a91c;
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
    c.lr = 0x109a8f4u;
    f_mg503_0109b210(c);
R_0109a8f4:
    c.r[5] = ((((g_mg503_bases[5] + 0x2a420u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a420u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109a90cu;
    f_801d34c4(c);
R_0109a90c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x109a91cu;
    f_mg503_0109e560(c);
R_0109a91c:
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

void f_mg503_0109a940(wp::Cpu& c) {
    WP_ENTER(0x109a940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a984u: goto R_0109a984;
        case 0x109a9a4u: goto R_0109a9a4;
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
    c.r[5] = ((((g_mg503_bases[5] + 0x2a3e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3e8u) & 0xFFFFu);
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109a984u;
    f_801d3590(c);
R_0109a984:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x109a9a4u;
    wp::call(c, c.ctr);
R_0109a9a4:
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

void f_mg503_0109a9c0(wp::Cpu& c) {
    WP_ENTER(0x109a9c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109a9ecu: goto R_0109a9ec;
        case 0x109aa0cu: goto R_0109aa0c;
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
    c.lr = 0x109a9ecu;
    f_80010060(c);
R_0109a9ec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x109aa0cu;
    wp::call(c, c.ctr);
R_0109aa0c:
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

void f_mg503_0109aa30(wp::Cpu& c) {
    WP_ENTER(0x109aa30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109aa44u: goto R_0109aa44;
        case 0x109aa5cu: goto R_0109aa5c;
        case 0x109aa70u: goto R_0109aa70;
        case 0x109aa98u: goto R_0109aa98;
        case 0x109aaa8u: goto R_0109aaa8;
        case 0x109aaccu: goto R_0109aacc;
        case 0x109ab2cu: goto R_0109ab2c;
        case 0x109abacu: goto R_0109abac;
        case 0x109ac14u: goto R_0109ac14;
        case 0x109ac48u: goto R_0109ac48;
        case 0x109ac5cu: goto R_0109ac5c;
        case 0x109ac6cu: goto R_0109ac6c;
        case 0x109ac8cu: goto R_0109ac8c;
        case 0x109ac94u: goto R_0109ac94;
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
    c.lr = 0x109aa44u;
    f_801c83b0(c);
R_0109aa44:
    c.r[25] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x109aa5cu;
    f_8006c450(c);
R_0109aa5c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_0109ac60;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x109aa70u;
    f_8006c460(c);
R_0109aa70:
    c.r[27] = ((((g_mg503_bases[5] + 0x2a3f0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3f0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109aa98u;
    f_801c7860(c);
R_0109aa98:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x109aaa8u;
    f_mg503_01048380(c);
R_0109aaa8:
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
    c.lr = 0x109aaccu;
    f_mg503_01004710(c);
R_0109aacc:
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
    if (!wp::cr_get(c, 2)) goto L_0109ab08;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109ab0c;
L_0109ab08:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109ab0c:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x109ab2cu;
    f_mg503_01004710(c);
R_0109ab2c:
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
    if (!wp::cr_get(c, 2)) goto L_0109ab88;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109ab8c;
L_0109ab88:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109ab8c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x109abacu;
    f_mg503_01004710(c);
R_0109abac:
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
    if (!wp::cr_get(c, 2)) goto L_0109abf0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109abf4;
L_0109abf0:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109abf4:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x109ac14u;
    f_mg503_01004710(c);
R_0109ac14:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109ac30;
    c.r[5] = c.r[1] + 0x35u;
    goto L_0109ac34;
L_0109ac30:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_0109ac34:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ac48u;
    wp::call(c, c.ctr);
R_0109ac48:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109ac8c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x109ac5cu;
    f_801c7a8c(c);
R_0109ac5c:
    goto L_0109ac8c;
L_0109ac60:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x109ac6cu;
    f_8006c4e0(c);
R_0109ac6c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x109ac8cu;
    wp::call(c, c.ctr);
L_0109ac8c:
R_0109ac8c:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x109ac94u;
    f_801c83fc(c);
R_0109ac94:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_0109acb0(wp::Cpu& c) {
    WP_ENTER(0x109acb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ad2cu: goto R_0109ad2c;
        case 0x109ad74u: goto R_0109ad74;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a428u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a428u) & 0xFFFFu);
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
    goto L_0109ad14;
L_0109ad10:
    c.r[30] = c.r[30] + 0x4u;
L_0109ad14:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109ad38;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109ad2cu;
    f_801c8244(c);
R_0109ad2c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109ad10;
    }
L_0109ad38:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109ad58;
    c.r[3] = 0x0u;
    goto L_0109ad5c;
L_0109ad58:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109ad5c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ad74;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x0u;
    c.lr = 0x109ad74u;
    f_mg503_0109d8b0(c);
L_0109ad74:
R_0109ad74:
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

void f_mg503_0109ad90(wp::Cpu& c) {
    WP_ENTER(0x109ad90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ae0cu: goto R_0109ae0c;
        case 0x109ae6cu: goto R_0109ae6c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a434u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a434u) & 0xFFFFu);
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
    goto L_0109adf4;
L_0109adf0:
    c.r[30] = c.r[30] + 0x4u;
L_0109adf4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109ae18;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109ae0cu;
    f_801c8244(c);
R_0109ae0c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109adf0;
    }
L_0109ae18:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109ae38;
    c.r[3] = 0x0u;
    goto L_0109ae3c;
L_0109ae38:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109ae3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ae6c;
    ea = c.r[3] + 0xa8u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xacu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0109ae64;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
L_0109ae64:
    c.r[4] = 0x0u;
    c.lr = 0x109ae6cu;
    f_mg503_0109d8b0(c);
L_0109ae6c:
R_0109ae6c:
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

void f_mg503_0109ae90(wp::Cpu& c) {
    WP_ENTER(0x109ae90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109af0cu: goto R_0109af0c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a440u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a440u) & 0xFFFFu);
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
    goto L_0109aef4;
L_0109aef0:
    c.r[30] = c.r[30] + 0x4u;
L_0109aef4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109af18;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109af0cu;
    f_801c8244(c);
R_0109af0c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109aef0;
    }
L_0109af18:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109af38;
    c.r[3] = 0x0u;
    goto L_0109af3c;
L_0109af38:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109af3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109af4c;
    c.r[3] = 0x0u;
    goto L_0109af50;
L_0109af4c:
    ea = c.r[3] + 0xa8u;
    c.r[3] = wp::rd32(ea);
L_0109af50:
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

void f_mg503_0109af70(wp::Cpu& c) {
    WP_ENTER(0x109af70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109afecu: goto R_0109afec;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a44cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a44cu) & 0xFFFFu);
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
    goto L_0109afd4;
L_0109afd0:
    c.r[30] = c.r[30] + 0x4u;
L_0109afd4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109aff8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109afecu;
    f_801c8244(c);
R_0109afec:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109afd0;
    }
L_0109aff8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109b018;
    c.r[3] = 0x0u;
    goto L_0109b01c;
L_0109b018:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109b01c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109b02c;
    c.r[3] = 0x0u;
    goto L_0109b030;
L_0109b02c:
    ea = c.r[3] + 0xacu;
    c.r[3] = wp::rd32(ea);
L_0109b030:
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

void f_mg503_0109b050(wp::Cpu& c) {
    WP_ENTER(0x109b050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109b0ccu: goto R_0109b0cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a458u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a458u) & 0xFFFFu);
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
    goto L_0109b0b4;
L_0109b0b0:
    c.r[30] = c.r[30] + 0x4u;
L_0109b0b4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109b0d8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109b0ccu;
    f_801c8244(c);
R_0109b0cc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109b0b0;
    }
L_0109b0d8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109b0f8;
    c.r[3] = 0x0u;
    goto L_0109b0fc;
L_0109b0f8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109b0fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109b10c;
    c.r[3] = 0x0u;
    goto L_0109b110;
L_0109b10c:
    ea = c.r[3] + 0xbcu;
    c.r[3] = wp::rd8(ea);
L_0109b110:
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

void f_mg503_0109b130(wp::Cpu& c) {
    WP_ENTER(0x109b130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109b1acu: goto R_0109b1ac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a464u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a464u) & 0xFFFFu);
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
    goto L_0109b194;
L_0109b190:
    c.r[30] = c.r[30] + 0x4u;
L_0109b194:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109b1b8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109b1acu;
    f_801c8244(c);
R_0109b1ac:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109b190;
    }
L_0109b1b8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109b1d8;
    c.r[3] = 0x0u;
    goto L_0109b1dc;
L_0109b1d8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109b1dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109b1ec;
    c.r[3] = 0x0u;
    goto L_0109b1f0;
L_0109b1ec:
    ea = c.r[3] + 0xbdu;
    c.r[3] = wp::rd8(ea);
L_0109b1f0:
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

void f_mg503_0109b210(wp::Cpu& c) {
    WP_ENTER(0x109b210u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109b224u: goto R_0109b224;
        case 0x109b28cu: goto R_0109b28c;
        case 0x109b2e0u: goto R_0109b2e0;
        case 0x109b2e8u: goto R_0109b2e8;
        case 0x109b300u: goto R_0109b300;
        case 0x109b31cu: goto R_0109b31c;
        case 0x109b334u: goto R_0109b334;
        case 0x109b348u: goto R_0109b348;
        case 0x109b350u: goto R_0109b350;
        case 0x109b360u: goto R_0109b360;
        case 0x109b378u: goto R_0109b378;
        case 0x109b388u: goto R_0109b388;
        case 0x109b398u: goto R_0109b398;
        case 0x109b3a8u: goto R_0109b3a8;
        case 0x109b3c0u: goto R_0109b3c0;
        case 0x109b3d0u: goto R_0109b3d0;
        case 0x109b488u: goto R_0109b488;
        case 0x109b4a0u: goto R_0109b4a0;
        case 0x109b4ccu: goto R_0109b4cc;
        case 0x109b4e4u: goto R_0109b4e4;
        case 0x109b65cu: goto R_0109b65c;
        case 0x109b668u: goto R_0109b668;
        case 0x109b6c4u: goto R_0109b6c4;
        case 0x109b6c8u: goto R_0109b6c8;
        case 0x109b728u: goto R_0109b728;
        case 0x109b72cu: goto R_0109b72c;
        case 0x109b7ecu: goto R_0109b7ec;
        case 0x109b7f0u: goto R_0109b7f0;
        case 0x109b7f8u: goto R_0109b7f8;
        case 0x109b820u: goto R_0109b820;
        case 0x109b824u: goto R_0109b824;
        case 0x109b898u: goto R_0109b898;
        case 0x109b8a8u: goto R_0109b8a8;
        case 0x109b904u: goto R_0109b904;
        case 0x109b920u: goto R_0109b920;
        case 0x109b92cu: goto R_0109b92c;
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
    c.lr = 0x109b224u;
    f_801c83b4(c);
R_0109b224:
    c.r[5] = ((((g_mg503_bases[5] + 0x2a470u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a470u) & 0xFFFFu);
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
    goto L_0109b274;
L_0109b270:
    c.r[27] = c.r[27] + 0x4u;
L_0109b274:
    wp::compare_unsigned(c, 0, c.r[27], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0109b298;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109b28cu;
    f_801c8244(c);
R_0109b28c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109b270;
    }
L_0109b298:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109b2b8;
    c.r[3] = 0x0u;
    goto L_0109b2bc;
L_0109b2b8:
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109b2bc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109b2c8;
    goto L_0109b924;
L_0109b2c8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b2e0u;
    wp::call(c, c.ctr);
R_0109b2e0:
    c.r[3] = 0xf0u;
    c.lr = 0x109b2e8u;
    f_801c79a4(c);
R_0109b2e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0109b304;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.lr = 0x109b300u;
    f_mg503_0109d3b0(c);
R_0109b300:
    c.r[30] = c.r[3] | c.r[3];
L_0109b304:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b31cu;
    wp::call(c, c.ctr);
R_0109b31c:
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
    c.lr = 0x109b334u;
    f_80042130(c);
R_0109b334:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x70u;
    ea = c.r[12] + 0x4cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b348u;
    wp::call(c, c.ctr);
R_0109b348:
    c.r[3] = 0x104u;
    c.lr = 0x109b350u;
    f_801c79a4(c);
R_0109b350:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0109b38c;
    c.lr = 0x109b360u;
    f_80042130(c);
R_0109b360:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b378u;
    wp::call(c, c.ctr);
R_0109b378:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x109b388u;
    f_8012b8d0(c);
R_0109b388:
    c.r[27] = c.r[3] | c.r[3];
L_0109b38c:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = 0x10cu;
    c.lr = 0x109b398u;
    f_801c79a4(c);
R_0109b398:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0109b3f0;
    c.lr = 0x109b3a8u;
    f_80042130(c);
R_0109b3a8:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b3c0u;
    wp::call(c, c.ctr);
R_0109b3c0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x109b3d0u;
    f_8012b8d0(c);
R_0109b3d0:
    c.r[4] = ((((g_mg503_bases[5] + 0x2b640u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg503_bases[4] + 0x2970u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b640u) & 0xFFFFu);
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2970u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[27] + 0x108u;
    wp::wr32(ea, c.r[0]);
L_0109b3f0:
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = ((((g_mg503_bases[4] + 0x2974u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2974u) & 0xFFFFu);
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
    c.lr = 0x109b488u;
    wp::call(c, c.ctr);
R_0109b488:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x40u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b4a0u;
    wp::call(c, c.ctr);
R_0109b4a0:
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
    c.lr = 0x109b4ccu;
    wp::call(c, c.ctr);
R_0109b4cc:
    ea = c.r[30] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0xd0u;
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b4e4u;
    wp::call(c, c.ctr);
R_0109b4e4:
    c.r[4] = ((((g_mg503_bases[4] + 0x296cu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x55550000u;
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x296cu) & 0xFFFFu);
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
    c.lr = 0x109b65cu;
    f_80129080(c);
R_0109b65c:
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x109b668u;
    f_80129080(c);
R_0109b668:
    ea = c.r[28] + 0x118u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x11cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_0109b694;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    goto L_0109b904;
L_0109b694:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0109b6c8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a47cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a47cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109b6c4u;
    f_801cee24(c);
R_0109b6c4:
    c.lr = 0x109b6c8u;
    f_801d3940(c);
L_0109b6c8:
R_0109b6c8:
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
    if (!wp::cr_get(c, 1)) goto L_0109b72c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a47cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a47cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109b728u;
    f_801cee24(c);
R_0109b728:
    c.lr = 0x109b72cu;
    f_801d3940(c);
L_0109b72c:
R_0109b72c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0109b77c;
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
    if (!wp::cr_get(c, 0)) goto L_0109b770;
    c.r[3] = c.r[1] + 0x8u;
L_0109b770:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0109b7c0;
L_0109b77c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0109b7b8;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0109b7ac;
    c.r[3] = c.r[1] + 0x8u;
L_0109b7ac:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0109b7c0;
L_0109b7b8:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0109b7c0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0109b7f0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a47cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a47cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109b7ecu;
    f_801cee24(c);
R_0109b7ec:
    c.lr = 0x109b7f0u;
    f_801d3940(c);
L_0109b7f0:
R_0109b7f0:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x109b7f8u;
    f_801c79a4(c);
R_0109b7f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0109b824;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x434u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x434u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109b820u;
    f_801cee24(c);
R_0109b820:
    c.lr = 0x109b824u;
    f_801d3940(c);
L_0109b824:
R_0109b824:
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
    c.lr = 0x109b898u;
    f_800043c4(c);
R_0109b898:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.lr = 0x109b8a8u;
    f_80004714(c);
R_0109b8a8:
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
    if (wp::cr_get(c, 2)) goto L_0109b904;
    ea = c.r[1] + 0x80u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109b904;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x109b904u;
    f_801c7a8c(c);
L_0109b904:
R_0109b904:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x19cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109b920u;
    wp::call(c, c.ctr);
R_0109b920:
    c.r[3] = c.r[30] | c.r[30];
L_0109b924:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x109b92cu;
    f_801c8400(c);
R_0109b92c:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mg503_0109b940(wp::Cpu& c) {
    WP_ENTER(0x109b940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg503_0109b950(wp::Cpu& c) {
    WP_ENTER(0x109b950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg503_0109b960(wp::Cpu& c) {
    WP_ENTER(0x109b960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109b9e4u: goto R_0109b9e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg503_bases[5] + 0x2a49cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a49cu) & 0xFFFFu);
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
    goto L_0109b9cc;
L_0109b9c8:
    c.r[30] = c.r[30] + 0x4u;
L_0109b9cc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109b9f0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109b9e4u;
    f_801c8244(c);
R_0109b9e4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109b9c8;
    }
L_0109b9f0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109ba10;
    c.r[3] = 0x0u;
    goto L_0109ba14;
L_0109ba10:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109ba14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ba54;
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
L_0109ba54:
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

void f_mg503_0109ba80(wp::Cpu& c) {
    WP_ENTER(0x109ba80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109baa8u: goto R_0109baa8;
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
    c.lr = 0x109baa8u;
    wp::call(c, c.ctr);
R_0109baa8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_0109bac0(wp::Cpu& c) {
    WP_ENTER(0x109bac0u);
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

void f_mg503_0109bae0(wp::Cpu& c) {
    WP_ENTER(0x109bae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[8] = ((((g_mg503_bases[6] + 0xb28u) + 0x8000u) >> 16) << 16);
    c.r[9] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[6] + 0xb28u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109bb50;
    c.r[7] = ((((g_mg503_bases[6] + 0xb30u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x38u;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    c.r[6] = c.r[7] + wp::sign_extend16((g_mg503_bases[6] + 0xb30u) & 0xFFFFu);
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
    ea = c.r[7] + wp::sign_extend16((g_mg503_bases[6] + 0xb30u) & 0xFFFFu);
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
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[6] + 0xb28u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_0109bb50:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[6] + 0xb30u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[12] + 0x190u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0xb30u) & 0xFFFFu);
    c.r[5] = c.r[6] + c.r[0];
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_0109bb70(wp::Cpu& c) {
    WP_ENTER(0x109bb70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109bbf4u: goto R_0109bbf4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a4a8u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4a8u) & 0xFFFFu);
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
    goto L_0109bbdc;
L_0109bbd8:
    c.r[30] = c.r[30] + 0x4u;
L_0109bbdc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109bc00;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109bbf4u;
    f_801c8244(c);
R_0109bbf4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109bbd8;
    }
L_0109bc00:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109bc20;
    c.r[4] = 0x0u;
    goto L_0109bc24;
L_0109bc20:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0109bc24:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109bc40;
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
L_0109bc40:
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

void f_mg503_0109bc60(wp::Cpu& c) {
    WP_ENTER(0x109bc60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109bce4u: goto R_0109bce4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a4b4u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4b4u) & 0xFFFFu);
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
    goto L_0109bccc;
L_0109bcc8:
    c.r[30] = c.r[30] + 0x4u;
L_0109bccc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109bcf0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109bce4u;
    f_801c8244(c);
R_0109bce4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109bcc8;
    }
L_0109bcf0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109bd10;
    c.r[4] = 0x0u;
    goto L_0109bd14;
L_0109bd10:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0109bd14:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109bd30;
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
L_0109bd30:
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

void f_mg503_0109bd50(wp::Cpu& c) {
    WP_ENTER(0x109bd50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109bdd4u: goto R_0109bdd4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg503_bases[5] + 0x2a4c0u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4c0u) & 0xFFFFu);
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
    goto L_0109bdbc;
L_0109bdb8:
    c.r[29] = c.r[29] + 0x4u;
L_0109bdbc:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0109bde0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109bdd4u;
    f_801c8244(c);
R_0109bdd4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109bdb8;
    }
L_0109bde0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109be00;
    c.r[5] = 0x0u;
    goto L_0109be04;
L_0109be00:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0109be04:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109be64;
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
L_0109be64:
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

void f_mg503_0109be90(wp::Cpu& c) {
    WP_ENTER(0x109be90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109bf14u: goto R_0109bf14;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg503_bases[5] + 0x2a4ccu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4ccu) & 0xFFFFu);
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
    goto L_0109befc;
L_0109bef8:
    c.r[29] = c.r[29] + 0x4u;
L_0109befc:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0109bf20;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109bf14u;
    f_801c8244(c);
R_0109bf14:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109bef8;
    }
L_0109bf20:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109bf40;
    c.r[6] = 0x0u;
    goto L_0109bf44;
L_0109bf40:
    ea = c.r[29] + 0x0u;
    c.r[6] = wp::rd32(ea);
L_0109bf44:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109bfac;
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
L_0109bfac:
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

void f_mg503_0109bfd0(wp::Cpu& c) {
    WP_ENTER(0x109bfd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c010u: goto R_0109c010;
        case 0x109c02cu: goto R_0109c02c;
        case 0x109c044u: goto R_0109c044;
        case 0x109c068u: goto R_0109c068;
        case 0x109c08cu: goto R_0109c08c;
        case 0x109c0acu: goto R_0109c0ac;
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
    if (!wp::cr_get(c, 0)) goto L_0109c014;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109c010u;
    wp::call(c, c.ctr);
R_0109c010:
    goto L_0109c044;
L_0109c014:
    if (!wp::cr_get(c, 2)) goto L_0109c030;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109c02cu;
    wp::call(c, c.ctr);
R_0109c02c:
    goto L_0109c044;
L_0109c030:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109c044u;
    wp::call(c, c.ctr);
L_0109c044:
R_0109c044:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0109c06c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109c068u;
    wp::call(c, c.ctr);
R_0109c068:
    goto L_0109c0ac;
L_0109c06c:
    if (!wp::cr_get(c, 2)) goto L_0109c090;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109c08cu;
    wp::call(c, c.ctr);
R_0109c08c:
    goto L_0109c0ac;
L_0109c090:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109c0acu;
    wp::call(c, c.ctr);
L_0109c0ac:
R_0109c0ac:
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

void f_mg503_0109c0d0(wp::Cpu& c) {
    WP_ENTER(0x109c0d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c100u: goto R_0109c100;
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
    c.lr = 0x109c100u;
    wp::call(c, c.ctr);
R_0109c100:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_0109c110(wp::Cpu& c) {
    WP_ENTER(0x109c110u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c124u: goto R_0109c124;
        case 0x109c190u: goto R_0109c190;
        case 0x109c2ecu: goto R_0109c2ec;
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
    c.lr = 0x109c124u;
    f_801c83b8(c);
R_0109c124:
    c.r[9] = ((((g_mg503_bases[5] + 0x2a4d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4d8u) & 0xFFFFu);
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
    goto L_0109c178;
L_0109c174:
    c.r[29] = c.r[29] + 0x4u;
L_0109c178:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0109c19c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109c190u;
    f_801c8244(c);
R_0109c190:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109c174;
    }
L_0109c19c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109c1bc;
    c.r[5] = 0x0u;
    goto L_0109c1c0;
L_0109c1bc:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0109c1c0:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109c2e4;
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
    if (wp::cr_get(c, 0)) goto L_0109c294;
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_0109c294;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_0109c294;
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
    goto L_0109c2e4;
L_0109c294:
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
L_0109c2e4:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x109c2ecu;
    f_801c8404(c);
R_0109c2ec:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg503_0109c300(wp::Cpu& c) {
    WP_ENTER(0x109c300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c340u: goto R_0109c340;
        case 0x109c364u: goto R_0109c364;
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
    c.lr = 0x109c340u;
    wp::call(c, c.ctr);
R_0109c340:
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
    c.lr = 0x109c364u;
    wp::call(c, c.ctr);
R_0109c364:
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

void f_mg503_0109c380(wp::Cpu& c) {
    WP_ENTER(0x109c380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c3b4u: goto R_0109c3b4;
        case 0x109c3d8u: goto R_0109c3d8;
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
    c.lr = 0x109c3b4u;
    wp::call(c, c.ctr);
R_0109c3b4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109c3d8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109c3d8u;
    wp::call(c, c.ctr);
L_0109c3d8:
R_0109c3d8:
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

void f_mg503_0109c400(wp::Cpu& c) {
    WP_ENTER(0x109c400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c434u: goto R_0109c434;
        case 0x109c45cu: goto R_0109c45c;
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
    c.lr = 0x109c434u;
    wp::call(c, c.ctr);
R_0109c434:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[4] + 0x2964u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg503_bases[4] + 0x2968u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg503_bases[4] + 0x2964u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[4] + 0x2968u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x109c45cu;
    wp::call(c, c.ctr);
R_0109c45c:
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

void f_mg503_0109c480(wp::Cpu& c) {
    WP_ENTER(0x109c480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c4acu: goto R_0109c4ac;
        case 0x109c518u: goto R_0109c518;
        case 0x109c5a0u: goto R_0109c5a0;
        case 0x109c608u: goto R_0109c608;
        case 0x109c6acu: goto R_0109c6ac;
        case 0x109c6f0u: goto R_0109c6f0;
        case 0x109c730u: goto R_0109c730;
        case 0x109c75cu: goto R_0109c75c;
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
    c.lr = 0x109c4acu;
    f_801c83b8(c);
R_0109c4ac:
    c.r[8] = ((((g_mg503_bases[5] + 0x2a4e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4e4u) & 0xFFFFu);
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
    goto L_0109c500;
L_0109c4fc:
    c.r[27] = c.r[27] + 0x4u;
L_0109c500:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0109c524;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109c518u;
    f_801c8244(c);
R_0109c518:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109c4fc;
    }
L_0109c524:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109c544;
    c.r[28] = 0x0u;
    goto L_0109c548;
L_0109c544:
    ea = c.r[27] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_0109c548:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[27] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0109c55c;
    c.r[3] = 0x0u;
    goto L_0109c73c;
L_0109c55c:
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
    c.lr = 0x109c5a0u;
    wp::call(c, c.ctr);
R_0109c5a0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[1] + 0x18u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x1cu;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    if (!wp::cr_get(c, 2)) goto L_0109c60c;
    c.r[3] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_0109c5e0;
    c.f[2] = wp::round_single(c.f[0] / c.f[5]);
    c.ps1[2] = c.f[2];
L_0109c5e0:
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
    c.lr = 0x109c608u;
    wp::call(c, c.ctr);
R_0109c608:
    goto L_0109c6ac;
L_0109c60c:
    c.r[3] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_0109c63c;
    goto L_0109c640;
L_0109c63c:
    c.f[3] = c.f[2];
L_0109c640:
    c.r[3] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[0], c.f[2]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_0109c658;
    goto L_0109c65c;
L_0109c658:
    c.f[2] = c.f[0];
L_0109c65c:
    wp::compare_float(c, 0, c.f[2], c.f[3]);
    if (!wp::cr_get(c, 1)) goto L_0109c668;
    c.f[2] = c.f[3];
L_0109c668:
    c.r[3] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (wp::cr_get(c, 0)) goto L_0109c680;
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_0109c684;
L_0109c680:
    c.r[27] = 0x1u;
L_0109c684:
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
    c.lr = 0x109c6acu;
    wp::call(c, c.ctr);
L_0109c6ac:
R_0109c6ac:
    c.r[4] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg503_bases[4] + 0x29a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[1] + 0x28u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x29a0u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
L_0109c6c0:
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
    c.lr = 0x109c6f0u;
    wp::call(c, c.ctr);
R_0109c6f0:
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[30]);
    c.r[0] = wp::mfcr(c);
    c.r[0] = wp::rotl(c.r[0], 2) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109c738;
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
    c.lr = 0x109c730u;
    wp::call(c, c.ctr);
R_0109c730:
    c.r[27] = 0x1u;
    WP_POLL(c);
    goto L_0109c6c0;
L_0109c738:
    c.r[3] = c.r[27] | c.r[27];
L_0109c73c:
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
    c.lr = 0x109c75cu;
    f_801c8404(c);
R_0109c75c:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_0109c770(wp::Cpu& c) {
    WP_ENTER(0x109c770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c784u: goto R_0109c784;
        case 0x109c7f4u: goto R_0109c7f4;
        case 0x109c900u: goto R_0109c900;
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
    c.lr = 0x109c784u;
    f_801c83b4(c);
R_0109c784:
    c.r[10] = ((((g_mg503_bases[5] + 0x2a4f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[10] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4f0u) & 0xFFFFu);
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
    goto L_0109c7dc;
L_0109c7d8:
    c.r[27] = c.r[27] + 0x4u;
L_0109c7dc:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0109c800;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109c7f4u;
    f_801c8244(c);
R_0109c7f4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109c7d8;
    }
L_0109c800:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109c820;
    c.r[5] = 0x0u;
    goto L_0109c824;
L_0109c820:
    ea = c.r[27] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0109c824:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109c8f8;
    ea = c.r[5] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109c84c;
    goto L_0109c8f8;
L_0109c84c:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_0109c8d4;
L_0109c868:
    wp::compare_unsigned(c, 0, c.r[0], 0xbu);
    if (!wp::cr_get(c, 2)) goto L_0109c878;
    c.r[7] = c.r[7] + 0x3u;
    goto L_0109c8d4;
L_0109c878:
    wp::compare_unsigned(c, 0, c.r[0], 0xcu);
    if (!wp::cr_get(c, 2)) goto L_0109c8a0;
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
    goto L_0109c8d0;
L_0109c8a0:
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_0109c8cc;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_0109c8c4;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_0109c8c4:
    c.r[8] = 0x0u;
    goto L_0109c8d0;
L_0109c8cc:
    c.r[8] = c.r[8] + 0x1u;
L_0109c8d0:
    c.r[7] = c.r[7] + 0x1u;
L_0109c8d4:
    ea = c.r[5] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[6];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109c868;
    }
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_0109c8f8;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_0109c8f8:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x109c900u;
    f_801c8400(c);
R_0109c900:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg503_0109c910(wp::Cpu& c) {
    WP_ENTER(0x109c910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109c924u: goto R_0109c924;
        case 0x109c998u: goto R_0109c998;
        case 0x109c9dcu: goto R_0109c9dc;
        case 0x109ca48u: goto R_0109ca48;
        case 0x109ca94u: goto R_0109ca94;
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
    c.lr = 0x109c924u;
    f_801c83b4(c);
R_0109c924:
    c.r[9] = ((((g_mg503_bases[5] + 0x2a4fcu) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mg503_bases[5] + 0x2a4fcu) & 0xFFFFu);
    c.r[8] = wp::rd32(ea);
    c.r[9] = ea;
    c.r[27] = c.r[5] | c.r[5];
    c.r[30] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[9] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
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
    goto L_0109c980;
L_0109c97c:
    c.r[29] = c.r[29] + 0x4u;
L_0109c980:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109c9a4;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109c998u;
    f_801c8244(c);
R_0109c998:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109c97c;
    }
L_0109c9a4:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109c9c4;
    c.r[31] = 0x0u;
    goto L_0109c9c8;
L_0109c9c4:
    ea = c.r[29] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0109c9c8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ca10;
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x109c9dcu;
    f_8012be00(c);
R_0109c9dc:
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
    goto L_0109ca8c;
L_0109ca10:
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
    c.lr = 0x109ca48u;
    f_8012be00(c);
R_0109ca48:
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
L_0109ca8c:
    c.r[11] = c.r[1] + 0x70u;
    c.lr = 0x109ca94u;
    f_801c8400(c);
R_0109ca94:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mg503_0109cab0(wp::Cpu& c) {
    WP_ENTER(0x109cab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109cac4u: goto R_0109cac4;
        case 0x109cb30u: goto R_0109cb30;
        case 0x109cb78u: goto R_0109cb78;
        case 0x109cba8u: goto R_0109cba8;
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
    c.lr = 0x109cac4u;
    f_801c83b8(c);
R_0109cac4:
    c.r[8] = ((((g_mg503_bases[5] + 0x2a508u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a508u) & 0xFFFFu);
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
    goto L_0109cb18;
L_0109cb14:
    c.r[30] = c.r[30] + 0x4u;
L_0109cb18:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109cb3c;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109cb30u;
    f_801c8244(c);
R_0109cb30:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109cb14;
    }
L_0109cb3c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109cb5c;
    c.r[31] = 0x0u;
    goto L_0109cb60;
L_0109cb5c:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0109cb60:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109cb78u;
    wp::call(c, c.ctr);
R_0109cb78:
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
    c.lr = 0x109cba8u;
    f_801c8404(c);
R_0109cba8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg503_0109cbc0(wp::Cpu& c) {
    WP_ENTER(0x109cbc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109cc44u: goto R_0109cc44;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg503_bases[5] + 0x2a514u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a514u) & 0xFFFFu);
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
    goto L_0109cc2c;
L_0109cc28:
    c.r[30] = c.r[30] + 0x4u;
L_0109cc2c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109cc50;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109cc44u;
    f_801c8244(c);
R_0109cc44:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109cc28;
    }
L_0109cc50:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109cc70;
    c.r[3] = 0x0u;
    goto L_0109cc74;
L_0109cc70:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109cc74:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109cc94;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[29] & 0xffu;
    ea = c.r[4] + 0xbbu;
    c.r[3] = wp::rd8(ea);
    c.r[3] = c.r[3] & 0xfeu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0xbbu;
    wp::wr8(ea, c.r[0]);
L_0109cc94:
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

void f_mg503_0109ccc0(wp::Cpu& c) {
    WP_ENTER(0x109ccc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109cd44u: goto R_0109cd44;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg503_bases[5] + 0x2a520u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a520u) & 0xFFFFu);
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
    goto L_0109cd2c;
L_0109cd28:
    c.r[30] = c.r[30] + 0x4u;
L_0109cd2c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109cd50;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109cd44u;
    f_801c8244(c);
R_0109cd44:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109cd28;
    }
L_0109cd50:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109cd70;
    c.r[4] = 0x0u;
    goto L_0109cd74;
L_0109cd70:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0109cd74:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109cdcc;
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
L_0109cdcc:
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

void f_mg503_0109cdf0(wp::Cpu& c) {
    WP_ENTER(0x109cdf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ce74u: goto R_0109ce74;
        case 0x109cec4u: goto R_0109cec4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a52cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a52cu) & 0xFFFFu);
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
    goto L_0109ce5c;
L_0109ce58:
    c.r[30] = c.r[30] + 0x4u;
L_0109ce5c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109ce80;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109ce74u;
    f_801c8244(c);
R_0109ce74:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109ce58;
    }
L_0109ce80:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109cea0;
    c.r[3] = 0x0u;
    goto L_0109cea4;
L_0109cea0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109cea4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109cec4;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.f[1] = c.f[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x84u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109cec4u;
    wp::call(c, c.ctr);
L_0109cec4:
R_0109cec4:
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

void f_mg503_0109cef0(wp::Cpu& c) {
    WP_ENTER(0x109cef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mg503_0109cf00(wp::Cpu& c) {
    WP_ENTER(0x109cf00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109cf84u: goto R_0109cf84;
        case 0x109cfdcu: goto R_0109cfdc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg503_bases[5] + 0x2a538u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg503_bases[5] + 0x2a538u) & 0xFFFFu);
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
    goto L_0109cf6c;
L_0109cf68:
    c.r[30] = c.r[30] + 0x4u;
L_0109cf6c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109cf90;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109cf84u;
    f_801c8244(c);
R_0109cf84:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109cf68;
    }
L_0109cf90:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109cfb0;
    c.r[3] = 0x0u;
    goto L_0109cfb4;
L_0109cfb0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0109cfb4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109cfdc;
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
    c.lr = 0x109cfdcu;
    wp::call(c, c.ctr);
L_0109cfdc:
R_0109cfdc:
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

void f_mg503_0109d000(wp::Cpu& c) {
    WP_ENTER(0x109d000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x108u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg503_0109d010(wp::Cpu& c) {
    WP_ENTER(0x109d010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d04cu: goto R_0109d04c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = c.r[4] ^ 0x80000000u;
    c.r[4] = ((((g_mg503_bases[4] + 0x29b0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x29b0u) & 0xFFFFu);
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mg503_bases[4] + 0x29acu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x29acu) & 0xFFFFu);
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
    c.lr = 0x109d04cu;
    f_80071fe0(c);
R_0109d04c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_0109d060(wp::Cpu& c) {
    WP_ENTER(0x109d060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d0dcu: goto R_0109d0dc;
        case 0x109d134u: goto R_0109d134;
        case 0x109d158u: goto R_0109d158;
        case 0x109d168u: goto R_0109d168;
        case 0x109d17cu: goto R_0109d17c;
        case 0x109d18cu: goto R_0109d18c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a544u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a544u) & 0xFFFFu);
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
    goto L_0109d0c4;
L_0109d0c0:
    c.r[30] = c.r[30] + 0x4u;
L_0109d0c4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109d0e8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109d0dcu;
    f_801c8244(c);
R_0109d0dc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109d0c0;
    }
L_0109d0e8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109d108;
    c.r[31] = 0x0u;
    goto L_0109d10c;
L_0109d108:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0109d10c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109d11c;
    c.r[3] = 0x0u;
    goto L_0109d1d8;
L_0109d11c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x64u;
    ea = c.r[12] + 0x1e8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109d134u;
    wp::call(c, c.ctr);
R_0109d134:
    ea = c.r[31] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x51ec0000u;
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] * c.r[3];
    c.r[3] = c.r[4] + 0xffff851fu;
    c.r[0] = wp::mulhwu(c.r[3], c.r[0]);
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x109d158u;
    f_80071fe0(c);
R_0109d158:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0109d170;
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x109d168u;
    f_80071fe0(c);
R_0109d168:
    c.r[30] = c.r[3] | c.r[3];
    goto L_0109d190;
L_0109d170:
    c.r[31] = ((((g_mg503_bases[4] + 0x29bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x29bcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x109d17cu;
    f_80071fe0(c);
R_0109d17c:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0109d190;
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x29bcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x109d18cu;
    f_80071fe0(c);
R_0109d18c:
    c.r[30] = c.r[3] | c.r[3];
L_0109d190:
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
    if (!wp::cr_get(c, 0)) goto L_0109d1c8;
    c.r[30] = c.r[0] | c.r[0];
    goto L_0109d1d4;
L_0109d1c8:
    wp::compare_signed(c, 0, c.r[30], 0x190u);
    if (!wp::cr_get(c, 1)) goto L_0109d1d4;
    c.r[30] = 0x190u;
L_0109d1d4:
    c.r[3] = c.r[30] | c.r[30];
L_0109d1d8:
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

void f_mg503_0109d200(wp::Cpu& c) {
    WP_ENTER(0x109d200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d27cu: goto R_0109d27c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2a550u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a550u) & 0xFFFFu);
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
    goto L_0109d264;
L_0109d260:
    c.r[30] = c.r[30] + 0x4u;
L_0109d264:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109d288;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109d27cu;
    f_801c8244(c);
R_0109d27c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109d260;
    }
L_0109d288:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109d2a8;
    c.r[5] = 0x0u;
    goto L_0109d2ac;
L_0109d2a8:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0109d2ac:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109d2bc;
    c.r[3] = 0x0u;
    goto L_0109d304;
L_0109d2bc:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[9] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = c.r[3] | c.r[3];
    goto L_0109d2ec;
L_0109d2d0:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[6] = c.r[6] + 0x2u;
    c.r[0] = c.r[8] + c.r[0];
    c.r[9] = c.r[9] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_0109d2ec:
    wp::compare_unsigned(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_0109d304;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[6];
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109d2d0;
    }
L_0109d304:
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

void f_mg503_0109d320(wp::Cpu& c) {
    WP_ENTER(0x109d320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d350u: goto R_0109d350;
        case 0x109d36cu: goto R_0109d36c;
        case 0x109d374u: goto R_0109d374;
        case 0x109d38cu: goto R_0109d38c;
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
    c.lr = 0x109d350u;
    wp::call(c, c.ctr);
R_0109d350:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1f0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109d36cu;
    wp::call(c, c.ctr);
R_0109d36c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x109d374u;
    f_80019f20(c);
R_0109d374:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1ecu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109d38cu;
    wp::call(c, c.ctr);
R_0109d38c:
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

void f_mg503_0109d3b0(wp::Cpu& c) {
    WP_ENTER(0x109d3b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d3c4u: goto R_0109d3c4;
        case 0x109d3e4u: goto R_0109d3e4;
        case 0x109d3f0u: goto R_0109d3f0;
        case 0x109d40cu: goto R_0109d40c;
        case 0x109d4d4u: goto R_0109d4d4;
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
    c.lr = 0x109d3c4u;
    f_801c83b8(c);
R_0109d3c4:
    c.r[30] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0xd0u;
    c.lr = 0x109d3e4u;
    f_mg503_010a37a0(c);
R_0109d3e4:
    c.r[3] = c.r[27] + 0xe0u;
    c.r[4] = 0x0u;
    c.lr = 0x109d3f0u;
    f_mg503_010a37a0(c);
R_0109d3f0:
    c.r[31] = 0x0u;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + 0xcu;
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x109d40cu;
    f_801cf394(c);
R_0109d40c:
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
    c.lr = 0x109d4d4u;
    f_801c8404(c);
R_0109d4d4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg503_0109d4f0(wp::Cpu& c) {
    WP_ENTER(0x109d4f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d52cu: goto R_0109d52c;
        case 0x109d53cu: goto R_0109d53c;
        case 0x109d560u: goto R_0109d560;
        case 0x109d584u: goto R_0109d584;
        case 0x109d5a0u: goto R_0109d5a0;
        case 0x109d5bcu: goto R_0109d5bc;
        case 0x109d5c8u: goto R_0109d5c8;
        case 0x109d5d8u: goto R_0109d5d8;
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
    if (wp::cr_get(c, 2)) goto L_0109d5d8;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109d52c;
    c.lr = 0x109d52cu;
    f_80048f30(c);
L_0109d52c:
R_0109d52c:
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109d53c;
    c.lr = 0x109d53cu;
    f_80048f30(c);
L_0109d53c:
R_0109d53c:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109d560;
    if (wp::cr_get(c, 2)) goto L_0109d560;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109d560u;
    wp::call(c, c.ctr);
L_0109d560:
R_0109d560:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109d584;
    if (wp::cr_get(c, 2)) goto L_0109d584;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109d584u;
    wp::call(c, c.ctr);
L_0109d584:
R_0109d584:
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
L_0109d58c:
    c.r[3] = c.r[28] + c.r[31];
    ea = c.r[3] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109d5a0;
    c.lr = 0x109d5a0u;
    f_80048f30(c);
L_0109d5a0:
R_0109d5a0:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0xau);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109d58c;
    }
    c.r[3] = c.r[28] + 0xe0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x109d5bcu;
    f_mg503_010a3800(c);
R_0109d5bc:
    c.r[3] = c.r[28] + 0xd0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x109d5c8u;
    f_mg503_010a3800(c);
R_0109d5c8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0109d5d8;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x109d5d8u;
    f_801c7a8c(c);
L_0109d5d8:
R_0109d5d8:
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

void f_mg503_0109d600(wp::Cpu& c) {
    WP_ENTER(0x109d600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d62cu: goto R_0109d62c;
        case 0x109d63cu: goto R_0109d63c;
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
    if (wp::cr_get(c, 2)) goto L_0109d63c;
    c.r[4] = 0x0u;
    c.lr = 0x109d62cu;
    f_8012bbc0(c);
R_0109d62c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0109d63c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x109d63cu;
    f_801c7a8c(c);
L_0109d63c:
R_0109d63c:
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

void f_mg503_0109d660(wp::Cpu& c) {
    WP_ENTER(0x109d660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d698u: goto R_0109d698;
        case 0x109d6d0u: goto R_0109d6d0;
        case 0x109d884u: goto R_0109d884;
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
    if (wp::cr_get(c, 2)) goto L_0109d698;
    c.r[3] = c.r[0] | c.r[0];
    c.lr = 0x109d698u;
    f_80048f30(c);
L_0109d698:
R_0109d698:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[31] = 0x0u;
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109d884;
    c.r[30] = 0x0u;
    goto L_0109d6b8;
L_0109d6b0:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x2u;
L_0109d6b8:
    ea = c.r[29] + c.r[31];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109d6b0;
    }
    c.r[0] = c.r[30] + 0x1u;
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x109d6d0u;
    f_80048ec0(c);
R_0109d6d0:
    wp::compare_signed(c, 1, c.r[30], 0x0u);
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 5)) goto L_0109d7e8;
    wp::compare_signed(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0109d7b8;
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0109d708;
    c.r[3] = 0x80000000u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0109d708;
    c.r[4] = 0x1u;
L_0109d708:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109d7b8;
    c.r[0] = c.r[6] + 0x7u;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = 0x0u;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0109d7b8;
L_0109d72c:
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
    goto L_0109d72c;
    }
L_0109d7b8:
    c.r[6] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    c.r[0] = c.r[30] - c.r[5];
    c.r[4] = c.r[29] + c.r[6];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0109d7e8;
L_0109d7d0:
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
    goto L_0109d7d0;
    }
L_0109d7e8:
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
    if (!wp::cr_get(c, 1)) goto L_0109d878;
    c.r[0] = c.r[0] | 0x0u;
L_0109d820:
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[6];
    ea = c.r[6] + c.r[0];
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5bu);
    if (!wp::cr_get(c, 2)) goto L_0109d86c;
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x77u);
    if (!wp::cr_get(c, 2)) goto L_0109d86c;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5du);
    if (!wp::cr_get(c, 2)) goto L_0109d86c;
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
L_0109d86c:
    c.r[6] = c.r[6] + 0x2u;
    c.r[7] = c.r[7] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0109d820;
    }
L_0109d878:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x109d884u;
    f_mg503_0109d8b0(c);
L_0109d884:
R_0109d884:
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

void f_mg503_0109d8b0(wp::Cpu& c) {
    WP_ENTER(0x109d8b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109d8c4u: goto R_0109d8c4;
        case 0x109d990u: goto R_0109d990;
        case 0x109d998u: goto R_0109d998;
        case 0x109d9a8u: goto R_0109d9a8;
        case 0x109d9c0u: goto R_0109d9c0;
        case 0x109d9d8u: goto R_0109d9d8;
        case 0x109e524u: goto R_0109e524;
        case 0x109e540u: goto R_0109e540;
        case 0x109e548u: goto R_0109e548;
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
    c.lr = 0x109d8c4u;
    f_801c8384(c);
R_0109d8c4:
    c.r[31] = 0x0u;
    ea = c.r[3] + 0xbdu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[3] + 0xa0u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = ((((g_mg503_bases[5] + 0x2a3e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0xbcu;
    wp::wr8(ea, c.r[31]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = c.r[5] + 0x1u;
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xa4u;
    wp::wr32(ea, c.r[31]);
    c.r[14] = c.r[0] & 0xffffu;
    c.r[16] = c.r[16] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3e8u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 0)) goto L_0109d97c;
    c.r[14] = 0x40u;
L_0109d97c:
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[15] = wp::rotl(c.r[14], 1) & 0x1fffeu;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109d990;
    c.lr = 0x109d990u;
    f_80048f30(c);
L_0109d990:
R_0109d990:
    c.r[3] = c.r[15] | c.r[15];
    c.lr = 0x109d998u;
    f_80048ec0(c);
R_0109d998:
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x109d9a8u;
    f_80004714(c);
R_0109d9a8:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109d9c0u;
    wp::call(c, c.ctr);
R_0109d9c0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109d9d8u;
    wp::call(c, c.ctr);
R_0109d9d8:
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
    if (!wp::cr_get(c, 2)) goto L_0109da00;
    c.r[30] = 0x1u;
L_0109da00:
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
    goto L_0109e4e8;
L_0109da30:
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
    if (!wp::cr_get(c, 2)) goto L_0109db68;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[14] | c.r[14];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_0109daf4;
L_0109da80:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109da9c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0109daf4;
L_0109da9c:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109dacc;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109dacc;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0109daf4;
L_0109dacc:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0109dae8;
    c.r[5] = 0x0u;
    goto L_0109db04;
L_0109dae8:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_0109daf4:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109da80;
    }
    c.r[5] = 0x1u;
L_0109db04:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109db68;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[5] = c.r[5] + 0xffffffd0u;
    c.r[5] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[6] = c.r[28] + c.r[5];
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109db5c;
    c.r[17] = 0x0u;
    goto L_0109db4c;
    c.r[0] = c.r[0] | 0x0u;
L_0109db38:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[17] + 0x2u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[18]);
    c.r[16] = c.r[16] + 0x2u;
L_0109db4c:
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[17];
    c.r[18] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109db38;
    }
L_0109db5c:
    c.r[31] = c.r[31] + 0xffffffffu;
    c.r[21] = c.r[21] + 0x4u;
    goto L_0109ded4;
L_0109db68:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109dd54;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[15] | c.r[15];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_0109dbfc;
L_0109db88:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109dba4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0109dbfc;
L_0109dba4:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109dbd4;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109dbd4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0109dbfc;
L_0109dbd4:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0109dbf0;
    c.r[5] = 0x0u;
    goto L_0109dc0c;
L_0109dbf0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_0109dbfc:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109db88;
    }
    c.r[5] = 0x1u;
L_0109dc0c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109dd54;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x6u;
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x63u);
    if (wp::cr_get(c, 2)) goto L_0109dd30;
    if (!wp::cr_get(c, 0)) goto L_0109dc70;
    wp::compare_signed(c, 0, c.r[5], 0x31u);
    if (wp::cr_get(c, 2)) goto L_0109dd10;
    if (!wp::cr_get(c, 0)) goto L_0109dc58;
    wp::compare_signed(c, 0, c.r[5], 0x2cu);
    if (wp::cr_get(c, 2)) goto L_0109dd4c;
    if (!wp::cr_get(c, 0)) goto L_0109dc4c;
    wp::compare_signed(c, 0, c.r[5], 0x2bu);
    if (!wp::cr_get(c, 0)) goto L_0109dcf0;
    goto L_0109dd4c;
L_0109dc4c:
    wp::compare_signed(c, 0, c.r[5], 0x2eu);
    if (!wp::cr_get(c, 0)) goto L_0109dd4c;
    goto L_0109dd00;
L_0109dc58:
    wp::compare_signed(c, 0, c.r[5], 0x61u);
    if (wp::cr_get(c, 2)) goto L_0109dcc0;
    if (!wp::cr_get(c, 0)) goto L_0109dcd0;
    wp::compare_signed(c, 0, c.r[5], 0x33u);
    if (!wp::cr_get(c, 0)) goto L_0109dd4c;
    goto L_0109dd20;
L_0109dc70:
    wp::compare_signed(c, 0, c.r[5], 0x78u);
    if (wp::cr_get(c, 2)) goto L_0109dcb0;
    if (!wp::cr_get(c, 0)) goto L_0109dc94;
    wp::compare_signed(c, 0, c.r[5], 0x70u);
    if (wp::cr_get(c, 2)) goto L_0109dca0;
    if (!wp::cr_get(c, 0)) goto L_0109dd4c;
    wp::compare_signed(c, 0, c.r[5], 0x68u);
    if (wp::cr_get(c, 2)) goto L_0109dce0;
    goto L_0109dd4c;
L_0109dc94:
    wp::compare_signed(c, 0, c.r[5], 0x7au);
    if (wp::cr_get(c, 2)) goto L_0109dd40;
    goto L_0109dd4c;
L_0109dca0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe040u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dcb0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe041u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dcc0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe042u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dcd0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe043u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dce0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe044u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dcf0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe045u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dd00:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe046u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dd10:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe047u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dd20:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe048u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dd30:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04au;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109dd4c;
L_0109dd40:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04bu;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
L_0109dd4c:
    c.r[21] = c.r[21] + 0x5u;
    goto L_0109ded4;
L_0109dd54:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109de18;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[19] = c.r[9] | c.r[9];
    c.r[6] = 0x0u;
    c.r[18] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0109ddec;
    c.r[0] = c.r[0] | 0x0u;
L_0109dd78:
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::compare_signed(c, 0, c.r[20], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109dd94;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_0109ddec;
L_0109dd94:
    wp::compare_signed(c, 0, c.r[20], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109ddc4;
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[20] = c.r[20] + 0x10000u;
    c.r[20] = c.r[20] + 0xffffffd0u;
    c.r[20] = c.r[20] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109ddc4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_0109ddec;
L_0109ddc4:
    c.r[17] = wp::sign_extend8(c.r[17]);
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], c.r[17]);
    if (wp::cr_get(c, 2)) goto L_0109dde0;
    c.r[5] = 0x0u;
    goto L_0109ddfc;
L_0109dde0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_0109ddec:
    ea = c.r[19] + 0x0u;
    c.r[17] = wp::rd8(ea);
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::record(c, c.r[20]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109dd78;
    }
    c.r[5] = 0x1u;
L_0109ddfc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109de18;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe049u;
    c.r[21] = c.r[21] + 0x5u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0109ded4;
L_0109de18:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109ded4;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0109deac;
L_0109de38:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109de54;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0109deac;
L_0109de54:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109de84;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109de84;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0109deac;
L_0109de84:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0109dea0;
    c.r[5] = 0x0u;
    goto L_0109debc;
L_0109dea0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0109deac:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109de38;
    }
    c.r[5] = 0x1u;
L_0109debc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ded4;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbcu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
    goto L_0109e4f4;
L_0109ded4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e258;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[11] | c.r[11];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0109df6c;
    c.r[0] = c.r[0] | 0x0u;
L_0109def8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109df14;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0109df6c;
L_0109df14:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109df44;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109df44;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0109df6c;
L_0109df44:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0109df60;
    c.r[5] = 0x0u;
    goto L_0109df7c;
L_0109df60:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0109df6c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109def8;
    }
    c.r[5] = 0x1u;
L_0109df7c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e258;
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
    if (wp::cr_get(c, 1)) goto L_0109dfb8;
    goto L_0109dfe4;
L_0109dfb8:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109dfcc;
    c.r[17] = c.r[6] + 0xau;
    goto L_0109dfe4;
L_0109dfcc:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_0109dfe4:
    ea = c.r[16] + 0x8u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109dff8;
    goto L_0109e024;
L_0109dff8:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109e00c;
    c.r[6] = c.r[6] + 0xau;
    goto L_0109e024;
L_0109e00c:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0109e024:
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
    if (wp::cr_get(c, 1)) goto L_0109e04c;
    goto L_0109e078;
L_0109e04c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109e060;
    c.r[17] = c.r[6] + 0xau;
    goto L_0109e078;
L_0109e060:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_0109e078:
    ea = c.r[16] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109e08c;
    goto L_0109e0b8;
L_0109e08c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109e0a0;
    c.r[6] = c.r[6] + 0xau;
    goto L_0109e0b8;
L_0109e0a0:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0109e0b8:
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
    if (wp::cr_get(c, 1)) goto L_0109e0e0;
    goto L_0109e10c;
L_0109e0e0:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109e0f4;
    c.r[17] = c.r[6] + 0xau;
    goto L_0109e10c;
L_0109e0f4:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_0109e10c:
    ea = c.r[16] + 0x10u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109e120;
    goto L_0109e14c;
L_0109e120:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109e134;
    c.r[6] = c.r[6] + 0xau;
    goto L_0109e14c;
L_0109e134:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0109e14c:
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
    if (wp::cr_get(c, 1)) goto L_0109e174;
    goto L_0109e1a0;
L_0109e174:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109e188;
    c.r[16] = c.r[5] + 0xau;
    goto L_0109e1a0;
L_0109e188:
    c.r[16] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[16], 0);
    c.r[4] = c.r[16] + 0xau;
    c.r[5] = c.r[16] - c.r[5];
    c.r[16] = c.r[4] & c.r[5];
L_0109e1a0:
    ea = c.r[6] + 0x14u;
    c.r[4] = wp::rd16(ea);
    c.r[5] = c.r[4] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[5], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109e1b4;
    goto L_0109e1e0;
L_0109e1b4:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0109e1c8;
    c.r[5] = c.r[5] + 0xau;
    goto L_0109e1e0;
L_0109e1c8:
    c.r[6] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[6], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[6], 0);
    c.r[4] = c.r[6] + 0xau;
    c.r[5] = c.r[6] - c.r[5];
    c.r[5] = c.r[4] & c.r[5];
L_0109e1e0:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::rotl(c.r[5], 4) & 0xfffffff0u;
    c.r[5] = c.r[16] + c.r[5];
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e1fc;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
L_0109e1fc:
    ea = c.r[1] + 0x9u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e20c;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[0]);
L_0109e20c:
    ea = c.r[1] + 0xau;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e21c;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_0109e21c:
    ea = c.r[1] + 0xbu;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e22c;
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
L_0109e22c:
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
    goto L_0109e4e0;
L_0109e258:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e4c4;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[12] | c.r[12];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0109e2ec;
L_0109e278:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109e294;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0109e2ec;
L_0109e294:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109e2c4;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109e2c4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0109e2ec;
L_0109e2c4:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0109e2e0;
    c.r[5] = 0x0u;
    goto L_0109e2fc;
L_0109e2e0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0109e2ec:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109e278;
    }
    c.r[5] = 0x1u;
L_0109e2fc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e4c4;
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
    goto L_0109e364;
L_0109e338:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e348;
    c.r[16] = 0x1u;
    goto L_0109e37c;
L_0109e348:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x1u;
    c.r[6] = c.r[6] + 0x2u;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[20]);
    c.r[4] = c.r[4] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_0109e364:
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[6];
    c.r[20] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[20], 0x5du);
    if (wp::cr_get(c, 2)) goto L_0109e37c;
    wp::compare_signed(c, 0, c.r[19], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109e338;
    }
L_0109e37c:
    c.r[4] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[5] + c.r[4];
    c.r[4] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e390;
    c.r[3] = c.r[3] + 0x1u;
L_0109e390:
    c.r[24] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[20] = 0x0u;
    goto L_0109e3cc;
L_0109e3a0:
    ea = c.r[23] + c.r[24];
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e3b4;
    c.r[16] = 0x1u;
    goto L_0109e47c;
L_0109e3b4:
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[24] = c.r[24] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[4] + c.r[3];
    wp::wr16(ea, c.r[5]);
    c.r[3] = c.r[3] + 0x2u;
L_0109e3cc:
    ea = c.r[28] + 0x20u;
    c.r[23] = wp::rd32(ea);
    c.r[5] = c.r[26] | c.r[26];
    c.r[25] = 0x0u;
    c.r[4] = 0x0u;
    c.r[27] = c.r[23] + c.r[24];
    goto L_0109e45c;
    c.r[0] = c.r[0] | 0x0u;
L_0109e3e8:
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109e404;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0109e45c;
L_0109e404:
    wp::compare_signed(c, 0, c.r[6], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109e434;
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[6] = c.r[6] + 0x10000u;
    c.r[6] = c.r[6] + 0xffffffd0u;
    c.r[6] = c.r[6] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109e434;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0109e45c;
L_0109e434:
    c.r[22] = wp::sign_extend8(c.r[22]);
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], c.r[22]);
    if (wp::cr_get(c, 2)) goto L_0109e450;
    c.r[4] = 0x0u;
    goto L_0109e46c;
L_0109e450:
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
L_0109e45c:
    ea = c.r[5] + 0x0u;
    c.r[22] = wp::rd8(ea);
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109e3e8;
    }
    c.r[4] = 0x1u;
L_0109e46c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e47c;
    wp::compare_signed(c, 0, c.r[20], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109e3a0;
    }
L_0109e47c:
    wp::compare_signed(c, 0, c.r[16], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e49c;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[17], 1) & 0xfffffffeu;
    c.r[3] = 0x0u;
    c.r[31] = c.r[17] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[3]);
    goto L_0109e4e0;
L_0109e49c:
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
    goto L_0109e4e0;
L_0109e4c4:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e4e0;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbdu;
    wp::wr8(ea, c.r[0]);
    goto L_0109e4f4;
L_0109e4e0:
    c.r[21] = c.r[21] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
L_0109e4e8:
    ea = c.r[28] + 0xa0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[21], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109da30;
    }
L_0109e4f4:
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
    c.lr = 0x109e524u;
    wp::call(c, c.ctr);
R_0109e524:
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
    c.lr = 0x109e540u;
    wp::call(c, c.ctr);
R_0109e540:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x109e548u;
    f_801c83d0(c);
R_0109e548:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg503_0109e560(wp::Cpu& c) {
    WP_ENTER(0x109e560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109e574u: goto R_0109e574;
        case 0x109e598u: goto R_0109e598;
        case 0x109e5e0u: goto R_0109e5e0;
        case 0x109e8ccu: goto R_0109e8cc;
        case 0x109e8d4u: goto R_0109e8d4;
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
    c.lr = 0x109e574u;
    f_801c8390(c);
R_0109e574:
    c.r[18] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[29] = c.r[3] | c.r[3];
    c.r[17] = c.r[3] + c.r[18];
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[17] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e598;
    c.lr = 0x109e598u;
    f_80048f30(c);
L_0109e598:
R_0109e598:
    c.r[4] = 0x0u;
    ea = c.r[17] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] + c.r[18];
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    ea = c.r[3] + 0x50u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0109e8cc;
    c.r[3] = 0x0u;
    goto L_0109e5c0;
L_0109e5b8:
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
L_0109e5c0:
    ea = c.r[30] + c.r[4];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109e5b8;
    }
    c.r[17] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + 0x10u;
    c.r[28] = c.r[29] + c.r[17];
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x109e5e0u;
    f_80048ec0(c);
R_0109e5e0:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[12] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[27] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e8a0;
    c.r[4] = ((((g_mg503_bases[5] + 0x2a584u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg503_bases[5] + 0x2a588u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a584u) & 0xFFFFu);
    c.r[7] = c.r[28] | c.r[28];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a588u) & 0xFFFFu);
    c.r[3] = 0xcu;
    c.r[0] = 0x5bu;
    goto L_0109e890;
L_0109e618:
    c.r[18] = c.r[30] + c.r[8];
    c.r[9] = c.r[4] | c.r[4];
    c.r[17] = 0x0u;
    c.r[8] = 0x0u;
    goto L_0109e6a4;
    c.r[0] = c.r[0] | 0x0u;
L_0109e630:
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[10], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109e64c;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_0109e6a4;
L_0109e64c:
    wp::compare_signed(c, 0, c.r[10], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109e67c;
    ea = c.r[18] + c.r[8];
    c.r[10] = wp::rd16(ea);
    c.r[10] = c.r[10] + 0x10000u;
    c.r[10] = c.r[10] + 0xffffffd0u;
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[10], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109e67c;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_0109e6a4;
L_0109e67c:
    c.r[10] = wp::sign_extend8(c.r[11]);
    ea = c.r[18] + c.r[8];
    c.r[11] = wp::rd16(ea);
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[11], c.r[10]);
    if (wp::cr_get(c, 2)) goto L_0109e698;
    c.r[8] = 0x0u;
    goto L_0109e6b4;
L_0109e698:
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
L_0109e6a4:
    ea = c.r[9] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[10]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109e630;
    }
    c.r[8] = 0x1u;
L_0109e6b4:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e87c;
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
    goto L_0109e724;
    c.r[0] = c.r[0] | 0x0u;
L_0109e6f8:
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e708;
    c.r[21] = 0x1u;
    goto L_0109e738;
L_0109e708:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[12] = c.r[12] + 0x1u;
    c.r[9] = c.r[9] + 0x2u;
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[10]);
    c.r[6] = c.r[6] + 0x2u;
    c.r[25] = c.r[25] + 0x1u;
L_0109e724:
    ea = c.r[9] + 0x0u;
    c.r[10] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[10], 0x5du);
    if (wp::cr_get(c, 2)) goto L_0109e738;
    wp::compare_signed(c, 0, c.r[25], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109e6f8;
    }
L_0109e738:
    c.r[6] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[6];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e74c;
    c.r[27] = c.r[27] + 0x1u;
L_0109e74c:
    c.r[10] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    c.r[20] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[26] = 0x0u;
    c.r[9] = c.r[30] + c.r[10];
    goto L_0109e794;
L_0109e760:
    ea = c.r[9] + 0x0u;
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e774;
    c.r[21] = 0x1u;
    goto L_0109e83c;
L_0109e774:
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
L_0109e794:
    c.r[18] = c.r[5] | c.r[5];
    c.r[8] = c.r[30] + c.r[10];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    goto L_0109e81c;
L_0109e7a8:
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[17], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0109e7c4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0109e81c;
L_0109e7c4:
    wp::compare_signed(c, 0, c.r[17], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0109e7f4;
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[17] = c.r[17] + 0x10000u;
    c.r[17] = c.r[17] + 0xffffffd0u;
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0109e7f4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0109e81c;
L_0109e7f4:
    c.r[11] = wp::sign_extend8(c.r[11]);
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[11] = c.r[11] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], c.r[11]);
    if (wp::cr_get(c, 2)) goto L_0109e810;
    c.r[6] = 0x0u;
    goto L_0109e82c;
L_0109e810:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
L_0109e81c:
    ea = c.r[18] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[17]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109e7a8;
    }
    c.r[6] = 0x1u;
L_0109e82c:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109e83c;
    wp::compare_signed(c, 0, c.r[26], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109e760;
    }
L_0109e83c:
    wp::compare_signed(c, 0, c.r[21], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e85c;
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[23], 1) & 0xfffffffeu;
    c.r[12] = c.r[23] | c.r[23];
    c.r[27] = c.r[22] | c.r[22];
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[0]);
    goto L_0109e888;
L_0109e85c:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[9] = c.r[26] & 0xffu;
    c.r[6] = wp::rotl(c.r[24], 1) & 0xfffffffeu;
    c.r[27] = c.r[27] + 0x3u;
    c.r[9] = (wp::rotl(c.r[25], 8) & 0xff00u) | (c.r[9] & 0xffff00ffu);
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[9]);
    c.r[12] = c.r[12] + 0xffffffffu;
    goto L_0109e888;
L_0109e87c:
    ea = c.r[7] + 0x28u;
    c.r[9] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    ea = c.r[9] + c.r[8];
    wp::wr16(ea, c.r[6]);
L_0109e888:
    c.r[27] = c.r[27] + 0x1u;
    c.r[12] = c.r[12] + 0x1u;
L_0109e890:
    c.r[8] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[8];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109e618;
    }
L_0109e8a0:
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
    c.lr = 0x109e8ccu;
    f_mg503_0109d8b0(c);
L_0109e8cc:
R_0109e8cc:
    c.r[11] = c.r[1] + 0x50u;
    c.lr = 0x109e8d4u;
    f_801c83dc(c);
R_0109e8d4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg503_0109e8f0(wp::Cpu& c) {
    WP_ENTER(0x109e8f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109e904u: goto R_0109e904;
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
    c.lr = 0x109e904u;
    f_801cf510(c);
R_0109e904:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_0109e920(wp::Cpu& c) {
    WP_ENTER(0x109e920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109e978u: goto R_0109e978;
        case 0x109e9b4u: goto R_0109e9b4;
        case 0x109e9c0u: goto R_0109e9c0;
        case 0x109e9d0u: goto R_0109e9d0;
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
    if (wp::cr_get(c, 2)) goto L_0109e9d0;
    if (wp::cr_get(c, 2)) goto L_0109e9c0;
    c.r[4] = ((((g_mg503_bases[5] + 0x2b2a8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b2a8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_0109e978;
L_0109e958:
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
    c.lr = 0x109e978u;
    wp::call(c, c.ctr);
L_0109e978:
R_0109e978:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109e958;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0109e9b4;
    if (wp::cr_get(c, 2)) goto L_0109e9b4;
    if (wp::cr_get(c, 2)) goto L_0109e9b4;
    if (wp::cr_get(c, 2)) goto L_0109e9b4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109e9b4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109e9b4u;
    f_801c7a8c(c);
L_0109e9b4:
R_0109e9b4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x109e9c0u;
    f_8003fb90(c);
L_0109e9c0:
R_0109e9c0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0109e9d0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x109e9d0u;
    f_801c7a8c(c);
L_0109e9d0:
R_0109e9d0:
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

void f_mg503_0109e9f0(wp::Cpu& c) {
    WP_ENTER(0x109e9f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ea2cu: goto R_0109ea2c;
        case 0x109ea54u: goto R_0109ea54;
        case 0x109ea7cu: goto R_0109ea7c;
        case 0x109eaa4u: goto R_0109eaa4;
        case 0x109eaccu: goto R_0109eacc;
        case 0x109ead8u: goto R_0109ead8;
        case 0x109eb10u: goto R_0109eb10;
        case 0x109eb4cu: goto R_0109eb4c;
        case 0x109eb58u: goto R_0109eb58;
        case 0x109eb68u: goto R_0109eb68;
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
    if (wp::cr_get(c, 2)) goto L_0109eb68;
    c.r[4] = ((((g_mg503_bases[5] + 0x2ae00u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2ae00u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x1f8u;
    ea = c.r[3] + 0x120u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109ea2cu;
    f_8001a010(c);
R_0109ea2c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x198u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0109ea54;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ea54;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ea54u;
    wp::call(c, c.ctr);
L_0109ea54:
R_0109ea54:
    c.r[3] = wp::add_carry(c, c.r[30], 0x194u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0109ea7c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ea7c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ea7cu;
    wp::call(c, c.ctr);
L_0109ea7c:
R_0109ea7c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x190u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0109eaa4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109eaa4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109eaa4u;
    wp::call(c, c.ctr);
L_0109eaa4:
R_0109eaa4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x18cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0109eacc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109eacc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109eaccu;
    wp::call(c, c.ctr);
L_0109eacc:
R_0109eacc:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x109ead8u;
    f_80063bb0(c);
R_0109ead8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109eb58;
    c.r[3] = ((((g_mg503_bases[5] + 0x2b2a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2b2a8u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0109eb10;
L_0109eaf0:
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
    c.lr = 0x109eb10u;
    wp::call(c, c.ctr);
L_0109eb10:
R_0109eb10:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109eaf0;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0109eb4c;
    if (wp::cr_get(c, 2)) goto L_0109eb4c;
    if (wp::cr_get(c, 2)) goto L_0109eb4c;
    if (wp::cr_get(c, 2)) goto L_0109eb4c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109eb4c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109eb4cu;
    f_801c7a8c(c);
L_0109eb4c:
R_0109eb4c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x109eb58u;
    f_8003fb90(c);
L_0109eb58:
R_0109eb58:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0109eb68;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x109eb68u;
    f_801c7a8c(c);
L_0109eb68:
R_0109eb68:
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

void f_mg503_0109eb90(wp::Cpu& c) {
    WP_ENTER(0x109eb90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    wp::wr16(ea, c.r[4]);
    return;
}

void f_mg503_0109eba0(wp::Cpu& c) {
    WP_ENTER(0x109eba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    c.r[3] = wp::rd16(ea);
    return;
}

void f_mg503_0109ebb0(wp::Cpu& c) {
    WP_ENTER(0x109ebb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ebe8u: goto R_0109ebe8;
        case 0x109ebf0u: goto R_0109ebf0;
        case 0x109ec0cu: goto R_0109ec0c;
        case 0x109ec28u: goto R_0109ec28;
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
    if (wp::cr_get(c, 2)) goto L_0109ebe8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ebe8u;
    wp::call(c, c.ctr);
L_0109ebe8:
R_0109ebe8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x109ebf0u;
    f_8000fc20(c);
R_0109ebf0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0x1u;
    c.r[31] = wp::slw(c.r[0], c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ec0cu;
    wp::call(c, c.ctr);
R_0109ec0c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x109ec28u;
    wp::call(c, c.ctr);
R_0109ec28:
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

void f_mg503_0109ec40(wp::Cpu& c) {
    WP_ENTER(0x109ec40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ec54u: goto R_0109ec54;
        case 0x109ec7cu: goto R_0109ec7c;
        case 0x109ec94u: goto R_0109ec94;
        case 0x109ecb0u: goto R_0109ecb0;
        case 0x109ecc8u: goto R_0109ecc8;
        case 0x109ece4u: goto R_0109ece4;
        case 0x109ecf8u: goto R_0109ecf8;
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
    c.lr = 0x109ec54u;
    f_801c83b4(c);
R_0109ec54:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_0109ec7c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ec7cu;
    wp::call(c, c.ctr);
L_0109ec7c:
R_0109ec7c:
    c.r[29] = 0x0u;
    c.r[30] = 0x1u;
L_0109ec84:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ec9c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x109ec94u;
    f_8000fc40(c);
R_0109ec94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109ece4;
L_0109ec9c:
    c.r[0] = wp::slw(c.r[30], c.r[29]);
    c.r[0] = c.r[27] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109ece4;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x109ecb0u;
    f_8000fc20(c);
R_0109ecb0:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = wp::slw(c.r[30], c.r[3]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ecc8u;
    wp::call(c, c.ctr);
R_0109ecc8:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x109ece4u;
    wp::call(c, c.ctr);
L_0109ece4:
R_0109ece4:
    c.r[29] = c.r[29] + 0x1u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109ec84;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x109ecf8u;
    f_801c8400(c);
R_0109ecf8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg503_0109ed10(wp::Cpu& c) {
    WP_ENTER(0x109ed10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ed40u: goto R_0109ed40;
        case 0x109ed58u: goto R_0109ed58;
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
L_0109ed38:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x109ed40u;
    f_8000fc20(c);
R_0109ed40:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = wp::slw(c.r[31], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ed58u;
    wp::call(c, c.ctr);
R_0109ed58:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[29] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109ed6c;
    c.r[3] = c.r[30] | c.r[30];
    goto L_0109ed7c;
L_0109ed6c:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0109ed38;
    }
    c.r[3] = 0xffffffffu;
L_0109ed7c:
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

void f_mg503_0109eda0(wp::Cpu& c) {
    WP_ENTER(0x109eda0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x169u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg503_0109edb0(wp::Cpu& c) {
    WP_ENTER(0x109edb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109edccu: goto R_0109edcc;
        case 0x109ede0u: goto R_0109ede0;
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
    goto L_0109edcc;
L_0109edc8:
    c.lr = 0x109edccu;
    f_8006a940(c);
L_0109edcc:
R_0109edcc:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ede0u;
    wp::call(c, c.ctr);
R_0109ede0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109edc8;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_0109ee00(wp::Cpu& c) {
    WP_ENTER(0x109ee00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ee2cu: goto R_0109ee2c;
        case 0x109ee44u: goto R_0109ee44;
        case 0x109ee64u: goto R_0109ee64;
        case 0x109ee84u: goto R_0109ee84;
        case 0x109eea8u: goto R_0109eea8;
        case 0x109eec0u: goto R_0109eec0;
        case 0x109eed8u: goto R_0109eed8;
        case 0x109eef0u: goto R_0109eef0;
        case 0x109ef1cu: goto R_0109ef1c;
        case 0x109ef34u: goto R_0109ef34;
        case 0x109ef50u: goto R_0109ef50;
        case 0x109ef6cu: goto R_0109ef6c;
        case 0x109ef7cu: goto R_0109ef7c;
        case 0x109ef94u: goto R_0109ef94;
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
    if (!wp::cr_get(c, 2)) goto L_0109ee88;
    c.r[4] = 0x0u;
    c.lr = 0x109ee2cu;
    f_800402c0(c);
R_0109ee2c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ee44;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x109ee44u;
    f_80052250(c);
L_0109ee44:
R_0109ee44:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ee64;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ee64u;
    wp::call(c, c.ctr);
L_0109ee64:
R_0109ee64:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ef94;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ee84u;
    wp::call(c, c.ctr);
R_0109ee84:
    goto L_0109ef94;
L_0109ee88:
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ef70;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ef70;
    c.r[4] = 0x0u;
    c.lr = 0x109eea8u;
    f_800402c0(c);
R_0109eea8:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109eec0;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x109eec0u;
    f_80052250(c);
L_0109eec0:
R_0109eec0:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109eed8u;
    wp::call(c, c.ctr);
R_0109eed8:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109eef0u;
    wp::call(c, c.ctr);
R_0109eef0:
    ea = c.r[30] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ef10;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0109ef38;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0109ef54;
    goto L_0109ef94;
L_0109ef10:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x109ef1cu;
    f_800402c0(c);
R_0109ef1c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ef94;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x109ef34u;
    f_80052250(c);
R_0109ef34:
    goto L_0109ef94;
L_0109ef38:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ef50u;
    wp::call(c, c.ctr);
R_0109ef50:
    goto L_0109ef94;
L_0109ef54:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ef6cu;
    wp::call(c, c.ctr);
R_0109ef6c:
    goto L_0109ef94;
L_0109ef70:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x109ef7cu;
    f_800402c0(c);
R_0109ef7c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ef94;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x109ef94u;
    f_80052250(c);
L_0109ef94:
R_0109ef94:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[30] + 0x185u;
    wp::wr8(ea, c.r[31]);
    if (!wp::cr_get(c, 2)) goto L_0109efa4;
    ea = c.r[30] + 0x154u;
    wp::wr8(ea, c.r[31]);
L_0109efa4:
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

void f_mg503_0109efc0(wp::Cpu& c) {
    WP_ENTER(0x109efc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109eff4u: goto R_0109eff4;
        case 0x109f078u: goto R_0109f078;
        case 0x109f0a4u: goto R_0109f0a4;
        case 0x109f0d4u: goto R_0109f0d4;
        case 0x109f0f8u: goto R_0109f0f8;
        case 0x109f104u: goto R_0109f104;
        case 0x109f124u: goto R_0109f124;
        case 0x109f138u: goto R_0109f138;
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
    c.lr = 0x109eff4u;
    wp::call(c, c.ctr);
R_0109eff4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f004;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f164;
L_0109f004:
    ea = c.r[29] + 0x154u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) goto L_0109f018;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f164;
L_0109f018:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109f034;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109f034;
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109f164;
L_0109f034:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x154u;
    wp::wr8(ea, c.r[30]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f048;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_0109f048:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f058;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_0109f058:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f078;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f078u;
    wp::call(c, c.ctr);
L_0109f078:
R_0109f078:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f0b0;
    ea = c.r[29] + 0x144u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0109f104;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f0a4u;
    wp::call(c, c.ctr);
R_0109f0a4:
    ea = c.r[29] + 0x144u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_0109f104;
L_0109f0b0:
    ea = c.r[29] + 0x148u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0109f0e0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f0d4u;
    wp::call(c, c.ctr);
R_0109f0d4:
    ea = c.r[29] + 0x148u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_0109f0f8;
L_0109f0e0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f0f8u;
    wp::call(c, c.ctr);
L_0109f0f8:
R_0109f0f8:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x109f104u;
    f_8001a010(c);
L_0109f104:
R_0109f104:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109f124;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f124u;
    wp::call(c, c.ctr);
L_0109f124:
R_0109f124:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x290u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f138u;
    wp::call(c, c.ctr);
R_0109f138:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x186u;
    wp::wr8(ea, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0109f154;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_0109f154:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f164;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_0109f164:
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

void f_mg503_0109f180(wp::Cpu& c) {
    WP_ENTER(0x109f180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109f1c0u: goto R_0109f1c0;
        case 0x109f1e0u: goto R_0109f1e0;
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
    if (wp::cr_get(c, 2)) goto L_0109f1c0;
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f1c0u;
    wp::call(c, c.ctr);
L_0109f1c0:
R_0109f1c0:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f1e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f1e0u;
    wp::call(c, c.ctr);
L_0109f1e0:
R_0109f1e0:
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

void f_mg503_0109f200(wp::Cpu& c) {
    WP_ENTER(0x109f200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109f228u: goto R_0109f228;
        case 0x109f22cu: goto R_0109f22c;
        case 0x109f250u: goto R_0109f250;
        case 0x109f254u: goto R_0109f254;
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
    if (wp::cr_get(c, 2)) goto L_0109f23c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x144u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f228u;
    wp::call(c, c.ctr);
R_0109f228:
    c.lr = 0x109f22cu;
    f_80043140(c);
R_0109f22c:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    goto L_0109f260;
L_0109f23c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x148u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f250u;
    wp::call(c, c.ctr);
R_0109f250:
    c.lr = 0x109f254u;
    f_80043140(c);
R_0109f254:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
L_0109f260:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg503_0109f270(wp::Cpu& c) {
    WP_ENTER(0x109f270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109f284u: goto R_0109f284;
        case 0x109f2acu: goto R_0109f2ac;
        case 0x109f2c8u: goto R_0109f2c8;
        case 0x109f2d0u: goto R_0109f2d0;
        case 0x109f2f8u: goto R_0109f2f8;
        case 0x109f350u: goto R_0109f350;
        case 0x109f36cu: goto R_0109f36c;
        case 0x109f398u: goto R_0109f398;
        case 0x109f3c4u: goto R_0109f3c4;
        case 0x109f3ecu: goto R_0109f3ec;
        case 0x109f408u: goto R_0109f408;
        case 0x109f42cu: goto R_0109f42c;
        case 0x109f448u: goto R_0109f448;
        case 0x109f460u: goto R_0109f460;
        case 0x109f488u: goto R_0109f488;
        case 0x109f4a0u: goto R_0109f4a0;
        case 0x109f4d0u: goto R_0109f4d0;
        case 0x109f518u: goto R_0109f518;
        case 0x109f528u: goto R_0109f528;
        case 0x109f550u: goto R_0109f550;
        case 0x109f56cu: goto R_0109f56c;
        case 0x109f584u: goto R_0109f584;
        case 0x109f5a4u: goto R_0109f5a4;
        case 0x109f5c8u: goto R_0109f5c8;
        case 0x109f5ecu: goto R_0109f5ec;
        case 0x109f610u: goto R_0109f610;
        case 0x109f618u: goto R_0109f618;
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
    c.lr = 0x109f284u;
    f_801c83ac(c);
R_0109f284:
    c.r[0] = 0x43300000u;
    c.r[28] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109f2acu;
    f_8003cc90(c);
R_0109f2ac:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f2c8u;
    wp::call(c, c.ctr);
R_0109f2c8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x109f2d0u;
    f_8003d2d0(c);
R_0109f2d0:
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
    c.lr = 0x109f2f8u;
    wp::call(c, c.ctr);
R_0109f2f8:
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
    c.lr = 0x109f350u;
    wp::call(c, c.ctr);
R_0109f350:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f36cu;
    wp::call(c, c.ctr);
R_0109f36c:
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
    c.lr = 0x109f398u;
    wp::call(c, c.ctr);
R_0109f398:
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
    c.lr = 0x109f3c4u;
    wp::call(c, c.ctr);
R_0109f3c4:
    ea = c.r[27] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f42c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f3ecu;
    wp::call(c, c.ctr);
R_0109f3ec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f408u;
    wp::call(c, c.ctr);
R_0109f408:
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
    c.lr = 0x109f42cu;
    wp::call(c, c.ctr);
L_0109f42c:
R_0109f42c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f448u;
    wp::call(c, c.ctr);
R_0109f448:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f460u;
    wp::call(c, c.ctr);
R_0109f460:
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
    c.lr = 0x109f488u;
    f_801cf394(c);
R_0109f488:
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f498;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_0109f498:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x109f4a0u;
    f_8003cfb0(c);
R_0109f4a0:
    c.r[0] = 0x0u;
    c.r[26] = ((((g_mg503_bases[4] + 0x29e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg503_bases[4] + 0x29e8u) & 0xFFFFu);
    c.r[24] = 0x0u;
    ea = c.r[29] + 0x188u;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ((((g_mg503_bases[5] + 0x2a710u) + 0x8000u) >> 16) << 16);
    goto L_0109f530;
L_0109f4c4:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x109f4d0u;
    f_801cf510(c);
R_0109f4d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109f51c;
    c.r[0] = c.r[24] * 0xcu;
    c.r[4] = ((((g_mg503_bases[4] + 0x29e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x194u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x29e8u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_0109f53c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + 0xau;
    c.r[4] = wp::rd16(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f518u;
    wp::call(c, c.ctr);
R_0109f518:
    goto L_0109f53c;
L_0109f51c:
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + wp::sign_extend16((g_mg503_bases[5] + 0x2a710u) & 0xFFFFu);
    c.lr = 0x109f528u;
    f_801cf510(c);
R_0109f528:
    c.r[26] = c.r[26] + 0xcu;
    c.r[24] = c.r[24] + 0x1u;
L_0109f530:
    ea = c.r[26] + 0x0u;
    c.r[28] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109f4c4;
    }
L_0109f53c:
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f5a4;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x109f550u;
    f_8003d2d0(c);
R_0109f550:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x194u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f56cu;
    wp::call(c, c.ctr);
R_0109f56c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f584u;
    wp::call(c, c.ctr);
R_0109f584:
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
    c.lr = 0x109f5a4u;
    wp::call(c, c.ctr);
L_0109f5a4:
R_0109f5a4:
    ea = c.r[29] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f5c8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f5c8u;
    wp::call(c, c.ctr);
L_0109f5c8:
R_0109f5c8:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f5ec;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f5ecu;
    wp::call(c, c.ctr);
L_0109f5ec:
R_0109f5ec:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f610;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f610u;
    wp::call(c, c.ctr);
L_0109f610:
R_0109f610:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x109f618u;
    f_801c83f8(c);
R_0109f618:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg503_0109f630(wp::Cpu& c) {
    WP_ENTER(0x109f630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109f6b4u: goto R_0109f6b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mg503_bases[5] + 0x2b5e8u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg503_bases[5] + 0x2a71cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5e8u) & 0xFFFFu);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a71cu) & 0xFFFFu);
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
    goto L_0109f69c;
L_0109f698:
    c.r[30] = c.r[30] + 0x4u;
L_0109f69c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0109f6c0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x109f6b4u;
    f_801c8244(c);
R_0109f6b4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109f698;
    }
L_0109f6c0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109f6e0;
    c.r[5] = 0x0u;
    goto L_0109f6e4;
L_0109f6e0:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0109f6e4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0109f6f4;
    c.r[3] = 0x0u;
    goto L_0109f73c;
L_0109f6f4:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = c.r[3] | c.r[3];
    goto L_0109f724;
L_0109f708:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[7] = c.r[7] + 0x2u;
    c.r[0] = c.r[9] + c.r[0];
    c.r[6] = c.r[6] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_0109f724:
    wp::compare_unsigned(c, 0, c.r[6], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_0109f73c;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[7];
    c.r[9] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0109f708;
    }
L_0109f73c:
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

void f_mg503_0109f760(wp::Cpu& c) {
    WP_ENTER(0x109f760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg503_bases[5] + 0x2b5e0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5e0u) & 0xFFFFu);
    f_mg503_0109d060(c);
    return;
}

void f_mg503_0109f770(wp::Cpu& c) {
    WP_ENTER(0x109f770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109f798u: goto R_0109f798;
        case 0x109f7a0u: goto R_0109f7a0;
        case 0x109f7bcu: goto R_0109f7bc;
        case 0x109f7d4u: goto R_0109f7d4;
        case 0x109f7fcu: goto R_0109f7fc;
        case 0x109f820u: goto R_0109f820;
        case 0x109f844u: goto R_0109f844;
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
    c.lr = 0x109f798u;
    f_mg503_0109b210(c);
R_0109f798:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x109f7a0u;
    f_mg503_0109d660(c);
R_0109f7a0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f7bcu;
    wp::call(c, c.ctr);
R_0109f7bc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f7d4u;
    wp::call(c, c.ctr);
R_0109f7d4:
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
    c.lr = 0x109f7fcu;
    f_801cf394(c);
R_0109f7fc:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f820;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f820u;
    wp::call(c, c.ctr);
L_0109f820:
R_0109f820:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f844;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f844u;
    wp::call(c, c.ctr);
L_0109f844:
R_0109f844:
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

void f_mg503_0109f860(wp::Cpu& c) {
    WP_ENTER(0x109f860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109f894u: goto R_0109f894;
        case 0x109f8b4u: goto R_0109f8b4;
        case 0x109f8ccu: goto R_0109f8cc;
        case 0x109f8f4u: goto R_0109f8f4;
        case 0x109f91cu: goto R_0109f91c;
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
    c.lr = 0x109f894u;
    f_8003cc90(c);
R_0109f894:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x109f8b4u;
    wp::call(c, c.ctr);
R_0109f8b4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f8ccu;
    wp::call(c, c.ctr);
R_0109f8cc:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f8f4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f8f4u;
    wp::call(c, c.ctr);
L_0109f8f4:
R_0109f8f4:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f91c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f91cu;
    wp::call(c, c.ctr);
L_0109f91c:
R_0109f91c:
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

void f_mg503_0109f940(wp::Cpu& c) {
    WP_ENTER(0x109f940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109f954u: goto R_0109f954;
        case 0x109f968u: goto R_0109f968;
        case 0x109f980u: goto R_0109f980;
        case 0x109f990u: goto R_0109f990;
        case 0x109f9a8u: goto R_0109f9a8;
        case 0x109f9d0u: goto R_0109f9d0;
        case 0x109f9f8u: goto R_0109f9f8;
        case 0x109fa00u: goto R_0109fa00;
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
    c.lr = 0x109f954u;
    f_801c83b8(c);
R_0109f954:
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[6] | c.r[6];
    c.lr = 0x109f968u;
    f_mg503_0109b210(c);
R_0109f968:
    c.r[5] = ((((g_mg503_bases[5] + 0x2a420u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a420u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109f980u;
    f_801d34c4(c);
R_0109f980:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x109f990u;
    f_mg503_0109e560(c);
R_0109f990:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f9a8u;
    wp::call(c, c.ctr);
R_0109f9a8:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f9d0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f9d0u;
    wp::call(c, c.ctr);
L_0109f9d0:
R_0109f9d0:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109f9f8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109f9f8u;
    wp::call(c, c.ctr);
L_0109f9f8:
R_0109f9f8:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x109fa00u;
    f_801c8404(c);
R_0109fa00:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg503_0109fa10(wp::Cpu& c) {
    WP_ENTER(0x109fa10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109fa58u: goto R_0109fa58;
        case 0x109fa78u: goto R_0109fa78;
        case 0x109fa90u: goto R_0109fa90;
        case 0x109fab8u: goto R_0109fab8;
        case 0x109fae0u: goto R_0109fae0;
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
    c.r[5] = ((((g_mg503_bases[5] + 0x2a3e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3e8u) & 0xFFFFu);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x109fa58u;
    f_801d3590(c);
R_0109fa58:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x109fa78u;
    wp::call(c, c.ctr);
R_0109fa78:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fa90u;
    wp::call(c, c.ctr);
R_0109fa90:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109fab8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fab8u;
    wp::call(c, c.ctr);
L_0109fab8:
R_0109fab8:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109fae0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fae0u;
    wp::call(c, c.ctr);
L_0109fae0:
R_0109fae0:
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

void f_mg503_0109fb00(wp::Cpu& c) {
    WP_ENTER(0x109fb00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109fb34u: goto R_0109fb34;
        case 0x109fb54u: goto R_0109fb54;
        case 0x109fb6cu: goto R_0109fb6c;
        case 0x109fb94u: goto R_0109fb94;
        case 0x109fbbcu: goto R_0109fbbc;
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
    c.lr = 0x109fb34u;
    f_80010060(c);
R_0109fb34:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x109fb54u;
    wp::call(c, c.ctr);
R_0109fb54:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fb6cu;
    wp::call(c, c.ctr);
R_0109fb6c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109fb94;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fb94u;
    wp::call(c, c.ctr);
L_0109fb94:
R_0109fb94:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109fbbc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fbbcu;
    wp::call(c, c.ctr);
L_0109fbbc:
R_0109fbbc:
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

void f_mg503_0109fbe0(wp::Cpu& c) {
    WP_ENTER(0x109fbe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109fbf4u: goto R_0109fbf4;
        case 0x109fc0cu: goto R_0109fc0c;
        case 0x109fc20u: goto R_0109fc20;
        case 0x109fc48u: goto R_0109fc48;
        case 0x109fc58u: goto R_0109fc58;
        case 0x109fc7cu: goto R_0109fc7c;
        case 0x109fcdcu: goto R_0109fcdc;
        case 0x109fd5cu: goto R_0109fd5c;
        case 0x109fdc4u: goto R_0109fdc4;
        case 0x109fdf8u: goto R_0109fdf8;
        case 0x109fe0cu: goto R_0109fe0c;
        case 0x109fe1cu: goto R_0109fe1c;
        case 0x109fe3cu: goto R_0109fe3c;
        case 0x109fe54u: goto R_0109fe54;
        case 0x109fe7cu: goto R_0109fe7c;
        case 0x109fea4u: goto R_0109fea4;
        case 0x109feacu: goto R_0109feac;
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
    c.lr = 0x109fbf4u;
    f_801c83ac(c);
R_0109fbf4:
    c.r[29] = c.r[5] | c.r[5];
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x109fc0cu;
    f_8006c450(c);
R_0109fc0c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_0109fe10;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x109fc20u;
    f_8006c460(c);
R_0109fc20:
    c.r[25] = ((((g_mg503_bases[5] + 0x2a3f0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3f0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109fc48u;
    f_801c7860(c);
R_0109fc48:
    c.r[24] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[24] | c.r[24];
    c.lr = 0x109fc58u;
    f_mg503_01048380(c);
R_0109fc58:
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
    c.lr = 0x109fc7cu;
    f_mg503_01004710(c);
R_0109fc7c:
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
    if (!wp::cr_get(c, 2)) goto L_0109fcb8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109fcbc;
L_0109fcb8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109fcbc:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x109fcdcu;
    f_mg503_01004710(c);
R_0109fcdc:
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
    if (!wp::cr_get(c, 2)) goto L_0109fd38;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109fd3c;
L_0109fd38:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109fd3c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x109fd5cu;
    f_mg503_01004710(c);
R_0109fd5c:
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
    if (!wp::cr_get(c, 2)) goto L_0109fda0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0109fda4;
L_0109fda0:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0109fda4:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x109fdc4u;
    f_mg503_01004710(c);
R_0109fdc4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0109fde0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_0109fde4;
L_0109fde0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_0109fde4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fdf8u;
    wp::call(c, c.ctr);
R_0109fdf8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0109fe3c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x109fe0cu;
    f_801c7a8c(c);
R_0109fe0c:
    goto L_0109fe3c;
L_0109fe10:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x109fe1cu;
    f_8006c4e0(c);
R_0109fe1c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x109fe3cu;
    wp::call(c, c.ctr);
L_0109fe3c:
R_0109fe3c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fe54u;
    wp::call(c, c.ctr);
R_0109fe54:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109fe7c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fe7cu;
    wp::call(c, c.ctr);
L_0109fe7c:
R_0109fe7c:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109fea4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109fea4u;
    wp::call(c, c.ctr);
L_0109fea4:
R_0109fea4:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x109feacu;
    f_801c83f8(c);
R_0109feac:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_0109fec0(wp::Cpu& c) {
    WP_ENTER(0x109fec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109feecu: goto R_0109feec;
        case 0x109ff08u: goto R_0109ff08;
        case 0x109ff20u: goto R_0109ff20;
        case 0x109ff44u: goto R_0109ff44;
        case 0x109ff68u: goto R_0109ff68;
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
    c.lr = 0x109feecu;
    f_80010060(c);
R_0109feec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ff08u;
    wp::call(c, c.ctr);
R_0109ff08:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ff20u;
    wp::call(c, c.ctr);
R_0109ff20:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ff44;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ff44u;
    wp::call(c, c.ctr);
L_0109ff44:
R_0109ff44:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0109ff68;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x109ff68u;
    wp::call(c, c.ctr);
L_0109ff68:
R_0109ff68:
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

void f_mg503_0109ff90(wp::Cpu& c) {
    WP_ENTER(0x109ff90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x109ffa4u: goto R_0109ffa4;
        case 0x109ffb8u: goto R_0109ffb8;
        case 0x109ffccu: goto R_0109ffcc;
        case 0x109fff4u: goto R_0109fff4;
        case 0x10a0004u: goto R_010a0004;
        case 0x10a0028u: goto R_010a0028;
        case 0x10a0088u: goto R_010a0088;
        case 0x10a0108u: goto R_010a0108;
        case 0x10a0170u: goto R_010a0170;
        case 0x10a01a0u: goto R_010a01a0;
        case 0x10a01b4u: goto R_010a01b4;
        case 0x10a01c4u: goto R_010a01c4;
        case 0x10a01e0u: goto R_010a01e0;
        case 0x10a01f8u: goto R_010a01f8;
        case 0x10a021cu: goto R_010a021c;
        case 0x10a0240u: goto R_010a0240;
        case 0x10a0248u: goto R_010a0248;
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
    c.lr = 0x109ffa4u;
    f_801c83b0(c);
R_0109ffa4:
    c.r[30] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x109ffb8u;
    f_8006c450(c);
R_0109ffb8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010a01b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x109ffccu;
    f_8006c460(c);
R_0109ffcc:
    c.r[26] = ((((g_mg503_bases[5] + 0x2a3f0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3f0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x109fff4u;
    f_801c7860(c);
R_0109fff4:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x10a0004u;
    f_mg503_01048380(c);
R_010a0004:
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
    c.lr = 0x10a0028u;
    f_mg503_01004710(c);
R_010a0028:
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
    if (!wp::cr_get(c, 2)) goto L_010a0064;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010a0068;
L_010a0064:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010a0068:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10a0088u;
    f_mg503_01004710(c);
R_010a0088:
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
    if (!wp::cr_get(c, 2)) goto L_010a00e4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010a00e8;
L_010a00e4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010a00e8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10a0108u;
    f_mg503_01004710(c);
R_010a0108:
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
    if (!wp::cr_get(c, 2)) goto L_010a014c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010a0150;
L_010a014c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010a0150:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10a0170u;
    f_mg503_01004710(c);
R_010a0170:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010a018c;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010a0190;
L_010a018c:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010a0190:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a01a0u;
    wp::call(c, c.ctr);
R_010a01a0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a01e0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10a01b4u;
    f_801c7a8c(c);
R_010a01b4:
    goto L_010a01e0;
L_010a01b8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10a01c4u;
    f_8006c4e0(c);
R_010a01c4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a01e0u;
    wp::call(c, c.ctr);
L_010a01e0:
R_010a01e0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a01f8u;
    wp::call(c, c.ctr);
R_010a01f8:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a021c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a021cu;
    wp::call(c, c.ctr);
L_010a021c:
R_010a021c:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0240;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0240u;
    wp::call(c, c.ctr);
L_010a0240:
R_010a0240:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10a0248u;
    f_801c83fc(c);
R_010a0248:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_010a0260(wp::Cpu& c) {
    WP_ENTER(0x10a0260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a02a8u: goto R_010a02a8;
        case 0x10a02ccu: goto R_010a02cc;
        case 0x10a02f4u: goto R_010a02f4;
        case 0x10a031cu: goto R_010a031c;
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
    c.lr = 0x10a02a8u;
    wp::call(c, c.ctr);
R_010a02a8:
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
    c.lr = 0x10a02ccu;
    wp::call(c, c.ctr);
R_010a02cc:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a02f4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a02f4u;
    wp::call(c, c.ctr);
L_010a02f4:
R_010a02f4:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a031c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a031cu;
    wp::call(c, c.ctr);
L_010a031c:
R_010a031c:
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

void f_mg503_010a0340(wp::Cpu& c) {
    WP_ENTER(0x10a0340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[6] + 0xb58u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg503_bases[6] + 0xb58u) & 0xFFFFu);
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a0360(wp::Cpu& c) {
    WP_ENTER(0x10a0360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a0390u: goto R_010a0390;
        case 0x10a03b0u: goto R_010a03b0;
        case 0x10a03e0u: goto R_010a03e0;
        case 0x10a03e8u: goto R_010a03e8;
        case 0x10a03fcu: goto R_010a03fc;
        case 0x10a040cu: goto R_010a040c;
        case 0x10a0420u: goto R_010a0420;
        case 0x10a043cu: goto R_010a043c;
        case 0x10a0444u: goto R_010a0444;
        case 0x10a0458u: goto R_010a0458;
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
    c.lr = 0x10a0390u;
    wp::call(c, c.ctr);
R_010a0390:
    c.r[31] = 0x0u;
    goto L_010a03b8;
L_010a0398:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a03b0u;
    wp::call(c, c.ctr);
R_010a03b0:
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_010a03b8:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a0398;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a03e0u;
    wp::call(c, c.ctr);
R_010a03e0:
    goto L_010a03e8;
L_010a03e4:
    c.lr = 0x10a03e8u;
    f_8006a940(c);
L_010a03e8:
R_010a03e8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a03fcu;
    wp::call(c, c.ctr);
R_010a03fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a03e4;
    }
    goto L_010a040c;
L_010a0408:
    c.lr = 0x10a040cu;
    f_8006a940(c);
L_010a040c:
R_010a040c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0420u;
    wp::call(c, c.ctr);
R_010a0420:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a0408;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xa4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a043cu;
    wp::call(c, c.ctr);
R_010a043c:
    goto L_010a0444;
L_010a0440:
    c.lr = 0x10a0444u;
    f_8006a940(c);
L_010a0444:
R_010a0444:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0458u;
    wp::call(c, c.ctr);
R_010a0458:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a0440;
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

void f_mg503_010a0480(wp::Cpu& c) {
    WP_ENTER(0x10a0480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a04a8u: goto R_010a04a8;
        case 0x10a04ccu: goto R_010a04cc;
        case 0x10a04f0u: goto R_010a04f0;
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
    c.lr = 0x10a04a8u;
    f_80043290(c);
R_010a04a8:
    ea = c.r[31] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a04cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a04ccu;
    wp::call(c, c.ctr);
L_010a04cc:
R_010a04cc:
    ea = c.r[31] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a04f0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a04f0u;
    wp::call(c, c.ctr);
L_010a04f0:
R_010a04f0:
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

void f_mg503_010a0510(wp::Cpu& c) {
    WP_ENTER(0x10a0510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a0530u: goto R_010a0530;
        case 0x10a0550u: goto R_010a0550;
        case 0x10a0570u: goto R_010a0570;
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
    c.lr = 0x10a0530u;
    f_800402f0(c);
R_010a0530:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0550;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0550u;
    wp::call(c, c.ctr);
L_010a0550:
R_010a0550:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0570;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0570u;
    wp::call(c, c.ctr);
L_010a0570:
R_010a0570:
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

void f_mg503_010a0590(wp::Cpu& c) {
    WP_ENTER(0x10a0590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a05b8u: goto R_010a05b8;
        case 0x10a05d4u: goto R_010a05d4;
        case 0x10a0604u: goto R_010a0604;
        case 0x10a0624u: goto R_010a0624;
        case 0x10a0638u: goto R_010a0638;
        case 0x10a0668u: goto R_010a0668;
        case 0x10a0688u: goto R_010a0688;
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
    c.lr = 0x10a05b8u;
    f_801c79a4(c);
R_010a05b8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a05d4;
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10a05d4u;
    f_mg503_0105ee70(c);
L_010a05d4:
R_010a05d4:
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a0604;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010a0604;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0604u;
    wp::call(c, c.ctr);
L_010a0604:
R_010a0604:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a728u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x198u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a728u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10a0624u;
    wp::call(c, c.ctr);
R_010a0624:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[6] = 0x1u;
    c.lr = 0x10a0638u;
    f_80043490(c);
R_010a0638:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a0668;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0668u;
    wp::call(c, c.ctr);
L_010a0668:
R_010a0668:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0688;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0688u;
    wp::call(c, c.ctr);
L_010a0688:
R_010a0688:
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

void f_mg503_010a06b0(wp::Cpu& c) {
    WP_ENTER(0x10a06b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a06d0u: goto R_010a06d0;
        case 0x10a06ecu: goto R_010a06ec;
        case 0x10a0700u: goto R_010a0700;
        case 0x10a0714u: goto R_010a0714;
        case 0x10a0728u: goto R_010a0728;
        case 0x10a073cu: goto R_010a073c;
        case 0x10a0760u: goto R_010a0760;
        case 0x10a0778u: goto R_010a0778;
        case 0x10a0794u: goto R_010a0794;
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
    c.lr = 0x10a06d0u;
    f_mg503_0109b210(c);
R_010a06d0:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a06ecu;
    wp::call(c, c.ctr);
R_010a06ec:
    c.r[31] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a0700u;
    f_80071fe0(c);
R_010a0700:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_010a071c;
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a0714u;
    f_80071fe0(c);
R_010a0714:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
    goto L_010a0740;
L_010a071c:
    c.r[31] = ((((g_mg503_bases[4] + 0x29bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x29bcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a0728u;
    f_80071fe0(c);
R_010a0728:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010a0740;
    ea = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x29bcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a073cu;
    f_80071fe0(c);
R_010a073c:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
L_010a0740:
    ea = c.r[29] + 0x194u;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0794;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0760u;
    wp::call(c, c.ctr);
R_010a0760:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0778u;
    wp::call(c, c.ctr);
R_010a0778:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0794u;
    wp::call(c, c.ctr);
L_010a0794:
R_010a0794:
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

void f_mg503_010a07b0(wp::Cpu& c) {
    WP_ENTER(0x10a07b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a07c4u: goto R_010a07c4;
        case 0x10a07e4u: goto R_010a07e4;
        case 0x10a080cu: goto R_010a080c;
        case 0x10a0850u: goto R_010a0850;
        case 0x10a0868u: goto R_010a0868;
        case 0x10a087cu: goto R_010a087c;
        case 0x10a0888u: goto R_010a0888;
        case 0x10a0890u: goto R_010a0890;
        case 0x10a08bcu: goto R_010a08bc;
        case 0x10a0904u: goto R_010a0904;
        case 0x10a0950u: goto R_010a0950;
        case 0x10a0964u: goto R_010a0964;
        case 0x10a097cu: goto R_010a097c;
        case 0x10a0998u: goto R_010a0998;
        case 0x10a09a8u: goto R_010a09a8;
        case 0x10a09b4u: goto R_010a09b4;
        case 0x10a09c4u: goto R_010a09c4;
        case 0x10a09c8u: goto R_010a09c8;
        case 0x10a09d0u: goto R_010a09d0;
        case 0x10a09fcu: goto R_010a09fc;
        case 0x10a0a08u: goto R_010a0a08;
        case 0x10a0a14u: goto R_010a0a14;
        case 0x10a0a24u: goto R_010a0a24;
        case 0x10a0a28u: goto R_010a0a28;
        case 0x10a0a30u: goto R_010a0a30;
        case 0x10a0a60u: goto R_010a0a60;
        case 0x10a0a88u: goto R_010a0a88;
        case 0x10a0a94u: goto R_010a0a94;
        case 0x10a0aa4u: goto R_010a0aa4;
        case 0x10a0aa8u: goto R_010a0aa8;
        case 0x10a0ab0u: goto R_010a0ab0;
        case 0x10a0b20u: goto R_010a0b20;
        case 0x10a0b54u: goto R_010a0b54;
        case 0x10a0b70u: goto R_010a0b70;
        case 0x10a0b98u: goto R_010a0b98;
        case 0x10a0bb4u: goto R_010a0bb4;
        case 0x10a0bd4u: goto R_010a0bd4;
        case 0x10a0bfcu: goto R_010a0bfc;
        case 0x10a0c38u: goto R_010a0c38;
        case 0x10a0c60u: goto R_010a0c60;
        case 0x10a0ca0u: goto R_010a0ca0;
        case 0x10a0cbcu: goto R_010a0cbc;
        case 0x10a0d10u: goto R_010a0d10;
        case 0x10a0d18u: goto R_010a0d18;
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
    c.lr = 0x10a07c4u;
    f_801c83ac(c);
R_010a07c4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    ea = c.r[12] + 0xa0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10a07e4u;
    wp::call(c, c.ctr);
R_010a07e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a080c;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a080c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a080cu;
    wp::call(c, c.ctr);
L_010a080c:
R_010a080c:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0890;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0830;
    ea = c.r[28] + 0x186u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a083c;
L_010a0830:
    ea = c.r[28] + 0x187u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0854;
L_010a083c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0850u;
    wp::call(c, c.ctr);
R_010a0850:
    goto L_010a0868;
L_010a0854:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0868u;
    wp::call(c, c.ctr);
L_010a0868:
R_010a0868:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a087cu;
    wp::call(c, c.ctr);
R_010a087c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0890;
    c.lr = 0x10a0888u;
    f_8004a110(c);
R_010a0888:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x10a0890u;
    f_8004a100(c);
L_010a0890:
R_010a0890:
    ea = c.r[28] + 0x140u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a0d10;
    ea = c.r[28] + 0x150u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a0914;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a08bcu;
    wp::call(c, c.ctr);
R_010a08bc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0d10;
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010a08dc;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[0]);
L_010a08dc:
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010a0904;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0904u;
    wp::call(c, c.ctr);
L_010a0904:
R_010a0904:
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_010a0914;
    goto L_010a0d10;
L_010a0914:
    ea = c.r[28] + 0x16au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0bfc;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a0bfc;
    ea = c.r[28] + 0x16cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a0944;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    goto L_010a0d10;
L_010a0944:
    c.r[30] = 0x0u;
    c.r[29] = 0x1u;
    c.lr = 0x10a0950u;
    f_8000e2a0(c);
R_010a0950:
    c.r[25] = c.r[3] | c.r[3];
    c.r[24] = 0x0u;
    c.r[26] = 0x1u;
L_010a095c:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a0964u;
    f_8000fc20(c);
R_010a0964:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = wp::slw(c.r[26], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a097cu;
    wp::call(c, c.ctr);
R_010a097c:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[0] & c.r[27];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a09dc;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a09a0;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a0998u;
    f_8000fc40(c);
R_010a0998:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a09dc;
L_010a09a0:
    c.r[29] = 0x0u;
    c.lr = 0x10a09a8u;
    f_8000dd70(c);
R_010a09a8:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a09b4u;
    f_8000fc20(c);
R_010a09b4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010a09dc;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a09c4u;
    f_8000fc20(c);
R_010a09c4:
    c.lr = 0x10a09c8u;
    f_800699d0(c);
R_010a09c8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a09d0u;
    f_80066cd0(c);
R_010a09d0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a09dc;
    c.r[30] = 0x1u;
L_010a09dc:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a095c;
    }
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0a48;
    c.r[24] = 0x0u;
L_010a09f4:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a09fcu;
    f_8000fc40(c);
R_010a09fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a0a3c;
    c.lr = 0x10a0a08u;
    f_8000dd70(c);
R_010a0a08:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a0a14u;
    f_8000fc20(c);
R_010a0a14:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010a0a3c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a0a24u;
    f_8000fc20(c);
R_010a0a24:
    c.lr = 0x10a0a28u;
    f_800699d0(c);
R_010a0a28:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a0a30u;
    f_80066cd0(c);
R_010a0a30:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a0a3c;
    c.r[30] = 0x1u;
L_010a0a3c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a09f4;
    }
L_010a0a48:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0ac8;
    c.r[24] = 0x1u;
    c.r[25] = 0x0u;
L_010a0a58:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a0a60u;
    f_8000fc40(c);
R_010a0a60:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a0a6c;
    c.r[24] = 0x0u;
L_010a0a6c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a0a58;
    }
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0ac8;
    c.r[24] = 0x0u;
L_010a0a84:
    c.lr = 0x10a0a88u;
    f_8000dd70(c);
R_010a0a88:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a0a94u;
    f_8000fc20(c);
R_010a0a94:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010a0abc;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10a0aa4u;
    f_8000fc20(c);
R_010a0aa4:
    c.lr = 0x10a0aa8u;
    f_800699d0(c);
R_010a0aa8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a0ab0u;
    f_80066cd0(c);
R_010a0ab0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a0abc;
    c.r[30] = 0x1u;
L_010a0abc:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a0a84;
    }
L_010a0ac8:
    ea = c.r[28] + 0x15eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0af8;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0af8;
    ea = c.r[28] + 0x160u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_010a0af8;
    c.r[30] = 0x1u;
L_010a0af8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0bfc;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0bfc;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0b20u;
    wp::call(c, c.ctr);
R_010a0b20:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a0b70;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0b70;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0b70;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0b54u;
    wp::call(c, c.ctr);
R_010a0b54:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0b70;
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[31] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10a0b70u;
    f_80018e30(c);
L_010a0b70:
R_010a0b70:
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
    c.lr = 0x10a0b98u;
    wp::call(c, c.ctr);
R_010a0b98:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x180u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0bb4u;
    wp::call(c, c.ctr);
R_010a0bb4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010a0bd8;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x17cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0bd4u;
    wp::call(c, c.ctr);
R_010a0bd4:
    goto L_010a0be4;
L_010a0bd8:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_010a0be4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0bfcu;
    wp::call(c, c.ctr);
L_010a0bfc:
R_010a0bfc:
    ea = c.r[28] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0c6c;
    ea = c.r[28] + 0x15du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0c6c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a0c6c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0c38u;
    wp::call(c, c.ctr);
R_010a0c38:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a0c6c;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0c6c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0c60u;
    wp::call(c, c.ctr);
R_010a0c60:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0c6c;
    c.r[30] = 0x1u;
L_010a0c6c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0d10;
    ea = c.r[31] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010a0cf0;
    c.r[24] = 0x0u;
    c.r[29] = 0x1u;
L_010a0c8c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0ca0u;
    wp::call(c, c.ctr);
R_010a0ca0:
    c.r[3] = c.r[3] & 0xffffu;
    c.r[0] = wp::slw(c.r[29], c.r[24]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010a0ce4;
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.lr = 0x10a0cbcu;
    f_8000ffd0(c);
R_010a0cbc:
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
    goto L_010a0cf0;
L_010a0ce4:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a0c8c;
    }
L_010a0cf0:
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
    c.lr = 0x10a0d10u;
    wp::call(c, c.ctr);
L_010a0d10:
R_010a0d10:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x10a0d18u;
    f_801c83f8(c);
R_010a0d18:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg503_010a0d30(wp::Cpu& c) {
    WP_ENTER(0x10a0d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg503_010a0d40(wp::Cpu& c) {
    WP_ENTER(0x10a0d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg503_bases[4] + 0x2974u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x2974u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x0u;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010a0d68;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0d68;
    c.r[4] = 0x1u;
L_010a0d68:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mg503_010a0d70(wp::Cpu& c) {
    WP_ENTER(0x10a0d70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x154u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg503_010a0d80(wp::Cpu& c) {
    WP_ENTER(0x10a0d80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a0db8u: goto R_010a0db8;
        case 0x10a0dd0u: goto R_010a0dd0;
        case 0x10a0dd8u: goto R_010a0dd8;
        case 0x10a0e04u: goto R_010a0e04;
        case 0x10a0e1cu: goto R_010a0e1c;
        case 0x10a0e24u: goto R_010a0e24;
        case 0x10a0e50u: goto R_010a0e50;
        case 0x10a0e68u: goto R_010a0e68;
        case 0x10a0e70u: goto R_010a0e70;
        case 0x10a0e9cu: goto R_010a0e9c;
        case 0x10a0eb4u: goto R_010a0eb4;
        case 0x10a0ebcu: goto R_010a0ebc;
        case 0x10a0eccu: goto R_010a0ecc;
        case 0x10a0ee4u: goto R_010a0ee4;
        case 0x10a0efcu: goto R_010a0efc;
        case 0x10a0f14u: goto R_010a0f14;
        case 0x10a0f2cu: goto R_010a0f2c;
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
    if (wp::cr_get(c, 2)) goto L_010a0dd8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0db8u;
    wp::call(c, c.ctr);
R_010a0db8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0dd0u;
    wp::call(c, c.ctr);
R_010a0dd0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a0dd8u;
    f_80019f20(c);
L_010a0dd8:
R_010a0dd8:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0f18;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0e24;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0e04u;
    wp::call(c, c.ctr);
R_010a0e04:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0e1cu;
    wp::call(c, c.ctr);
R_010a0e1c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a0e24u;
    f_80019f20(c);
L_010a0e24:
R_010a0e24:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0f00;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0e70;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0e50u;
    wp::call(c, c.ctr);
R_010a0e50:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0e68u;
    wp::call(c, c.ctr);
R_010a0e68:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a0e70u;
    f_80019f20(c);
L_010a0e70:
R_010a0e70:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0ee8;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0ebc;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0e9cu;
    wp::call(c, c.ctr);
R_010a0e9c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0eb4u;
    wp::call(c, c.ctr);
R_010a0eb4:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a0ebcu;
    f_80019f20(c);
L_010a0ebc:
R_010a0ebc:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a0ed0;
    c.lr = 0x10a0eccu;
    f_mg503_010a0d80(c);
R_010a0ecc:
    goto L_010a0f2c;
L_010a0ed0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0ee4u;
    wp::call(c, c.ctr);
R_010a0ee4:
    goto L_010a0f2c;
L_010a0ee8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0efcu;
    wp::call(c, c.ctr);
R_010a0efc:
    goto L_010a0f2c;
L_010a0f00:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0f14u;
    wp::call(c, c.ctr);
R_010a0f14:
    goto L_010a0f2c;
L_010a0f18:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0f2cu;
    wp::call(c, c.ctr);
L_010a0f2c:
R_010a0f2c:
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

void f_mg503_010a0f50(wp::Cpu& c) {
    WP_ENTER(0x10a0f50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a0f98u: goto R_010a0f98;
        case 0x10a0fc8u: goto R_010a0fc8;
        case 0x10a0fd0u: goto R_010a0fd0;
        case 0x10a0fecu: goto R_010a0fec;
        case 0x10a0ff4u: goto R_010a0ff4;
        case 0x10a1014u: goto R_010a1014;
        case 0x10a101cu: goto R_010a101c;
        case 0x10a1040u: goto R_010a1040;
        case 0x10a1064u: goto R_010a1064;
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
    c.r[31] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
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
    c.lr = 0x10a0f98u;
    wp::call(c, c.ctr);
R_010a0f98:
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a0fb0;
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010a0fd4;
L_010a0fb0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0fc8u;
    wp::call(c, c.ctr);
R_010a0fc8:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a0fd0u;
    f_80043120(c);
R_010a0fd0:
    goto L_010a0ff4;
L_010a0fd4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a0fecu;
    wp::call(c, c.ctr);
R_010a0fec:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a0ff4u;
    f_80043120(c);
L_010a0ff4:
R_010a0ff4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a101c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a1014u;
    wp::call(c, c.ctr);
R_010a1014:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a101cu;
    f_80043060(c);
L_010a101c:
R_010a101c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1040;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a1040u;
    wp::call(c, c.ctr);
L_010a1040:
R_010a1040:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1064;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a1064u;
    wp::call(c, c.ctr);
L_010a1064:
R_010a1064:
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

void f_mg503_010a1090(wp::Cpu& c) {
    WP_ENTER(0x10a1090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mg503_010a10a0(wp::Cpu& c) {
    WP_ENTER(0x10a10a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a1130u: goto R_010a1130;
        case 0x10a1154u: goto R_010a1154;
        case 0x10a1190u: goto R_010a1190;
        case 0x10a11a4u: goto R_010a11a4;
        case 0x10a11c8u: goto R_010a11c8;
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
    if (wp::cr_get(c, 2)) goto L_010a11c8;
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1158;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1158;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1108;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010a1110;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010a1134;
    goto L_010a115c;
L_010a1108:
    c.r[31] = 0x1u;
    goto L_010a115c;
L_010a1110:
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
    c.lr = 0x10a1130u;
    wp::call(c, c.ctr);
R_010a1130:
    goto L_010a115c;
L_010a1134:
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
    c.lr = 0x10a1154u;
    wp::call(c, c.ctr);
R_010a1154:
    goto L_010a115c;
L_010a1158:
    c.r[31] = 0x1u;
L_010a115c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a11c8;
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a11c8;
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
    c.lr = 0x10a1190u;
    wp::call(c, c.ctr);
R_010a1190:
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a11a4u;
    wp::call(c, c.ctr);
R_010a11a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a11c8;
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a11c8u;
    wp::call(c, c.ctr);
L_010a11c8:
R_010a11c8:
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

void f_mg503_010a11f0(wp::Cpu& c) {
    WP_ENTER(0x10a11f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1204;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_010a1204:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1284;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1284;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a123c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010a125c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010a1270;
    return;
L_010a123c:
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
L_010a125c:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010a1270:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010a1284:
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

void f_mg503_010a12b0(wp::Cpu& c) {
    WP_ENTER(0x10a12b0u);
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
    if (!wp::cr_get(c, 2)) goto L_010a12d8;
    return;
L_010a12d8:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1358;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1358;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1310;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010a1330;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010a1344;
    return;
L_010a1310:
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
L_010a1330:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010a1344:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010a1358:
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

void f_mg503_010a1380(wp::Cpu& c) {
    WP_ENTER(0x10a1380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a13b8u: goto R_010a13b8;
        case 0x10a13c8u: goto R_010a13c8;
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
    if (wp::cr_get(c, 2)) goto L_010a13c8;
    c.r[4] = ((((g_mg503_bases[5] + 0x2b4b4u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b4b4u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10a13b8u;
    f_8003b480(c);
R_010a13b8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a13c8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10a13c8u;
    f_801c7a8c(c);
L_010a13c8:
R_010a13c8:
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

void f_mg503_010a13f0(wp::Cpu& c) {
    WP_ENTER(0x10a13f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a1430u: goto R_010a1430;
        case 0x10a1440u: goto R_010a1440;
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
    if (wp::cr_get(c, 2)) goto L_010a1440;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010a1430;
    c.r[4] = ((((g_mg503_bases[5] + 0x2b4b4u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b4b4u) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10a1430u;
    f_8003b480(c);
L_010a1430:
R_010a1430:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a1440;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10a1440u;
    f_801c7a8c(c);
L_010a1440:
R_010a1440:
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

void f_mg503_010a1460(wp::Cpu& c) {
    WP_ENTER(0x10a1460u);
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

void f_mg503_010a1480(wp::Cpu& c) {
    WP_ENTER(0x10a1480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a14c4u: goto R_010a14c4;
        case 0x10a14d4u: goto R_010a14d4;
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
    if (wp::cr_get(c, 2)) goto L_010a14d4;
    if (wp::cr_get(c, 2)) goto L_010a14c4;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010a14c4;
    c.r[4] = ((((g_mg503_bases[5] + 0x2b4b4u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b4b4u) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10a14c4u;
    f_8003b480(c);
L_010a14c4:
R_010a14c4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a14d4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10a14d4u;
    f_801c7a8c(c);
L_010a14d4:
R_010a14d4:
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

void f_mg503_010a14f0(wp::Cpu& c) {
    WP_ENTER(0x10a14f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a1540u: goto R_010a1540;
        case 0x10a1568u: goto R_010a1568;
        case 0x10a1574u: goto R_010a1574;
        case 0x10a1580u: goto R_010a1580;
        case 0x10a1590u: goto R_010a1590;
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
    if (wp::cr_get(c, 2)) goto L_010a1590;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010a1540;
    if (wp::cr_get(c, 2)) goto L_010a1540;
    if (wp::cr_get(c, 2)) goto L_010a1540;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1540;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10a1540u;
    f_801c7a8c(c);
L_010a1540:
R_010a1540:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010a1568;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1568;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a1568u;
    wp::call(c, c.ctr);
L_010a1568:
R_010a1568:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x10a1574u;
    f_80063bb0(c);
R_010a1574:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10a1580u;
    f_mg503_01056590(c);
R_010a1580:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a1590;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10a1590u;
    f_801c7a8c(c);
L_010a1590:
R_010a1590:
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

void f_mg503_010a15b0(wp::Cpu& c) {
    WP_ENTER(0x10a15b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a15c4u: goto R_010a15c4;
        case 0x10a15e4u: goto R_010a15e4;
        case 0x10a167cu: goto R_010a167c;
        case 0x10a16c4u: goto R_010a16c4;
        case 0x10a1720u: goto R_010a1720;
        case 0x10a17b4u: goto R_010a17b4;
        case 0x10a17fcu: goto R_010a17fc;
        case 0x10a1858u: goto R_010a1858;
        case 0x10a189cu: goto R_010a189c;
        case 0x10a18d4u: goto R_010a18d4;
        case 0x10a1970u: goto R_010a1970;
        case 0x10a19b4u: goto R_010a19b4;
        case 0x10a1a14u: goto R_010a1a14;
        case 0x10a1a58u: goto R_010a1a58;
        case 0x10a1ab4u: goto R_010a1ab4;
        case 0x10a1ad0u: goto R_010a1ad0;
        case 0x10a1ad8u: goto R_010a1ad8;
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
    c.lr = 0x10a15c4u;
    f_801c83ac(c);
R_010a15c4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x10a15e4u;
    wp::call(c, c.ctr);
R_010a15e4:
    c.r[4] = ((((g_mg503_bases[5] + 0x2a908u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a908u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a162c;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a162c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a162c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a1720;
L_010a162c:
    c.r[3] = ((((g_mg503_bases[5] + 0x2a908u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2a908u) & 0xFFFFu);
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
    c.lr = 0x10a167cu;
    wp::call(c, c.ctr);
R_010a167c:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a16c4;
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
    c.lr = 0x10a16c4u;
    wp::call(c, c.ctr);
L_010a16c4:
R_010a16c4:
    c.r[3] = ((((g_mg503_bases[5] + 0x2a908u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2a908u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a1720;
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
    c.lr = 0x10a1720u;
    wp::call(c, c.ctr);
L_010a1720:
R_010a1720:
    c.r[4] = ((((g_mg503_bases[5] + 0x2a968u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a968u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a1760;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a1760;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a1760;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a18d4;
L_010a1760:
    c.r[3] = ((((g_mg503_bases[5] + 0x2a968u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2a968u) & 0xFFFFu);
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
    c.lr = 0x10a17b4u;
    wp::call(c, c.ctr);
R_010a17b4:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a17fc;
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
    c.lr = 0x10a17fcu;
    wp::call(c, c.ctr);
L_010a17fc:
R_010a17fc:
    c.r[3] = ((((g_mg503_bases[5] + 0x2a968u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2a968u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a1858;
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
    c.lr = 0x10a1858u;
    wp::call(c, c.ctr);
L_010a1858:
R_010a1858:
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
    c.lr = 0x10a189cu;
    wp::call(c, c.ctr);
R_010a189c:
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
    c.lr = 0x10a18d4u;
    wp::call(c, c.ctr);
L_010a18d4:
R_010a18d4:
    c.r[4] = ((((g_mg503_bases[5] + 0x2a9c8u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a9c8u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a191c;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a191c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a191c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a1a58;
L_010a191c:
    c.r[4] = ((((g_mg503_bases[5] + 0x2a9c8u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a9c8u) & 0xFFFFu);
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
    c.lr = 0x10a1970u;
    wp::call(c, c.ctr);
R_010a1970:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a19b4;
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
    c.lr = 0x10a19b4u;
    wp::call(c, c.ctr);
L_010a19b4:
R_010a19b4:
    c.r[3] = ((((g_mg503_bases[5] + 0x2a9c8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2a9c8u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a1a14;
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
    c.lr = 0x10a1a14u;
    wp::call(c, c.ctr);
L_010a1a14:
R_010a1a14:
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
    c.lr = 0x10a1a58u;
    wp::call(c, c.ctr);
L_010a1a58:
R_010a1a58:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a1ab4;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a1ab4;
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
    c.lr = 0x10a1ab4u;
    wp::call(c, c.ctr);
L_010a1ab4:
R_010a1ab4:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a1ad0u;
    wp::call(c, c.ctr);
R_010a1ad0:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x10a1ad8u;
    f_801c83f8(c);
R_010a1ad8:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mg503_010a1af0(wp::Cpu& c) {
    WP_ENTER(0x10a1af0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a1bacu: goto R_010a1bac;
        case 0x10a1bb0u: goto R_010a1bb0;
        case 0x10a1c10u: goto R_010a1c10;
        case 0x10a1c14u: goto R_010a1c14;
        case 0x10a1cd4u: goto R_010a1cd4;
        case 0x10a1cd8u: goto R_010a1cd8;
        case 0x10a1ce0u: goto R_010a1ce0;
        case 0x10a1d08u: goto R_010a1d08;
        case 0x10a1d0cu: goto R_010a1d0c;
        case 0x10a1e64u: goto R_010a1e64;
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
    if (!wp::cr_get(c, 0)) goto L_010a1b7c;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010a1b6c;
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
L_010a1b6c:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_010a1e64;
L_010a1b7c:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010a1bb0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a47cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a47cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10a1bacu;
    f_801cee24(c);
R_010a1bac:
    c.lr = 0x10a1bb0u;
    f_801d3940(c);
L_010a1bb0:
R_010a1bb0:
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
    if (!wp::cr_get(c, 1)) goto L_010a1c14;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a47cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a47cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10a1c10u;
    f_801cee24(c);
R_010a1c10:
    c.lr = 0x10a1c14u;
    f_801d3940(c);
L_010a1c14:
R_010a1c14:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010a1c64;
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
    if (!wp::cr_get(c, 0)) goto L_010a1c58;
    c.r[3] = c.r[1] + 0x10u;
L_010a1c58:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010a1ca8;
L_010a1c64:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010a1ca0;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010a1c94;
    c.r[3] = c.r[1] + 0x10u;
L_010a1c94:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010a1ca8;
L_010a1ca0:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_010a1ca8:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010a1cd8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2a47cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2a47cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10a1cd4u;
    f_801cee24(c);
R_010a1cd4:
    c.lr = 0x10a1cd8u;
    f_801d3940(c);
L_010a1cd8:
R_010a1cd8:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x10a1ce0u;
    f_801c79a4(c);
R_010a1ce0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010a1d0c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2b548u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b548u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10a1d08u;
    f_801cee24(c);
R_010a1d08:
    c.lr = 0x10a1d0cu;
    f_801d3940(c);
L_010a1d0c:
R_010a1d0c:
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
    if (wp::cr_get(c, 2)) goto L_010a1d6c;
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
L_010a1d6c:
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
    if (!wp::cr_get(c, 1)) goto L_010a1e18;
    c.r[0] = c.r[0] | 0x0u;
L_010a1db8:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_010a1dfc;
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
L_010a1dfc:
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
    goto L_010a1db8;
    }
L_010a1e18:
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
    if (wp::cr_get(c, 2)) goto L_010a1e64;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1e64;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10a1e64u;
    f_801c7a8c(c);
L_010a1e64:
R_010a1e64:
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

void f_mg503_010a1e90(wp::Cpu& c) {
    WP_ENTER(0x10a1e90u);
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

void f_mg503_010a1eb0(wp::Cpu& c) {
    WP_ENTER(0x10a1eb0u);
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
    if (wp::cr_get(c, 2)) goto L_010a21a4;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_010a21a4;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_010a2144;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_010a1f54;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_010a1f48;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a1f48;
    c.r[9] = 0x0u;
L_010a1f48:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a1f54;
    c.r[7] = 0x1u;
L_010a1f54:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2144;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010a2144;
L_010a1f78:
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
    goto L_010a1f78;
    }
L_010a2144:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_010a21a4;
L_010a2160:
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
    goto L_010a2160;
    }
L_010a21a4:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mg503_010a21c0(wp::Cpu& c) {
    WP_ENTER(0x10a21c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mg503_010a21d0(wp::Cpu& c) {
    WP_ENTER(0x10a21d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mg503_010a21e0(wp::Cpu& c) {
    WP_ENTER(0x10a21e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a22e0u: goto R_010a22e0;
        case 0x10a2310u: goto R_010a2310;
        case 0x10a232cu: goto R_010a232c;
        case 0x10a2348u: goto R_010a2348;
        case 0x10a2388u: goto R_010a2388;
        case 0x10a2390u: goto R_010a2390;
        case 0x10a239cu: goto R_010a239c;
        case 0x10a23a0u: goto R_010a23a0;
        case 0x10a241cu: goto R_010a241c;
        case 0x10a242cu: goto R_010a242c;
        case 0x10a2448u: goto R_010a2448;
        case 0x10a245cu: goto R_010a245c;
        case 0x10a24a4u: goto R_010a24a4;
        case 0x10a24d8u: goto R_010a24d8;
        case 0x10a24ecu: goto R_010a24ec;
        case 0x10a24fcu: goto R_010a24fc;
        case 0x10a2510u: goto R_010a2510;
        case 0x10a2530u: goto R_010a2530;
        case 0x10a2560u: goto R_010a2560;
        case 0x10a2590u: goto R_010a2590;
        case 0x10a25b0u: goto R_010a25b0;
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
    c.r[31] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2274;
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
    if (!wp::cr_get(c, 1)) goto L_010a2268;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010a2268:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_010a22c4;
L_010a2274:
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
    if (!wp::cr_get(c, 0)) goto L_010a22c4;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010a22c4:
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
    c.lr = 0x10a22e0u;
    f_mg503_01052e80(c);
R_010a22e0:
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
    if (!wp::cr_get(c, 1)) goto L_010a2564;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010a23a8;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10a2310u;
    f_80053d40(c);
R_010a2310:
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
    c.lr = 0x10a232cu;
    f_8006b460(c);
R_010a232c:
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
    c.lr = 0x10a2348u;
    f_8006b460(c);
R_010a2348:
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
    c.lr = 0x10a2388u;
    wp::call(c, c.ctr);
R_010a2388:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a2390u;
    f_80071fe0(c);
R_010a2390:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10a239cu;
    f_80071fe0(c);
R_010a239c:
    c.lr = 0x10a23a0u;
    f_8006b590(c);
R_010a23a0:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_010a23a8:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2530;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_010a2530;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a23d4;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_010a23d4:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010a2408;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010a2414;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010a244c;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_010a24f0;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_010a2514;
    goto L_010a2530;
L_010a2408:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_010a2530;
L_010a2414:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10a241cu;
    f_80055bb0(c);
R_010a241c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2530;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10a242cu;
    f_80055d80(c);
R_010a242c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010a2530;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2448u;
    wp::call(c, c.ctr);
R_010a2448:
    goto L_010a2530;
L_010a244c:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a245c;
    c.lr = 0x10a245cu;
    f_80019fa0(c);
L_010a245c:
R_010a245c:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a24b0;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010a24b0;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_010a2488;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_010a248c;
L_010a2488:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_010a248c:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x10a24a4u;
    f_80055290(c);
R_010a24a4:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_010a24b0:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a24d8;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a24d8u;
    wp::call(c, c.ctr);
L_010a24d8:
R_010a24d8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a24ecu;
    wp::call(c, c.ctr);
R_010a24ec:
    goto L_010a2530;
L_010a24f0:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10a24fcu;
    f_80019f20(c);
R_010a24fc:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2510u;
    wp::call(c, c.ctr);
R_010a2510:
    goto L_010a2530;
L_010a2514:
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
    c.lr = 0x10a2530u;
    wp::call(c, c.ctr);
L_010a2530:
R_010a2530:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a2544;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_010a2544:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10a2560u;
    f_mg503_01052920(c);
R_010a2560:
    goto L_010a25b4;
L_010a2564:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_010a25b4;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a25b4;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x10a2590u;
    f_80055290(c);
R_010a2590:
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
    c.lr = 0x10a25b0u;
    wp::call(c, c.ctr);
R_010a25b0:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_010a25b4:
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

void f_mg503_010a25e0(wp::Cpu& c) {
    WP_ENTER(0x10a25e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a262cu: goto R_010a262c;
        case 0x10a2638u: goto R_010a2638;
        case 0x10a2670u: goto R_010a2670;
        case 0x10a26acu: goto R_010a26ac;
        case 0x10a26b8u: goto R_010a26b8;
        case 0x10a26c8u: goto R_010a26c8;
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
    if (wp::cr_get(c, 2)) goto L_010a26c8;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010a262c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a262c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a262cu;
    wp::call(c, c.ctr);
L_010a262c:
R_010a262c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x10a2638u;
    f_80069c40(c);
R_010a2638:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a26b8;
    c.r[3] = ((((g_mg503_bases[5] + 0x2b2a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg503_bases[5] + 0x2b2a8u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010a2670;
L_010a2650:
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
    c.lr = 0x10a2670u;
    wp::call(c, c.ctr);
L_010a2670:
R_010a2670:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a2650;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010a26ac;
    if (wp::cr_get(c, 2)) goto L_010a26ac;
    if (wp::cr_get(c, 2)) goto L_010a26ac;
    if (wp::cr_get(c, 2)) goto L_010a26ac;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a26ac;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10a26acu;
    f_801c7a8c(c);
L_010a26ac:
R_010a26ac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10a26b8u;
    f_8003fb90(c);
L_010a26b8:
R_010a26b8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a26c8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10a26c8u;
    f_801c7a8c(c);
L_010a26c8:
R_010a26c8:
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

void f_mg503_010a26f0(wp::Cpu& c) {
    WP_ENTER(0x10a26f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a271cu: goto R_010a271c;
        case 0x10a2728u: goto R_010a2728;
        case 0x10a2734u: goto R_010a2734;
        case 0x10a2740u: goto R_010a2740;
        case 0x10a2758u: goto R_010a2758;
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
    if (wp::cr_get(c, 2)) goto L_010a272c;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x10a271cu;
    f_80069e30(c);
R_010a271c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x10a2728u;
    f_800403b0(c);
R_010a2728:
    goto L_010a2740;
L_010a272c:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x10a2734u;
    f_80069e40(c);
R_010a2734:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x10a2740u;
    f_800403a0(c);
L_010a2740:
R_010a2740:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2758u;
    wp::call(c, c.ctr);
R_010a2758:
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

void f_mg503_010a2770(wp::Cpu& c) {
    WP_ENTER(0x10a2770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a2790u: goto R_010a2790;
        case 0x10a27b0u: goto R_010a27b0;
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
    c.lr = 0x10a2790u;
    f_800402c0(c);
R_010a2790:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a27b0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a27b0u;
    wp::call(c, c.ctr);
L_010a27b0:
R_010a27b0:
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

void f_mg503_010a27d0(wp::Cpu& c) {
    WP_ENTER(0x10a27d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a2820u: goto R_010a2820;
        case 0x10a283cu: goto R_010a283c;
        case 0x10a287cu: goto R_010a287c;
        case 0x10a2894u: goto R_010a2894;
        case 0x10a289cu: goto R_010a289c;
        case 0x10a28b4u: goto R_010a28b4;
        case 0x10a28bcu: goto R_010a28bc;
        case 0x10a28e8u: goto R_010a28e8;
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
    c.r[31] = ((((g_mg503_bases[4] + 0x2940u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x2940u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010a28e8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010a2824;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a2820u;
    f_80071fe0(c);
R_010a2820:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_010a2824:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a283cu;
    wp::call(c, c.ctr);
R_010a283c:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2854;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010a285c;
L_010a2854:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_010a285c:
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
    c.lr = 0x10a287cu;
    wp::call(c, c.ctr);
R_010a287c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2894u;
    wp::call(c, c.ctr);
R_010a2894:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a289cu;
    f_80043060(c);
R_010a289c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a28b4u;
    wp::call(c, c.ctr);
R_010a28b4:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10a28bcu;
    f_80043120(c);
R_010a28bc:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a28e8;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a28e8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a28e8u;
    wp::call(c, c.ctr);
L_010a28e8:
R_010a28e8:
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

void f_mg503_010a2910(wp::Cpu& c) {
    WP_ENTER(0x10a2910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mg503_010a2920(wp::Cpu& c) {
    WP_ENTER(0x10a2920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg503_010a2930(wp::Cpu& c) {
    WP_ENTER(0x10a2930u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg503_010a2940(wp::Cpu& c) {
    WP_ENTER(0x10a2940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a2968u: goto R_010a2968;
        case 0x10a2970u: goto R_010a2970;
        case 0x10a2984u: goto R_010a2984;
        case 0x10a2994u: goto R_010a2994;
        case 0x10a29a8u: goto R_010a29a8;
        case 0x10a29c8u: goto R_010a29c8;
        case 0x10a29d0u: goto R_010a29d0;
        case 0x10a29e4u: goto R_010a29e4;
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
    c.lr = 0x10a2968u;
    wp::call(c, c.ctr);
R_010a2968:
    goto L_010a2970;
L_010a296c:
    c.lr = 0x10a2970u;
    f_8006a940(c);
L_010a2970:
R_010a2970:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2984u;
    wp::call(c, c.ctr);
R_010a2984:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a296c;
    }
    goto L_010a2994;
L_010a2990:
    c.lr = 0x10a2994u;
    f_8006a940(c);
L_010a2994:
R_010a2994:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a29a8u;
    wp::call(c, c.ctr);
R_010a29a8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a2990;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a29c8u;
    wp::call(c, c.ctr);
R_010a29c8:
    goto L_010a29d0;
L_010a29cc:
    c.lr = 0x10a29d0u;
    f_8006a940(c);
L_010a29d0:
R_010a29d0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a29e4u;
    wp::call(c, c.ctr);
R_010a29e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010a29cc;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_010a2a00(wp::Cpu& c) {
    WP_ENTER(0x10a2a00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a2a14u: goto R_010a2a14;
        case 0x10a2a34u: goto R_010a2a34;
        case 0x10a2a84u: goto R_010a2a84;
        case 0x10a2aa8u: goto R_010a2aa8;
        case 0x10a2ab4u: goto R_010a2ab4;
        case 0x10a2ac8u: goto R_010a2ac8;
        case 0x10a2ae8u: goto R_010a2ae8;
        case 0x10a2af8u: goto R_010a2af8;
        case 0x10a2b04u: goto R_010a2b04;
        case 0x10a2b14u: goto R_010a2b14;
        case 0x10a2b18u: goto R_010a2b18;
        case 0x10a2b20u: goto R_010a2b20;
        case 0x10a2b4cu: goto R_010a2b4c;
        case 0x10a2b58u: goto R_010a2b58;
        case 0x10a2b64u: goto R_010a2b64;
        case 0x10a2b74u: goto R_010a2b74;
        case 0x10a2b78u: goto R_010a2b78;
        case 0x10a2b80u: goto R_010a2b80;
        case 0x10a2bb0u: goto R_010a2bb0;
        case 0x10a2bd8u: goto R_010a2bd8;
        case 0x10a2be4u: goto R_010a2be4;
        case 0x10a2bf4u: goto R_010a2bf4;
        case 0x10a2bf8u: goto R_010a2bf8;
        case 0x10a2c00u: goto R_010a2c00;
        case 0x10a2c3cu: goto R_010a2c3c;
        case 0x10a2c58u: goto R_010a2c58;
        case 0x10a2c68u: goto R_010a2c68;
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
    c.lr = 0x10a2a14u;
    f_801c83b0(c);
R_010a2a14:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010a2a48;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2a34u;
    wp::call(c, c.ctr);
R_010a2a34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2c60;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010a2c60;
L_010a2a48:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2c60;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010a2c60;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a2c60;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2a84u;
    wp::call(c, c.ctr);
R_010a2a84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a2aa8;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2aa8u;
    wp::call(c, c.ctr);
L_010a2aa8:
R_010a2aa8:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x10a2ab4u;
    f_8000e2a0(c);
R_010a2ab4:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_010a2ac0:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2ac8u;
    f_8000fc20(c);
R_010a2ac8:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a2b2c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a2af0;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2ae8u;
    f_8000fc40(c);
R_010a2ae8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a2b2c;
L_010a2af0:
    c.r[26] = 0x0u;
    c.lr = 0x10a2af8u;
    f_8000dd70(c);
R_010a2af8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2b04u;
    f_8000fc20(c);
R_010a2b04:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010a2b2c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2b14u;
    f_8000fc20(c);
R_010a2b14:
    c.lr = 0x10a2b18u;
    f_800699d0(c);
R_010a2b18:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a2b20u;
    f_80066cd0(c);
R_010a2b20:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a2b2c;
    c.r[27] = 0x1u;
L_010a2b2c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a2ac0;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2b98;
    c.r[25] = 0x0u;
L_010a2b44:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2b4cu;
    f_8000fc40(c);
R_010a2b4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a2b8c;
    c.lr = 0x10a2b58u;
    f_8000dd70(c);
R_010a2b58:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2b64u;
    f_8000fc20(c);
R_010a2b64:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010a2b8c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2b74u;
    f_8000fc20(c);
R_010a2b74:
    c.lr = 0x10a2b78u;
    f_800699d0(c);
R_010a2b78:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a2b80u;
    f_80066cd0(c);
R_010a2b80:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a2b8c;
    c.r[27] = 0x1u;
L_010a2b8c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a2b44;
    }
L_010a2b98:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2c18;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_010a2ba8:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10a2bb0u;
    f_8000fc40(c);
R_010a2bb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a2bbc;
    c.r[25] = 0x0u;
L_010a2bbc:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a2ba8;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2c18;
    c.r[25] = 0x0u;
L_010a2bd4:
    c.lr = 0x10a2bd8u;
    f_8000dd70(c);
R_010a2bd8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2be4u;
    f_8000fc20(c);
R_010a2be4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010a2c0c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10a2bf4u;
    f_8000fc20(c);
R_010a2bf4:
    c.lr = 0x10a2bf8u;
    f_800699d0(c);
R_010a2bf8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a2c00u;
    f_80066cd0(c);
R_010a2c00:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a2c0c;
    c.r[27] = 0x1u;
L_010a2c0c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a2bd4;
    }
L_010a2c18:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a2c60;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2c3cu;
    wp::call(c, c.ctr);
R_010a2c3c:
    c.r[3] = ((((g_mg503_bases[4] + 0x299cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[4] + 0x2974u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x299cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x2974u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10a2c58u;
    f_80018e30(c);
R_010a2c58:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_010a2c60:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10a2c68u;
    f_801c83fc(c);
R_010a2c68:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg503_010a2c80(wp::Cpu& c) {
    WP_ENTER(0x10a2c80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a2ca8u: goto R_010a2ca8;
        case 0x10a2cacu: goto R_010a2cac;
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
L_010a2c94:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2ca8u;
    wp::call(c, c.ctr);
R_010a2ca8:
    c.lr = 0x10a2cacu;
    f_8006a940(c);
R_010a2cac:
    WP_POLL(c);
    goto L_010a2c94;
}

void f_mg503_010a2cb0(wp::Cpu& c) {
    WP_ENTER(0x10a2cb0u);
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

void f_mg503_010a2cd0(wp::Cpu& c) {
    WP_ENTER(0x10a2cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a2cf4u: goto R_010a2cf4;
        case 0x10a2d18u: goto R_010a2d18;
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
    c.lr = 0x10a2cf4u;
    f_80010060(c);
R_010a2cf4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg503_bases[5] + 0x2b5bcu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5bcu) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10a2d18u;
    wp::call(c, c.ctr);
R_010a2d18:
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

void f_mg503_010a2d30(wp::Cpu& c) {
    WP_ENTER(0x10a2d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a2d44u: goto R_010a2d44;
        case 0x10a2d58u: goto R_010a2d58;
        case 0x10a2d6cu: goto R_010a2d6c;
        case 0x10a2d94u: goto R_010a2d94;
        case 0x10a2da4u: goto R_010a2da4;
        case 0x10a2dc8u: goto R_010a2dc8;
        case 0x10a2e28u: goto R_010a2e28;
        case 0x10a2ea8u: goto R_010a2ea8;
        case 0x10a2f10u: goto R_010a2f10;
        case 0x10a2f48u: goto R_010a2f48;
        case 0x10a2f5cu: goto R_010a2f5c;
        case 0x10a2f6cu: goto R_010a2f6c;
        case 0x10a2f90u: goto R_010a2f90;
        case 0x10a2f98u: goto R_010a2f98;
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
    c.lr = 0x10a2d44u;
    f_801c83b4(c);
R_010a2d44:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10a2d58u;
    f_8006c450(c);
R_010a2d58:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010a2f60;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10a2d6cu;
    f_8006c460(c);
R_010a2d6c:
    c.r[27] = ((((g_mg503_bases[5] + 0x2a3f0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3f0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10a2d94u;
    f_801c7860(c);
R_010a2d94:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10a2da4u;
    f_mg503_01048380(c);
R_010a2da4:
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
    c.lr = 0x10a2dc8u;
    f_mg503_01004710(c);
R_010a2dc8:
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
    if (!wp::cr_get(c, 2)) goto L_010a2e04;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010a2e08;
L_010a2e04:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010a2e08:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10a2e28u;
    f_mg503_01004710(c);
R_010a2e28:
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
    if (!wp::cr_get(c, 2)) goto L_010a2e84;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010a2e88;
L_010a2e84:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010a2e88:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10a2ea8u;
    f_mg503_01004710(c);
R_010a2ea8:
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
    if (!wp::cr_get(c, 2)) goto L_010a2eec;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010a2ef0;
L_010a2eec:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010a2ef0:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10a2f10u;
    f_mg503_01004710(c);
R_010a2f10:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mg503_bases[5] + 0x2b5c8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5c8u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_010a2f30;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010a2f34;
L_010a2f30:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010a2f34:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a2f48u;
    wp::call(c, c.ctr);
R_010a2f48:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a2f90;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10a2f5cu;
    f_801c7a8c(c);
R_010a2f5c:
    goto L_010a2f90;
L_010a2f60:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10a2f6cu;
    f_8006c4e0(c);
R_010a2f6c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg503_bases[5] + 0x2b5c8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5c8u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10a2f90u;
    wp::call(c, c.ctr);
L_010a2f90:
R_010a2f90:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10a2f98u;
    f_801c8400(c);
R_010a2f98:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_010a2fb0(wp::Cpu& c) {
    WP_ENTER(0x10a2fb0u);
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

void f_mg503_010a2fd0(wp::Cpu& c) {
    WP_ENTER(0x10a2fd0u);
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

void f_mg503_010a2ff0(wp::Cpu& c) {
    WP_ENTER(0x10a2ff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a301cu: goto R_010a301c;
        case 0x10a3034u: goto R_010a3034;
        case 0x10a3044u: goto R_010a3044;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mg503_bases[5] + 0x2b5a4u) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5a4u) & 0xFFFFu);
    c.lr = 0x10a301cu;
    f_mg503_0109b210(c);
R_010a301c:
    c.r[5] = ((((g_mg503_bases[5] + 0x2a420u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2a420u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10a3034u;
    f_801d34c4(c);
R_010a3034:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10a3044u;
    f_mg503_0109e560(c);
R_010a3044:
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

void f_mg503_010a3060(wp::Cpu& c) {
    WP_ENTER(0x10a3060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a3098u: goto R_010a3098;
        case 0x10a30bcu: goto R_010a30bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mg503_bases[5] + 0x2a3e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mg503_bases[5] + 0x2a3e8u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10a3098u;
    f_801d3590(c);
R_010a3098:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg503_bases[5] + 0x2b5b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5b0u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10a30bcu;
    wp::call(c, c.ctr);
R_010a30bc:
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

void f_mg503_010a30e0(wp::Cpu& c) {
    WP_ENTER(0x10a30e0u);
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

void f_mg503_010a3100(wp::Cpu& c) {
    WP_ENTER(0x10a3100u);
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

void f_mg503_010a3120(wp::Cpu& c) {
    WP_ENTER(0x10a3120u);
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

void f_mg503_010a3140(wp::Cpu& c) {
    WP_ENTER(0x10a3140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a3160u: goto R_010a3160;
        case 0x10a3168u: goto R_010a3168;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg503_bases[5] + 0x2b58cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mg503_bases[5] + 0x2b58cu) & 0xFFFFu);
    c.lr = 0x10a3160u;
    f_mg503_0109b210(c);
R_010a3160:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a3168u;
    f_mg503_0109d660(c);
R_010a3168:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_010a3180(wp::Cpu& c) {
    WP_ENTER(0x10a3180u);
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

void f_mg503_010a31a0(wp::Cpu& c) {
    WP_ENTER(0x10a31a0u);
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

void f_mg503_010a31c0(wp::Cpu& c) {
    WP_ENTER(0x10a31c0u);
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

void f_mg503_010a31e0(wp::Cpu& c) {
    WP_ENTER(0x10a31e0u);
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

void f_mg503_010a3200(wp::Cpu& c) {
    WP_ENTER(0x10a3200u);
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

void f_mg503_010a3220(wp::Cpu& c) {
    WP_ENTER(0x10a3220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg503_bases[4] + 0x2ae0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[4] + 0x2ae0u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010a3250;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a3250;
    c.r[4] = 0x1u;
L_010a3250:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mg503_010a3260(wp::Cpu& c) {
    WP_ENTER(0x10a3260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a3298u: goto R_010a3298;
        case 0x10a32b0u: goto R_010a32b0;
        case 0x10a32b8u: goto R_010a32b8;
        case 0x10a32e4u: goto R_010a32e4;
        case 0x10a32fcu: goto R_010a32fc;
        case 0x10a3304u: goto R_010a3304;
        case 0x10a3330u: goto R_010a3330;
        case 0x10a3348u: goto R_010a3348;
        case 0x10a3350u: goto R_010a3350;
        case 0x10a337cu: goto R_010a337c;
        case 0x10a3394u: goto R_010a3394;
        case 0x10a339cu: goto R_010a339c;
        case 0x10a33acu: goto R_010a33ac;
        case 0x10a33c4u: goto R_010a33c4;
        case 0x10a33dcu: goto R_010a33dc;
        case 0x10a33f4u: goto R_010a33f4;
        case 0x10a340cu: goto R_010a340c;
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
    if (wp::cr_get(c, 2)) goto L_010a32b8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a3298u;
    wp::call(c, c.ctr);
R_010a3298:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a32b0u;
    wp::call(c, c.ctr);
R_010a32b0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a32b8u;
    f_80019f20(c);
L_010a32b8:
R_010a32b8:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a33f8;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a3304;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a32e4u;
    wp::call(c, c.ctr);
R_010a32e4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a32fcu;
    wp::call(c, c.ctr);
R_010a32fc:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a3304u;
    f_80019f20(c);
L_010a3304:
R_010a3304:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a33e0;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a3350;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a3330u;
    wp::call(c, c.ctr);
R_010a3330:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a3348u;
    wp::call(c, c.ctr);
R_010a3348:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a3350u;
    f_80019f20(c);
L_010a3350:
R_010a3350:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a33c8;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a339c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a337cu;
    wp::call(c, c.ctr);
R_010a337c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a3394u;
    wp::call(c, c.ctr);
R_010a3394:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10a339cu;
    f_80019f20(c);
L_010a339c:
R_010a339c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a33b0;
    c.lr = 0x10a33acu;
    f_mg503_010a0d80(c);
R_010a33ac:
    goto L_010a340c;
L_010a33b0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a33c4u;
    wp::call(c, c.ctr);
R_010a33c4:
    goto L_010a340c;
L_010a33c8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a33dcu;
    wp::call(c, c.ctr);
R_010a33dc:
    goto L_010a340c;
L_010a33e0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a33f4u;
    wp::call(c, c.ctr);
R_010a33f4:
    goto L_010a340c;
L_010a33f8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a340cu;
    wp::call(c, c.ctr);
L_010a340c:
R_010a340c:
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

void f_mg503_010a3430(wp::Cpu& c) {
    WP_ENTER(0x10a3430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg503_bases[5] + 0x2b638u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b638u) & 0xFFFFu);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a3450(wp::Cpu& c) {
    WP_ENTER(0x10a3450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a3460u: goto R_010a3460;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10a3460u;
    f_mg503_0109b210(c);
R_010a3460:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg503_010a3480(wp::Cpu& c) {
    WP_ENTER(0x10a3480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg503_bases[5] + 0x2b630u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b630u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a34b0(wp::Cpu& c) {
    WP_ENTER(0x10a34b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg503_bases[5] + 0x2b618u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b618u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a34e0(wp::Cpu& c) {
    WP_ENTER(0x10a34e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg503_bases[5] + 0x2b620u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b620u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a3510(wp::Cpu& c) {
    WP_ENTER(0x10a3510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[5] + 0x2b600u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x258u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x2b600u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a3530(wp::Cpu& c) {
    WP_ENTER(0x10a3530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg503_bases[5] + 0x2b608u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b608u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a3560(wp::Cpu& c) {
    WP_ENTER(0x10a3560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg503_bases[5] + 0x2b5f8u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg503_bases[5] + 0x2b5f8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg503_010a3580(wp::Cpu& c) {
    WP_ENTER(0x10a3580u);
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

void f_mg503_010a35a0(wp::Cpu& c) {
    WP_ENTER(0x10a35a0u);
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

void f_mg503_010a35b0(wp::Cpu& c) {
    WP_ENTER(0x10a35b0u);
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

void f_mg503_010a35c0(wp::Cpu& c) {
    WP_ENTER(0x10a35c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a35f4u: goto R_010a35f4;
        case 0x10a360cu: goto R_010a360c;
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
    c.lr = 0x10a35f4u;
    wp::call(c, c.ctr);
R_010a35f4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x228u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10a360cu;
    wp::call(c, c.ctr);
R_010a360c:
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

void f_mg503_010a3630(wp::Cpu& c) {
    WP_ENTER(0x10a3630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15eu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg503_010a3640(wp::Cpu& c) {
    WP_ENTER(0x10a3640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg503_010a3650(wp::Cpu& c) {
    WP_ENTER(0x10a3650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x160u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x164u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg503_010a3660(wp::Cpu& c) {
    WP_ENTER(0x10a3660u);
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

void f_mg503_010a3680(wp::Cpu& c) {
    WP_ENTER(0x10a3680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a36c4u: goto R_010a36c4;
        case 0x10a36d4u: goto R_010a36d4;
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
    if (wp::cr_get(c, 2)) goto L_010a36d4;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010a36b8;
    c.r[3] = ((((g_mg503_bases[6] + 0xb5cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[6] + 0xb5cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010a36b8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10a36c4u;
    f_8001bfe0(c);
R_010a36c4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a36d4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10a36d4u;
    f_801c7a8c(c);
L_010a36d4:
R_010a36d4:
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

void f_mg503_010a36f0(wp::Cpu& c) {
    WP_ENTER(0x10a36f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg503_010a07b0(c);
    return;
}

void f_mg503_010a3700(wp::Cpu& c) {
    WP_ENTER(0x10a3700u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg503_0109e9f0(c);
    return;
}

void f_mg503_010a3710(wp::Cpu& c) {
    WP_ENTER(0x10a3710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mg503_010a3720(wp::Cpu& c) {
    WP_ENTER(0x10a3720u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mg503_010a3680(c);
    return;
}

void f_mg503_010a3730(wp::Cpu& c) {
    WP_ENTER(0x10a3730u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mg503_010a14f0(c);
    return;
}

void f_mg503_010a3740(wp::Cpu& c) {
    WP_ENTER(0x10a3740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mg503_010a14f0(c);
    return;
}

void f_mg503_010a3750(wp::Cpu& c) {
    WP_ENTER(0x10a3750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mg503_010a14f0(c);
    return;
}

void f_mg503_010a3760(wp::Cpu& c) {
    WP_ENTER(0x10a3760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mg503_010a21e0(c);
    return;
}

void f_mg503_010a3770(wp::Cpu& c) {
    WP_ENTER(0x10a3770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mg503_010a14f0(c);
    return;
}

void f_mg503_010a3780(wp::Cpu& c) {
    WP_ENTER(0x10a3780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg503_010a2c80(c);
    return;
}

void f_mg503_010a3790(wp::Cpu& c) {
    WP_ENTER(0x10a3790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg503_010a25e0(c);
    return;
}

void f_mg503_010a37a0(wp::Cpu& c) {
    WP_ENTER(0x10a37a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a37c0u: goto R_010a37c0;
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
    c.lr = 0x10a37c0u;
    f_8011bd40(c);
R_010a37c0:
    c.r[3] = ((((g_mg503_bases[4] + 0x2ae8u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg503_bases[5] + 0x2b6d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2ae8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg503_bases[5] + 0x2b6d0u) & 0xFFFFu);
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

void f_mg503_010a3800(wp::Cpu& c) {
    WP_ENTER(0x10a3800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a382cu: goto R_010a382c;
        case 0x10a383cu: goto R_010a383c;
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
    if (wp::cr_get(c, 2)) goto L_010a383c;
    c.r[4] = 0x0u;
    c.lr = 0x10a382cu;
    f_8011bd50(c);
R_010a382c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010a383c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10a383cu;
    f_801c7a8c(c);
L_010a383c:
R_010a383c:
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

void f_mg503_010a3860(wp::Cpu& c) {
    WP_ENTER(0x10a3860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a3894u: goto R_010a3894;
        case 0x10a396cu: goto R_010a396c;
        case 0x10a3aecu: goto R_010a3aec;
        case 0x10a3b00u: goto R_010a3b00;
        case 0x10a3b60u: goto R_010a3b60;
        case 0x10a3b6cu: goto R_010a3b6c;
        case 0x10a3b94u: goto R_010a3b94;
        case 0x10a3bacu: goto R_010a3bac;
        case 0x10a3bccu: goto R_010a3bcc;
        case 0x10a3bd8u: goto R_010a3bd8;
        case 0x10a3c00u: goto R_010a3c00;
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
    c.lr = 0x10a3894u;
    f_801c83ac(c);
R_010a3894:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mg503_bases[4] + 0x2ae8u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x2ae8u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010a38b4;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010a3980;
    goto L_010a3bd4;
L_010a38b4:
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
    if (wp::cr_get(c, 2)) goto L_010a3930;
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
L_010a3930:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010a396c;
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
    c.lr = 0x10a396cu;
    f_8011eeb0(c);
L_010a396c:
R_010a396c:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010a3bd8;
L_010a3980:
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
    if (!wp::cr_get(c, 2)) goto L_010a39ac;
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
L_010a39ac:
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
    c.lr = 0x10a3aecu;
    f_801225e0(c);
R_010a3aec:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10a3b00u;
    f_801225e0(c);
R_010a3b00:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010a3b40;
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
L_010a3b40:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_010a3b58;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_010a3b58:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10a3b60u;
    f_8011eaa0(c);
R_010a3b60:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10a3b6cu;
    f_8011ea40(c);
R_010a3b6c:
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
    c.lr = 0x10a3b94u;
    f_80122d80(c);
R_010a3b94:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x10a3bacu;
    f_80122d80(c);
R_010a3bac:
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
    c.lr = 0x10a3bccu;
    f_80121cf0(c);
R_010a3bcc:
    c.r[3] = 0x2u;
    goto L_010a3bd8;
L_010a3bd4:
    c.lr = 0x10a3bd8u;
    f_8011bd90(c);
L_010a3bd8:
R_010a3bd8:
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
    c.lr = 0x10a3c00u;
    f_801c83f8(c);
R_010a3c00:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mg503_010a3c10(wp::Cpu& c) {
    WP_ENTER(0x10a3c10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a3c2cu: goto R_010a3c2c;
        case 0x10a3db0u: goto R_010a3db0;
        case 0x10a3e04u: goto R_010a3e04;
        case 0x10a3e28u: goto R_010a3e28;
        case 0x10a3e34u: goto R_010a3e34;
        case 0x10a3e44u: goto R_010a3e44;
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
    c.lr = 0x10a3c2cu;
    f_801c83b0(c);
R_010a3c2c:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010a3c48;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010a3c5c;
    goto L_010a3e30;
L_010a3c48:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010a3e34;
L_010a3c5c:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mg503_bases[4] + 0x2af4u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mg503_bases[4] + 0x2af8u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mg503_bases[4] + 0x2af4u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mg503_bases[4] + 0x2af8u) & 0xFFFFu);
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
    c.lr = 0x10a3db0u;
    f_801225e0(c);
R_010a3db0:
    ea = c.r[26] + wp::sign_extend16((g_mg503_bases[4] + 0x2af8u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_010a3dc0;
    goto L_010a3dc4;
L_010a3dc0:
    c.f[2] = c.f[1];
L_010a3dc4:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010a3dd4;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_010a3ddc;
L_010a3dd4:
    c.r[3] = ((((g_mg503_bases[4] + 0x2af8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg503_bases[4] + 0x2af8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_010a3ddc:
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
    c.lr = 0x10a3e04u;
    f_8011e9e0(c);
R_010a3e04:
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
    c.lr = 0x10a3e28u;
    f_80121cf0(c);
R_010a3e28:
    c.r[3] = 0x2u;
    goto L_010a3e34;
L_010a3e30:
    c.lr = 0x10a3e34u;
    f_8011bec0(c);
L_010a3e34:
R_010a3e34:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10a3e44u;
    f_801c83fc(c);
R_010a3e44:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg503_010a3e60(wp::Cpu& c) {
    WP_ENTER(0x10a3e60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10a3e74u: goto R_010a3e74;
        case 0x10a3ea4u: goto R_010a3ea4;
        case 0x10a3fbcu: goto R_010a3fbc;
        case 0x10a4044u: goto R_010a4044;
        case 0x10a4050u: goto R_010a4050;
        case 0x10a405cu: goto R_010a405c;
        case 0x10a4174u: goto R_010a4174;
        case 0x10a42bcu: goto R_010a42bc;
        case 0x10a42d8u: goto R_010a42d8;
        case 0x10a42e0u: goto R_010a42e0;
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
    c.lr = 0x10a3e74u;
    f_801c83b4(c);
R_010a3e74:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mg503_bases[4] + 0x2ae8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg503_bases[4] + 0x2ae8u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010a3e9c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010a4054;
    goto L_010a42d8;
L_010a3e9c:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x10a3ea4u;
    f_80132a30(c);
R_010a3ea4:
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
    if (!wp::cr_get(c, 2)) goto L_010a3fbc;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x10a3fbcu;
    f_8014b090(c);
L_010a3fbc:
R_010a3fbc:
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
    c.lr = 0x10a4044u;
    f_8012be60(c);
R_010a4044:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a4050u;
    f_80132ab0(c);
R_010a4050:
    goto L_010a42d8;
L_010a4054:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x10a405cu;
    f_80132a30(c);
R_010a405c:
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
    if (!wp::cr_get(c, 2)) goto L_010a4174;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x10a4174u;
    f_8014b090(c);
L_010a4174:
R_010a4174:
    c.r[5] = ((((g_mg503_bases[6] + 0xb60u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[6] + 0xb60u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010a41e0;
    c.r[4] = ((((g_mg503_bases[6] + 0xb68u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0xb68u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mg503_bases[6] + 0xb68u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mg503_bases[6] + 0xb60u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_010a41e0:
    c.r[26] = ((((g_mg503_bases[6] + 0xb68u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg503_bases[6] + 0xb68u) & 0xFFFFu);
L_010a41ec:
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
    c.lr = 0x10a42bcu;
    f_8012be60(c);
R_010a42bc:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010a41ec;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10a42d8u;
    f_80132ab0(c);
L_010a42d8:
R_010a42d8:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x10a42e0u;
    f_801c8400(c);
R_010a42e0:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mg503_010a42f0(wp::Cpu& c) {
    WP_ENTER(0x10a42f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mg503_010a4300(wp::Cpu& c) {
    WP_ENTER(0x10a4300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

