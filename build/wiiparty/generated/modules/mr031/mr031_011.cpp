#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr031_bases[17];
void f_800043c4(wp::Cpu& c);
void f_80004714(wp::Cpu& c);
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
void f_8000ffd0(wp::Cpu& c);
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
void f_80034c10(wp::Cpu& c);
void f_80034df0(wp::Cpu& c);
void f_80034e10(wp::Cpu& c);
void f_80034f00(wp::Cpu& c);
void f_80034f20(wp::Cpu& c);
void f_8003b350(wp::Cpu& c);
void f_8003b480(wp::Cpu& c);
void f_8003cc90(wp::Cpu& c);
void f_8003cfb0(wp::Cpu& c);
void f_8003d2d0(wp::Cpu& c);
void f_8003d6b0(wp::Cpu& c);
void f_8003f640(wp::Cpu& c);
void f_8003f8f0(wp::Cpu& c);
void f_8003fb90(wp::Cpu& c);
void f_800402c0(wp::Cpu& c);
void f_800402f0(wp::Cpu& c);
void f_800403a0(wp::Cpu& c);
void f_800403b0(wp::Cpu& c);
void f_800403f0(wp::Cpu& c);
void f_80040980(wp::Cpu& c);
void f_80041c20(wp::Cpu& c);
void f_80041f70(wp::Cpu& c);
void f_80042130(wp::Cpu& c);
void f_80042650(wp::Cpu& c);
void f_80043060(wp::Cpu& c);
void f_80043110(wp::Cpu& c);
void f_80043120(wp::Cpu& c);
void f_80043130(wp::Cpu& c);
void f_80043140(wp::Cpu& c);
void f_80043180(wp::Cpu& c);
void f_800431a0(wp::Cpu& c);
void f_80043250(wp::Cpu& c);
void f_80043290(wp::Cpu& c);
void f_80043490(wp::Cpu& c);
void f_80048ec0(wp::Cpu& c);
void f_80048f30(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004a110(wp::Cpu& c);
void f_8004a120(wp::Cpu& c);
void f_8004aa80(wp::Cpu& c);
void f_8004abf0(wp::Cpu& c);
void f_80051600(wp::Cpu& c);
void f_80052170(wp::Cpu& c);
void f_80052190(wp::Cpu& c);
void f_80052250(wp::Cpu& c);
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
void f_800e9070(wp::Cpu& c);
void f_800e95b0(wp::Cpu& c);
void f_800e9850(wp::Cpu& c);
void f_800ee3c0(wp::Cpu& c);
void f_800f5a00(wp::Cpu& c);
void f_800f5a50(wp::Cpu& c);
void f_800f5a70(wp::Cpu& c);
void f_800f5aa0(wp::Cpu& c);
void f_800f5ae0(wp::Cpu& c);
void f_800f5b60(wp::Cpu& c);
void f_800f5be0(wp::Cpu& c);
void f_800f5c20(wp::Cpu& c);
void f_800f5c60(wp::Cpu& c);
void f_800f63a0(wp::Cpu& c);
void f_800f6400(wp::Cpu& c);
void f_800f6450(wp::Cpu& c);
void f_800f64c0(wp::Cpu& c);
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
void f_80126360(wp::Cpu& c);
void f_801263e0(wp::Cpu& c);
void f_80126450(wp::Cpu& c);
void f_80129080(wp::Cpu& c);
void f_801290d0(wp::Cpu& c);
void f_8012b8d0(wp::Cpu& c);
void f_8012bbc0(wp::Cpu& c);
void f_8012be00(wp::Cpu& c);
void f_8012be60(wp::Cpu& c);
void f_80132a30(wp::Cpu& c);
void f_80132ab0(wp::Cpu& c);
void f_80143290(wp::Cpu& c);
void f_8014b090(wp::Cpu& c);
void f_8014b100(wp::Cpu& c);
void f_8014b7e0(wp::Cpu& c);
void f_8014b820(wp::Cpu& c);
void f_8014b8a0(wp::Cpu& c);
void f_8014c050(wp::Cpu& c);
void f_8014c170(wp::Cpu& c);
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
void f_801c7860(wp::Cpu& c);
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c8244(wp::Cpu& c);
void f_801c8384(wp::Cpu& c);
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
void f_mr031_01000000(wp::Cpu& c);
void f_mr031_0102a2e0(wp::Cpu& c);
void f_mr031_0102a4a0(wp::Cpu& c);
void f_mr031_0109ad50(wp::Cpu& c);
void f_mr031_0109ae90(wp::Cpu& c);
void f_mr031_0109aeb0(wp::Cpu& c);
void f_mr031_0109aed0(wp::Cpu& c);
void f_mr031_0109b5f0(wp::Cpu& c);
void f_mr031_0109b6d0(wp::Cpu& c);
void f_mr031_0109df50(wp::Cpu& c);
void f_mr031_0109f480(wp::Cpu& c);
void f_mr031_0109f520(wp::Cpu& c);
void f_mr031_0109f5a0(wp::Cpu& c);
void f_mr031_0109f5b0(wp::Cpu& c);
void f_mr031_0109f5c0(wp::Cpu& c);
void f_mr031_0109f5d0(wp::Cpu& c);
void f_mr031_0109f5f0(wp::Cpu& c);
void f_mr031_010a3370(wp::Cpu& c);
void f_mr031_010a3540(wp::Cpu& c);
void f_mr031_010a35e0(wp::Cpu& c);
void f_mr031_010a38a0(wp::Cpu& c);
void f_mr031_010a3dd0(wp::Cpu& c);
void f_mr031_010aa610(wp::Cpu& c);
void f_mr031_010becc0(wp::Cpu& c);
void f_mr031_010bfd00(wp::Cpu& c);
void f_mr031_010c0900(wp::Cpu& c);
void f_mr031_010d7d80(wp::Cpu& c);
void f_mr031_010dc130(wp::Cpu& c);
void f_mr031_010e4790(wp::Cpu& c);
void f_mr031_010e4800(wp::Cpu& c);
void f_mr031_010e4c20(wp::Cpu& c);
void f_mr031_010e4dd0(wp::Cpu& c);
void f_mr031_010e5630(wp::Cpu& c);
void f_mr031_010e5990(wp::Cpu& c);
void f_mr031_010e5ef0(wp::Cpu& c);
void f_mr031_010e5f90(wp::Cpu& c);
void f_mr031_010e60c0(wp::Cpu& c);
void f_mr031_010e64a0(wp::Cpu& c);
void f_mr031_010e6e70(wp::Cpu& c);
void f_mr031_010e6ee0(wp::Cpu& c);
void f_mr031_010e6ef0(wp::Cpu& c);
void f_mr031_010e6f20(wp::Cpu& c);
void f_mr031_010e6f70(wp::Cpu& c);
void f_mr031_010e6ff0(wp::Cpu& c);
void f_mr031_010e7330(wp::Cpu& c);
void f_mr031_010e73d0(wp::Cpu& c);
void f_mr031_010e73f0(wp::Cpu& c);
void f_mr031_010e7400(wp::Cpu& c);
void f_mr031_010e7420(wp::Cpu& c);
void f_mr031_010e7430(wp::Cpu& c);
void f_mr031_010e7490(wp::Cpu& c);
void f_mr031_010e74e0(wp::Cpu& c);
void f_mr031_010e7510(wp::Cpu& c);
void f_mr031_010e7590(wp::Cpu& c);
void f_mr031_010e75a0(wp::Cpu& c);
void f_mr031_010e75b0(wp::Cpu& c);
void f_mr031_010e75c0(wp::Cpu& c);
void f_mr031_010e75d0(wp::Cpu& c);
void f_mr031_010e75e0(wp::Cpu& c);
void f_mr031_010e75f0(wp::Cpu& c);
void f_mr031_010e7600(wp::Cpu& c);
void f_mr031_010e7610(wp::Cpu& c);
void f_mr031_010e7620(wp::Cpu& c);
void f_mr031_010e7630(wp::Cpu& c);
void f_mr031_010e7640(wp::Cpu& c);
void f_mr031_010e7650(wp::Cpu& c);
void f_mr031_010e7660(wp::Cpu& c);
void f_mr031_010e7670(wp::Cpu& c);
void f_mr031_010e77b0(wp::Cpu& c);
void f_mr031_010e78d0(wp::Cpu& c);
void f_mr031_010e7a60(wp::Cpu& c);
void f_mr031_010e7ad0(wp::Cpu& c);
void f_mr031_010e7ae0(wp::Cpu& c);
void f_mr031_010e7b90(wp::Cpu& c);
void f_mr031_010e7c40(wp::Cpu& c);
void f_mr031_010e7cf0(wp::Cpu& c);
void f_mr031_010e7ec0(wp::Cpu& c);
void f_mr031_010e8050(wp::Cpu& c);
void f_mr031_010e81e0(wp::Cpu& c);
void f_mr031_010e8970(wp::Cpu& c);
void f_mr031_010e90c0(wp::Cpu& c);
void f_mr031_010e9970(wp::Cpu& c);
void f_mr031_010ea1e0(wp::Cpu& c);
void f_mr031_010ea1f0(wp::Cpu& c);
void f_mr031_010ea200(wp::Cpu& c);
void f_mr031_010ea210(wp::Cpu& c);
void f_mr031_010ea220(wp::Cpu& c);
void f_mr031_010ea310(wp::Cpu& c);
void f_mr031_010ea370(wp::Cpu& c);
void f_mr031_010ea450(wp::Cpu& c);
void f_mr031_010ea510(wp::Cpu& c);
void f_mr031_010ea5f0(wp::Cpu& c);
void f_mr031_010ea670(wp::Cpu& c);
void f_mr031_010ea9e0(wp::Cpu& c);
void f_mr031_010eab10(wp::Cpu& c);
void f_mr031_010eabc0(wp::Cpu& c);
void f_mr031_010eac60(wp::Cpu& c);
void f_mr031_010ead70(wp::Cpu& c);
void f_mr031_010eadc0(wp::Cpu& c);
void f_mr031_010eae10(wp::Cpu& c);
void f_mr031_010eae60(wp::Cpu& c);
void f_mr031_010eb150(wp::Cpu& c);
void f_mr031_010eb1e0(wp::Cpu& c);
void f_mr031_010eb230(wp::Cpu& c);
void f_mr031_010eb280(wp::Cpu& c);
void f_mr031_010eb350(wp::Cpu& c);
void f_mr031_010eb540(wp::Cpu& c);
void f_mr031_010eb580(wp::Cpu& c);
void f_mr031_010eb5e0(wp::Cpu& c);
void f_mr031_010eb650(wp::Cpu& c);
void f_mr031_010eb8c0(wp::Cpu& c);
void f_mr031_010eb920(wp::Cpu& c);
void f_mr031_010ebb30(wp::Cpu& c);
void f_mr031_010ebb40(wp::Cpu& c);
void f_mr031_010ebb70(wp::Cpu& c);
void f_mr031_010ebd40(wp::Cpu& c);
void f_mr031_010ebd60(wp::Cpu& c);
void f_mr031_010ebdd0(wp::Cpu& c);
void f_mr031_010ebe40(wp::Cpu& c);
void f_mr031_010ebeb0(wp::Cpu& c);
void f_mr031_010ebf30(wp::Cpu& c);
void f_mr031_010ebfa0(wp::Cpu& c);
void f_mr031_010ec220(wp::Cpu& c);
void f_mr031_010ec300(wp::Cpu& c);
void f_mr031_010ec400(wp::Cpu& c);
void f_mr031_010ec4e0(wp::Cpu& c);
void f_mr031_010ec5c0(wp::Cpu& c);
void f_mr031_010ec6a0(wp::Cpu& c);
void f_mr031_010ec780(wp::Cpu& c);
void f_mr031_010eceb0(wp::Cpu& c);
void f_mr031_010ecec0(wp::Cpu& c);
void f_mr031_010eced0(wp::Cpu& c);
void f_mr031_010ecff0(wp::Cpu& c);
void f_mr031_010ed030(wp::Cpu& c);
void f_mr031_010ed050(wp::Cpu& c);
void f_mr031_010ed0e0(wp::Cpu& c);
void f_mr031_010ed1d0(wp::Cpu& c);
void f_mr031_010ed2c0(wp::Cpu& c);
void f_mr031_010ed400(wp::Cpu& c);
void f_mr031_010ed540(wp::Cpu& c);
void f_mr031_010ed640(wp::Cpu& c);
void f_mr031_010ed680(wp::Cpu& c);
void f_mr031_010ed870(wp::Cpu& c);
void f_mr031_010ed8f0(wp::Cpu& c);
void f_mr031_010ed970(wp::Cpu& c);
void f_mr031_010ed9f0(wp::Cpu& c);
void f_mr031_010edce0(wp::Cpu& c);
void f_mr031_010ede80(wp::Cpu& c);
void f_mr031_010ee020(wp::Cpu& c);
void f_mr031_010ee130(wp::Cpu& c);
void f_mr031_010ee230(wp::Cpu& c);
void f_mr031_010ee360(wp::Cpu& c);
void f_mr031_010ee460(wp::Cpu& c);
void f_mr031_010ee470(wp::Cpu& c);
void f_mr031_010ee570(wp::Cpu& c);
void f_mr031_010ee580(wp::Cpu& c);
void f_mr031_010ee5d0(wp::Cpu& c);
void f_mr031_010ee770(wp::Cpu& c);
void f_mr031_010ee890(wp::Cpu& c);
void f_mr031_010ee920(wp::Cpu& c);
void f_mr031_010eea60(wp::Cpu& c);
void f_mr031_010eeb70(wp::Cpu& c);
void f_mr031_010eebd0(wp::Cpu& c);
void f_mr031_010eee20(wp::Cpu& c);
void f_mr031_010efad0(wp::Cpu& c);
void f_mr031_010efe60(wp::Cpu& c);
void f_mr031_010efe90(wp::Cpu& c);
void f_mr031_010eff60(wp::Cpu& c);
void f_mr031_010f01b0(wp::Cpu& c);
void f_mr031_010f05c0(wp::Cpu& c);
void f_mr031_010f0760(wp::Cpu& c);
void f_mr031_010f0770(wp::Cpu& c);
void f_mr031_010f0780(wp::Cpu& c);
void f_mr031_010f0810(wp::Cpu& c);
void f_mr031_010f08e0(wp::Cpu& c);
void f_mr031_010f0970(wp::Cpu& c);
void f_mr031_010f0980(wp::Cpu& c);
void f_mr031_010f09d0(wp::Cpu& c);
void f_mr031_010f0b90(wp::Cpu& c);
void f_mr031_010f0d50(wp::Cpu& c);
void f_mr031_010f0dd0(wp::Cpu& c);
void f_mr031_010f0e40(wp::Cpu& c);
void f_mr031_010f1200(wp::Cpu& c);
void f_mr031_010f12f0(wp::Cpu& c);
void f_mr031_010f13d0(wp::Cpu& c);
void f_mr031_010f14a0(wp::Cpu& c);
void f_mr031_010f1590(wp::Cpu& c);
void f_mr031_010f1670(wp::Cpu& c);
void f_mr031_010f1950(wp::Cpu& c);
void f_mr031_010f1a20(wp::Cpu& c);
void f_mr031_010f1cf0(wp::Cpu& c);
void f_mr031_010f1dd0(wp::Cpu& c);
void f_mr031_010f1df0(wp::Cpu& c);
void f_mr031_010f1f10(wp::Cpu& c);
void f_mr031_010f1fa0(wp::Cpu& c);
void f_mr031_010f2020(wp::Cpu& c);
void f_mr031_010f2140(wp::Cpu& c);
void f_mr031_010f2240(wp::Cpu& c);
void f_mr031_010f27c0(wp::Cpu& c);
void f_mr031_010f27d0(wp::Cpu& c);
void f_mr031_010f2800(wp::Cpu& c);
void f_mr031_010f29d0(wp::Cpu& c);
void f_mr031_010f2b10(wp::Cpu& c);
void f_mr031_010f2b20(wp::Cpu& c);
void f_mr031_010f2c70(wp::Cpu& c);
void f_mr031_010f2d30(wp::Cpu& c);
void f_mr031_010f2e00(wp::Cpu& c);
void f_mr031_010f3070(wp::Cpu& c);
void f_mr031_010f30e0(wp::Cpu& c);
void f_mr031_010f3150(wp::Cpu& c);
void f_mr031_010f3170(wp::Cpu& c);
void f_mr031_010f31e0(wp::Cpu& c);
void f_mr031_010f32a0(wp::Cpu& c);
void f_mr031_010f37e0(wp::Cpu& c);
void f_mr031_010f3b80(wp::Cpu& c);
void f_mr031_010f3ba0(wp::Cpu& c);
void f_mr031_010f3eb0(wp::Cpu& c);
void f_mr031_010f3ec0(wp::Cpu& c);
void f_mr031_010f3ed0(wp::Cpu& c);
void f_mr031_010f42d0(wp::Cpu& c);
void f_mr031_010f43a0(wp::Cpu& c);
void f_mr031_010f45b0(wp::Cpu& c);
void f_mr031_010f46c0(wp::Cpu& c);
void f_mr031_010f4740(wp::Cpu& c);
void f_mr031_010f47a0(wp::Cpu& c);
void f_mr031_010f48e0(wp::Cpu& c);
void f_mr031_010f48f0(wp::Cpu& c);
void f_mr031_010f4900(wp::Cpu& c);
void f_mr031_010f4910(wp::Cpu& c);
void f_mr031_010f49d0(wp::Cpu& c);
void f_mr031_010f4c50(wp::Cpu& c);
void f_mr031_010f4c80(wp::Cpu& c);
void f_mr031_010f4ca0(wp::Cpu& c);
void f_mr031_010f4d00(wp::Cpu& c);
void f_mr031_010f4f80(wp::Cpu& c);
void f_mr031_010f4fa0(wp::Cpu& c);
void f_mr031_010f4fc0(wp::Cpu& c);
void f_mr031_010f5030(wp::Cpu& c);
void f_mr031_010f50b0(wp::Cpu& c);
void f_mr031_010f50d0(wp::Cpu& c);
void f_mr031_010f50f0(wp::Cpu& c);
void f_mr031_010f5110(wp::Cpu& c);
void f_mr031_010f5150(wp::Cpu& c);
void f_mr031_010f5170(wp::Cpu& c);
void f_mr031_010f5190(wp::Cpu& c);
void f_mr031_010f51b0(wp::Cpu& c);
void f_mr031_010f51d0(wp::Cpu& c);
void f_mr031_010f51f0(wp::Cpu& c);
void f_mr031_010f5230(wp::Cpu& c);
void f_mr031_010f52a0(wp::Cpu& c);
void f_mr031_010f52b0(wp::Cpu& c);
void f_mr031_010f52c0(wp::Cpu& c);
void f_mr031_010f52d0(wp::Cpu& c);
void f_mr031_010f52e0(wp::Cpu& c);
void f_mr031_010f52f0(wp::Cpu& c);
void f_mr031_010f5300(wp::Cpu& c);
void f_mr031_010f5310(wp::Cpu& c);
void f_mr031_010f5320(wp::Cpu& c);
void f_mr031_010f5330(wp::Cpu& c);
void f_mr031_010f5340(wp::Cpu& c);
void f_mr031_010f5350(wp::Cpu& c);
void f_mr031_010f53b0(wp::Cpu& c);
void f_mr031_010f5410(wp::Cpu& c);
void f_mr031_010f57c0(wp::Cpu& c);
void f_mr031_010f5a10(wp::Cpu& c);
void f_mr031_010f5ea0(wp::Cpu& c);
void f_mr031_010f5eb0(wp::Cpu& c);
void f_mr031_010f5ec0(wp::Cpu& c);
void f_mr031_010f5fb0(wp::Cpu& c);
void f_mr031_010f6220(wp::Cpu& c);
void f_mr031_010f6440(wp::Cpu& c);
void f_mr031_010f6770(wp::Cpu& c);
void f_mr031_010f6910(wp::Cpu& c);
void f_mr031_010f69b0(wp::Cpu& c);
void f_mr031_010f6a60(wp::Cpu& c);
void f_mr031_010f6a70(wp::Cpu& c);
void f_mr031_010f6a80(wp::Cpu& c);
void f_mr031_010f6a90(wp::Cpu& c);
void f_mr031_010f6aa0(wp::Cpu& c);
void f_mr031_010f6c00(wp::Cpu& c);
void f_mr031_010f6db0(wp::Cpu& c);
void f_mr031_010f7040(wp::Cpu& c);
void f_mr031_010f7050(wp::Cpu& c);
void f_mr031_010f7060(wp::Cpu& c);
void f_mr031_010f7680(wp::Cpu& c);
void f_mr031_010f78c0(wp::Cpu& c);
void f_mr031_010f7b10(wp::Cpu& c);
void f_mr031_010f7e50(wp::Cpu& c);
void f_mr031_010f7ea0(wp::Cpu& c);
void f_mr031_010f7eb0(wp::Cpu& c);
void f_mr031_010f7f60(wp::Cpu& c);
void f_mr031_010f8000(wp::Cpu& c);
void f_mr031_010f8010(wp::Cpu& c);
void f_mr031_010f8020(wp::Cpu& c);
void f_mr031_010f8030(wp::Cpu& c);
void f_mr031_010f8040(wp::Cpu& c);
void f_mr031_010f80b0(wp::Cpu& c);
void f_mr031_010f8130(wp::Cpu& c);
void f_mr031_010f8140(wp::Cpu& c);
void f_mr031_010f81c0(wp::Cpu& c);
void f_mr031_010f81d0(wp::Cpu& c);
void f_mr031_010f81e0(wp::Cpu& c);
void f_mr031_010f81f0(wp::Cpu& c);
void f_mr031_010f8200(wp::Cpu& c);
void f_mr031_010f8210(wp::Cpu& c);
void f_mr031_010f8220(wp::Cpu& c);
void f_mr031_010f8230(wp::Cpu& c);
void f_mr031_010f82a0(wp::Cpu& c);
void f_mr031_010f83c0(wp::Cpu& c);
void f_mr031_010f8560(wp::Cpu& c);
void f_mr031_010f8610(wp::Cpu& c);
void f_mr031_010f86b0(wp::Cpu& c);

void f_mr031_010e6e70(wp::Cpu& c) {
    WP_ENTER(0x10e6e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e6ea0u: goto R_010e6ea0;
        case 0x10e6eacu: goto R_010e6eac;
        case 0x10e6ebcu: goto R_010e6ebc;
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
    if (wp::cr_get(c, 2)) goto L_010e6ebc;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x144u;
    c.lr = 0x10e6ea0u;
    f_80063bb0(c);
R_010e6ea0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10e6eacu;
    f_80051600(c);
R_010e6eac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010e6ebc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10e6ebcu;
    f_801c7a8c(c);
L_010e6ebc:
R_010e6ebc:
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

void f_mr031_010e6ee0(wp::Cpu& c) {
    WP_ENTER(0x10e6ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x15cu;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr031_010e6ef0(wp::Cpu& c) {
    WP_ENTER(0x10e6ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = ((((g_mr031_bases[6] + 0x5e14u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[6] + 0x5e14u) & 0xFFFFu);
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

void f_mr031_010e6f20(wp::Cpu& c) {
    WP_ENTER(0x10e6f20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e6f54u: goto R_010e6f54;
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
    c.lr = 0x10e6f54u;
    f_mr031_010dc130(c);
R_010e6f54:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010e6f70(wp::Cpu& c) {
    WP_ENTER(0x10e6f70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e6fb4u: goto R_010e6fb4;
        case 0x10e6fc8u: goto R_010e6fc8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[11] = c.r[7] | c.r[7];
    c.r[7] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[8] | c.r[8];
    c.r[8] = c.r[6] | c.r[6];
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[6] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = c.r[10] | c.r[10];
    c.r[10] = c.r[0] | c.r[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[9]);
    c.r[9] = c.r[11] | c.r[11];
    c.lr = 0x10e6fb4u;
    f_mr031_010dc130(c);
R_010e6fb4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010e6fc8;
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10e6fc8u;
    f_80043250(c);
L_010e6fc8:
R_010e6fc8:
    c.r[3] = c.r[31] | c.r[31];
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

void f_mr031_010e6ff0(wp::Cpu& c) {
    WP_ENTER(0x10e6ff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7008u: goto R_010e7008;
        case 0x10e7024u: goto R_010e7024;
        case 0x10e7048u: goto R_010e7048;
        case 0x10e70c0u: goto R_010e70c0;
        case 0x10e70c4u: goto R_010e70c4;
        case 0x10e7128u: goto R_010e7128;
        case 0x10e712cu: goto R_010e712c;
        case 0x10e71ecu: goto R_010e71ec;
        case 0x10e71f0u: goto R_010e71f0;
        case 0x10e71f8u: goto R_010e71f8;
        case 0x10e7220u: goto R_010e7220;
        case 0x10e7224u: goto R_010e7224;
        case 0x10e7298u: goto R_010e7298;
        case 0x10e72a8u: goto R_010e72a8;
        case 0x10e7304u: goto R_010e7304;
        case 0x10e7314u: goto R_010e7314;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x48u;
    ea = c.r[1] + 0x48u;
    wp::wrf64(ea, c.f[31]);
    c.lr = 0x10e7008u;
    f_801c83b8(c);
R_010e7008:
    c.f[31] = c.f[1];
    c.r[31] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[27] = c.r[6] | c.r[6];
    c.r[3] = 0x48u;
    c.lr = 0x10e7024u;
    f_801c79a4(c);
R_010e7024:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010e704c;
    c.f[1] = c.f[31];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[28] | c.r[28];
    c.r[7] = c.r[27] | c.r[27];
    c.lr = 0x10e7048u;
    f_mr031_010e60c0(c);
R_010e7048:
    c.r[30] = c.r[3] | c.r[3];
L_010e704c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[29] = c.r[30] | c.r[30];
    if (wp::cr_get(c, 2)) goto L_010e705c;
    c.r[29] = c.r[30] + 0x14u;
L_010e705c:
    c.r[3] = ((((g_mr031_bases[6] + 0x5e14u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[6] + 0x5e14u) & 0xFFFFu);
    c.r[28] = wp::rd32(ea);
    ea = c.r[28] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x1d0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010e7090;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x1ccu;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    goto L_010e7304;
L_010e7090:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010e70c4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x2c984u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x2c984u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e70c0u;
    f_801cee24(c);
R_010e70c0:
    c.lr = 0x10e70c4u;
    f_801d3940(c);
L_010e70c4:
R_010e70c4:
    c.r[5] = 0x0u;
    c.r[4] = c.r[28] + 0x1d0u;
    c.r[3] = 0x40000000u;
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
    ea = c.r[28] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x1d0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x1d0u;
    c.r[31] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e712c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x2c984u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x2c984u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e7128u;
    f_801cee24(c);
R_010e7128:
    c.lr = 0x10e712cu;
    f_801d3940(c);
L_010e712c:
R_010e712c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e717c;
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
    if (!wp::cr_get(c, 0)) goto L_010e7170;
    c.r[3] = c.r[1] + 0x10u;
L_010e7170:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010e71c0;
L_010e717c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e71b8;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010e71ac;
    c.r[3] = c.r[1] + 0x10u;
L_010e71ac:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010e71c0;
L_010e71b8:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010e71c0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e71f0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x2c984u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x2c984u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e71ecu;
    f_801cee24(c);
R_010e71ec:
    c.lr = 0x10e71f0u;
    f_801d3940(c);
L_010e71f0:
R_010e71f0:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x10e71f8u;
    f_801c79a4(c);
R_010e71f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010e7224;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0xb74u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0xb74u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e7220u;
    f_801cee24(c);
R_010e7220:
    c.lr = 0x10e7224u;
    f_801d3940(c);
L_010e7224:
R_010e7224:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[28] + 0x1ccu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[27] + c.r[0];
    ea = c.r[3] + c.r[0];
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
    ea = c.r[28] + 0x1ccu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[28] + 0x1c8u;
    c.r[29] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[29] + c.r[4];
    c.r[5] = c.r[5] - c.r[29];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[27] = wp::add_extended(c, c.r[5], 0);
    c.r[0] = c.r[0] - c.r[27];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[31] = wp::rotl(c.r[27], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x10e7298u;
    f_800043c4(c);
R_010e7298:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x10e72a8u;
    f_80004714(c);
R_010e72a8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[3] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[3]);
    c.r[0] = c.r[0] + c.r[27];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x1ccu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[28] + 0x1d0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x1d0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x1c8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x1ccu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010e7304;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e7304;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10e7304u;
    f_801c7a8c(c);
L_010e7304:
R_010e7304:
    ea = c.r[1] + 0x48u;
    c.f[31] = wp::rdf64(ea);
    c.r[11] = c.r[1] + 0x48u;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10e7314u;
    f_801c8404(c);
R_010e7314:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr031_010e7330(wp::Cpu& c) {
    WP_ENTER(0x10e7330u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e73a0u: goto R_010e73a0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[6] + 0x5cb4u) + 0x8000u) >> 16) << 16);
    c.r[7] = ((((g_mr031_bases[5] + 0x2f9a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[5] + wp::sign_extend16((g_mr031_bases[6] + 0x5cb4u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[7] + wp::sign_extend16((g_mr031_bases[5] + 0x2f9a8u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[7] = ea;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[7] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[6] + 0x5cb4u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[7] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[6]);
    c.r[31] = c.r[30] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    goto L_010e73a8;
L_010e7390:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10e73a0u;
    f_801c8244(c);
R_010e73a0:
    c.r[0] = c.r[0] | 0x0u;
    c.r[30] = c.r[30] + 0x4u;
L_010e73a8:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010e7390;
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

void f_mr031_010e73d0(wp::Cpu& c) {
    WP_ENTER(0x10e73d0u);
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

void f_mr031_010e73f0(wp::Cpu& c) {
    WP_ENTER(0x10e73f0u);
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

void f_mr031_010e7400(wp::Cpu& c) {
    WP_ENTER(0x10e7400u);
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

void f_mr031_010e7420(wp::Cpu& c) {
    WP_ENTER(0x10e7420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = wp::cntlzw(c.r[4]);
    c.r[0] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[3] + 0x2bu;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mr031_010e7430(wp::Cpu& c) {
    WP_ENTER(0x10e7430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e7444;
    c.r[3] = 0x0u;
    return;
L_010e7444:
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010e7460;
    c.r[3] = 0x0u;
    return;
L_010e7460:
    ea = c.r[3] + 0x162u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e7474;
    c.r[3] = 0x0u;
    return;
L_010e7474:
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

void f_mr031_010e7490(wp::Cpu& c) {
    WP_ENTER(0x10e7490u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e74a4;
    c.r[3] = 0x0u;
    return;
L_010e74a4:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e74c0;
    c.r[3] = 0x0u;
    return;
L_010e74c0:
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

void f_mr031_010e74e0(wp::Cpu& c) {
    WP_ENTER(0x10e74e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = ((((g_mr031_bases[6] + 0x5cb4u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[6] + wp::sign_extend16((g_mr031_bases[6] + 0x5cb4u) & 0xFFFFu);
    c.r[4] = ((((g_mr031_bases[1] + 0xe7510u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr031_bases[6] + 0x5ca8u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + wp::sign_extend16((g_mr031_bases[6] + 0x5cb4u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[1] + 0xe7510u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[6] + 0x5ca8u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    f_mr031_01000000(c);
    return;
}

void f_mr031_010e7510(wp::Cpu& c) {
    WP_ENTER(0x10e7510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7560u: goto R_010e7560;
        case 0x10e7570u: goto R_010e7570;
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
    if (wp::cr_get(c, 2)) goto L_010e7570;
    if (wp::cr_get(c, 2)) goto L_010e7560;
    if (wp::cr_get(c, 2)) goto L_010e7560;
    if (wp::cr_get(c, 2)) goto L_010e7560;
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e7560;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] | c.r[4];
    c.lr = 0x10e7560u;
    f_801c7a8c(c);
L_010e7560:
R_010e7560:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010e7570;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10e7570u;
    f_801c7a8c(c);
L_010e7570:
R_010e7570:
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

void f_mr031_010e7590(wp::Cpu& c) {
    WP_ENTER(0x10e7590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e4800(c);
    return;
}

void f_mr031_010e75a0(wp::Cpu& c) {
    WP_ENTER(0x10e75a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e4790(c);
    return;
}

void f_mr031_010e75b0(wp::Cpu& c) {
    WP_ENTER(0x10e75b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e4dd0(c);
    return;
}

void f_mr031_010e75c0(wp::Cpu& c) {
    WP_ENTER(0x10e75c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e4c20(c);
    return;
}

void f_mr031_010e75d0(wp::Cpu& c) {
    WP_ENTER(0x10e75d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e5990(c);
    return;
}

void f_mr031_010e75e0(wp::Cpu& c) {
    WP_ENTER(0x10e75e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e5630(c);
    return;
}

void f_mr031_010e75f0(wp::Cpu& c) {
    WP_ENTER(0x10e75f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e5f90(c);
    return;
}

void f_mr031_010e7600(wp::Cpu& c) {
    WP_ENTER(0x10e7600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e5ef0(c);
    return;
}

void f_mr031_010e7610(wp::Cpu& c) {
    WP_ENTER(0x10e7610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mr031_010e73f0(c);
    return;
}

void f_mr031_010e7620(wp::Cpu& c) {
    WP_ENTER(0x10e7620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mr031_010e64a0(c);
    return;
}

void f_mr031_010e7630(wp::Cpu& c) {
    WP_ENTER(0x10e7630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e6ee0(c);
    return;
}

void f_mr031_010e7640(wp::Cpu& c) {
    WP_ENTER(0x10e7640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr031_010e6e70(c);
    return;
}

void f_mr031_010e7650(wp::Cpu& c) {
    WP_ENTER(0x10e7650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mr031_010e73d0(c);
    return;
}

void f_mr031_010e7660(wp::Cpu& c) {
    WP_ENTER(0x10e7660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mr031_010e6e70(c);
    return;
}

void f_mr031_010e7670(wp::Cpu& c) {
    WP_ENTER(0x10e7670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e76b8u: goto R_010e76b8;
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
    if (wp::cr_get(c, 1)) goto L_010e76ac;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_010e778c;
L_010e76ac:
    c.r[3] = ((((g_mr031_bases[4] + 0x41a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41a8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10e76b8u;
    f_80071fe0(c);
R_010e76b8:
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
    if (wp::cr_get(c, 1)) goto L_010e7774;
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
    goto L_010e778c;
L_010e7774:
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
L_010e778c:
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

void f_mr031_010e77b0(wp::Cpu& c) {
    WP_ENTER(0x10e77b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e77f8u: goto R_010e77f8;
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
    if (wp::cr_get(c, 1)) goto L_010e77ec;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_010e78ac;
L_010e77ec:
    c.r[3] = ((((g_mr031_bases[4] + 0x41a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41a8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10e77f8u;
    f_80071fe0(c);
R_010e77f8:
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
    if (wp::cr_get(c, 1)) goto L_010e7898;
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
    goto L_010e78ac;
L_010e7898:
    c.r[0] = 0x9u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_010e78ac:
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

void f_mr031_010e78d0(wp::Cpu& c) {
    WP_ENTER(0x10e78d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7920u: goto R_010e7920;
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
    if (wp::cr_get(c, 1)) goto L_010e7914;
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
    goto L_010e7a3c;
L_010e7914:
    c.r[3] = ((((g_mr031_bases[4] + 0x41a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41a8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10e7920u;
    f_80071fe0(c);
R_010e7920:
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
    if (wp::cr_get(c, 1)) goto L_010e7a1c;
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
    goto L_010e7a3c;
L_010e7a1c:
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
L_010e7a3c:
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

void f_mr031_010e7a60(wp::Cpu& c) {
    WP_ENTER(0x10e7a60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7aa8u: goto R_010e7aa8;
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
    if (wp::cr_get(c, 1)) goto L_010e7ab0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010e7ab0;
    c.r[5] = ((((g_mr031_bases[4] + 0x41a8u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x41a8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10e7aa8u;
    f_80018e30(c);
R_010e7aa8:
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010e7ab0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010e7ad0(wp::Cpu& c) {
    WP_ENTER(0x10e7ad0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[4]);
    f_800402c0(c);
    return;
}

void f_mr031_010e7ae0(wp::Cpu& c) {
    WP_ENTER(0x10e7ae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7afcu: goto R_010e7afc;
        case 0x10e7b10u: goto R_010e7b10;
        case 0x10e7b50u: goto R_010e7b50;
        case 0x10e7b74u: goto R_010e7b74;
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
    c.lr = 0x10e7afcu;
    f_801c83b4(c);
R_010e7afc:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10e7b10u;
    f_mr031_010e7670(c);
R_010e7b10:
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_010e7b28:
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
    ea = c.r[30] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e7b50u;
    f_80040980(c);
R_010e7b50:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e7b28;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e7b74u;
    f_801c8400(c);
R_010e7b74:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr031_010e7b90(wp::Cpu& c) {
    WP_ENTER(0x10e7b90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7bacu: goto R_010e7bac;
        case 0x10e7bc0u: goto R_010e7bc0;
        case 0x10e7c00u: goto R_010e7c00;
        case 0x10e7c24u: goto R_010e7c24;
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
    c.lr = 0x10e7bacu;
    f_801c83b4(c);
R_010e7bac:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10e7bc0u;
    f_mr031_010e77b0(c);
R_010e7bc0:
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_010e7bd8:
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
    ea = c.r[30] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e7c00u;
    f_80040980(c);
R_010e7c00:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e7bd8;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e7c24u;
    f_801c8400(c);
R_010e7c24:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr031_010e7c40(wp::Cpu& c) {
    WP_ENTER(0x10e7c40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7c5cu: goto R_010e7c5c;
        case 0x10e7c70u: goto R_010e7c70;
        case 0x10e7cb0u: goto R_010e7cb0;
        case 0x10e7cd4u: goto R_010e7cd4;
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
    c.lr = 0x10e7c5cu;
    f_801c83b4(c);
R_010e7c5c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10e7c70u;
    f_mr031_010e78d0(c);
R_010e7c70:
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_010e7c88:
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
    ea = c.r[30] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e7cb0u;
    f_80040980(c);
R_010e7cb0:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e7c88;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e7cd4u;
    f_801c8400(c);
R_010e7cd4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr031_010e7cf0(wp::Cpu& c) {
    WP_ENTER(0x10e7cf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7d0cu: goto R_010e7d0c;
        case 0x10e7d78u: goto R_010e7d78;
        case 0x10e7dd0u: goto R_010e7dd0;
        case 0x10e7df0u: goto R_010e7df0;
        case 0x10e7e1cu: goto R_010e7e1c;
        case 0x10e7e3cu: goto R_010e7e3c;
        case 0x10e7e78u: goto R_010e7e78;
        case 0x10e7ea0u: goto R_010e7ea0;
        case 0x10e7eb0u: goto R_010e7eb0;
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
    c.lr = 0x10e7d0cu;
    f_801c839c(c);
R_010e7d0c:
    c.r[22] = ((((g_mr031_bases[4] + 0x41b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mr031_bases[4] + 0x41b8u) & 0xFFFFu);
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
    c.lr = 0x10e7d78u;
    f_mr031_010e7670(c);
R_010e7d78:
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    c.r[30] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    c.r[30] = c.r[30] + c.r[0];
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_010e7da8:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e7dc0;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_010e7dc4;
L_010e7dc0:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_010e7dc4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10e7dd0u;
    f_801c7860(c);
R_010e7dd0:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x10e7df0u;
    f_mr031_0102a4a0(c);
R_010e7df0:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e7e0c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_010e7e10;
L_010e7e0c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_010e7e10:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x10e7e1cu;
    f_801c7860(c);
R_010e7e1c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10e7e3cu;
    f_mr031_0102a4a0(c);
R_010e7e3c:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e7e54;
    c.r[4] = c.r[28] | c.r[28];
    goto L_010e7e58;
L_010e7e54:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_010e7e58:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e7e78u;
    f_80040980(c);
R_010e7e78:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e7da8;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010e7ea0;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10e7ea0u;
    f_801c7a8c(c);
L_010e7ea0:
R_010e7ea0:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e7eb0u;
    f_801c83e8(c);
R_010e7eb0:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010e7ec0(wp::Cpu& c) {
    WP_ENTER(0x10e7ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e7edcu: goto R_010e7edc;
        case 0x10e7f04u: goto R_010e7f04;
        case 0x10e7f60u: goto R_010e7f60;
        case 0x10e7f80u: goto R_010e7f80;
        case 0x10e7facu: goto R_010e7fac;
        case 0x10e7fccu: goto R_010e7fcc;
        case 0x10e8008u: goto R_010e8008;
        case 0x10e8030u: goto R_010e8030;
        case 0x10e8040u: goto R_010e8040;
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
    c.lr = 0x10e7edcu;
    f_801c839c(c);
R_010e7edc:
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
    c.lr = 0x10e7f04u;
    f_mr031_010e7670(c);
R_010e7f04:
    c.r[4] = ((((g_mr031_bases[5] + 0x30298u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30298u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_010e7f38:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e7f50;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_010e7f54;
L_010e7f50:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_010e7f54:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10e7f60u;
    f_801c7860(c);
R_010e7f60:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x10e7f80u;
    f_mr031_0102a4a0(c);
R_010e7f80:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e7f9c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_010e7fa0;
L_010e7f9c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_010e7fa0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x10e7facu;
    f_801c7860(c);
R_010e7fac:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10e7fccu;
    f_mr031_0102a4a0(c);
R_010e7fcc:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e7fe4;
    c.r[4] = c.r[28] | c.r[28];
    goto L_010e7fe8;
L_010e7fe4:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_010e7fe8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e8008u;
    f_80040980(c);
R_010e8008:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e7f38;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010e8030;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10e8030u;
    f_801c7a8c(c);
L_010e8030:
R_010e8030:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e8040u;
    f_801c83e8(c);
R_010e8040:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr031_010e8050(wp::Cpu& c) {
    WP_ENTER(0x10e8050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e806cu: goto R_010e806c;
        case 0x10e8094u: goto R_010e8094;
        case 0x10e80f0u: goto R_010e80f0;
        case 0x10e8110u: goto R_010e8110;
        case 0x10e813cu: goto R_010e813c;
        case 0x10e815cu: goto R_010e815c;
        case 0x10e8198u: goto R_010e8198;
        case 0x10e81c0u: goto R_010e81c0;
        case 0x10e81d0u: goto R_010e81d0;
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
    c.lr = 0x10e806cu;
    f_801c839c(c);
R_010e806c:
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
    c.lr = 0x10e8094u;
    f_mr031_010e78d0(c);
R_010e8094:
    c.r[0] = c.r[20] * 0x18u;
    c.r[4] = ((((g_mr031_bases[5] + 0x302b8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x302b8u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x28u;
    c.r[28] = c.r[1] + 0x19u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_010e80c8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e80e0;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_010e80e4;
L_010e80e0:
    ea = c.r[1] + 0x1cu;
    c.r[21] = wp::rd32(ea);
L_010e80e4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10e80f0u;
    f_801c7860(c);
R_010e80f0:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x10e8110u;
    f_mr031_0102a4a0(c);
R_010e8110:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e812c;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_010e8130;
L_010e812c:
    ea = c.r[1] + 0x1cu;
    c.r[20] = wp::rd32(ea);
L_010e8130:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x10e813cu;
    f_801c7860(c);
R_010e813c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10e815cu;
    f_mr031_0102a4a0(c);
R_010e815c:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e8174;
    c.r[4] = c.r[28] | c.r[28];
    goto L_010e8178;
L_010e8174:
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
L_010e8178:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e8198u;
    f_80040980(c);
R_010e8198:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e80c8;
    }
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010e81c0;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10e81c0u;
    f_801c7a8c(c);
L_010e81c0:
R_010e81c0:
    c.r[11] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e81d0u;
    f_801c83e8(c);
R_010e81d0:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr031_010e81e0(wp::Cpu& c) {
    WP_ENTER(0x10e81e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e81fcu: goto R_010e81fc;
        case 0x10e82b0u: goto R_010e82b0;
        case 0x10e82b4u: goto R_010e82b4;
        case 0x10e82f4u: goto R_010e82f4;
        case 0x10e8364u: goto R_010e8364;
        case 0x10e8368u: goto R_010e8368;
        case 0x10e8428u: goto R_010e8428;
        case 0x10e842cu: goto R_010e842c;
        case 0x10e8434u: goto R_010e8434;
        case 0x10e845cu: goto R_010e845c;
        case 0x10e8460u: goto R_010e8460;
        case 0x10e8490u: goto R_010e8490;
        case 0x10e84e0u: goto R_010e84e0;
        case 0x10e84f0u: goto R_010e84f0;
        case 0x10e853cu: goto R_010e853c;
        case 0x10e88b8u: goto R_010e88b8;
        case 0x10e88f4u: goto R_010e88f4;
        case 0x10e8904u: goto R_010e8904;
        case 0x10e8944u: goto R_010e8944;
        case 0x10e8954u: goto R_010e8954;
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
    c.lr = 0x10e81fcu;
    f_801c83a0(c);
R_010e81fc:
    c.r[9] = ((((g_mr031_bases[4] + 0x4158u) + 0x8000u) >> 16) << 16);
    c.r[10] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[10]);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr031_bases[4] + 0x4158u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_010e823c;
    c.r[6] = c.r[0] | c.r[0];
L_010e823c:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[29] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_010e8540;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[30] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[30], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010e8270;
    c.r[0] = c.r[6] - c.r[30];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e82dc;
L_010e8270:
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
    if (!wp::cr_get(c, 1)) goto L_010e82b4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e82b0u;
    f_801cee24(c);
R_010e82b0:
    c.lr = 0x10e82b4u;
    f_801d3940(c);
L_010e82b4:
R_010e82b4:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e82c8;
    goto L_010e8304;
L_010e82c8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e8304;
    goto L_010e8304;
L_010e82dc:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x10e82f4u;
    f_80004714(c);
R_010e82f4:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_010e8550;
L_010e8304:
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
    if (!wp::cr_get(c, 1)) goto L_010e8368;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e8364u;
    f_801cee24(c);
R_010e8364:
    c.lr = 0x10e8368u;
    f_801d3940(c);
L_010e8368:
R_010e8368:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e83b8;
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
    if (!wp::cr_get(c, 0)) goto L_010e83ac;
    c.r[3] = c.r[1] + 0x8u;
L_010e83ac:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010e83fc;
L_010e83b8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e83f4;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010e83e8;
    c.r[3] = c.r[1] + 0x8u;
L_010e83e8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010e83fc;
L_010e83f4:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010e83fc:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e842c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e8428u;
    f_801cee24(c);
R_010e8428:
    c.lr = 0x10e842cu;
    f_801d3940(c);
L_010e842c:
R_010e842c:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x10e8434u;
    f_801c79a4(c);
R_010e8434:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010e8460;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0xb74u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0xb74u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e845cu;
    f_801cee24(c);
R_010e845c:
    c.lr = 0x10e8460u;
    f_801d3940(c);
L_010e8460:
R_010e8460:
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
    c.lr = 0x10e8490u;
    f_80004714(c);
R_010e8490:
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
    c.lr = 0x10e84e0u;
    f_800043c4(c);
R_010e84e0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[23] | c.r[23];
    c.r[4] = 0x0u;
    c.lr = 0x10e84f0u;
    f_80004714(c);
R_010e84f0:
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
    if (wp::cr_get(c, 2)) goto L_010e8550;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8550;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10e853cu;
    f_801c7a8c(c);
R_010e853c:
    goto L_010e8550;
L_010e8540:
    if (!wp::cr_get(c, 0)) goto L_010e8550;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_010e8550:
    wp::compare_unsigned(c, 1, c.r[26], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_010e87f4;
    wp::compare_unsigned(c, 0, c.r[26], 0x8u);
    c.r[6] = c.r[26] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010e879c;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010e8588;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e8588;
    c.r[7] = 0x1u;
L_010e8588:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e859c;
    wp::compare_unsigned(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e859c;
    c.r[5] = 0x1u;
L_010e859c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e85b4;
    c.r[0] = c.r[26] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010e85b4;
    c.r[4] = 0x1u;
L_010e85b4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e879c;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e879c;
L_010e85d8:
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
    goto L_010e85d8;
    }
L_010e879c:
    c.r[0] = c.r[26] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[26]);
    if (wp::cr_get(c, 1)) goto L_010e87f4;
L_010e87b8:
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
    goto L_010e87b8;
    }
L_010e87f4:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010e8800;
    c.r[27] = c.r[28] | c.r[28];
L_010e8800:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8848;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010e8838;
L_010e8820:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010e8838;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010e8820;
    }
L_010e8838:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_010e884c;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_010e884c;
L_010e8848:
    c.r[23] = 0x0u;
L_010e884c:
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = 0x0u;
    c.r[29] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    goto L_010e8910;
L_010e8868:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    ea = c.r[25] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010e88bc;
    c.r[0] = c.r[31] + c.r[23];
    wp::compare_unsigned(c, 0, c.r[0], c.r[26]);
    if (!wp::cr_get(c, 0)) goto L_010e88f4;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[4] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[29] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
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
    c.lr = 0x10e88b8u;
    f_80040980(c);
R_010e88b8:
    goto L_010e88f4;
L_010e88bc:
    wp::compare_unsigned(c, 0, c.r[23], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_010e88f4;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[5] + c.r[30];
    c.r[0] = wp::rd32(ea);
    c.r[21] = 0x1u;
    ea = c.r[29] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e88f4u;
    f_80040980(c);
L_010e88f4:
R_010e88f4:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[22] | c.r[22];
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x10e8904u;
    f_800403f0(c);
R_010e8904:
    c.r[25] = c.r[25] + 0x4u;
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_010e8910:
    wp::compare_unsigned(c, 0, c.r[31], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e8868;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010e8944;
    if (wp::cr_get(c, 2)) goto L_010e8944;
    if (wp::cr_get(c, 2)) goto L_010e8944;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8944;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e8944u;
    f_801c7a8c(c);
L_010e8944:
R_010e8944:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e8954u;
    f_801c83ec(c);
R_010e8954:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr031_010e8970(wp::Cpu& c) {
    WP_ENTER(0x10e8970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e898cu: goto R_010e898c;
        case 0x10e8a60u: goto R_010e8a60;
        case 0x10e8a64u: goto R_010e8a64;
        case 0x10e8aa4u: goto R_010e8aa4;
        case 0x10e8b14u: goto R_010e8b14;
        case 0x10e8b18u: goto R_010e8b18;
        case 0x10e8bd8u: goto R_010e8bd8;
        case 0x10e8bdcu: goto R_010e8bdc;
        case 0x10e8be4u: goto R_010e8be4;
        case 0x10e8c0cu: goto R_010e8c0c;
        case 0x10e8c10u: goto R_010e8c10;
        case 0x10e8c40u: goto R_010e8c40;
        case 0x10e8c90u: goto R_010e8c90;
        case 0x10e8ca0u: goto R_010e8ca0;
        case 0x10e8cecu: goto R_010e8cec;
        case 0x10e9050u: goto R_010e9050;
        case 0x10e9060u: goto R_010e9060;
        case 0x10e90a0u: goto R_010e90a0;
        case 0x10e90b0u: goto R_010e90b0;
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
    c.lr = 0x10e898cu;
    f_801c83a4(c);
R_010e898c:
    c.r[8] = ((((g_mr031_bases[4] + 0x4180u) + 0x8000u) >> 16) << 16);
    c.r[9] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[28] = c.r[5] + c.r[6];
    c.r[8] = c.r[8] + wp::sign_extend16((g_mr031_bases[4] + 0x4180u) & 0xFFFFu);
    c.r[6] = ((((g_mr031_bases[4] + 0x4158u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[28], 2) & 0xfffffffcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr031_bases[4] + 0x4158u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_010e89ec;
    c.r[4] = c.r[0] | c.r[0];
L_010e89ec:
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[5]);
    c.r[30] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_010e8cf0;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[28] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[29], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010e8a20;
    c.r[0] = c.r[6] - c.r[29];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e8a8c;
L_010e8a20:
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
    if (!wp::cr_get(c, 1)) goto L_010e8a64;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e8a60u;
    f_801cee24(c);
R_010e8a60:
    c.lr = 0x10e8a64u;
    f_801d3940(c);
L_010e8a64:
R_010e8a64:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e8a78;
    goto L_010e8ab4;
L_010e8a78:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e8ab4;
    goto L_010e8ab4;
L_010e8a8c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[29], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x10e8aa4u;
    f_80004714(c);
R_010e8aa4:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[29];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_010e8d00;
L_010e8ab4:
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
    if (!wp::cr_get(c, 1)) goto L_010e8b18;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e8b14u;
    f_801cee24(c);
R_010e8b14:
    c.lr = 0x10e8b18u;
    f_801d3940(c);
L_010e8b18:
R_010e8b18:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e8b68;
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
    if (!wp::cr_get(c, 0)) goto L_010e8b5c;
    c.r[3] = c.r[1] + 0x10u;
L_010e8b5c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010e8bac;
L_010e8b68:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e8ba4;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010e8b98;
    c.r[3] = c.r[1] + 0x10u;
L_010e8b98:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010e8bac;
L_010e8ba4:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010e8bac:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e8bdc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e8bd8u;
    f_801cee24(c);
R_010e8bd8:
    c.lr = 0x10e8bdcu;
    f_801d3940(c);
L_010e8bdc:
R_010e8bdc:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x10e8be4u;
    f_801c79a4(c);
R_010e8be4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010e8c10;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0xb74u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0xb74u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e8c0cu;
    f_801cee24(c);
R_010e8c0c:
    c.lr = 0x10e8c10u;
    f_801d3940(c);
L_010e8c10:
R_010e8c10:
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
    c.lr = 0x10e8c40u;
    f_80004714(c);
R_010e8c40:
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
    c.lr = 0x10e8c90u;
    f_800043c4(c);
R_010e8c90:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10e8ca0u;
    f_80004714(c);
R_010e8ca0:
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
    if (wp::cr_get(c, 2)) goto L_010e8d00;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8d00;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10e8cecu;
    f_801c7a8c(c);
R_010e8cec:
    goto L_010e8d00;
L_010e8cf0:
    if (!wp::cr_get(c, 0)) goto L_010e8d00;
    c.r[0] = c.r[5] - c.r[28];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_010e8d00:
    wp::compare_unsigned(c, 1, c.r[28], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_010e8fa4;
    wp::compare_unsigned(c, 0, c.r[28], 0x8u);
    c.r[6] = c.r[28] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010e8f4c;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010e8d38;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e8d38;
    c.r[7] = 0x1u;
L_010e8d38:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8d4c;
    wp::compare_unsigned(c, 0, c.r[28], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e8d4c;
    c.r[5] = 0x1u;
L_010e8d4c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8d64;
    c.r[0] = c.r[28] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010e8d64;
    c.r[4] = 0x1u;
L_010e8d64:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8f4c;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e8f4c;
L_010e8d88:
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
    goto L_010e8d88;
    }
L_010e8f4c:
    c.r[0] = c.r[28] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[28]);
    if (wp::cr_get(c, 1)) goto L_010e8fa4;
L_010e8f68:
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
    goto L_010e8f68;
    }
L_010e8fa4:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e8ff0;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010e8fe0;
    c.r[0] = c.r[0] | 0x0u;
L_010e8fc8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010e8fe0;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010e8fc8;
    }
L_010e8fe0:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_010e8ff4;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_010e8ff4;
L_010e8ff0:
    c.r[23] = 0x0u;
L_010e8ff4:
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = 0x0u;
    c.r[27] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x43300000u;
    goto L_010e906c;
L_010e9010:
    wp::compare_unsigned(c, 0, c.r[23], c.r[30]);
    ea = c.r[25] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_010e9050;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[26]);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[5] + c.r[29];
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x1u;
    ea = c.r[27] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e9050u;
    f_80040980(c);
L_010e9050:
R_010e9050:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x10e9060u;
    f_800403f0(c);
R_010e9060:
    c.r[25] = c.r[25] + 0x4u;
    c.r[29] = c.r[29] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_010e906c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e9010;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010e90a0;
    if (wp::cr_get(c, 2)) goto L_010e90a0;
    if (wp::cr_get(c, 2)) goto L_010e90a0;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e90a0;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e90a0u;
    f_801c7a8c(c);
L_010e90a0:
R_010e90a0:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e90b0u;
    f_801c83f0(c);
R_010e90b0:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr031_010e90c0(wp::Cpu& c) {
    WP_ENTER(0x10e90c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e90dcu: goto R_010e90dc;
        case 0x10e9194u: goto R_010e9194;
        case 0x10e9198u: goto R_010e9198;
        case 0x10e91d8u: goto R_010e91d8;
        case 0x10e9248u: goto R_010e9248;
        case 0x10e924cu: goto R_010e924c;
        case 0x10e930cu: goto R_010e930c;
        case 0x10e9310u: goto R_010e9310;
        case 0x10e9318u: goto R_010e9318;
        case 0x10e9340u: goto R_010e9340;
        case 0x10e9344u: goto R_010e9344;
        case 0x10e9374u: goto R_010e9374;
        case 0x10e93c4u: goto R_010e93c4;
        case 0x10e93d4u: goto R_010e93d4;
        case 0x10e9420u: goto R_010e9420;
        case 0x10e97a4u: goto R_010e97a4;
        case 0x10e97b4u: goto R_010e97b4;
        case 0x10e97d4u: goto R_010e97d4;
        case 0x10e9800u: goto R_010e9800;
        case 0x10e9820u: goto R_010e9820;
        case 0x10e9880u: goto R_010e9880;
        case 0x10e98d0u: goto R_010e98d0;
        case 0x10e98f4u: goto R_010e98f4;
        case 0x10e9908u: goto R_010e9908;
        case 0x10e9948u: goto R_010e9948;
        case 0x10e9958u: goto R_010e9958;
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
    c.lr = 0x10e90dcu;
    f_801c838c(c);
R_010e90dc:
    c.r[10] = ((((g_mr031_bases[4] + 0x4158u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[11]);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mr031_bases[4] + 0x4158u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_010e9120;
    c.r[6] = c.r[0] | c.r[0];
L_010e9120:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[25] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_010e9424;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[24] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[24], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010e9154;
    c.r[0] = c.r[6] - c.r[24];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e91c0;
L_010e9154:
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
    if (!wp::cr_get(c, 1)) goto L_010e9198;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e9194u;
    f_801cee24(c);
R_010e9194:
    c.lr = 0x10e9198u;
    f_801d3940(c);
L_010e9198:
R_010e9198:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e91ac;
    goto L_010e91e8;
L_010e91ac:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e91e8;
    goto L_010e91e8;
L_010e91c0:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x10e91d8u;
    f_80004714(c);
R_010e91d8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[24];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_010e9434;
L_010e91e8:
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
    if (!wp::cr_get(c, 1)) goto L_010e924c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e9248u;
    f_801cee24(c);
R_010e9248:
    c.lr = 0x10e924cu;
    f_801d3940(c);
L_010e924c:
R_010e924c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e929c;
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
    if (!wp::cr_get(c, 0)) goto L_010e9290;
    c.r[3] = c.r[1] + 0x18u;
L_010e9290:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_010e92e0;
L_010e929c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e92d8;
    c.r[3] = c.r[23] + 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_010e92cc;
    c.r[3] = c.r[1] + 0x18u;
L_010e92cc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_010e92e0;
L_010e92d8:
    c.r[3] = 0x40000000u;
    c.r[23] = c.r[3] + 0xffffffffu;
L_010e92e0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e9310;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e930cu;
    f_801cee24(c);
R_010e930c:
    c.lr = 0x10e9310u;
    f_801d3940(c);
L_010e9310:
R_010e9310:
    c.r[3] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.lr = 0x10e9318u;
    f_801c79a4(c);
R_010e9318:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010e9344;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0xb74u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0xb74u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e9340u;
    f_801cee24(c);
R_010e9340:
    c.lr = 0x10e9344u;
    f_801d3940(c);
L_010e9344:
R_010e9344:
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
    c.lr = 0x10e9374u;
    f_80004714(c);
R_010e9374:
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
    c.lr = 0x10e93c4u;
    f_800043c4(c);
R_010e93c4:
    c.r[3] = c.r[18] | c.r[18];
    c.r[5] = c.r[16] | c.r[16];
    c.r[4] = 0x0u;
    c.lr = 0x10e93d4u;
    f_80004714(c);
R_010e93d4:
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
    if (wp::cr_get(c, 2)) goto L_010e9434;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9434;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10e9420u;
    f_801c7a8c(c);
R_010e9420:
    goto L_010e9434;
L_010e9424:
    if (!wp::cr_get(c, 0)) goto L_010e9434;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_010e9434:
    wp::compare_unsigned(c, 1, c.r[30], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_010e96d8;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010e9680;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010e946c;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e946c;
    c.r[7] = 0x1u;
L_010e946c:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9480;
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e9480;
    c.r[5] = 0x1u;
L_010e9480:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9498;
    c.r[0] = c.r[30] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010e9498;
    c.r[4] = 0x1u;
L_010e9498:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9680;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e9680;
L_010e94bc:
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
    goto L_010e94bc;
    }
L_010e9680:
    c.r[0] = c.r[30] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (wp::cr_get(c, 1)) goto L_010e96d8;
L_010e969c:
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
    goto L_010e969c;
    }
L_010e96d8:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010e96e4;
    c.r[17] = c.r[31] | c.r[31];
L_010e96e4:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9730;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010e9720;
    c.r[0] = c.r[0] | 0x0u;
L_010e9708:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010e9720;
    c.r[22] = c.r[22] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010e9708;
    }
L_010e9720:
    wp::compare_unsigned(c, 0, c.r[22], c.r[30]);
    if (wp::cr_get(c, 0)) goto L_010e9734;
    c.r[22] = c.r[30] + 0xffffffffu;
    goto L_010e9734;
L_010e9730:
    c.r[22] = 0x0u;
L_010e9734:
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010e9744;
    c.r[4] = wp::sub_carry(c, c.r[30], 0x8u);
L_010e9744:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[17] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010e991c;
    c.r[5] = ((((g_mr031_bases[5] + 0x30240u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[19], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30240u) & 0xFFFFu);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0x14u;
    c.r[24] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[25] = wp::rd8(ea);
    c.r[20] = c.r[4] + c.r[0];
    c.r[18] = c.r[1] + 0x25u;
    c.r[19] = 0x0u;
    c.r[26] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    c.r[23] = 0x0u;
    goto L_010e9914;
L_010e9790:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[23]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[23]);
    c.lr = 0x10e97a4u;
    f_801c7860(c);
R_010e97a4:
    c.r[21] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[21] | c.r[21];
    c.lr = 0x10e97b4u;
    f_mr031_0102a2e0(c);
R_010e97b4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[24]);
    c.r[6] = c.r[29] | c.r[29];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[29] + c.r[21];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10e97d4u;
    f_mr031_0102a4a0(c);
R_010e97d4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[20] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e97f0;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[16] = c.r[0] & 0x7fu;
    goto L_010e97f4;
L_010e97f0:
    ea = c.r[1] + 0x28u;
    c.r[16] = wp::rd32(ea);
L_010e97f4:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[25]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x10e9800u;
    f_801c7860(c);
R_010e9800:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[16] | c.r[16];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10e9820u;
    f_mr031_0102a4a0(c);
R_010e9820:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010e9884;
    c.r[4] = c.r[17] + c.r[22];
    wp::compare_unsigned(c, 0, c.r[4], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010e98d0;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[21] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_010e985c;
    c.r[4] = c.r[18] | c.r[18];
    goto L_010e9860;
L_010e985c:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_010e9860:
    ea = c.r[6] + c.r[5];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e9880u;
    f_80040980(c);
R_010e9880:
    goto L_010e98d0;
L_010e9884:
    wp::compare_unsigned(c, 0, c.r[22], c.r[17]);
    if (wp::cr_get(c, 1)) goto L_010e98d0;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[21] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e98ac;
    c.r[4] = c.r[18] | c.r[18];
    goto L_010e98b0;
L_010e98ac:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_010e98b0:
    ea = c.r[5] + c.r[19];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10e98d0u;
    f_80040980(c);
L_010e98d0:
R_010e98d0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010e98e8;
    c.r[4] = c.r[18] | c.r[18];
    goto L_010e98ec;
L_010e98e8:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_010e98ec:
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x10e98f4u;
    f_800403f0(c);
R_010e98f4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010e9908;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10e9908u;
    f_801c7a8c(c);
L_010e9908:
R_010e9908:
    c.r[20] = c.r[20] + 0x4u;
    c.r[19] = c.r[19] + 0x4u;
    c.r[17] = c.r[17] + 0x1u;
L_010e9914:
    wp::compare_unsigned(c, 0, c.r[17], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010e9790;
    }
L_010e991c:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010e9948;
    if (wp::cr_get(c, 2)) goto L_010e9948;
    if (wp::cr_get(c, 2)) goto L_010e9948;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9948;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e9948u;
    f_801c7a8c(c);
L_010e9948:
R_010e9948:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10e9958u;
    f_801c83d8(c);
R_010e9958:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr031_010e9970(wp::Cpu& c) {
    WP_ENTER(0x10e9970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e998cu: goto R_010e998c;
        case 0x10e9a68u: goto R_010e9a68;
        case 0x10e9a6cu: goto R_010e9a6c;
        case 0x10e9aacu: goto R_010e9aac;
        case 0x10e9b1cu: goto R_010e9b1c;
        case 0x10e9b20u: goto R_010e9b20;
        case 0x10e9be0u: goto R_010e9be0;
        case 0x10e9be4u: goto R_010e9be4;
        case 0x10e9becu: goto R_010e9bec;
        case 0x10e9c14u: goto R_010e9c14;
        case 0x10e9c18u: goto R_010e9c18;
        case 0x10e9c48u: goto R_010e9c48;
        case 0x10e9c98u: goto R_010e9c98;
        case 0x10e9ca8u: goto R_010e9ca8;
        case 0x10e9cf4u: goto R_010e9cf4;
        case 0x10ea070u: goto R_010ea070;
        case 0x10ea080u: goto R_010ea080;
        case 0x10ea0a0u: goto R_010ea0a0;
        case 0x10ea0ccu: goto R_010ea0cc;
        case 0x10ea0ecu: goto R_010ea0ec;
        case 0x10ea13cu: goto R_010ea13c;
        case 0x10ea160u: goto R_010ea160;
        case 0x10ea174u: goto R_010ea174;
        case 0x10ea1b4u: goto R_010ea1b4;
        case 0x10ea1c4u: goto R_010ea1c4;
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
    c.lr = 0x10e998cu;
    f_801c8390(c);
R_010e998c:
    c.r[10] = ((((g_mr031_bases[4] + 0x4180u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[9] = ((((g_mr031_bases[4] + 0x4158u) + 0x8000u) >> 16) << 16);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mr031_bases[4] + 0x4180u) & 0xFFFFu);
    c.r[31] = c.r[5] + c.r[6];
    ea = c.r[10] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr031_bases[4] + 0x4158u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_010e99f4;
    c.r[4] = c.r[0] | c.r[0];
L_010e99f4:
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[5]);
    c.r[25] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_010e9cf8;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[26] = c.r[31] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[26], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010e9a28;
    c.r[0] = c.r[6] - c.r[26];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e9a94;
L_010e9a28:
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
    if (!wp::cr_get(c, 1)) goto L_010e9a6c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e9a68u;
    f_801cee24(c);
R_010e9a68:
    c.lr = 0x10e9a6cu;
    f_801d3940(c);
L_010e9a6c:
R_010e9a6c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e9a80;
    goto L_010e9abc;
L_010e9a80:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e9abc;
    goto L_010e9abc;
L_010e9a94:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[26], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x10e9aacu;
    f_80004714(c);
R_010e9aac:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[26];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_010e9d08;
L_010e9abc:
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
    if (!wp::cr_get(c, 1)) goto L_010e9b20;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e9b1cu;
    f_801cee24(c);
R_010e9b1c:
    c.lr = 0x10e9b20u;
    f_801d3940(c);
L_010e9b20:
R_010e9b20:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e9b70;
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
    if (!wp::cr_get(c, 0)) goto L_010e9b64;
    c.r[3] = c.r[1] + 0x20u;
L_010e9b64:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_010e9bb4;
L_010e9b70:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e9bac;
    c.r[3] = c.r[24] + 0x1u;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_010e9ba0;
    c.r[3] = c.r[1] + 0x20u;
L_010e9ba0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_010e9bb4;
L_010e9bac:
    c.r[3] = 0x40000000u;
    c.r[24] = c.r[3] + 0xffffffffu;
L_010e9bb4:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010e9be4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e9be0u;
    f_801cee24(c);
R_010e9be0:
    c.lr = 0x10e9be4u;
    f_801d3940(c);
L_010e9be4:
R_010e9be4:
    c.r[3] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.lr = 0x10e9becu;
    f_801c79a4(c);
R_010e9bec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[19] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010e9c18;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0xb74u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0xb74u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10e9c14u;
    f_801cee24(c);
R_010e9c14:
    c.lr = 0x10e9c18u;
    f_801d3940(c);
L_010e9c18:
R_010e9c18:
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
    c.lr = 0x10e9c48u;
    f_80004714(c);
R_010e9c48:
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
    c.lr = 0x10e9c98u;
    f_800043c4(c);
R_010e9c98:
    c.r[3] = c.r[19] | c.r[19];
    c.r[5] = c.r[17] | c.r[17];
    c.r[4] = 0x0u;
    c.lr = 0x10e9ca8u;
    f_80004714(c);
R_010e9ca8:
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
    if (wp::cr_get(c, 2)) goto L_010e9d08;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9d08;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10e9cf4u;
    f_801c7a8c(c);
R_010e9cf4:
    goto L_010e9d08;
L_010e9cf8:
    if (!wp::cr_get(c, 0)) goto L_010e9d08;
    c.r[0] = c.r[5] - c.r[31];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_010e9d08:
    wp::compare_unsigned(c, 1, c.r[31], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_010e9fac;
    wp::compare_unsigned(c, 0, c.r[31], 0x8u);
    c.r[6] = c.r[31] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010e9f54;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010e9d40;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010e9d40;
    c.r[7] = 0x1u;
L_010e9d40:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9d54;
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e9d54;
    c.r[5] = 0x1u;
L_010e9d54:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9d6c;
    c.r[0] = c.r[31] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010e9d6c;
    c.r[4] = 0x1u;
L_010e9d6c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9f54;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010e9f54;
L_010e9d90:
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
    goto L_010e9d90;
    }
L_010e9f54:
    c.r[0] = c.r[31] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_010e9fac;
L_010e9f70:
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
    goto L_010e9f70;
    }
L_010e9fac:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e9ff8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010e9fe8;
    c.r[0] = c.r[0] | 0x0u;
L_010e9fd0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010e9fe8;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010e9fd0;
    }
L_010e9fe8:
    wp::compare_unsigned(c, 0, c.r[23], c.r[22]);
    if (wp::cr_get(c, 0)) goto L_010e9ffc;
    c.r[23] = c.r[22] + 0xffffffffu;
    goto L_010e9ffc;
L_010e9ff8:
    c.r[23] = 0x0u;
L_010e9ffc:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010ea010;
    c.r[0] = c.r[22] - c.r[21];
    c.r[4] = wp::sub_carry(c, c.r[0], 0x8u);
L_010ea010:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[18] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010ea188;
    c.r[5] = ((((g_mr031_bases[5] + 0x30240u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr031_bases[4] + 0x41b0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30240u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    c.r[25] = wp::rd8(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0xcu;
    c.r[26] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41b0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[21] = c.r[4] + c.r[0];
    c.r[19] = c.r[1] + 0x25u;
    c.r[20] = 0x0u;
    c.r[24] = 0x0u;
    c.r[27] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[28] = 0x43300000u;
    goto L_010ea180;
L_010ea05c:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[24]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[24]);
    c.lr = 0x10ea070u;
    f_801c7860(c);
R_010ea070:
    c.r[22] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[22] | c.r[22];
    c.lr = 0x10ea080u;
    f_mr031_0102a2e0(c);
R_010ea080:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[25]);
    c.r[6] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[30] + c.r[22];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10ea0a0u;
    f_mr031_0102a4a0(c);
R_010ea0a0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[21] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ea0bc;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[17] = c.r[0] & 0x7fu;
    goto L_010ea0c0;
L_010ea0bc:
    ea = c.r[1] + 0x28u;
    c.r[17] = wp::rd32(ea);
L_010ea0c0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[26]);
    c.r[3] = c.r[22] | c.r[22];
    c.lr = 0x10ea0ccu;
    f_801c7860(c);
R_010ea0cc:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[17] | c.r[17];
    c.r[6] = c.r[22] | c.r[22];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[22] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10ea0ecu;
    f_mr031_0102a4a0(c);
R_010ea0ec:
    wp::compare_unsigned(c, 0, c.r[23], c.r[18]);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_010ea13c;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[22] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ea118;
    c.r[4] = c.r[19] | c.r[19];
    goto L_010ea11c;
L_010ea118:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_010ea11c:
    ea = c.r[5] + c.r[20];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[28]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x10ea13cu;
    f_80040980(c);
L_010ea13c:
R_010ea13c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ea154;
    c.r[4] = c.r[19] | c.r[19];
    goto L_010ea158;
L_010ea154:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_010ea158:
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x10ea160u;
    f_800403f0(c);
R_010ea160:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010ea174;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10ea174u;
    f_801c7a8c(c);
L_010ea174:
R_010ea174:
    c.r[21] = c.r[21] + 0x4u;
    c.r[20] = c.r[20] + 0x4u;
    c.r[18] = c.r[18] + 0x1u;
L_010ea180:
    wp::compare_unsigned(c, 0, c.r[18], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010ea05c;
    }
L_010ea188:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010ea1b4;
    if (wp::cr_get(c, 2)) goto L_010ea1b4;
    if (wp::cr_get(c, 2)) goto L_010ea1b4;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ea1b4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10ea1b4u;
    f_801c7a8c(c);
L_010ea1b4:
R_010ea1b4:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10ea1c4u;
    f_801c83dc(c);
R_010ea1c4:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr031_010ea1e0(wp::Cpu& c) {
    WP_ENTER(0x10ea1e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr031_010eb350(c);
    return;
}

void f_mr031_010ea1f0(wp::Cpu& c) {
    WP_ENTER(0x10ea1f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr031_010eced0(c);
    return;
}

void f_mr031_010ea200(wp::Cpu& c) {
    WP_ENTER(0x10ea200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr031_010ecff0(c);
    return;
}

void f_mr031_010ea210(wp::Cpu& c) {
    WP_ENTER(0x10ea210u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr031_010ed2c0(c);
    return;
}

void f_mr031_010ea220(wp::Cpu& c) {
    WP_ENTER(0x10ea220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea260u: goto R_010ea260;
        case 0x10ea284u: goto R_010ea284;
        case 0x10ea2ccu: goto R_010ea2cc;
        case 0x10ea2e8u: goto R_010ea2e8;
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
    c.r[5] = ((((g_mr031_bases[5] + 0x30294u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[7] | c.r[7];
    c.r[7] = c.r[8] | c.r[8];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30294u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[8] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10ea260u;
    f_mr031_010eb230(c);
R_010ea260:
    c.r[4] = ((((g_mr031_bases[5] + 0x30558u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30558u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ea284u;
    wp::call(c, c.ctr);
R_010ea284:
    c.r[3] = ((((g_mr031_bases[5] + 0x302f8u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x302f8u) & 0xFFFFu);
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
    c.lr = 0x10ea2ccu;
    f_800402c0(c);
R_010ea2cc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ea2e8u;
    wp::call(c, c.ctr);
R_010ea2e8:
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

void f_mr031_010ea310(wp::Cpu& c) {
    WP_ENTER(0x10ea310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea33cu: goto R_010ea33c;
        case 0x10ea34cu: goto R_010ea34c;
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
    if (wp::cr_get(c, 2)) goto L_010ea34c;
    c.r[4] = 0x0u;
    c.lr = 0x10ea33cu;
    f_mr031_010eb280(c);
R_010ea33c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010ea34c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10ea34cu;
    f_801c7a8c(c);
L_010ea34c:
R_010ea34c:
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

void f_mr031_010ea370(wp::Cpu& c) {
    WP_ENTER(0x10ea370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea3a4u: goto R_010ea3a4;
        case 0x10ea3c8u: goto R_010ea3c8;
        case 0x10ea410u: goto R_010ea410;
        case 0x10ea428u: goto R_010ea428;
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
    c.r[5] = ((((g_mr031_bases[5] + 0x30294u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30294u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10ea3a4u;
    f_mr031_010eb230(c);
R_010ea3a4:
    c.r[4] = ((((g_mr031_bases[5] + 0x30558u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30558u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ea3c8u;
    wp::call(c, c.ctr);
R_010ea3c8:
    c.r[3] = ((((g_mr031_bases[5] + 0x302f8u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x302f8u) & 0xFFFFu);
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
    c.lr = 0x10ea410u;
    f_800402c0(c);
R_010ea410:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ea428u;
    wp::call(c, c.ctr);
R_010ea428:
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

void f_mr031_010ea450(wp::Cpu& c) {
    WP_ENTER(0x10ea450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea480u: goto R_010ea480;
        case 0x10ea4a4u: goto R_010ea4a4;
        case 0x10ea4ecu: goto R_010ea4ec;
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
    c.r[5] = ((((g_mr031_bases[5] + 0x30294u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30294u) & 0xFFFFu);
    c.lr = 0x10ea480u;
    f_mr031_010eb230(c);
R_010ea480:
    c.r[4] = ((((g_mr031_bases[5] + 0x30558u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30558u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ea4a4u;
    wp::call(c, c.ctr);
R_010ea4a4:
    c.r[3] = ((((g_mr031_bases[5] + 0x302f8u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x302f8u) & 0xFFFFu);
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
    c.lr = 0x10ea4ecu;
    f_800402c0(c);
R_010ea4ec:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010ea510(wp::Cpu& c) {
    WP_ENTER(0x10ea510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea578u: goto R_010ea578;
        case 0x10ea5a4u: goto R_010ea5a4;
        case 0x10ea5b8u: goto R_010ea5b8;
        case 0x10ea5c8u: goto R_010ea5c8;
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
    if (wp::cr_get(c, 2)) goto L_010ea5c8;
    ea = c.r[3] + 0x130u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr031_bases[5] + 0x302f8u) + 0x8000u) >> 16) << 16);
    c.r[5] = wp::add_carry(c, c.r[3], 0x138u, 0);
    wp::record(c, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x302f8u) & 0xFFFFu);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x130u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010ea578;
    if (wp::cr_get(c, 2)) goto L_010ea578;
    if (wp::cr_get(c, 2)) goto L_010ea578;
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ea578;
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10ea578u;
    f_801c7a8c(c);
L_010ea578:
R_010ea578:
    c.r[4] = wp::add_carry(c, c.r[30], 0x12cu, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010ea5a4;
    if (wp::cr_get(c, 2)) goto L_010ea5a4;
    if (wp::cr_get(c, 2)) goto L_010ea5a4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ea5a4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10ea5a4u;
    f_801c7a8c(c);
L_010ea5a4:
R_010ea5a4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ea5b8;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10ea5b8u;
    f_mr031_010eb280(c);
L_010ea5b8:
R_010ea5b8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010ea5c8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10ea5c8u;
    f_801c7a8c(c);
L_010ea5c8:
R_010ea5c8:
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

void f_mr031_010ea5f0(wp::Cpu& c) {
    WP_ENTER(0x10ea5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea638u: goto R_010ea638;
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
    goto L_010ea640;
L_010ea620:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ea638u;
    wp::call(c, c.ctr);
R_010ea638:
    c.r[31] = c.r[31] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_010ea640:
    wp::compare_signed(c, 0, c.r[30], c.r[29]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010ea620;
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

void f_mr031_010ea670(wp::Cpu& c) {
    WP_ENTER(0x10ea670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea684u: goto R_010ea684;
        case 0x10ea698u: goto R_010ea698;
        case 0x10ea6b4u: goto R_010ea6b4;
        case 0x10ea6c0u: goto R_010ea6c0;
        case 0x10ea6ccu: goto R_010ea6cc;
        case 0x10ea6dcu: goto R_010ea6dc;
        case 0x10ea6fcu: goto R_010ea6fc;
        case 0x10ea75cu: goto R_010ea75c;
        case 0x10ea760u: goto R_010ea760;
        case 0x10ea7c0u: goto R_010ea7c0;
        case 0x10ea7c4u: goto R_010ea7c4;
        case 0x10ea884u: goto R_010ea884;
        case 0x10ea888u: goto R_010ea888;
        case 0x10ea890u: goto R_010ea890;
        case 0x10ea8b8u: goto R_010ea8b8;
        case 0x10ea8bcu: goto R_010ea8bc;
        case 0x10ea9b0u: goto R_010ea9b0;
        case 0x10ea9c8u: goto R_010ea9c8;
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
    c.lr = 0x10ea684u;
    f_801c83b8(c);
R_010ea684:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ea698u;
    wp::call(c, c.ctr);
R_010ea698:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x10ea6b4u;
    wp::call(c, c.ctr);
R_010ea6b4:
    c.r[29] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x10ea6c0u;
    f_80043180(c);
R_010ea6c0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10ea6ccu;
    f_800431a0(c);
R_010ea6cc:
    c.r[4] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10ea6dcu;
    f_80043060(c);
R_010ea6dc:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x10ea6fcu;
    wp::call(c, c.ctr);
R_010ea6fc:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x134u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010ea72c;
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
    goto L_010ea9b0;
L_010ea72c:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010ea760;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ea75cu;
    f_801cee24(c);
R_010ea75c:
    c.lr = 0x10ea760u;
    f_801d3940(c);
L_010ea760:
R_010ea760:
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
    if (!wp::cr_get(c, 1)) goto L_010ea7c4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ea7c0u;
    f_801cee24(c);
R_010ea7c0:
    c.lr = 0x10ea7c4u;
    f_801d3940(c);
L_010ea7c4:
R_010ea7c4:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010ea814;
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
    if (!wp::cr_get(c, 0)) goto L_010ea808;
    c.r[3] = c.r[1] + 0x10u;
L_010ea808:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010ea858;
L_010ea814:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010ea850;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010ea844;
    c.r[3] = c.r[1] + 0x10u;
L_010ea844:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010ea858;
L_010ea850:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010ea858:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010ea888;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ea884u;
    f_801cee24(c);
R_010ea884:
    c.lr = 0x10ea888u;
    f_801d3940(c);
L_010ea888:
R_010ea888:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x10ea890u;
    f_801c79a4(c);
R_010ea890:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010ea8bc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x3078cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3078cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ea8b8u;
    f_801cee24(c);
R_010ea8b8:
    c.lr = 0x10ea8bcu;
    f_801d3940(c);
L_010ea8bc:
R_010ea8bc:
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
    if (!wp::cr_get(c, 1)) goto L_010ea960;
L_010ea928:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010ea944;
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010ea944:
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
    goto L_010ea928;
    }
L_010ea960:
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
    if (wp::cr_get(c, 2)) goto L_010ea9b0;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ea9b0;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10ea9b0u;
    f_801c7a8c(c);
L_010ea9b0:
R_010ea9b0:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x124u;
    wp::wr32(ea, c.r[3]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[28] + 0x121u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10ea9c8u;
    f_801c8404(c);
R_010ea9c8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr031_010ea9e0(wp::Cpu& c) {
    WP_ENTER(0x10ea9e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ea9fcu: goto R_010ea9fc;
        case 0x10eaa2cu: goto R_010eaa2c;
        case 0x10eaa4cu: goto R_010eaa4c;
        case 0x10eaa6cu: goto R_010eaa6c;
        case 0x10eaa90u: goto R_010eaa90;
        case 0x10eaa9cu: goto R_010eaa9c;
        case 0x10eaaa8u: goto R_010eaaa8;
        case 0x10eaab4u: goto R_010eaab4;
        case 0x10eaaccu: goto R_010eaacc;
        case 0x10eaae4u: goto R_010eaae4;
        case 0x10eaaf4u: goto R_010eaaf4;
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
    c.lr = 0x10ea9fcu;
    f_801c83b8(c);
R_010ea9fc:
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    c.f[30] = c.f[1];
    c.f[31] = c.f[2];
    c.r[27] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[6] | c.r[6];
    if (!wp::cr_get(c, 2)) goto L_010eaa30;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10eaa2cu;
    f_800402c0(c);
R_010eaa2c:
    goto L_010eaae4;
L_010eaa30:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eaa50;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eaa4cu;
    wp::call(c, c.ctr);
R_010eaa4c:
    goto L_010eaa74;
L_010eaa50:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eaa6cu;
    wp::call(c, c.ctr);
R_010eaa6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eaae4;
L_010eaa74:
    ea = c.r[27] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = wp::rotl(c.r[28], 3) & 0xfffffff8u;
    c.f[1] = c.f[31];
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10eaa90u;
    f_80043060(c);
R_010eaa90:
    c.f[1] = c.f[30];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10eaa9cu;
    f_80043120(c);
R_010eaa9c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10eaaa8u;
    f_800431a0(c);
R_010eaaa8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10eaab4u;
    f_80043180(c);
R_010eaab4:
    ea = c.r[27] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10eaaccu;
    f_80042650(c);
R_010eaacc:
    c.r[0] = 0x1u;
    ea = c.r[27] + 0x128u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10eaae4u;
    f_800402c0(c);
L_010eaae4:
R_010eaae4:
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x28u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    c.f[30] = wp::rdf64(ea);
    c.lr = 0x10eaaf4u;
    f_801c8404(c);
R_010eaaf4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr031_010eab10(wp::Cpu& c) {
    WP_ENTER(0x10eab10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eab70u: goto R_010eab70;
        case 0x10eab88u: goto R_010eab88;
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
    if (wp::cr_get(c, 0)) goto L_010eab3c;
    c.r[31] = c.r[4] | c.r[4];
    goto L_010eab40;
L_010eab3c:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_010eab40:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010eab9c;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010eab58;
    goto L_010eab9c;
L_010eab58:
    ea = c.r[3] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10eab70u;
    f_80043180(c);
R_010eab70:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[30];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10eab88u;
    f_80042650(c);
R_010eab88:
    ea = c.r[29] + 0x128u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010eab9c;
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_010eab9c:
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

void f_mr031_010eabc0(wp::Cpu& c) {
    WP_ENTER(0x10eabc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eac08u: goto R_010eac08;
        case 0x10eac20u: goto R_010eac20;
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
    if (wp::cr_get(c, 2)) goto L_010eac3c;
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
    goto L_010eac28;
L_010eabf4:
    ea = c.r[29] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10eac08u;
    f_80043180(c);
R_010eac08:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10eac20u;
    f_80042650(c);
R_010eac20:
    c.r[31] = c.r[31] + 0x8u;
    c.r[30] = c.r[30] + 0x1u;
L_010eac28:
    ea = c.r[29] + 0x124u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010eabf4;
    }
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_010eac3c:
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

void f_mr031_010eac60(wp::Cpu& c) {
    WP_ENTER(0x10eac60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eac74u: goto R_010eac74;
        case 0x10eacc4u: goto R_010eacc4;
        case 0x10eace4u: goto R_010eace4;
        case 0x10ead0cu: goto R_010ead0c;
        case 0x10ead30u: goto R_010ead30;
        case 0x10ead54u: goto R_010ead54;
        case 0x10ead60u: goto R_010ead60;
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
    c.lr = 0x10eac74u;
    f_801c83b8(c);
R_010eac74:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 0)) goto L_010eac90;
    c.r[31] = c.r[4] | c.r[4];
    goto L_010eac94;
L_010eac90:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_010eac94:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010eaca8;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010eacb0;
L_010eaca8:
    c.r[3] = 0x1u;
    goto L_010ead58;
L_010eacb0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x1f8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eacc4u;
    wp::call(c, c.ctr);
R_010eacc4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010eacec;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eace4u;
    wp::call(c, c.ctr);
R_010eace4:
    c.r[3] = 0x1u;
    goto L_010ead58;
L_010eacec:
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
    c.lr = 0x10ead0cu;
    wp::call(c, c.ctr);
R_010ead0c:
    wp::compare_unsigned(c, 0, c.r[3], 0x1u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010ead54;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ead30u;
    wp::call(c, c.ctr);
R_010ead30:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ead54;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ead54;
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x10ead54u;
    f_800402c0(c);
L_010ead54:
R_010ead54:
    c.r[3] = c.r[30] | c.r[30];
L_010ead58:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10ead60u;
    f_801c8404(c);
R_010ead60:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010ead70(wp::Cpu& c) {
    WP_ENTER(0x10ead70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ead7c;
    goto L_010ead80;
L_010ead7c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_010ead80:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ead94;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010eada0;
L_010ead94:
    c.r[3] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_010eada0:
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

void f_mr031_010eadc0(wp::Cpu& c) {
    WP_ENTER(0x10eadc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010eadcc;
    goto L_010eadd0;
L_010eadcc:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_010eadd0:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010eade4;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010eadf0;
L_010eade4:
    c.r[3] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_010eadf0:
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

void f_mr031_010eae10(wp::Cpu& c) {
    WP_ENTER(0x10eae10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010eae1c;
    goto L_010eae20;
L_010eae1c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_010eae20:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010eae34;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010eae40;
L_010eae34:
    c.r[3] = ((((g_mr031_bases[4] + 0x41acu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x41acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_010eae40:
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

void f_mr031_010eae60(wp::Cpu& c) {
    WP_ENTER(0x10eae60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eae74u: goto R_010eae74;
        case 0x10eaee4u: goto R_010eaee4;
        case 0x10eaee8u: goto R_010eaee8;
        case 0x10eaf48u: goto R_010eaf48;
        case 0x10eaf4cu: goto R_010eaf4c;
        case 0x10eb00cu: goto R_010eb00c;
        case 0x10eb010u: goto R_010eb010;
        case 0x10eb018u: goto R_010eb018;
        case 0x10eb040u: goto R_010eb040;
        case 0x10eb044u: goto R_010eb044;
        case 0x10eb138u: goto R_010eb138;
        case 0x10eb140u: goto R_010eb140;
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
    c.lr = 0x10eae74u;
    f_801c83b8(c);
R_010eae74:
    ea = c.r[3] + 0x13cu;
    c.r[7] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x140u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    wp::compare_unsigned(c, 0, c.r[7], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_010eaeb4;
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
    goto L_010eb138;
L_010eaeb4:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[6];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010eaee8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10eaee4u;
    f_801cee24(c);
R_010eaee4:
    c.lr = 0x10eaee8u;
    f_801d3940(c);
L_010eaee8:
R_010eaee8:
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
    if (!wp::cr_get(c, 1)) goto L_010eaf4c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10eaf48u;
    f_801cee24(c);
R_010eaf48:
    c.lr = 0x10eaf4cu;
    f_801d3940(c);
L_010eaf4c:
R_010eaf4c:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010eaf9c;
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
    if (!wp::cr_get(c, 0)) goto L_010eaf90;
    c.r[3] = c.r[1] + 0x10u;
L_010eaf90:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010eafe0;
L_010eaf9c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010eafd8;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010eafcc;
    c.r[3] = c.r[1] + 0x10u;
L_010eafcc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010eafe0;
L_010eafd8:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010eafe0:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010eb010;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x30280u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30280u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10eb00cu;
    f_801cee24(c);
R_010eb00c:
    c.lr = 0x10eb010u;
    f_801d3940(c);
L_010eb010:
R_010eb010:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x10eb018u;
    f_801c79a4(c);
R_010eb018:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010eb044;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x307a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x307a8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10eb040u;
    f_801cee24(c);
R_010eb040:
    c.lr = 0x10eb044u;
    f_801d3940(c);
L_010eb044:
R_010eb044:
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
    if (!wp::cr_get(c, 1)) goto L_010eb0e8;
L_010eb0b0:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010eb0cc;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010eb0cc:
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
    goto L_010eb0b0;
    }
L_010eb0e8:
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
    if (wp::cr_get(c, 2)) goto L_010eb138;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eb138;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10eb138u;
    f_801c7a8c(c);
L_010eb138:
R_010eb138:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x10eb140u;
    f_801c8404(c);
R_010eb140:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr031_010eb150(wp::Cpu& c) {
    WP_ENTER(0x10eb150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb1acu: goto R_010eb1ac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr031_bases[5] + 0x302e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x302e8u) & 0xFFFFu);
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
    goto L_010eb1b4;
L_010eb1a0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[12] = c.r[1] + 0x14u;
    c.lr = 0x10eb1acu;
    f_801c8244(c);
R_010eb1ac:
    c.r[0] = c.r[0] | 0x0u;
    c.r[30] = c.r[30] + 0x8u;
L_010eb1b4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010eb1a0;
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

void f_mr031_010eb1e0(wp::Cpu& c) {
    WP_ENTER(0x10eb1e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb1f8u: goto R_010eb1f8;
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
    c.lr = 0x10eb1f8u;
    f_8003f8f0(c);
R_010eb1f8:
    c.r[3] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
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

void f_mr031_010eb230(wp::Cpu& c) {
    WP_ENTER(0x10eb230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb248u: goto R_010eb248;
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
    c.lr = 0x10eb248u;
    f_8003f640(c);
R_010eb248:
    c.r[3] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
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

void f_mr031_010eb280(wp::Cpu& c) {
    WP_ENTER(0x10eb280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb2d4u: goto R_010eb2d4;
        case 0x10eb310u: goto R_010eb310;
        case 0x10eb31cu: goto R_010eb31c;
        case 0x10eb32cu: goto R_010eb32c;
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
    if (wp::cr_get(c, 2)) goto L_010eb32c;
    c.r[4] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_010eb2d4;
L_010eb2b4:
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
    c.lr = 0x10eb2d4u;
    wp::call(c, c.ctr);
L_010eb2d4:
R_010eb2d4:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010eb2b4;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010eb310;
    if (wp::cr_get(c, 2)) goto L_010eb310;
    if (wp::cr_get(c, 2)) goto L_010eb310;
    if (wp::cr_get(c, 2)) goto L_010eb310;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eb310;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10eb310u;
    f_801c7a8c(c);
L_010eb310:
R_010eb310:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10eb31cu;
    f_8003fb90(c);
R_010eb31c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010eb32c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10eb32cu;
    f_801c7a8c(c);
L_010eb32c:
R_010eb32c:
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

void f_mr031_010eb350(wp::Cpu& c) {
    WP_ENTER(0x10eb350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb394u: goto R_010eb394;
        case 0x10eb3b0u: goto R_010eb3b0;
        case 0x10eb3b8u: goto R_010eb3b8;
        case 0x10eb3e0u: goto R_010eb3e0;
        case 0x10eb438u: goto R_010eb438;
        case 0x10eb454u: goto R_010eb454;
        case 0x10eb480u: goto R_010eb480;
        case 0x10eb4acu: goto R_010eb4ac;
        case 0x10eb4d4u: goto R_010eb4d4;
        case 0x10eb4f0u: goto R_010eb4f0;
        case 0x10eb514u: goto R_010eb514;
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
    c.r[30] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
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
    c.lr = 0x10eb394u;
    f_8003cc90(c);
R_010eb394:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb3b0u;
    wp::call(c, c.ctr);
R_010eb3b0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10eb3b8u;
    f_8003d2d0(c);
R_010eb3b8:
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
    c.lr = 0x10eb3e0u;
    wp::call(c, c.ctr);
R_010eb3e0:
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
    c.lr = 0x10eb438u;
    wp::call(c, c.ctr);
R_010eb438:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb454u;
    wp::call(c, c.ctr);
R_010eb454:
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
    c.lr = 0x10eb480u;
    wp::call(c, c.ctr);
R_010eb480:
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
    c.lr = 0x10eb4acu;
    wp::call(c, c.ctr);
R_010eb4ac:
    ea = c.r[31] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eb514;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb4d4u;
    wp::call(c, c.ctr);
R_010eb4d4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb4f0u;
    wp::call(c, c.ctr);
R_010eb4f0:
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
    c.lr = 0x10eb514u;
    wp::call(c, c.ctr);
L_010eb514:
R_010eb514:
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

void f_mr031_010eb540(wp::Cpu& c) {
    WP_ENTER(0x10eb540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb558u: goto R_010eb558;
        case 0x10eb560u: goto R_010eb560;
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
    c.lr = 0x10eb558u;
    f_mr031_010ec780(c);
R_010eb558:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10eb560u;
    f_mr031_010eebd0(c);
R_010eb560:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010eb580(wp::Cpu& c) {
    WP_ENTER(0x10eb580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb5a4u: goto R_010eb5a4;
        case 0x10eb5c0u: goto R_010eb5c0;
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
    c.lr = 0x10eb5a4u;
    f_80010060(c);
R_010eb5a4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb5c0u;
    wp::call(c, c.ctr);
R_010eb5c0:
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

void f_mr031_010eb5e0(wp::Cpu& c) {
    WP_ENTER(0x10eb5e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb618u: goto R_010eb618;
        case 0x10eb634u: goto R_010eb634;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = ((((g_mr031_bases[5] + 0x307c8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr031_bases[5] + 0x307c8u) & 0xFFFFu);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10eb618u;
    f_801d3590(c);
R_010eb618:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb634u;
    wp::call(c, c.ctr);
R_010eb634:
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

void f_mr031_010eb650(wp::Cpu& c) {
    WP_ENTER(0x10eb650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb664u: goto R_010eb664;
        case 0x10eb678u: goto R_010eb678;
        case 0x10eb68cu: goto R_010eb68c;
        case 0x10eb6b4u: goto R_010eb6b4;
        case 0x10eb6c4u: goto R_010eb6c4;
        case 0x10eb6e8u: goto R_010eb6e8;
        case 0x10eb748u: goto R_010eb748;
        case 0x10eb7c8u: goto R_010eb7c8;
        case 0x10eb830u: goto R_010eb830;
        case 0x10eb860u: goto R_010eb860;
        case 0x10eb874u: goto R_010eb874;
        case 0x10eb884u: goto R_010eb884;
        case 0x10eb8a0u: goto R_010eb8a0;
        case 0x10eb8a8u: goto R_010eb8a8;
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
    c.lr = 0x10eb664u;
    f_801c83b4(c);
R_010eb664:
    c.r[26] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10eb678u;
    f_8006c450(c);
R_010eb678:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010eb878;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10eb68cu;
    f_8006c460(c);
R_010eb68c:
    c.r[28] = ((((g_mr031_bases[5] + 0x307d0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr031_bases[5] + 0x307d0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10eb6b4u;
    f_801c7860(c);
R_010eb6b4:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10eb6c4u;
    f_mr031_0102a2e0(c);
R_010eb6c4:
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
    c.lr = 0x10eb6e8u;
    f_mr031_0102a4a0(c);
R_010eb6e8:
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
    if (!wp::cr_get(c, 2)) goto L_010eb724;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010eb728;
L_010eb724:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010eb728:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x10eb748u;
    f_mr031_0102a4a0(c);
R_010eb748:
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
    if (!wp::cr_get(c, 2)) goto L_010eb7a4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010eb7a8;
L_010eb7a4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010eb7a8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x10eb7c8u;
    f_mr031_0102a4a0(c);
R_010eb7c8:
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
    if (!wp::cr_get(c, 2)) goto L_010eb80c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010eb810;
L_010eb80c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010eb810:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x10eb830u;
    f_mr031_0102a4a0(c);
R_010eb830:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010eb84c;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010eb850;
L_010eb84c:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010eb850:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb860u;
    wp::call(c, c.ctr);
R_010eb860:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010eb8a0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10eb874u;
    f_801c7a8c(c);
R_010eb874:
    goto L_010eb8a0;
L_010eb878:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10eb884u;
    f_8006c4e0(c);
R_010eb884:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb8a0u;
    wp::call(c, c.ctr);
L_010eb8a0:
R_010eb8a0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10eb8a8u;
    f_801c8400(c);
R_010eb8a8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010eb8c0(wp::Cpu& c) {
    WP_ENTER(0x10eb8c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb8e4u: goto R_010eb8e4;
        case 0x10eb900u: goto R_010eb900;
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
    c.lr = 0x10eb8e4u;
    f_8003cc90(c);
R_010eb8e4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb900u;
    wp::call(c, c.ctr);
R_010eb900:
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

void f_mr031_010eb920(wp::Cpu& c) {
    WP_ENTER(0x10eb920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eb954u: goto R_010eb954;
        case 0x10eb97cu: goto R_010eb97c;
        case 0x10eb9a4u: goto R_010eb9a4;
        case 0x10eb9c0u: goto R_010eb9c0;
        case 0x10eb9dcu: goto R_010eb9dc;
        case 0x10eb9fcu: goto R_010eb9fc;
        case 0x10eba24u: goto R_010eba24;
        case 0x10eba40u: goto R_010eba40;
        case 0x10eba68u: goto R_010eba68;
        case 0x10ebac8u: goto R_010ebac8;
        case 0x10ebb08u: goto R_010ebb08;
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
    c.lr = 0x10eb954u;
    wp::call(c, c.ctr);
R_010eb954:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr031_bases[4] + 0x41fcu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr031_bases[4] + 0x4200u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr031_bases[4] + 0x41fcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x4200u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10eb97cu;
    wp::call(c, c.ctr);
R_010eb97c:
    c.r[5] = ((((g_mr031_bases[4] + 0x41f0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x41f0u) & 0xFFFFu);
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
    c.lr = 0x10eb9a4u;
    wp::call(c, c.ctr);
R_010eb9a4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb9c0u;
    wp::call(c, c.ctr);
R_010eb9c0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eb9dcu;
    wp::call(c, c.ctr);
R_010eb9dc:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x10eb9fcu;
    wp::call(c, c.ctr);
R_010eb9fc:
    c.r[5] = ((((g_mr031_bases[4] + 0x41f4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x41f4u) & 0xFFFFu);
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
    c.lr = 0x10eba24u;
    wp::call(c, c.ctr);
R_010eba24:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eba40u;
    wp::call(c, c.ctr);
R_010eba40:
    c.r[5] = ((((g_mr031_bases[4] + 0x41f8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x41f8u) & 0xFFFFu);
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
    c.lr = 0x10eba68u;
    wp::call(c, c.ctr);
R_010eba68:
    c.r[3] = ((((g_mr031_bases[5] + 0x307d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x307d8u) & 0xFFFFu);
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
    goto L_010ebab0;
L_010ebaac:
    c.r[28] = c.r[28] + 0x4u;
L_010ebab0:
    wp::compare_unsigned(c, 0, c.r[28], c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010ebad4;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ebac8u;
    f_801c8244(c);
R_010ebac8:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ebaac;
    }
L_010ebad4:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ebaf4;
    c.r[3] = 0x0u;
    goto L_010ebaf8;
L_010ebaf4:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ebaf8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ebb08;
    c.r[4] = 0x1u;
    c.lr = 0x10ebb08u;
    f_mr031_010eee20(c);
L_010ebb08:
R_010ebb08:
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

void f_mr031_010ebb30(wp::Cpu& c) {
    WP_ENTER(0x10ebb30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr031_010ebb40(wp::Cpu& c) {
    WP_ENTER(0x10ebb40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebb50u: goto R_010ebb50;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10ebb50u;
    f_mr031_010ec780(c);
R_010ebb50:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010ebb70(wp::Cpu& c) {
    WP_ENTER(0x10ebb70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebb84u: goto R_010ebb84;
        case 0x10ebbecu: goto R_010ebbec;
        case 0x10ebc3cu: goto R_010ebc3c;
        case 0x10ebc44u: goto R_010ebc44;
        case 0x10ebc5cu: goto R_010ebc5c;
        case 0x10ebc64u: goto R_010ebc64;
        case 0x10ebcc4u: goto R_010ebcc4;
        case 0x10ebd08u: goto R_010ebd08;
        case 0x10ebd20u: goto R_010ebd20;
        case 0x10ebd28u: goto R_010ebd28;
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
    c.lr = 0x10ebb84u;
    f_801c83b8(c);
R_010ebb84:
    c.r[5] = ((((g_mr031_bases[5] + 0x307e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x307e4u) & 0xFFFFu);
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
    goto L_010ebbd4;
L_010ebbd0:
    c.r[31] = c.r[31] + 0x4u;
L_010ebbd4:
    wp::compare_unsigned(c, 0, c.r[31], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010ebbf8;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ebbecu;
    f_801c8244(c);
R_010ebbec:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ebbd0;
    }
L_010ebbf8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ebc18;
    c.r[31] = 0x0u;
    goto L_010ebc1c;
L_010ebc18:
    ea = c.r[31] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010ebc1c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ebd20;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ebc3cu;
    wp::call(c, c.ctr);
R_010ebc3c:
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ebc44u;
    f_801290d0(c);
R_010ebc44:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ebc5cu;
    wp::call(c, c.ctr);
R_010ebc5c:
    ea = c.r[31] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ebc64u;
    f_801290d0(c);
R_010ebc64:
    c.r[3] = ((((g_mr031_bases[5] + 0x307f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x307f0u) & 0xFFFFu);
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
    goto L_010ebcac;
L_010ebca8:
    c.r[27] = c.r[27] + 0x4u;
L_010ebcac:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010ebcd0;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ebcc4u;
    f_801c8244(c);
R_010ebcc4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ebca8;
    }
L_010ebcd0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010ebd14;
    c.r[0] = c.r[0] - c.r[27];
    c.r[3] = c.r[27] | c.r[27];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[4] = c.r[27] + 0x4u;
    c.r[5] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.lr = 0x10ebd08u;
    f_801cc76c(c);
R_010ebd08:
    ea = c.r[29] + 0x118u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x118u;
    wp::wr32(ea, c.r[0]);
L_010ebd14:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10ebd20u;
    f_mr031_010eea60(c);
L_010ebd20:
R_010ebd20:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x10ebd28u;
    f_801c8404(c);
R_010ebd28:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr031_010ebd40(wp::Cpu& c) {
    WP_ENTER(0x10ebd40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mr031_bases[5] + 0x307fcu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x307fcu) & 0xFFFFu);
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr031_010ebd60(wp::Cpu& c) {
    WP_ENTER(0x10ebd60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebd9cu: goto R_010ebd9c;
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
    goto L_010ebda0;
L_010ebd80:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x15cu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xcu;
    c.ctr = c.r[12];
    c.lr = 0x10ebd9cu;
    wp::call(c, c.ctr);
R_010ebd9c:
    c.r[31] = c.r[31] + 0x4u;
L_010ebda0:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ebd80;
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

void f_mr031_010ebdd0(wp::Cpu& c) {
    WP_ENTER(0x10ebdd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebdfcu: goto R_010ebdfc;
        case 0x10ebe1cu: goto R_010ebe1c;
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
    c.lr = 0x10ebdfcu;
    f_8003cc90(c);
R_010ebdfc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10ebe1cu;
    wp::call(c, c.ctr);
R_010ebe1c:
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

void f_mr031_010ebe40(wp::Cpu& c) {
    WP_ENTER(0x10ebe40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebe64u: goto R_010ebe64;
        case 0x10ebe7cu: goto R_010ebe7c;
        case 0x10ebe8cu: goto R_010ebe8c;
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
    c.lr = 0x10ebe64u;
    f_mr031_010ec780(c);
R_010ebe64:
    c.r[5] = ((((g_mr031_bases[5] + 0x30800u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30800u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ebe7cu;
    f_801d34c4(c);
R_010ebe7c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10ebe8cu;
    f_mr031_010efad0(c);
R_010ebe8c:
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

void f_mr031_010ebeb0(wp::Cpu& c) {
    WP_ENTER(0x10ebeb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebef4u: goto R_010ebef4;
        case 0x10ebf14u: goto R_010ebf14;
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
    c.r[5] = ((((g_mr031_bases[5] + 0x307c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x307c8u) & 0xFFFFu);
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ebef4u;
    f_801d3590(c);
R_010ebef4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10ebf14u;
    wp::call(c, c.ctr);
R_010ebf14:
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

void f_mr031_010ebf30(wp::Cpu& c) {
    WP_ENTER(0x10ebf30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebf5cu: goto R_010ebf5c;
        case 0x10ebf7cu: goto R_010ebf7c;
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
    c.lr = 0x10ebf5cu;
    f_80010060(c);
R_010ebf5c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10ebf7cu;
    wp::call(c, c.ctr);
R_010ebf7c:
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

void f_mr031_010ebfa0(wp::Cpu& c) {
    WP_ENTER(0x10ebfa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ebfb4u: goto R_010ebfb4;
        case 0x10ebfccu: goto R_010ebfcc;
        case 0x10ebfe0u: goto R_010ebfe0;
        case 0x10ec008u: goto R_010ec008;
        case 0x10ec018u: goto R_010ec018;
        case 0x10ec03cu: goto R_010ec03c;
        case 0x10ec09cu: goto R_010ec09c;
        case 0x10ec11cu: goto R_010ec11c;
        case 0x10ec184u: goto R_010ec184;
        case 0x10ec1b8u: goto R_010ec1b8;
        case 0x10ec1ccu: goto R_010ec1cc;
        case 0x10ec1dcu: goto R_010ec1dc;
        case 0x10ec1fcu: goto R_010ec1fc;
        case 0x10ec204u: goto R_010ec204;
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
    c.lr = 0x10ebfb4u;
    f_801c83b0(c);
R_010ebfb4:
    c.r[25] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10ebfccu;
    f_8006c450(c);
R_010ebfcc:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010ec1d0;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10ebfe0u;
    f_8006c460(c);
R_010ebfe0:
    c.r[27] = ((((g_mr031_bases[5] + 0x307d0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr031_bases[5] + 0x307d0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10ec008u;
    f_801c7860(c);
R_010ec008:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x10ec018u;
    f_mr031_0102a2e0(c);
R_010ec018:
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
    c.lr = 0x10ec03cu;
    f_mr031_0102a4a0(c);
R_010ec03c:
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
    if (!wp::cr_get(c, 2)) goto L_010ec078;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010ec07c;
L_010ec078:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010ec07c:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x10ec09cu;
    f_mr031_0102a4a0(c);
R_010ec09c:
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
    if (!wp::cr_get(c, 2)) goto L_010ec0f8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010ec0fc;
L_010ec0f8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010ec0fc:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x10ec11cu;
    f_mr031_0102a4a0(c);
R_010ec11c:
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
    if (!wp::cr_get(c, 2)) goto L_010ec160;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010ec164;
L_010ec160:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010ec164:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x10ec184u;
    f_mr031_0102a4a0(c);
R_010ec184:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec1a0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010ec1a4;
L_010ec1a0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010ec1a4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ec1b8u;
    wp::call(c, c.ctr);
R_010ec1b8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010ec1fc;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10ec1ccu;
    f_801c7a8c(c);
R_010ec1cc:
    goto L_010ec1fc;
L_010ec1d0:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10ec1dcu;
    f_8006c4e0(c);
R_010ec1dc:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10ec1fcu;
    wp::call(c, c.ctr);
L_010ec1fc:
R_010ec1fc:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10ec204u;
    f_801c83fc(c);
R_010ec204:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010ec220(wp::Cpu& c) {
    WP_ENTER(0x10ec220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ec29cu: goto R_010ec29c;
        case 0x10ec2e4u: goto R_010ec2e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30808u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30808u) & 0xFFFFu);
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
    goto L_010ec284;
L_010ec280:
    c.r[30] = c.r[30] + 0x4u;
L_010ec284:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ec2a8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ec29cu;
    f_801c8244(c);
R_010ec29c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ec280;
    }
L_010ec2a8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec2c8;
    c.r[3] = 0x0u;
    goto L_010ec2cc;
L_010ec2c8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ec2cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ec2e4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x0u;
    c.lr = 0x10ec2e4u;
    f_mr031_010eee20(c);
L_010ec2e4:
R_010ec2e4:
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

void f_mr031_010ec300(wp::Cpu& c) {
    WP_ENTER(0x10ec300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ec37cu: goto R_010ec37c;
        case 0x10ec3dcu: goto R_010ec3dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30814u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30814u) & 0xFFFFu);
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
    goto L_010ec364;
L_010ec360:
    c.r[30] = c.r[30] + 0x4u;
L_010ec364:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ec388;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ec37cu;
    f_801c8244(c);
R_010ec37c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ec360;
    }
L_010ec388:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec3a8;
    c.r[3] = 0x0u;
    goto L_010ec3ac;
L_010ec3a8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ec3ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ec3dc;
    ea = c.r[3] + 0xa8u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xacu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010ec3d4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
L_010ec3d4:
    c.r[4] = 0x0u;
    c.lr = 0x10ec3dcu;
    f_mr031_010eee20(c);
L_010ec3dc:
R_010ec3dc:
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

void f_mr031_010ec400(wp::Cpu& c) {
    WP_ENTER(0x10ec400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ec47cu: goto R_010ec47c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30820u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30820u) & 0xFFFFu);
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
    goto L_010ec464;
L_010ec460:
    c.r[30] = c.r[30] + 0x4u;
L_010ec464:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ec488;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ec47cu;
    f_801c8244(c);
R_010ec47c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ec460;
    }
L_010ec488:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec4a8;
    c.r[3] = 0x0u;
    goto L_010ec4ac;
L_010ec4a8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ec4ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ec4bc;
    c.r[3] = 0x0u;
    goto L_010ec4c0;
L_010ec4bc:
    ea = c.r[3] + 0xa8u;
    c.r[3] = wp::rd32(ea);
L_010ec4c0:
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

void f_mr031_010ec4e0(wp::Cpu& c) {
    WP_ENTER(0x10ec4e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ec55cu: goto R_010ec55c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x3082cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x3082cu) & 0xFFFFu);
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
    goto L_010ec544;
L_010ec540:
    c.r[30] = c.r[30] + 0x4u;
L_010ec544:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ec568;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ec55cu;
    f_801c8244(c);
R_010ec55c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ec540;
    }
L_010ec568:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec588;
    c.r[3] = 0x0u;
    goto L_010ec58c;
L_010ec588:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ec58c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ec59c;
    c.r[3] = 0x0u;
    goto L_010ec5a0;
L_010ec59c:
    ea = c.r[3] + 0xacu;
    c.r[3] = wp::rd32(ea);
L_010ec5a0:
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

void f_mr031_010ec5c0(wp::Cpu& c) {
    WP_ENTER(0x10ec5c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ec63cu: goto R_010ec63c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30838u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30838u) & 0xFFFFu);
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
    goto L_010ec624;
L_010ec620:
    c.r[30] = c.r[30] + 0x4u;
L_010ec624:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ec648;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ec63cu;
    f_801c8244(c);
R_010ec63c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ec620;
    }
L_010ec648:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec668;
    c.r[3] = 0x0u;
    goto L_010ec66c;
L_010ec668:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ec66c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ec67c;
    c.r[3] = 0x0u;
    goto L_010ec680;
L_010ec67c:
    ea = c.r[3] + 0xbcu;
    c.r[3] = wp::rd8(ea);
L_010ec680:
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

void f_mr031_010ec6a0(wp::Cpu& c) {
    WP_ENTER(0x10ec6a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ec71cu: goto R_010ec71c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30844u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30844u) & 0xFFFFu);
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
    goto L_010ec704;
L_010ec700:
    c.r[30] = c.r[30] + 0x4u;
L_010ec704:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ec728;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ec71cu;
    f_801c8244(c);
R_010ec71c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ec700;
    }
L_010ec728:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec748;
    c.r[3] = 0x0u;
    goto L_010ec74c;
L_010ec748:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ec74c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ec75c;
    c.r[3] = 0x0u;
    goto L_010ec760;
L_010ec75c:
    ea = c.r[3] + 0xbdu;
    c.r[3] = wp::rd8(ea);
L_010ec760:
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

void f_mr031_010ec780(wp::Cpu& c) {
    WP_ENTER(0x10ec780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ec794u: goto R_010ec794;
        case 0x10ec7fcu: goto R_010ec7fc;
        case 0x10ec850u: goto R_010ec850;
        case 0x10ec858u: goto R_010ec858;
        case 0x10ec870u: goto R_010ec870;
        case 0x10ec88cu: goto R_010ec88c;
        case 0x10ec8a4u: goto R_010ec8a4;
        case 0x10ec8b8u: goto R_010ec8b8;
        case 0x10ec8c0u: goto R_010ec8c0;
        case 0x10ec8d0u: goto R_010ec8d0;
        case 0x10ec8e8u: goto R_010ec8e8;
        case 0x10ec8f8u: goto R_010ec8f8;
        case 0x10ec908u: goto R_010ec908;
        case 0x10ec918u: goto R_010ec918;
        case 0x10ec930u: goto R_010ec930;
        case 0x10ec940u: goto R_010ec940;
        case 0x10ec9f8u: goto R_010ec9f8;
        case 0x10eca10u: goto R_010eca10;
        case 0x10eca3cu: goto R_010eca3c;
        case 0x10eca54u: goto R_010eca54;
        case 0x10ecbccu: goto R_010ecbcc;
        case 0x10ecbd8u: goto R_010ecbd8;
        case 0x10ecc34u: goto R_010ecc34;
        case 0x10ecc38u: goto R_010ecc38;
        case 0x10ecc98u: goto R_010ecc98;
        case 0x10ecc9cu: goto R_010ecc9c;
        case 0x10ecd5cu: goto R_010ecd5c;
        case 0x10ecd60u: goto R_010ecd60;
        case 0x10ecd68u: goto R_010ecd68;
        case 0x10ecd90u: goto R_010ecd90;
        case 0x10ecd94u: goto R_010ecd94;
        case 0x10ece08u: goto R_010ece08;
        case 0x10ece18u: goto R_010ece18;
        case 0x10ece74u: goto R_010ece74;
        case 0x10ece90u: goto R_010ece90;
        case 0x10ece9cu: goto R_010ece9c;
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
    c.lr = 0x10ec794u;
    f_801c83b4(c);
R_010ec794:
    c.r[5] = ((((g_mr031_bases[5] + 0x30850u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30850u) & 0xFFFFu);
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
    goto L_010ec7e4;
L_010ec7e0:
    c.r[27] = c.r[27] + 0x4u;
L_010ec7e4:
    wp::compare_unsigned(c, 0, c.r[27], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010ec808;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ec7fcu;
    f_801c8244(c);
R_010ec7fc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ec7e0;
    }
L_010ec808:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ec828;
    c.r[3] = 0x0u;
    goto L_010ec82c;
L_010ec828:
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ec82c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ec838;
    goto L_010ece94;
L_010ec838:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ec850u;
    wp::call(c, c.ctr);
R_010ec850:
    c.r[3] = 0xf0u;
    c.lr = 0x10ec858u;
    f_801c79a4(c);
R_010ec858:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010ec874;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.lr = 0x10ec870u;
    f_mr031_010ee920(c);
R_010ec870:
    c.r[30] = c.r[3] | c.r[3];
L_010ec874:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ec88cu;
    wp::call(c, c.ctr);
R_010ec88c:
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
    c.lr = 0x10ec8a4u;
    f_80042130(c);
R_010ec8a4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x70u;
    ea = c.r[12] + 0x4cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ec8b8u;
    wp::call(c, c.ctr);
R_010ec8b8:
    c.r[3] = 0x104u;
    c.lr = 0x10ec8c0u;
    f_801c79a4(c);
R_010ec8c0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010ec8fc;
    c.lr = 0x10ec8d0u;
    f_80042130(c);
R_010ec8d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ec8e8u;
    wp::call(c, c.ctr);
R_010ec8e8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x10ec8f8u;
    f_8012b8d0(c);
R_010ec8f8:
    c.r[27] = c.r[3] | c.r[3];
L_010ec8fc:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = 0x10cu;
    c.lr = 0x10ec908u;
    f_801c79a4(c);
R_010ec908:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010ec960;
    c.lr = 0x10ec918u;
    f_80042130(c);
R_010ec918:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ec930u;
    wp::call(c, c.ctr);
R_010ec930:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x10ec940u;
    f_8012b8d0(c);
R_010ec940:
    c.r[4] = ((((g_mr031_bases[5] + 0x31a20u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr031_bases[4] + 0x4208u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31a20u) & 0xFFFFu);
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4208u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[27] + 0x108u;
    wp::wr32(ea, c.r[0]);
L_010ec960:
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = ((((g_mr031_bases[4] + 0x420cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x420cu) & 0xFFFFu);
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
    c.lr = 0x10ec9f8u;
    wp::call(c, c.ctr);
R_010ec9f8:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x40u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eca10u;
    wp::call(c, c.ctr);
R_010eca10:
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
    c.lr = 0x10eca3cu;
    wp::call(c, c.ctr);
R_010eca3c:
    ea = c.r[30] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0xd0u;
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eca54u;
    wp::call(c, c.ctr);
R_010eca54:
    c.r[4] = ((((g_mr031_bases[4] + 0x4204u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x55550000u;
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x4204u) & 0xFFFFu);
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
    c.lr = 0x10ecbccu;
    f_80129080(c);
R_010ecbcc:
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10ecbd8u;
    f_80129080(c);
R_010ecbd8:
    ea = c.r[28] + 0x118u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x11cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010ecc04;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    goto L_010ece74;
L_010ecc04:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010ecc38;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x3085cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3085cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ecc34u;
    f_801cee24(c);
R_010ecc34:
    c.lr = 0x10ecc38u;
    f_801d3940(c);
L_010ecc38:
R_010ecc38:
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
    if (!wp::cr_get(c, 1)) goto L_010ecc9c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x3085cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3085cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ecc98u;
    f_801cee24(c);
R_010ecc98:
    c.lr = 0x10ecc9cu;
    f_801d3940(c);
L_010ecc9c:
R_010ecc9c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010eccec;
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
    if (!wp::cr_get(c, 0)) goto L_010ecce0;
    c.r[3] = c.r[1] + 0x8u;
L_010ecce0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010ecd30;
L_010eccec:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010ecd28;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010ecd1c;
    c.r[3] = c.r[1] + 0x8u;
L_010ecd1c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010ecd30;
L_010ecd28:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010ecd30:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010ecd60;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x3085cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3085cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ecd5cu;
    f_801cee24(c);
R_010ecd5c:
    c.lr = 0x10ecd60u;
    f_801d3940(c);
L_010ecd60:
R_010ecd60:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x10ecd68u;
    f_801c79a4(c);
R_010ecd68:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010ecd94;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0xb74u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0xb74u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10ecd90u;
    f_801cee24(c);
R_010ecd90:
    c.lr = 0x10ecd94u;
    f_801d3940(c);
L_010ecd94:
R_010ecd94:
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
    c.lr = 0x10ece08u;
    f_800043c4(c);
R_010ece08:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.lr = 0x10ece18u;
    f_80004714(c);
R_010ece18:
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
    if (wp::cr_get(c, 2)) goto L_010ece74;
    ea = c.r[1] + 0x80u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ece74;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10ece74u;
    f_801c7a8c(c);
L_010ece74:
R_010ece74:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x19cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ece90u;
    wp::call(c, c.ctr);
R_010ece90:
    c.r[3] = c.r[30] | c.r[30];
L_010ece94:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x10ece9cu;
    f_801c8400(c);
R_010ece9c:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr031_010eceb0(wp::Cpu& c) {
    WP_ENTER(0x10eceb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr031_010ecec0(wp::Cpu& c) {
    WP_ENTER(0x10ecec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr031_010eced0(wp::Cpu& c) {
    WP_ENTER(0x10eced0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ecf54u: goto R_010ecf54;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr031_bases[5] + 0x3087cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x3087cu) & 0xFFFFu);
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
    goto L_010ecf3c;
L_010ecf38:
    c.r[30] = c.r[30] + 0x4u;
L_010ecf3c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ecf60;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ecf54u;
    f_801c8244(c);
R_010ecf54:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ecf38;
    }
L_010ecf60:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ecf80;
    c.r[3] = 0x0u;
    goto L_010ecf84;
L_010ecf80:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ecf84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ecfc4;
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
L_010ecfc4:
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

void f_mr031_010ecff0(wp::Cpu& c) {
    WP_ENTER(0x10ecff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed018u: goto R_010ed018;
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
    c.lr = 0x10ed018u;
    wp::call(c, c.ctr);
R_010ed018:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010ed030(wp::Cpu& c) {
    WP_ENTER(0x10ed030u);
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

void f_mr031_010ed050(wp::Cpu& c) {
    WP_ENTER(0x10ed050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[8] = ((((g_mr031_bases[6] + 0x5e18u) + 0x8000u) >> 16) << 16);
    c.r[9] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[6] + 0x5e18u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ed0c0;
    c.r[7] = ((((g_mr031_bases[6] + 0x5e20u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x38u;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    c.r[6] = c.r[7] + wp::sign_extend16((g_mr031_bases[6] + 0x5e20u) & 0xFFFFu);
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
    ea = c.r[7] + wp::sign_extend16((g_mr031_bases[6] + 0x5e20u) & 0xFFFFu);
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
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[6] + 0x5e18u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_010ed0c0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr031_bases[6] + 0x5e20u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[12] + 0x190u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr031_bases[6] + 0x5e20u) & 0xFFFFu);
    c.r[5] = c.r[6] + c.r[0];
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr031_010ed0e0(wp::Cpu& c) {
    WP_ENTER(0x10ed0e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed164u: goto R_010ed164;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30888u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30888u) & 0xFFFFu);
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
    goto L_010ed14c;
L_010ed148:
    c.r[30] = c.r[30] + 0x4u;
L_010ed14c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ed170;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ed164u;
    f_801c8244(c);
R_010ed164:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ed148;
    }
L_010ed170:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ed190;
    c.r[4] = 0x0u;
    goto L_010ed194;
L_010ed190:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_010ed194:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ed1b0;
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
L_010ed1b0:
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

void f_mr031_010ed1d0(wp::Cpu& c) {
    WP_ENTER(0x10ed1d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed254u: goto R_010ed254;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30894u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30894u) & 0xFFFFu);
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
    goto L_010ed23c;
L_010ed238:
    c.r[30] = c.r[30] + 0x4u;
L_010ed23c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ed260;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ed254u;
    f_801c8244(c);
R_010ed254:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ed238;
    }
L_010ed260:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ed280;
    c.r[4] = 0x0u;
    goto L_010ed284;
L_010ed280:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_010ed284:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ed2a0;
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
L_010ed2a0:
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

void f_mr031_010ed2c0(wp::Cpu& c) {
    WP_ENTER(0x10ed2c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed344u: goto R_010ed344;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr031_bases[5] + 0x308a0u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x308a0u) & 0xFFFFu);
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
    goto L_010ed32c;
L_010ed328:
    c.r[29] = c.r[29] + 0x4u;
L_010ed32c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010ed350;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ed344u;
    f_801c8244(c);
R_010ed344:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ed328;
    }
L_010ed350:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ed370;
    c.r[5] = 0x0u;
    goto L_010ed374;
L_010ed370:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010ed374:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ed3d4;
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
L_010ed3d4:
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

void f_mr031_010ed400(wp::Cpu& c) {
    WP_ENTER(0x10ed400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed484u: goto R_010ed484;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr031_bases[5] + 0x308acu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x308acu) & 0xFFFFu);
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
    goto L_010ed46c;
L_010ed468:
    c.r[29] = c.r[29] + 0x4u;
L_010ed46c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010ed490;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ed484u;
    f_801c8244(c);
R_010ed484:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ed468;
    }
L_010ed490:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ed4b0;
    c.r[6] = 0x0u;
    goto L_010ed4b4;
L_010ed4b0:
    ea = c.r[29] + 0x0u;
    c.r[6] = wp::rd32(ea);
L_010ed4b4:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ed51c;
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
L_010ed51c:
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

void f_mr031_010ed540(wp::Cpu& c) {
    WP_ENTER(0x10ed540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed580u: goto R_010ed580;
        case 0x10ed59cu: goto R_010ed59c;
        case 0x10ed5b4u: goto R_010ed5b4;
        case 0x10ed5d8u: goto R_010ed5d8;
        case 0x10ed5fcu: goto R_010ed5fc;
        case 0x10ed61cu: goto R_010ed61c;
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
    if (!wp::cr_get(c, 0)) goto L_010ed584;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ed580u;
    wp::call(c, c.ctr);
R_010ed580:
    goto L_010ed5b4;
L_010ed584:
    if (!wp::cr_get(c, 2)) goto L_010ed5a0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ed59cu;
    wp::call(c, c.ctr);
R_010ed59c:
    goto L_010ed5b4;
L_010ed5a0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ed5b4u;
    wp::call(c, c.ctr);
L_010ed5b4:
R_010ed5b4:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010ed5dc;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ed5d8u;
    wp::call(c, c.ctr);
R_010ed5d8:
    goto L_010ed61c;
L_010ed5dc:
    if (!wp::cr_get(c, 2)) goto L_010ed600;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ed5fcu;
    wp::call(c, c.ctr);
R_010ed5fc:
    goto L_010ed61c;
L_010ed600:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ed61cu;
    wp::call(c, c.ctr);
L_010ed61c:
R_010ed61c:
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

void f_mr031_010ed640(wp::Cpu& c) {
    WP_ENTER(0x10ed640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed670u: goto R_010ed670;
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
    c.lr = 0x10ed670u;
    wp::call(c, c.ctr);
R_010ed670:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010ed680(wp::Cpu& c) {
    WP_ENTER(0x10ed680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed694u: goto R_010ed694;
        case 0x10ed700u: goto R_010ed700;
        case 0x10ed85cu: goto R_010ed85c;
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
    c.lr = 0x10ed694u;
    f_801c83b8(c);
R_010ed694:
    c.r[9] = ((((g_mr031_bases[5] + 0x308b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mr031_bases[5] + 0x308b8u) & 0xFFFFu);
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
    goto L_010ed6e8;
L_010ed6e4:
    c.r[29] = c.r[29] + 0x4u;
L_010ed6e8:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010ed70c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ed700u;
    f_801c8244(c);
R_010ed700:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ed6e4;
    }
L_010ed70c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ed72c;
    c.r[5] = 0x0u;
    goto L_010ed730;
L_010ed72c:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010ed730:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ed854;
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
    if (wp::cr_get(c, 0)) goto L_010ed804;
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_010ed804;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_010ed804;
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
    goto L_010ed854;
L_010ed804:
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
L_010ed854:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x10ed85cu;
    f_801c8404(c);
R_010ed85c:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr031_010ed870(wp::Cpu& c) {
    WP_ENTER(0x10ed870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed8b0u: goto R_010ed8b0;
        case 0x10ed8d4u: goto R_010ed8d4;
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
    c.lr = 0x10ed8b0u;
    wp::call(c, c.ctr);
R_010ed8b0:
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
    c.lr = 0x10ed8d4u;
    wp::call(c, c.ctr);
R_010ed8d4:
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

void f_mr031_010ed8f0(wp::Cpu& c) {
    WP_ENTER(0x10ed8f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed924u: goto R_010ed924;
        case 0x10ed948u: goto R_010ed948;
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
    c.lr = 0x10ed924u;
    wp::call(c, c.ctr);
R_010ed924:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ed948;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ed948u;
    wp::call(c, c.ctr);
L_010ed948:
R_010ed948:
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

void f_mr031_010ed970(wp::Cpu& c) {
    WP_ENTER(0x10ed970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ed9a4u: goto R_010ed9a4;
        case 0x10ed9ccu: goto R_010ed9cc;
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
    c.lr = 0x10ed9a4u;
    wp::call(c, c.ctr);
R_010ed9a4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr031_bases[4] + 0x41fcu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr031_bases[4] + 0x4200u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr031_bases[4] + 0x41fcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x4200u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10ed9ccu;
    wp::call(c, c.ctr);
R_010ed9cc:
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

void f_mr031_010ed9f0(wp::Cpu& c) {
    WP_ENTER(0x10ed9f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eda1cu: goto R_010eda1c;
        case 0x10eda88u: goto R_010eda88;
        case 0x10edb10u: goto R_010edb10;
        case 0x10edb78u: goto R_010edb78;
        case 0x10edc1cu: goto R_010edc1c;
        case 0x10edc60u: goto R_010edc60;
        case 0x10edca0u: goto R_010edca0;
        case 0x10edcccu: goto R_010edccc;
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
    c.lr = 0x10eda1cu;
    f_801c83b8(c);
R_010eda1c:
    c.r[8] = ((((g_mr031_bases[5] + 0x308c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x308c4u) & 0xFFFFu);
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
    goto L_010eda70;
L_010eda6c:
    c.r[27] = c.r[27] + 0x4u;
L_010eda70:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010eda94;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10eda88u;
    f_801c8244(c);
R_010eda88:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010eda6c;
    }
L_010eda94:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010edab4;
    c.r[28] = 0x0u;
    goto L_010edab8;
L_010edab4:
    ea = c.r[27] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_010edab8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[27] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_010edacc;
    c.r[3] = 0x0u;
    goto L_010edcac;
L_010edacc:
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
    c.lr = 0x10edb10u;
    wp::call(c, c.ctr);
R_010edb10:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[1] + 0x18u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x1cu;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    if (!wp::cr_get(c, 2)) goto L_010edb7c;
    c.r[3] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_010edb50;
    c.f[2] = wp::round_single(c.f[0] / c.f[5]);
    c.ps1[2] = c.f[2];
L_010edb50:
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
    c.lr = 0x10edb78u;
    wp::call(c, c.ctr);
R_010edb78:
    goto L_010edc1c;
L_010edb7c:
    c.r[3] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_010edbac;
    goto L_010edbb0;
L_010edbac:
    c.f[3] = c.f[2];
L_010edbb0:
    c.r[3] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[0], c.f[2]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_010edbc8;
    goto L_010edbcc;
L_010edbc8:
    c.f[2] = c.f[0];
L_010edbcc:
    wp::compare_float(c, 0, c.f[2], c.f[3]);
    if (!wp::cr_get(c, 1)) goto L_010edbd8;
    c.f[2] = c.f[3];
L_010edbd8:
    c.r[3] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (wp::cr_get(c, 0)) goto L_010edbf0;
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_010edbf4;
L_010edbf0:
    c.r[27] = 0x1u;
L_010edbf4:
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
    c.lr = 0x10edc1cu;
    wp::call(c, c.ctr);
L_010edc1c:
R_010edc1c:
    c.r[4] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr031_bases[4] + 0x4238u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[1] + 0x28u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4238u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
L_010edc30:
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
    c.lr = 0x10edc60u;
    wp::call(c, c.ctr);
R_010edc60:
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[30]);
    c.r[0] = wp::mfcr(c);
    c.r[0] = wp::rotl(c.r[0], 2) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010edca8;
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
    c.lr = 0x10edca0u;
    wp::call(c, c.ctr);
R_010edca0:
    c.r[27] = 0x1u;
    WP_POLL(c);
    goto L_010edc30;
L_010edca8:
    c.r[3] = c.r[27] | c.r[27];
L_010edcac:
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
    c.lr = 0x10edcccu;
    f_801c8404(c);
R_010edccc:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010edce0(wp::Cpu& c) {
    WP_ENTER(0x10edce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10edcf4u: goto R_010edcf4;
        case 0x10edd64u: goto R_010edd64;
        case 0x10ede70u: goto R_010ede70;
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
    c.lr = 0x10edcf4u;
    f_801c83b4(c);
R_010edcf4:
    c.r[10] = ((((g_mr031_bases[5] + 0x308d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[10] + wp::sign_extend16((g_mr031_bases[5] + 0x308d0u) & 0xFFFFu);
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
    goto L_010edd4c;
L_010edd48:
    c.r[27] = c.r[27] + 0x4u;
L_010edd4c:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010edd70;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10edd64u;
    f_801c8244(c);
R_010edd64:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010edd48;
    }
L_010edd70:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010edd90;
    c.r[5] = 0x0u;
    goto L_010edd94;
L_010edd90:
    ea = c.r[27] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010edd94:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010ede68;
    ea = c.r[5] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010eddbc;
    goto L_010ede68;
L_010eddbc:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_010ede44;
L_010eddd8:
    wp::compare_unsigned(c, 0, c.r[0], 0xbu);
    if (!wp::cr_get(c, 2)) goto L_010edde8;
    c.r[7] = c.r[7] + 0x3u;
    goto L_010ede44;
L_010edde8:
    wp::compare_unsigned(c, 0, c.r[0], 0xcu);
    if (!wp::cr_get(c, 2)) goto L_010ede10;
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
    goto L_010ede40;
L_010ede10:
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_010ede3c;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010ede34;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_010ede34:
    c.r[8] = 0x0u;
    goto L_010ede40;
L_010ede3c:
    c.r[8] = c.r[8] + 0x1u;
L_010ede40:
    c.r[7] = c.r[7] + 0x1u;
L_010ede44:
    ea = c.r[5] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[6];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010eddd8;
    }
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010ede68;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_010ede68:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x10ede70u;
    f_801c8400(c);
R_010ede70:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr031_010ede80(wp::Cpu& c) {
    WP_ENTER(0x10ede80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ede94u: goto R_010ede94;
        case 0x10edf08u: goto R_010edf08;
        case 0x10edf4cu: goto R_010edf4c;
        case 0x10edfb8u: goto R_010edfb8;
        case 0x10ee004u: goto R_010ee004;
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
    c.lr = 0x10ede94u;
    f_801c83b4(c);
R_010ede94:
    c.r[9] = ((((g_mr031_bases[5] + 0x308dcu) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mr031_bases[5] + 0x308dcu) & 0xFFFFu);
    c.r[8] = wp::rd32(ea);
    c.r[9] = ea;
    c.r[27] = c.r[5] | c.r[5];
    c.r[30] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[9] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
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
    goto L_010edef0;
L_010edeec:
    c.r[29] = c.r[29] + 0x4u;
L_010edef0:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010edf14;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10edf08u;
    f_801c8244(c);
R_010edf08:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010edeec;
    }
L_010edf14:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010edf34;
    c.r[31] = 0x0u;
    goto L_010edf38;
L_010edf34:
    ea = c.r[29] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010edf38:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010edf80;
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x10edf4cu;
    f_8012be00(c);
R_010edf4c:
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
    goto L_010edffc;
L_010edf80:
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
    c.lr = 0x10edfb8u;
    f_8012be00(c);
R_010edfb8:
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
L_010edffc:
    c.r[11] = c.r[1] + 0x70u;
    c.lr = 0x10ee004u;
    f_801c8400(c);
R_010ee004:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mr031_010ee020(wp::Cpu& c) {
    WP_ENTER(0x10ee020u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee034u: goto R_010ee034;
        case 0x10ee0a0u: goto R_010ee0a0;
        case 0x10ee0e8u: goto R_010ee0e8;
        case 0x10ee118u: goto R_010ee118;
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
    c.lr = 0x10ee034u;
    f_801c83b8(c);
R_010ee034:
    c.r[8] = ((((g_mr031_bases[5] + 0x308e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x308e8u) & 0xFFFFu);
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
    goto L_010ee088;
L_010ee084:
    c.r[30] = c.r[30] + 0x4u;
L_010ee088:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ee0ac;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ee0a0u;
    f_801c8244(c);
R_010ee0a0:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee084;
    }
L_010ee0ac:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ee0cc;
    c.r[31] = 0x0u;
    goto L_010ee0d0;
L_010ee0cc:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010ee0d0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ee0e8u;
    wp::call(c, c.ctr);
R_010ee0e8:
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
    c.lr = 0x10ee118u;
    f_801c8404(c);
R_010ee118:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr031_010ee130(wp::Cpu& c) {
    WP_ENTER(0x10ee130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee1b4u: goto R_010ee1b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr031_bases[5] + 0x308f4u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x308f4u) & 0xFFFFu);
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
    goto L_010ee19c;
L_010ee198:
    c.r[30] = c.r[30] + 0x4u;
L_010ee19c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ee1c0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ee1b4u;
    f_801c8244(c);
R_010ee1b4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee198;
    }
L_010ee1c0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ee1e0;
    c.r[3] = 0x0u;
    goto L_010ee1e4;
L_010ee1e0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ee1e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ee204;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[29] & 0xffu;
    ea = c.r[4] + 0xbbu;
    c.r[3] = wp::rd8(ea);
    c.r[3] = c.r[3] & 0xfeu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0xbbu;
    wp::wr8(ea, c.r[0]);
L_010ee204:
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

void f_mr031_010ee230(wp::Cpu& c) {
    WP_ENTER(0x10ee230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee2b4u: goto R_010ee2b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr031_bases[5] + 0x30900u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x30900u) & 0xFFFFu);
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
    goto L_010ee29c;
L_010ee298:
    c.r[30] = c.r[30] + 0x4u;
L_010ee29c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ee2c0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ee2b4u;
    f_801c8244(c);
R_010ee2b4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee298;
    }
L_010ee2c0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ee2e0;
    c.r[4] = 0x0u;
    goto L_010ee2e4;
L_010ee2e0:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_010ee2e4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ee33c;
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
L_010ee33c:
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

void f_mr031_010ee360(wp::Cpu& c) {
    WP_ENTER(0x10ee360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee3e4u: goto R_010ee3e4;
        case 0x10ee434u: goto R_010ee434;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x3090cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x3090cu) & 0xFFFFu);
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
    goto L_010ee3cc;
L_010ee3c8:
    c.r[30] = c.r[30] + 0x4u;
L_010ee3cc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ee3f0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ee3e4u;
    f_801c8244(c);
R_010ee3e4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee3c8;
    }
L_010ee3f0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ee410;
    c.r[3] = 0x0u;
    goto L_010ee414;
L_010ee410:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ee414:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ee434;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.f[1] = c.f[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x84u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ee434u;
    wp::call(c, c.ctr);
L_010ee434:
R_010ee434:
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

void f_mr031_010ee460(wp::Cpu& c) {
    WP_ENTER(0x10ee460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr031_010ee470(wp::Cpu& c) {
    WP_ENTER(0x10ee470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee4f4u: goto R_010ee4f4;
        case 0x10ee54cu: goto R_010ee54c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr031_bases[5] + 0x30918u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr031_bases[5] + 0x30918u) & 0xFFFFu);
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
    goto L_010ee4dc;
L_010ee4d8:
    c.r[30] = c.r[30] + 0x4u;
L_010ee4dc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ee500;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ee4f4u;
    f_801c8244(c);
R_010ee4f4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee4d8;
    }
L_010ee500:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ee520;
    c.r[3] = 0x0u;
    goto L_010ee524;
L_010ee520:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010ee524:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ee54c;
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
    c.lr = 0x10ee54cu;
    wp::call(c, c.ctr);
L_010ee54c:
R_010ee54c:
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

void f_mr031_010ee570(wp::Cpu& c) {
    WP_ENTER(0x10ee570u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x108u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr031_010ee580(wp::Cpu& c) {
    WP_ENTER(0x10ee580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee5bcu: goto R_010ee5bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = c.r[4] ^ 0x80000000u;
    c.r[4] = ((((g_mr031_bases[4] + 0x4248u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x4248u) & 0xFFFFu);
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mr031_bases[4] + 0x4244u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4244u) & 0xFFFFu);
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
    c.lr = 0x10ee5bcu;
    f_80071fe0(c);
R_010ee5bc:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010ee5d0(wp::Cpu& c) {
    WP_ENTER(0x10ee5d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee64cu: goto R_010ee64c;
        case 0x10ee6a4u: goto R_010ee6a4;
        case 0x10ee6c8u: goto R_010ee6c8;
        case 0x10ee6d8u: goto R_010ee6d8;
        case 0x10ee6ecu: goto R_010ee6ec;
        case 0x10ee6fcu: goto R_010ee6fc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30924u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30924u) & 0xFFFFu);
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
    goto L_010ee634;
L_010ee630:
    c.r[30] = c.r[30] + 0x4u;
L_010ee634:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ee658;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ee64cu;
    f_801c8244(c);
R_010ee64c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee630;
    }
L_010ee658:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ee678;
    c.r[31] = 0x0u;
    goto L_010ee67c;
L_010ee678:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010ee67c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ee68c;
    c.r[3] = 0x0u;
    goto L_010ee748;
L_010ee68c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x64u;
    ea = c.r[12] + 0x1e8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ee6a4u;
    wp::call(c, c.ctr);
R_010ee6a4:
    ea = c.r[31] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x51ec0000u;
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] * c.r[3];
    c.r[3] = c.r[4] + 0xffff851fu;
    c.r[0] = wp::mulhwu(c.r[3], c.r[0]);
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x10ee6c8u;
    f_80071fe0(c);
R_010ee6c8:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_010ee6e0;
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10ee6d8u;
    f_80071fe0(c);
R_010ee6d8:
    c.r[30] = c.r[3] | c.r[3];
    goto L_010ee700;
L_010ee6e0:
    c.r[31] = ((((g_mr031_bases[4] + 0x4254u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4254u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10ee6ecu;
    f_80071fe0(c);
R_010ee6ec:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010ee700;
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4254u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10ee6fcu;
    f_80071fe0(c);
R_010ee6fc:
    c.r[30] = c.r[3] | c.r[3];
L_010ee700:
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
    if (!wp::cr_get(c, 0)) goto L_010ee738;
    c.r[30] = c.r[0] | c.r[0];
    goto L_010ee744;
L_010ee738:
    wp::compare_signed(c, 0, c.r[30], 0x190u);
    if (!wp::cr_get(c, 1)) goto L_010ee744;
    c.r[30] = 0x190u;
L_010ee744:
    c.r[3] = c.r[30] | c.r[30];
L_010ee748:
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

void f_mr031_010ee770(wp::Cpu& c) {
    WP_ENTER(0x10ee770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee7ecu: goto R_010ee7ec;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x30930u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30930u) & 0xFFFFu);
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
    goto L_010ee7d4;
L_010ee7d0:
    c.r[30] = c.r[30] + 0x4u;
L_010ee7d4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010ee7f8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10ee7ecu;
    f_801c8244(c);
R_010ee7ec:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee7d0;
    }
L_010ee7f8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010ee818;
    c.r[5] = 0x0u;
    goto L_010ee81c;
L_010ee818:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010ee81c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ee82c;
    c.r[3] = 0x0u;
    goto L_010ee874;
L_010ee82c:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[9] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = c.r[3] | c.r[3];
    goto L_010ee85c;
L_010ee840:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[6] = c.r[6] + 0x2u;
    c.r[0] = c.r[8] + c.r[0];
    c.r[9] = c.r[9] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_010ee85c:
    wp::compare_unsigned(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_010ee874;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[6];
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ee840;
    }
L_010ee874:
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

void f_mr031_010ee890(wp::Cpu& c) {
    WP_ENTER(0x10ee890u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee8c0u: goto R_010ee8c0;
        case 0x10ee8dcu: goto R_010ee8dc;
        case 0x10ee8e4u: goto R_010ee8e4;
        case 0x10ee8fcu: goto R_010ee8fc;
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
    c.lr = 0x10ee8c0u;
    wp::call(c, c.ctr);
R_010ee8c0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1f0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ee8dcu;
    wp::call(c, c.ctr);
R_010ee8dc:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10ee8e4u;
    f_80019f20(c);
R_010ee8e4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1ecu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ee8fcu;
    wp::call(c, c.ctr);
R_010ee8fc:
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

void f_mr031_010ee920(wp::Cpu& c) {
    WP_ENTER(0x10ee920u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ee934u: goto R_010ee934;
        case 0x10ee954u: goto R_010ee954;
        case 0x10ee960u: goto R_010ee960;
        case 0x10ee97cu: goto R_010ee97c;
        case 0x10eea44u: goto R_010eea44;
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
    c.lr = 0x10ee934u;
    f_801c83b8(c);
R_010ee934:
    c.r[30] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0xd0u;
    c.lr = 0x10ee954u;
    f_mr031_010f5350(c);
R_010ee954:
    c.r[3] = c.r[27] + 0xe0u;
    c.r[4] = 0x0u;
    c.lr = 0x10ee960u;
    f_mr031_010f5350(c);
R_010ee960:
    c.r[31] = 0x0u;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + 0xcu;
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x10ee97cu;
    f_801cf394(c);
R_010ee97c:
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
    c.lr = 0x10eea44u;
    f_801c8404(c);
R_010eea44:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010eea60(wp::Cpu& c) {
    WP_ENTER(0x10eea60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eea9cu: goto R_010eea9c;
        case 0x10eeaacu: goto R_010eeaac;
        case 0x10eead0u: goto R_010eead0;
        case 0x10eeaf4u: goto R_010eeaf4;
        case 0x10eeb10u: goto R_010eeb10;
        case 0x10eeb2cu: goto R_010eeb2c;
        case 0x10eeb38u: goto R_010eeb38;
        case 0x10eeb48u: goto R_010eeb48;
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
    if (wp::cr_get(c, 2)) goto L_010eeb48;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eea9c;
    c.lr = 0x10eea9cu;
    f_80048f30(c);
L_010eea9c:
R_010eea9c:
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eeaac;
    c.lr = 0x10eeaacu;
    f_80048f30(c);
L_010eeaac:
R_010eeaac:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eead0;
    if (wp::cr_get(c, 2)) goto L_010eead0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eead0u;
    wp::call(c, c.ctr);
L_010eead0:
R_010eead0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eeaf4;
    if (wp::cr_get(c, 2)) goto L_010eeaf4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eeaf4u;
    wp::call(c, c.ctr);
L_010eeaf4:
R_010eeaf4:
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
L_010eeafc:
    c.r[3] = c.r[28] + c.r[31];
    ea = c.r[3] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eeb10;
    c.lr = 0x10eeb10u;
    f_80048f30(c);
L_010eeb10:
R_010eeb10:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0xau);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010eeafc;
    }
    c.r[3] = c.r[28] + 0xe0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10eeb2cu;
    f_mr031_010f53b0(c);
R_010eeb2c:
    c.r[3] = c.r[28] + 0xd0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10eeb38u;
    f_mr031_010f53b0(c);
R_010eeb38:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010eeb48;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10eeb48u;
    f_801c7a8c(c);
L_010eeb48:
R_010eeb48:
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

void f_mr031_010eeb70(wp::Cpu& c) {
    WP_ENTER(0x10eeb70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eeb9cu: goto R_010eeb9c;
        case 0x10eebacu: goto R_010eebac;
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
    if (wp::cr_get(c, 2)) goto L_010eebac;
    c.r[4] = 0x0u;
    c.lr = 0x10eeb9cu;
    f_8012bbc0(c);
R_010eeb9c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010eebac;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10eebacu;
    f_801c7a8c(c);
L_010eebac:
R_010eebac:
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

void f_mr031_010eebd0(wp::Cpu& c) {
    WP_ENTER(0x10eebd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eec08u: goto R_010eec08;
        case 0x10eec40u: goto R_010eec40;
        case 0x10eedf4u: goto R_010eedf4;
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
    if (wp::cr_get(c, 2)) goto L_010eec08;
    c.r[3] = c.r[0] | c.r[0];
    c.lr = 0x10eec08u;
    f_80048f30(c);
L_010eec08:
R_010eec08:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[31] = 0x0u;
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010eedf4;
    c.r[30] = 0x0u;
    goto L_010eec28;
L_010eec20:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x2u;
L_010eec28:
    ea = c.r[29] + c.r[31];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010eec20;
    }
    c.r[0] = c.r[30] + 0x1u;
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x10eec40u;
    f_80048ec0(c);
R_010eec40:
    wp::compare_signed(c, 1, c.r[30], 0x0u);
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 5)) goto L_010eed58;
    wp::compare_signed(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010eed28;
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010eec78;
    c.r[3] = 0x80000000u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010eec78;
    c.r[4] = 0x1u;
L_010eec78:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eed28;
    c.r[0] = c.r[6] + 0x7u;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = 0x0u;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010eed28;
L_010eec9c:
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
    goto L_010eec9c;
    }
L_010eed28:
    c.r[6] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    c.r[0] = c.r[30] - c.r[5];
    c.r[4] = c.r[29] + c.r[6];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010eed58;
L_010eed40:
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
    goto L_010eed40;
    }
L_010eed58:
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
    if (!wp::cr_get(c, 1)) goto L_010eede8;
    c.r[0] = c.r[0] | 0x0u;
L_010eed90:
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[6];
    ea = c.r[6] + c.r[0];
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5bu);
    if (!wp::cr_get(c, 2)) goto L_010eeddc;
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x77u);
    if (!wp::cr_get(c, 2)) goto L_010eeddc;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5du);
    if (!wp::cr_get(c, 2)) goto L_010eeddc;
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
L_010eeddc:
    c.r[6] = c.r[6] + 0x2u;
    c.r[7] = c.r[7] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010eed90;
    }
L_010eede8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x10eedf4u;
    f_mr031_010eee20(c);
L_010eedf4:
R_010eedf4:
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

void f_mr031_010eee20(wp::Cpu& c) {
    WP_ENTER(0x10eee20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10eee34u: goto R_010eee34;
        case 0x10eef00u: goto R_010eef00;
        case 0x10eef08u: goto R_010eef08;
        case 0x10eef18u: goto R_010eef18;
        case 0x10eef30u: goto R_010eef30;
        case 0x10eef48u: goto R_010eef48;
        case 0x10efa94u: goto R_010efa94;
        case 0x10efab0u: goto R_010efab0;
        case 0x10efab8u: goto R_010efab8;
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
    c.lr = 0x10eee34u;
    f_801c8384(c);
R_010eee34:
    c.r[31] = 0x0u;
    ea = c.r[3] + 0xbdu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[3] + 0xa0u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = ((((g_mr031_bases[5] + 0x307c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0xbcu;
    wp::wr8(ea, c.r[31]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = c.r[5] + 0x1u;
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xa4u;
    wp::wr32(ea, c.r[31]);
    c.r[14] = c.r[0] & 0xffffu;
    c.r[16] = c.r[16] + wp::sign_extend16((g_mr031_bases[5] + 0x307c8u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 0)) goto L_010eeeec;
    c.r[14] = 0x40u;
L_010eeeec:
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[15] = wp::rotl(c.r[14], 1) & 0x1fffeu;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eef00;
    c.lr = 0x10eef00u;
    f_80048f30(c);
L_010eef00:
R_010eef00:
    c.r[3] = c.r[15] | c.r[15];
    c.lr = 0x10eef08u;
    f_80048ec0(c);
R_010eef08:
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x10eef18u;
    f_80004714(c);
R_010eef18:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eef30u;
    wp::call(c, c.ctr);
R_010eef30:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10eef48u;
    wp::call(c, c.ctr);
R_010eef48:
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
    if (!wp::cr_get(c, 2)) goto L_010eef70;
    c.r[30] = 0x1u;
L_010eef70:
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
    goto L_010efa58;
L_010eefa0:
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
    if (!wp::cr_get(c, 2)) goto L_010ef0d8;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[14] | c.r[14];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_010ef064;
L_010eeff0:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010ef00c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_010ef064;
L_010ef00c:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010ef03c;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef03c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_010ef064;
L_010ef03c:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010ef058;
    c.r[5] = 0x0u;
    goto L_010ef074;
L_010ef058:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_010ef064:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010eeff0;
    }
    c.r[5] = 0x1u;
L_010ef074:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ef0d8;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[5] = c.r[5] + 0xffffffd0u;
    c.r[5] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[6] = c.r[28] + c.r[5];
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ef0cc;
    c.r[17] = 0x0u;
    goto L_010ef0bc;
    c.r[0] = c.r[0] | 0x0u;
L_010ef0a8:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[17] + 0x2u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[18]);
    c.r[16] = c.r[16] + 0x2u;
L_010ef0bc:
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[17];
    c.r[18] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ef0a8;
    }
L_010ef0cc:
    c.r[31] = c.r[31] + 0xffffffffu;
    c.r[21] = c.r[21] + 0x4u;
    goto L_010ef444;
L_010ef0d8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef2c4;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[15] | c.r[15];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_010ef16c;
L_010ef0f8:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010ef114;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_010ef16c;
L_010ef114:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010ef144;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef144;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_010ef16c;
L_010ef144:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010ef160;
    c.r[5] = 0x0u;
    goto L_010ef17c;
L_010ef160:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_010ef16c:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ef0f8;
    }
    c.r[5] = 0x1u;
L_010ef17c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ef2c4;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x6u;
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x63u);
    if (wp::cr_get(c, 2)) goto L_010ef2a0;
    if (!wp::cr_get(c, 0)) goto L_010ef1e0;
    wp::compare_signed(c, 0, c.r[5], 0x31u);
    if (wp::cr_get(c, 2)) goto L_010ef280;
    if (!wp::cr_get(c, 0)) goto L_010ef1c8;
    wp::compare_signed(c, 0, c.r[5], 0x2cu);
    if (wp::cr_get(c, 2)) goto L_010ef2bc;
    if (!wp::cr_get(c, 0)) goto L_010ef1bc;
    wp::compare_signed(c, 0, c.r[5], 0x2bu);
    if (!wp::cr_get(c, 0)) goto L_010ef260;
    goto L_010ef2bc;
L_010ef1bc:
    wp::compare_signed(c, 0, c.r[5], 0x2eu);
    if (!wp::cr_get(c, 0)) goto L_010ef2bc;
    goto L_010ef270;
L_010ef1c8:
    wp::compare_signed(c, 0, c.r[5], 0x61u);
    if (wp::cr_get(c, 2)) goto L_010ef230;
    if (!wp::cr_get(c, 0)) goto L_010ef240;
    wp::compare_signed(c, 0, c.r[5], 0x33u);
    if (!wp::cr_get(c, 0)) goto L_010ef2bc;
    goto L_010ef290;
L_010ef1e0:
    wp::compare_signed(c, 0, c.r[5], 0x78u);
    if (wp::cr_get(c, 2)) goto L_010ef220;
    if (!wp::cr_get(c, 0)) goto L_010ef204;
    wp::compare_signed(c, 0, c.r[5], 0x70u);
    if (wp::cr_get(c, 2)) goto L_010ef210;
    if (!wp::cr_get(c, 0)) goto L_010ef2bc;
    wp::compare_signed(c, 0, c.r[5], 0x68u);
    if (wp::cr_get(c, 2)) goto L_010ef250;
    goto L_010ef2bc;
L_010ef204:
    wp::compare_signed(c, 0, c.r[5], 0x7au);
    if (wp::cr_get(c, 2)) goto L_010ef2b0;
    goto L_010ef2bc;
L_010ef210:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe040u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef220:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe041u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef230:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe042u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef240:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe043u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef250:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe044u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef260:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe045u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef270:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe046u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef280:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe047u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef290:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe048u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef2a0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04au;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef2bc;
L_010ef2b0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04bu;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
L_010ef2bc:
    c.r[21] = c.r[21] + 0x5u;
    goto L_010ef444;
L_010ef2c4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef388;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[19] = c.r[9] | c.r[9];
    c.r[6] = 0x0u;
    c.r[18] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010ef35c;
    c.r[0] = c.r[0] | 0x0u;
L_010ef2e8:
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::compare_signed(c, 0, c.r[20], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010ef304;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_010ef35c;
L_010ef304:
    wp::compare_signed(c, 0, c.r[20], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010ef334;
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[20] = c.r[20] + 0x10000u;
    c.r[20] = c.r[20] + 0xffffffd0u;
    c.r[20] = c.r[20] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef334;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_010ef35c;
L_010ef334:
    c.r[17] = wp::sign_extend8(c.r[17]);
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], c.r[17]);
    if (wp::cr_get(c, 2)) goto L_010ef350;
    c.r[5] = 0x0u;
    goto L_010ef36c;
L_010ef350:
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_010ef35c:
    ea = c.r[19] + 0x0u;
    c.r[17] = wp::rd8(ea);
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::record(c, c.r[20]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ef2e8;
    }
    c.r[5] = 0x1u;
L_010ef36c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ef388;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe049u;
    c.r[21] = c.r[21] + 0x5u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010ef444;
L_010ef388:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef444;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010ef41c;
L_010ef3a8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010ef3c4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010ef41c;
L_010ef3c4:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010ef3f4;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef3f4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010ef41c;
L_010ef3f4:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010ef410;
    c.r[5] = 0x0u;
    goto L_010ef42c;
L_010ef410:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_010ef41c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ef3a8;
    }
    c.r[5] = 0x1u;
L_010ef42c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ef444;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbcu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
    goto L_010efa64;
L_010ef444:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef7c8;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[11] | c.r[11];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010ef4dc;
    c.r[0] = c.r[0] | 0x0u;
L_010ef468:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010ef484;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010ef4dc;
L_010ef484:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010ef4b4;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef4b4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010ef4dc;
L_010ef4b4:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010ef4d0;
    c.r[5] = 0x0u;
    goto L_010ef4ec;
L_010ef4d0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_010ef4dc:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ef468;
    }
    c.r[5] = 0x1u;
L_010ef4ec:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ef7c8;
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
    if (wp::cr_get(c, 1)) goto L_010ef528;
    goto L_010ef554;
L_010ef528:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef53c;
    c.r[17] = c.r[6] + 0xau;
    goto L_010ef554;
L_010ef53c:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010ef554:
    ea = c.r[16] + 0x8u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef568;
    goto L_010ef594;
L_010ef568:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef57c;
    c.r[6] = c.r[6] + 0xau;
    goto L_010ef594;
L_010ef57c:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_010ef594:
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
    if (wp::cr_get(c, 1)) goto L_010ef5bc;
    goto L_010ef5e8;
L_010ef5bc:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef5d0;
    c.r[17] = c.r[6] + 0xau;
    goto L_010ef5e8;
L_010ef5d0:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010ef5e8:
    ea = c.r[16] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef5fc;
    goto L_010ef628;
L_010ef5fc:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef610;
    c.r[6] = c.r[6] + 0xau;
    goto L_010ef628;
L_010ef610:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_010ef628:
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
    if (wp::cr_get(c, 1)) goto L_010ef650;
    goto L_010ef67c;
L_010ef650:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef664;
    c.r[17] = c.r[6] + 0xau;
    goto L_010ef67c;
L_010ef664:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010ef67c:
    ea = c.r[16] + 0x10u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef690;
    goto L_010ef6bc;
L_010ef690:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef6a4;
    c.r[6] = c.r[6] + 0xau;
    goto L_010ef6bc;
L_010ef6a4:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_010ef6bc:
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
    if (wp::cr_get(c, 1)) goto L_010ef6e4;
    goto L_010ef710;
L_010ef6e4:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef6f8;
    c.r[16] = c.r[5] + 0xau;
    goto L_010ef710;
L_010ef6f8:
    c.r[16] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[16], 0);
    c.r[4] = c.r[16] + 0xau;
    c.r[5] = c.r[16] - c.r[5];
    c.r[16] = c.r[4] & c.r[5];
L_010ef710:
    ea = c.r[6] + 0x14u;
    c.r[4] = wp::rd16(ea);
    c.r[5] = c.r[4] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[5], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef724;
    goto L_010ef750;
L_010ef724:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010ef738;
    c.r[5] = c.r[5] + 0xau;
    goto L_010ef750;
L_010ef738:
    c.r[6] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[6], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[6], 0);
    c.r[4] = c.r[6] + 0xau;
    c.r[5] = c.r[6] - c.r[5];
    c.r[5] = c.r[4] & c.r[5];
L_010ef750:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::rotl(c.r[5], 4) & 0xfffffff0u;
    c.r[5] = c.r[16] + c.r[5];
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef76c;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
L_010ef76c:
    ea = c.r[1] + 0x9u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef77c;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[0]);
L_010ef77c:
    ea = c.r[1] + 0xau;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef78c;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_010ef78c:
    ea = c.r[1] + 0xbu;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef79c;
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
L_010ef79c:
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
    goto L_010efa50;
L_010ef7c8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010efa34;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[12] | c.r[12];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010ef85c;
L_010ef7e8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010ef804;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010ef85c;
L_010ef804:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010ef834;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef834;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010ef85c;
L_010ef834:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010ef850;
    c.r[5] = 0x0u;
    goto L_010ef86c;
L_010ef850:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_010ef85c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ef7e8;
    }
    c.r[5] = 0x1u;
L_010ef86c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010efa34;
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
    goto L_010ef8d4;
L_010ef8a8:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef8b8;
    c.r[16] = 0x1u;
    goto L_010ef8ec;
L_010ef8b8:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x1u;
    c.r[6] = c.r[6] + 0x2u;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[20]);
    c.r[4] = c.r[4] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_010ef8d4:
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[6];
    c.r[20] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[20], 0x5du);
    if (wp::cr_get(c, 2)) goto L_010ef8ec;
    wp::compare_signed(c, 0, c.r[19], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010ef8a8;
    }
L_010ef8ec:
    c.r[4] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[5] + c.r[4];
    c.r[4] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010ef900;
    c.r[3] = c.r[3] + 0x1u;
L_010ef900:
    c.r[24] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[20] = 0x0u;
    goto L_010ef93c;
L_010ef910:
    ea = c.r[23] + c.r[24];
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef924;
    c.r[16] = 0x1u;
    goto L_010ef9ec;
L_010ef924:
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[24] = c.r[24] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[4] + c.r[3];
    wp::wr16(ea, c.r[5]);
    c.r[3] = c.r[3] + 0x2u;
L_010ef93c:
    ea = c.r[28] + 0x20u;
    c.r[23] = wp::rd32(ea);
    c.r[5] = c.r[26] | c.r[26];
    c.r[25] = 0x0u;
    c.r[4] = 0x0u;
    c.r[27] = c.r[23] + c.r[24];
    goto L_010ef9cc;
    c.r[0] = c.r[0] | 0x0u;
L_010ef958:
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010ef974;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_010ef9cc;
L_010ef974:
    wp::compare_signed(c, 0, c.r[6], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010ef9a4;
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[6] = c.r[6] + 0x10000u;
    c.r[6] = c.r[6] + 0xffffffd0u;
    c.r[6] = c.r[6] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010ef9a4;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_010ef9cc;
L_010ef9a4:
    c.r[22] = wp::sign_extend8(c.r[22]);
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], c.r[22]);
    if (wp::cr_get(c, 2)) goto L_010ef9c0;
    c.r[4] = 0x0u;
    goto L_010ef9dc;
L_010ef9c0:
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
L_010ef9cc:
    ea = c.r[5] + 0x0u;
    c.r[22] = wp::rd8(ea);
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010ef958;
    }
    c.r[4] = 0x1u;
L_010ef9dc:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010ef9ec;
    wp::compare_signed(c, 0, c.r[20], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010ef910;
    }
L_010ef9ec:
    wp::compare_signed(c, 0, c.r[16], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010efa0c;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[17], 1) & 0xfffffffeu;
    c.r[3] = 0x0u;
    c.r[31] = c.r[17] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[3]);
    goto L_010efa50;
L_010efa0c:
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
    goto L_010efa50;
L_010efa34:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010efa50;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbdu;
    wp::wr8(ea, c.r[0]);
    goto L_010efa64;
L_010efa50:
    c.r[21] = c.r[21] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
L_010efa58:
    ea = c.r[28] + 0xa0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[21], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010eefa0;
    }
L_010efa64:
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
    c.lr = 0x10efa94u;
    wp::call(c, c.ctr);
R_010efa94:
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
    c.lr = 0x10efab0u;
    wp::call(c, c.ctr);
R_010efab0:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x10efab8u;
    f_801c83d0(c);
R_010efab8:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr031_010efad0(wp::Cpu& c) {
    WP_ENTER(0x10efad0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10efae4u: goto R_010efae4;
        case 0x10efb08u: goto R_010efb08;
        case 0x10efb50u: goto R_010efb50;
        case 0x10efe3cu: goto R_010efe3c;
        case 0x10efe44u: goto R_010efe44;
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
    c.lr = 0x10efae4u;
    f_801c8390(c);
R_010efae4:
    c.r[18] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[29] = c.r[3] | c.r[3];
    c.r[17] = c.r[3] + c.r[18];
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[17] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010efb08;
    c.lr = 0x10efb08u;
    f_80048f30(c);
L_010efb08:
R_010efb08:
    c.r[4] = 0x0u;
    ea = c.r[17] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] + c.r[18];
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    ea = c.r[3] + 0x50u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010efe3c;
    c.r[3] = 0x0u;
    goto L_010efb30;
L_010efb28:
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
L_010efb30:
    ea = c.r[30] + c.r[4];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010efb28;
    }
    c.r[17] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + 0x10u;
    c.r[28] = c.r[29] + c.r[17];
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x10efb50u;
    f_80048ec0(c);
R_010efb50:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[12] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[27] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010efe10;
    c.r[4] = ((((g_mr031_bases[5] + 0x30964u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr031_bases[5] + 0x30968u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30964u) & 0xFFFFu);
    c.r[7] = c.r[28] | c.r[28];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30968u) & 0xFFFFu);
    c.r[3] = 0xcu;
    c.r[0] = 0x5bu;
    goto L_010efe00;
L_010efb88:
    c.r[18] = c.r[30] + c.r[8];
    c.r[9] = c.r[4] | c.r[4];
    c.r[17] = 0x0u;
    c.r[8] = 0x0u;
    goto L_010efc14;
    c.r[0] = c.r[0] | 0x0u;
L_010efba0:
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[10], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010efbbc;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_010efc14;
L_010efbbc:
    wp::compare_signed(c, 0, c.r[10], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010efbec;
    ea = c.r[18] + c.r[8];
    c.r[10] = wp::rd16(ea);
    c.r[10] = c.r[10] + 0x10000u;
    c.r[10] = c.r[10] + 0xffffffd0u;
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[10], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010efbec;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_010efc14;
L_010efbec:
    c.r[10] = wp::sign_extend8(c.r[11]);
    ea = c.r[18] + c.r[8];
    c.r[11] = wp::rd16(ea);
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[11], c.r[10]);
    if (wp::cr_get(c, 2)) goto L_010efc08;
    c.r[8] = 0x0u;
    goto L_010efc24;
L_010efc08:
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
L_010efc14:
    ea = c.r[9] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[10]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010efba0;
    }
    c.r[8] = 0x1u;
L_010efc24:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010efdec;
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
    goto L_010efc94;
    c.r[0] = c.r[0] | 0x0u;
L_010efc68:
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010efc78;
    c.r[21] = 0x1u;
    goto L_010efca8;
L_010efc78:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[12] = c.r[12] + 0x1u;
    c.r[9] = c.r[9] + 0x2u;
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[10]);
    c.r[6] = c.r[6] + 0x2u;
    c.r[25] = c.r[25] + 0x1u;
L_010efc94:
    ea = c.r[9] + 0x0u;
    c.r[10] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[10], 0x5du);
    if (wp::cr_get(c, 2)) goto L_010efca8;
    wp::compare_signed(c, 0, c.r[25], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010efc68;
    }
L_010efca8:
    c.r[6] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[6];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010efcbc;
    c.r[27] = c.r[27] + 0x1u;
L_010efcbc:
    c.r[10] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    c.r[20] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[26] = 0x0u;
    c.r[9] = c.r[30] + c.r[10];
    goto L_010efd04;
L_010efcd0:
    ea = c.r[9] + 0x0u;
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010efce4;
    c.r[21] = 0x1u;
    goto L_010efdac;
L_010efce4:
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
L_010efd04:
    c.r[18] = c.r[5] | c.r[5];
    c.r[8] = c.r[30] + c.r[10];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    goto L_010efd8c;
L_010efd18:
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[17], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010efd34;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_010efd8c;
L_010efd34:
    wp::compare_signed(c, 0, c.r[17], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010efd64;
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[17] = c.r[17] + 0x10000u;
    c.r[17] = c.r[17] + 0xffffffd0u;
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010efd64;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_010efd8c;
L_010efd64:
    c.r[11] = wp::sign_extend8(c.r[11]);
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[11] = c.r[11] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], c.r[11]);
    if (wp::cr_get(c, 2)) goto L_010efd80;
    c.r[6] = 0x0u;
    goto L_010efd9c;
L_010efd80:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
L_010efd8c:
    ea = c.r[18] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[17]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010efd18;
    }
    c.r[6] = 0x1u;
L_010efd9c:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010efdac;
    wp::compare_signed(c, 0, c.r[26], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010efcd0;
    }
L_010efdac:
    wp::compare_signed(c, 0, c.r[21], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010efdcc;
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[23], 1) & 0xfffffffeu;
    c.r[12] = c.r[23] | c.r[23];
    c.r[27] = c.r[22] | c.r[22];
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[0]);
    goto L_010efdf8;
L_010efdcc:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[9] = c.r[26] & 0xffu;
    c.r[6] = wp::rotl(c.r[24], 1) & 0xfffffffeu;
    c.r[27] = c.r[27] + 0x3u;
    c.r[9] = (wp::rotl(c.r[25], 8) & 0xff00u) | (c.r[9] & 0xffff00ffu);
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[9]);
    c.r[12] = c.r[12] + 0xffffffffu;
    goto L_010efdf8;
L_010efdec:
    ea = c.r[7] + 0x28u;
    c.r[9] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    ea = c.r[9] + c.r[8];
    wp::wr16(ea, c.r[6]);
L_010efdf8:
    c.r[27] = c.r[27] + 0x1u;
    c.r[12] = c.r[12] + 0x1u;
L_010efe00:
    c.r[8] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[8];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010efb88;
    }
L_010efe10:
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
    c.lr = 0x10efe3cu;
    f_mr031_010eee20(c);
L_010efe3c:
R_010efe3c:
    c.r[11] = c.r[1] + 0x50u;
    c.lr = 0x10efe44u;
    f_801c83dc(c);
R_010efe44:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr031_010efe60(wp::Cpu& c) {
    WP_ENTER(0x10efe60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10efe74u: goto R_010efe74;
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
    c.lr = 0x10efe74u;
    f_801cf510(c);
R_010efe74:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010efe90(wp::Cpu& c) {
    WP_ENTER(0x10efe90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10efee8u: goto R_010efee8;
        case 0x10eff24u: goto R_010eff24;
        case 0x10eff30u: goto R_010eff30;
        case 0x10eff40u: goto R_010eff40;
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
    if (wp::cr_get(c, 2)) goto L_010eff40;
    if (wp::cr_get(c, 2)) goto L_010eff30;
    c.r[4] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_010efee8;
L_010efec8:
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
    c.lr = 0x10efee8u;
    wp::call(c, c.ctr);
L_010efee8:
R_010efee8:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010efec8;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010eff24;
    if (wp::cr_get(c, 2)) goto L_010eff24;
    if (wp::cr_get(c, 2)) goto L_010eff24;
    if (wp::cr_get(c, 2)) goto L_010eff24;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010eff24;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10eff24u;
    f_801c7a8c(c);
L_010eff24:
R_010eff24:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10eff30u;
    f_8003fb90(c);
L_010eff30:
R_010eff30:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010eff40;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10eff40u;
    f_801c7a8c(c);
L_010eff40:
R_010eff40:
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

void f_mr031_010eff60(wp::Cpu& c) {
    WP_ENTER(0x10eff60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10effb0u: goto R_010effb0;
        case 0x10effc0u: goto R_010effc0;
        case 0x10effd0u: goto R_010effd0;
        case 0x10f0008u: goto R_010f0008;
        case 0x10f001cu: goto R_010f001c;
        case 0x10f0030u: goto R_010f0030;
        case 0x10f0044u: goto R_010f0044;
        case 0x10f005cu: goto R_010f005c;
        case 0x10f006cu: goto R_010f006c;
        case 0x10f0080u: goto R_010f0080;
        case 0x10f008cu: goto R_010f008c;
        case 0x10f009cu: goto R_010f009c;
        case 0x10f00f4u: goto R_010f00f4;
        case 0x10f0104u: goto R_010f0104;
        case 0x10f0114u: goto R_010f0114;
        case 0x10f0128u: goto R_010f0128;
        case 0x10f013cu: goto R_010f013c;
        case 0x10f0168u: goto R_010f0168;
        case 0x10f0170u: goto R_010f0170;
        case 0x10f017cu: goto R_010f017c;
        case 0x10f0184u: goto R_010f0184;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff30u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xd4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x2cu;
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xccu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0xc4u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    ea = c.r[29] + 0x80u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x88u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x8cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[29] + 0x90u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x84u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0x30u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x34u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x10effb0u;
    f_8014c170(c);
R_010effb0:
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[1] + 0x7cu;
    c.lr = 0x10effc0u;
    f_800f5a50(c);
R_010effc0:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x7cu;
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10effd0u;
    f_800f5a70(c);
R_010effd0:
    c.r[5] = c.r[1] + 0x2cu;
    ea = c.r[29] + 0x94u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[5] + 0x0u;
    wp::load_quantized(c, 1, ea, 0, 0, q);
    c.r[4] = c.r[1] + 0x20u;
    c.r[3] = c.r[1] + 0x7cu;
    wp::ps_muls0(c, 2, 1, 0);
    ea = c.r[5] + 0x8u;
    wp::load_quantized(c, 1, ea, 1, 0, q);
    ea = c.r[4] + 0x0u;
    wp::store_quantized(c, 2, ea, 0, 0, q);
    wp::ps_muls0(c, 2, 1, 0);
    ea = c.r[4] + 0x8u;
    wp::store_quantized(c, 2, ea, 1, 0, q);
    ea = c.r[1] + 0x20u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x24u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x28u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.lr = 0x10f0008u;
    f_800f5aa0(c);
R_010f0008:
    ea = c.r[1] + 0x2cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x7cu;
    ea = c.r[1] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x34u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.lr = 0x10f001cu;
    f_800f5ae0(c);
R_010f001c:
    ea = c.r[29] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[1] + 0x7cu;
    ea = c.r[29] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[3] = c.f[2];
    c.lr = 0x10f0030u;
    f_800f5b60(c);
R_010f0030:
    ea = c.r[29] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[1] + 0x7cu;
    ea = c.r[29] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[3] = c.f[2];
    c.lr = 0x10f0044u;
    f_800f5be0(c);
R_010f0044:
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = c.r[0] | 0x4u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f005cu;
    f_800f5a50(c);
R_010f005c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x38u;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10f006cu;
    f_800f5a70(c);
R_010f006c:
    ea = c.r[1] + 0x2cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x34u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.lr = 0x10f0080u;
    f_800f5c20(c);
R_010f0080:
    ea = c.r[29] + 0x98u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x10f008cu;
    f_800f5c60(c);
R_010f008c:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x4u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f009cu;
    f_8004aa80(c);
R_010f009c:
    c.r[4] = c.r[3] + 0x2878u;
    ea = c.r[3] + 0x287au;
    c.r[3] = wp::rd16(ea);
    ea = c.r[4] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[29] = c.r[3] + 0xffffffffu;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    c.r[30] = c.r[3] + 0xffffffffu;
    if (!wp::cr_get(c, 0)) goto L_010f00dc;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f00dc;
    c.r[0] = c.r[29] * 0xcu;
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    goto L_010f00e8;
L_010f00dc:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
L_010f00e8:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x10f00f4u;
    f_800f64c0(c);
R_010f00f4:
    c.r[3] = c.r[1] + 0x18u;
    c.r[5] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x0u;
    c.lr = 0x10f0104u;
    f_800f6450(c);
R_010f0104:
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x1u;
    c.lr = 0x10f0114u;
    f_800f6450(c);
R_010f0114:
    c.r[30] = 0x2u;
L_010f0118:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10f0128u;
    f_800f6450(c);
R_010f0128:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f0118;
    }
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x10f013cu;
    f_800f6400(c);
R_010f013c:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x11u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x12u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x13u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x3u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x10f0168u;
    f_800f63a0(c);
R_010f0168:
    c.r[4] = c.r[1] + 0x7cu;
    c.lr = 0x10f0170u;
    f_800f5a00(c);
R_010f0170:
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x1u;
    c.lr = 0x10f017cu;
    f_800f63a0(c);
R_010f017c:
    c.r[4] = c.r[1] + 0x38u;
    c.lr = 0x10f0184u;
    f_800f5a00(c);
R_010f0184:
    ea = c.r[1] + 0xccu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0xc8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xc4u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0xd4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xd0u;
    return;
}

void f_mr031_010f01b0(wp::Cpu& c) {
    WP_ENTER(0x10f01b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f01c4u: goto R_010f01c4;
        case 0x10f0208u: goto R_010f0208;
        case 0x10f0238u: goto R_010f0238;
        case 0x10f0278u: goto R_010f0278;
        case 0x10f0294u: goto R_010f0294;
        case 0x10f02d0u: goto R_010f02d0;
        case 0x10f02e8u: goto R_010f02e8;
        case 0x10f031cu: goto R_010f031c;
        case 0x10f0338u: goto R_010f0338;
        case 0x10f0358u: goto R_010f0358;
        case 0x10f0374u: goto R_010f0374;
        case 0x10f0394u: goto R_010f0394;
        case 0x10f03b0u: goto R_010f03b0;
        case 0x10f03d4u: goto R_010f03d4;
        case 0x10f03f4u: goto R_010f03f4;
        case 0x10f0404u: goto R_010f0404;
        case 0x10f0424u: goto R_010f0424;
        case 0x10f0454u: goto R_010f0454;
        case 0x10f046cu: goto R_010f046c;
        case 0x10f0474u: goto R_010f0474;
        case 0x10f0494u: goto R_010f0494;
        case 0x10f04c4u: goto R_010f04c4;
        case 0x10f04dcu: goto R_010f04dc;
        case 0x10f04f8u: goto R_010f04f8;
        case 0x10f0524u: goto R_010f0524;
        case 0x10f0554u: goto R_010f0554;
        case 0x10f055cu: goto R_010f055c;
        case 0x10f0568u: goto R_010f0568;
        case 0x10f059cu: goto R_010f059c;
        case 0x10f05a8u: goto R_010f05a8;
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
    c.lr = 0x10f01c4u;
    f_801c83a4(c);
R_010f01c4:
    c.r[24] = ((((g_mr031_bases[5] + 0x307c8u) + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[24] + wp::sign_extend16((g_mr031_bases[5] + 0x307c8u) & 0xFFFFu);
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[31] = c.r[6] | c.r[6];
    c.r[4] = c.r[24] + 0x1e4u;
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[4] + c.r[0];
    c.r[5] = wp::rd32(ea);
    c.r[22] = c.r[7] | c.r[7];
    c.r[28] = c.r[3] | c.r[3];
    c.r[23] = c.r[8] | c.r[8];
    c.r[6] = c.r[29] | c.r[29];
    c.r[7] = c.r[30] | c.r[30];
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    c.r[4] = c.r[24] + 0x1f0u;
    c.lr = 0x10f0208u;
    f_8003f8f0(c);
R_010f0208:
    c.r[3] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
    c.r[4] = 0x10000u;
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] + 0x120u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    ea = c.r[28] + 0x114u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + 0x11cu;
    wp::wr32(ea, c.r[26]);
    c.lr = 0x10f0238u;
    f_80063370(c);
R_010f0238:
    c.r[4] = ((((g_mr031_bases[5] + 0x311e0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x311e0u) & 0xFFFFu);
    c.r[27] = 0x1u;
    c.r[3] = c.r[4] + 0x1f8u;
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[25] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[28] + 0x120u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x138u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + 0x13cu;
    wp::wr32(ea, c.r[22]);
    ea = c.r[28] + 0x140u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x154u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x15eu;
    wp::wr8(ea, c.r[27]);
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[26]);
    c.lr = 0x10f0278u;
    f_80071fe0(c);
R_010f0278:
    ea = c.r[28] + 0x164u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[25] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[28] + 0x168u;
    wp::wr8(ea, c.r[27]);
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x16au;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[26]);
    c.lr = 0x10f0294u;
    f_80071fe0(c);
R_010f0294:
    ea = c.r[28] + 0x170u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[28] + 0x185u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x186u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x187u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x188u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[28] + 0x18cu;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + 0x190u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + 0x194u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + 0x198u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f02d0u;
    wp::call(c, c.ctr);
R_010f02d0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f02e8u;
    wp::call(c, c.ctr);
R_010f02e8:
    wp::compare_signed(c, 0, c.r[22], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0304;
    wp::compare_signed(c, 0, c.r[22], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f0340;
    wp::compare_signed(c, 0, c.r[22], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f037c;
    goto L_010f03b4;
L_010f0304:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x204u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f031cu;
    wp::call(c, c.ctr);
R_010f031c:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x21cu;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0338u;
    wp::call(c, c.ctr);
R_010f0338:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
    goto L_010f03b4;
L_010f0340:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x234u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0358u;
    wp::call(c, c.ctr);
R_010f0358:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x248u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0374u;
    wp::call(c, c.ctr);
R_010f0374:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
    goto L_010f03b4;
L_010f037c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x260u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0394u;
    wp::call(c, c.ctr);
R_010f0394:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x278u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f03b0u;
    wp::call(c, c.ctr);
R_010f03b0:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
L_010f03b4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x144u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x10f03d4u;
    wp::call(c, c.ctr);
R_010f03d4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x148u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x10f03f4u;
    wp::call(c, c.ctr);
R_010f03f4:
    wp::compare_signed(c, 0, c.r[22], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f04e0;
    c.r[3] = 0x19cu;
    c.lr = 0x10f0404u;
    f_801c79a4(c);
R_010f0404:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0424;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[8] = c.r[23] | c.r[23];
    c.r[7] = 0x1u;
    c.lr = 0x10f0424u;
    f_mr031_010f01b0(c);
L_010f0424:
R_010f0424:
    ea = c.r[28] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f0454;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x18cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f0454;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0454u;
    wp::call(c, c.ctr);
L_010f0454:
R_010f0454:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f046cu;
    wp::call(c, c.ctr);
R_010f046c:
    c.r[3] = 0x19cu;
    c.lr = 0x10f0474u;
    f_801c79a4(c);
R_010f0474:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0494;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[8] = c.r[23] | c.r[23];
    c.r[7] = 0x2u;
    c.lr = 0x10f0494u;
    f_mr031_010f01b0(c);
L_010f0494:
R_010f0494:
    ea = c.r[28] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f04c4;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x190u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f04c4;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f04c4u;
    wp::call(c, c.ctr);
L_010f04c4:
R_010f04c4:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f04dcu;
    wp::call(c, c.ctr);
R_010f04dc:
    goto L_010f0584;
L_010f04e0:
    wp::compare_signed(c, 0, c.r[22], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010f0574;
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0568;
    c.r[3] = 0x30cu;
    c.lr = 0x10f04f8u;
    f_801c79a4(c);
R_010f04f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0524;
    ea = c.r[25] + 0xa0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[25] + 0xa4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[25] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x10f0524u;
    f_mr031_010f2e00(c);
L_010f0524:
R_010f0524:
    ea = c.r[28] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f0554;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x194u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f0554;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0554u;
    wp::call(c, c.ctr);
L_010f0554:
R_010f0554:
    ea = c.r[28] + 0x194u;
    c.r[24] = wp::rd32(ea);
    c.lr = 0x10f055cu;
    f_mr031_010eff60(c);
R_010f055c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f0568u;
    f_mr031_0109b6d0(c);
L_010f0568:
R_010f0568:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x140u;
    wp::wr8(ea, c.r[0]);
    goto L_010f0584;
L_010f0574:
    wp::compare_signed(c, 0, c.r[22], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_010f0584;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x140u;
    wp::wr8(ea, c.r[0]);
L_010f0584:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f059cu;
    wp::call(c, c.ctr);
R_010f059c:
    c.r[11] = c.r[1] + 0x40u;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10f05a8u;
    f_801c83f0(c);
R_010f05a8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr031_010f05c0(wp::Cpu& c) {
    WP_ENTER(0x10f05c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f05fcu: goto R_010f05fc;
        case 0x10f0624u: goto R_010f0624;
        case 0x10f064cu: goto R_010f064c;
        case 0x10f0674u: goto R_010f0674;
        case 0x10f069cu: goto R_010f069c;
        case 0x10f06a8u: goto R_010f06a8;
        case 0x10f06e0u: goto R_010f06e0;
        case 0x10f071cu: goto R_010f071c;
        case 0x10f0728u: goto R_010f0728;
        case 0x10f0738u: goto R_010f0738;
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
    if (wp::cr_get(c, 2)) goto L_010f0738;
    c.r[4] = ((((g_mr031_bases[5] + 0x311e0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x311e0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x1f8u;
    ea = c.r[3] + 0x120u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f05fcu;
    f_8001a010(c);
R_010f05fc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x198u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f0624;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0624;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0624u;
    wp::call(c, c.ctr);
L_010f0624:
R_010f0624:
    c.r[3] = wp::add_carry(c, c.r[30], 0x194u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f064c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f064c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f064cu;
    wp::call(c, c.ctr);
L_010f064c:
R_010f064c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x190u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f0674;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0674;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0674u;
    wp::call(c, c.ctr);
L_010f0674:
R_010f0674:
    c.r[3] = wp::add_carry(c, c.r[30], 0x18cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f069c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f069c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f069cu;
    wp::call(c, c.ctr);
L_010f069c:
R_010f069c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x10f06a8u;
    f_80063bb0(c);
R_010f06a8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0728;
    c.r[3] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f06e0;
L_010f06c0:
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
    c.lr = 0x10f06e0u;
    wp::call(c, c.ctr);
L_010f06e0:
R_010f06e0:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f06c0;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010f071c;
    if (wp::cr_get(c, 2)) goto L_010f071c;
    if (wp::cr_get(c, 2)) goto L_010f071c;
    if (wp::cr_get(c, 2)) goto L_010f071c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f071c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f071cu;
    f_801c7a8c(c);
L_010f071c:
R_010f071c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10f0728u;
    f_8003fb90(c);
L_010f0728:
R_010f0728:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f0738;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f0738u;
    f_801c7a8c(c);
L_010f0738:
R_010f0738:
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

void f_mr031_010f0760(wp::Cpu& c) {
    WP_ENTER(0x10f0760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    wp::wr16(ea, c.r[4]);
    return;
}

void f_mr031_010f0770(wp::Cpu& c) {
    WP_ENTER(0x10f0770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    c.r[3] = wp::rd16(ea);
    return;
}

void f_mr031_010f0780(wp::Cpu& c) {
    WP_ENTER(0x10f0780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f07b8u: goto R_010f07b8;
        case 0x10f07c0u: goto R_010f07c0;
        case 0x10f07dcu: goto R_010f07dc;
        case 0x10f07f8u: goto R_010f07f8;
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
    if (wp::cr_get(c, 2)) goto L_010f07b8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f07b8u;
    wp::call(c, c.ctr);
L_010f07b8:
R_010f07b8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f07c0u;
    f_8000fc20(c);
R_010f07c0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0x1u;
    c.r[31] = wp::slw(c.r[0], c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f07dcu;
    wp::call(c, c.ctr);
R_010f07dc:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x10f07f8u;
    wp::call(c, c.ctr);
R_010f07f8:
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

void f_mr031_010f0810(wp::Cpu& c) {
    WP_ENTER(0x10f0810u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f0824u: goto R_010f0824;
        case 0x10f084cu: goto R_010f084c;
        case 0x10f0864u: goto R_010f0864;
        case 0x10f0880u: goto R_010f0880;
        case 0x10f0898u: goto R_010f0898;
        case 0x10f08b4u: goto R_010f08b4;
        case 0x10f08c8u: goto R_010f08c8;
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
    c.lr = 0x10f0824u;
    f_801c83b4(c);
R_010f0824:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010f084c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f084cu;
    wp::call(c, c.ctr);
L_010f084c:
R_010f084c:
    c.r[29] = 0x0u;
    c.r[30] = 0x1u;
L_010f0854:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f086c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f0864u;
    f_8000fc40(c);
R_010f0864:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f08b4;
L_010f086c:
    c.r[0] = wp::slw(c.r[30], c.r[29]);
    c.r[0] = c.r[27] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f08b4;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f0880u;
    f_8000fc20(c);
R_010f0880:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = wp::slw(c.r[30], c.r[3]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0898u;
    wp::call(c, c.ctr);
R_010f0898:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x10f08b4u;
    wp::call(c, c.ctr);
L_010f08b4:
R_010f08b4:
    c.r[29] = c.r[29] + 0x1u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f0854;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10f08c8u;
    f_801c8400(c);
R_010f08c8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010f08e0(wp::Cpu& c) {
    WP_ENTER(0x10f08e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f0910u: goto R_010f0910;
        case 0x10f0928u: goto R_010f0928;
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
L_010f0908:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f0910u;
    f_8000fc20(c);
R_010f0910:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = wp::slw(c.r[31], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0928u;
    wp::call(c, c.ctr);
R_010f0928:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[29] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f093c;
    c.r[3] = c.r[30] | c.r[30];
    goto L_010f094c;
L_010f093c:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f0908;
    }
    c.r[3] = 0xffffffffu;
L_010f094c:
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

void f_mr031_010f0970(wp::Cpu& c) {
    WP_ENTER(0x10f0970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x169u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr031_010f0980(wp::Cpu& c) {
    WP_ENTER(0x10f0980u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f099cu: goto R_010f099c;
        case 0x10f09b0u: goto R_010f09b0;
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
    goto L_010f099c;
L_010f0998:
    c.lr = 0x10f099cu;
    f_8006a940(c);
L_010f099c:
R_010f099c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f09b0u;
    wp::call(c, c.ctr);
R_010f09b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f0998;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010f09d0(wp::Cpu& c) {
    WP_ENTER(0x10f09d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f09fcu: goto R_010f09fc;
        case 0x10f0a14u: goto R_010f0a14;
        case 0x10f0a34u: goto R_010f0a34;
        case 0x10f0a54u: goto R_010f0a54;
        case 0x10f0a78u: goto R_010f0a78;
        case 0x10f0a90u: goto R_010f0a90;
        case 0x10f0aa8u: goto R_010f0aa8;
        case 0x10f0ac0u: goto R_010f0ac0;
        case 0x10f0aecu: goto R_010f0aec;
        case 0x10f0b04u: goto R_010f0b04;
        case 0x10f0b20u: goto R_010f0b20;
        case 0x10f0b3cu: goto R_010f0b3c;
        case 0x10f0b4cu: goto R_010f0b4c;
        case 0x10f0b64u: goto R_010f0b64;
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
    if (!wp::cr_get(c, 2)) goto L_010f0a58;
    c.r[4] = 0x0u;
    c.lr = 0x10f09fcu;
    f_800402c0(c);
R_010f09fc:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0a14;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x10f0a14u;
    f_80052250(c);
L_010f0a14:
R_010f0a14:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0a34;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0a34u;
    wp::call(c, c.ctr);
L_010f0a34:
R_010f0a34:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0b64;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0a54u;
    wp::call(c, c.ctr);
R_010f0a54:
    goto L_010f0b64;
L_010f0a58:
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0b40;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0b40;
    c.r[4] = 0x0u;
    c.lr = 0x10f0a78u;
    f_800402c0(c);
R_010f0a78:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0a90;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x10f0a90u;
    f_80052250(c);
L_010f0a90:
R_010f0a90:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0aa8u;
    wp::call(c, c.ctr);
R_010f0aa8:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0ac0u;
    wp::call(c, c.ctr);
R_010f0ac0:
    ea = c.r[30] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0ae0;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f0b08;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f0b24;
    goto L_010f0b64;
L_010f0ae0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10f0aecu;
    f_800402c0(c);
R_010f0aec:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0b64;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x10f0b04u;
    f_80052250(c);
R_010f0b04:
    goto L_010f0b64;
L_010f0b08:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0b20u;
    wp::call(c, c.ctr);
R_010f0b20:
    goto L_010f0b64;
L_010f0b24:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0b3cu;
    wp::call(c, c.ctr);
R_010f0b3c:
    goto L_010f0b64;
L_010f0b40:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10f0b4cu;
    f_800402c0(c);
R_010f0b4c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0b64;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x10f0b64u;
    f_80052250(c);
L_010f0b64:
R_010f0b64:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[30] + 0x185u;
    wp::wr8(ea, c.r[31]);
    if (!wp::cr_get(c, 2)) goto L_010f0b74;
    ea = c.r[30] + 0x154u;
    wp::wr8(ea, c.r[31]);
L_010f0b74:
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

void f_mr031_010f0b90(wp::Cpu& c) {
    WP_ENTER(0x10f0b90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f0bc4u: goto R_010f0bc4;
        case 0x10f0c48u: goto R_010f0c48;
        case 0x10f0c74u: goto R_010f0c74;
        case 0x10f0ca4u: goto R_010f0ca4;
        case 0x10f0cc8u: goto R_010f0cc8;
        case 0x10f0cd4u: goto R_010f0cd4;
        case 0x10f0cf4u: goto R_010f0cf4;
        case 0x10f0d08u: goto R_010f0d08;
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
    c.lr = 0x10f0bc4u;
    wp::call(c, c.ctr);
R_010f0bc4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0bd4;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0d34;
L_010f0bd4:
    ea = c.r[29] + 0x154u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) goto L_010f0be8;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0d34;
L_010f0be8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f0c04;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f0c04;
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f0d34;
L_010f0c04:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x154u;
    wp::wr8(ea, c.r[30]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0c18;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_010f0c18:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0c28;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_010f0c28:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0c48;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0c48u;
    wp::call(c, c.ctr);
L_010f0c48:
R_010f0c48:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0c80;
    ea = c.r[29] + 0x144u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f0cd4;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0c74u;
    wp::call(c, c.ctr);
R_010f0c74:
    ea = c.r[29] + 0x144u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_010f0cd4;
L_010f0c80:
    ea = c.r[29] + 0x148u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f0cb0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0ca4u;
    wp::call(c, c.ctr);
R_010f0ca4:
    ea = c.r[29] + 0x148u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_010f0cc8;
L_010f0cb0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0cc8u;
    wp::call(c, c.ctr);
L_010f0cc8:
R_010f0cc8:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10f0cd4u;
    f_8001a010(c);
L_010f0cd4:
R_010f0cd4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f0cf4;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0cf4u;
    wp::call(c, c.ctr);
L_010f0cf4:
R_010f0cf4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x290u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0d08u;
    wp::call(c, c.ctr);
R_010f0d08:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x186u;
    wp::wr8(ea, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010f0d24;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_010f0d24:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0d34;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_010f0d34:
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

void f_mr031_010f0d50(wp::Cpu& c) {
    WP_ENTER(0x10f0d50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f0d90u: goto R_010f0d90;
        case 0x10f0db0u: goto R_010f0db0;
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
    if (wp::cr_get(c, 2)) goto L_010f0d90;
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0d90u;
    wp::call(c, c.ctr);
L_010f0d90:
R_010f0d90:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0db0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0db0u;
    wp::call(c, c.ctr);
L_010f0db0:
R_010f0db0:
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

void f_mr031_010f0dd0(wp::Cpu& c) {
    WP_ENTER(0x10f0dd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f0df8u: goto R_010f0df8;
        case 0x10f0dfcu: goto R_010f0dfc;
        case 0x10f0e20u: goto R_010f0e20;
        case 0x10f0e24u: goto R_010f0e24;
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
    if (wp::cr_get(c, 2)) goto L_010f0e0c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x144u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0df8u;
    wp::call(c, c.ctr);
R_010f0df8:
    c.lr = 0x10f0dfcu;
    f_80043140(c);
R_010f0dfc:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    goto L_010f0e30;
L_010f0e0c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x148u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0e20u;
    wp::call(c, c.ctr);
R_010f0e20:
    c.lr = 0x10f0e24u;
    f_80043140(c);
R_010f0e24:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
L_010f0e30:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010f0e40(wp::Cpu& c) {
    WP_ENTER(0x10f0e40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f0e54u: goto R_010f0e54;
        case 0x10f0e7cu: goto R_010f0e7c;
        case 0x10f0e98u: goto R_010f0e98;
        case 0x10f0ea0u: goto R_010f0ea0;
        case 0x10f0ec8u: goto R_010f0ec8;
        case 0x10f0f20u: goto R_010f0f20;
        case 0x10f0f3cu: goto R_010f0f3c;
        case 0x10f0f68u: goto R_010f0f68;
        case 0x10f0f94u: goto R_010f0f94;
        case 0x10f0fbcu: goto R_010f0fbc;
        case 0x10f0fd8u: goto R_010f0fd8;
        case 0x10f0ffcu: goto R_010f0ffc;
        case 0x10f1018u: goto R_010f1018;
        case 0x10f1030u: goto R_010f1030;
        case 0x10f1058u: goto R_010f1058;
        case 0x10f1070u: goto R_010f1070;
        case 0x10f10a0u: goto R_010f10a0;
        case 0x10f10e8u: goto R_010f10e8;
        case 0x10f10f8u: goto R_010f10f8;
        case 0x10f1120u: goto R_010f1120;
        case 0x10f113cu: goto R_010f113c;
        case 0x10f1154u: goto R_010f1154;
        case 0x10f1174u: goto R_010f1174;
        case 0x10f1198u: goto R_010f1198;
        case 0x10f11bcu: goto R_010f11bc;
        case 0x10f11e0u: goto R_010f11e0;
        case 0x10f11e8u: goto R_010f11e8;
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
    c.lr = 0x10f0e54u;
    f_801c83ac(c);
R_010f0e54:
    c.r[0] = 0x43300000u;
    c.r[28] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f0e7cu;
    f_8003cc90(c);
R_010f0e7c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0e98u;
    wp::call(c, c.ctr);
R_010f0e98:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f0ea0u;
    f_8003d2d0(c);
R_010f0ea0:
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
    c.lr = 0x10f0ec8u;
    wp::call(c, c.ctr);
R_010f0ec8:
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
    c.lr = 0x10f0f20u;
    wp::call(c, c.ctr);
R_010f0f20:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0f3cu;
    wp::call(c, c.ctr);
R_010f0f3c:
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
    c.lr = 0x10f0f68u;
    wp::call(c, c.ctr);
R_010f0f68:
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
    c.lr = 0x10f0f94u;
    wp::call(c, c.ctr);
R_010f0f94:
    ea = c.r[27] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f0ffc;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0fbcu;
    wp::call(c, c.ctr);
R_010f0fbc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f0fd8u;
    wp::call(c, c.ctr);
R_010f0fd8:
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
    c.lr = 0x10f0ffcu;
    wp::call(c, c.ctr);
L_010f0ffc:
R_010f0ffc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1018u;
    wp::call(c, c.ctr);
R_010f1018:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1030u;
    wp::call(c, c.ctr);
R_010f1030:
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
    c.lr = 0x10f1058u;
    f_801cf394(c);
R_010f1058:
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1068;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_010f1068:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f1070u;
    f_8003cfb0(c);
R_010f1070:
    c.r[0] = 0x0u;
    c.r[26] = ((((g_mr031_bases[4] + 0x4280u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr031_bases[4] + 0x4280u) & 0xFFFFu);
    c.r[24] = 0x0u;
    ea = c.r[29] + 0x188u;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ((((g_mr031_bases[5] + 0x30af0u) + 0x8000u) >> 16) << 16);
    goto L_010f1100;
L_010f1094:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x10f10a0u;
    f_801cf510(c);
R_010f10a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f10ec;
    c.r[0] = c.r[24] * 0xcu;
    c.r[4] = ((((g_mr031_bases[4] + 0x4280u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x194u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x4280u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_010f110c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + 0xau;
    c.r[4] = wp::rd16(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f10e8u;
    wp::call(c, c.ctr);
R_010f10e8:
    goto L_010f110c;
L_010f10ec:
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + wp::sign_extend16((g_mr031_bases[5] + 0x30af0u) & 0xFFFFu);
    c.lr = 0x10f10f8u;
    f_801cf510(c);
R_010f10f8:
    c.r[26] = c.r[26] + 0xcu;
    c.r[24] = c.r[24] + 0x1u;
L_010f1100:
    ea = c.r[26] + 0x0u;
    c.r[28] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f1094;
    }
L_010f110c:
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1174;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f1120u;
    f_8003d2d0(c);
R_010f1120:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x194u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f113cu;
    wp::call(c, c.ctr);
R_010f113c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1154u;
    wp::call(c, c.ctr);
R_010f1154:
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
    c.lr = 0x10f1174u;
    wp::call(c, c.ctr);
L_010f1174:
R_010f1174:
    ea = c.r[29] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1198;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1198u;
    wp::call(c, c.ctr);
L_010f1198:
R_010f1198:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f11bc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f11bcu;
    wp::call(c, c.ctr);
L_010f11bc:
R_010f11bc:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f11e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f11e0u;
    wp::call(c, c.ctr);
L_010f11e0:
R_010f11e0:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x10f11e8u;
    f_801c83f8(c);
R_010f11e8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr031_010f1200(wp::Cpu& c) {
    WP_ENTER(0x10f1200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1228u: goto R_010f1228;
        case 0x10f1230u: goto R_010f1230;
        case 0x10f124cu: goto R_010f124c;
        case 0x10f1264u: goto R_010f1264;
        case 0x10f128cu: goto R_010f128c;
        case 0x10f12b0u: goto R_010f12b0;
        case 0x10f12d4u: goto R_010f12d4;
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
    c.lr = 0x10f1228u;
    f_mr031_010ec780(c);
R_010f1228:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10f1230u;
    f_mr031_010eebd0(c);
R_010f1230:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f124cu;
    wp::call(c, c.ctr);
R_010f124c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1264u;
    wp::call(c, c.ctr);
R_010f1264:
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
    c.lr = 0x10f128cu;
    f_801cf394(c);
R_010f128c:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f12b0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f12b0u;
    wp::call(c, c.ctr);
L_010f12b0:
R_010f12b0:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f12d4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f12d4u;
    wp::call(c, c.ctr);
L_010f12d4:
R_010f12d4:
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

void f_mr031_010f12f0(wp::Cpu& c) {
    WP_ENTER(0x10f12f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1324u: goto R_010f1324;
        case 0x10f1344u: goto R_010f1344;
        case 0x10f135cu: goto R_010f135c;
        case 0x10f1384u: goto R_010f1384;
        case 0x10f13acu: goto R_010f13ac;
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
    c.lr = 0x10f1324u;
    f_8003cc90(c);
R_010f1324:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10f1344u;
    wp::call(c, c.ctr);
R_010f1344:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f135cu;
    wp::call(c, c.ctr);
R_010f135c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1384;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1384u;
    wp::call(c, c.ctr);
L_010f1384:
R_010f1384:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f13ac;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f13acu;
    wp::call(c, c.ctr);
L_010f13ac:
R_010f13ac:
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

void f_mr031_010f13d0(wp::Cpu& c) {
    WP_ENTER(0x10f13d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f13e4u: goto R_010f13e4;
        case 0x10f13f8u: goto R_010f13f8;
        case 0x10f1410u: goto R_010f1410;
        case 0x10f1420u: goto R_010f1420;
        case 0x10f1438u: goto R_010f1438;
        case 0x10f1460u: goto R_010f1460;
        case 0x10f1488u: goto R_010f1488;
        case 0x10f1490u: goto R_010f1490;
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
    c.lr = 0x10f13e4u;
    f_801c83b8(c);
R_010f13e4:
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[6] | c.r[6];
    c.lr = 0x10f13f8u;
    f_mr031_010ec780(c);
R_010f13f8:
    c.r[5] = ((((g_mr031_bases[5] + 0x30800u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30800u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f1410u;
    f_801d34c4(c);
R_010f1410:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10f1420u;
    f_mr031_010efad0(c);
R_010f1420:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1438u;
    wp::call(c, c.ctr);
R_010f1438:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1460;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1460u;
    wp::call(c, c.ctr);
L_010f1460:
R_010f1460:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1488;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1488u;
    wp::call(c, c.ctr);
L_010f1488:
R_010f1488:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10f1490u;
    f_801c8404(c);
R_010f1490:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010f14a0(wp::Cpu& c) {
    WP_ENTER(0x10f14a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f14e8u: goto R_010f14e8;
        case 0x10f1508u: goto R_010f1508;
        case 0x10f1520u: goto R_010f1520;
        case 0x10f1548u: goto R_010f1548;
        case 0x10f1570u: goto R_010f1570;
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
    c.r[5] = ((((g_mr031_bases[5] + 0x307c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x307c8u) & 0xFFFFu);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f14e8u;
    f_801d3590(c);
R_010f14e8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10f1508u;
    wp::call(c, c.ctr);
R_010f1508:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1520u;
    wp::call(c, c.ctr);
R_010f1520:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1548;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1548u;
    wp::call(c, c.ctr);
L_010f1548:
R_010f1548:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1570;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1570u;
    wp::call(c, c.ctr);
L_010f1570:
R_010f1570:
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

void f_mr031_010f1590(wp::Cpu& c) {
    WP_ENTER(0x10f1590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f15c4u: goto R_010f15c4;
        case 0x10f15e4u: goto R_010f15e4;
        case 0x10f15fcu: goto R_010f15fc;
        case 0x10f1624u: goto R_010f1624;
        case 0x10f164cu: goto R_010f164c;
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
    c.lr = 0x10f15c4u;
    f_80010060(c);
R_010f15c4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10f15e4u;
    wp::call(c, c.ctr);
R_010f15e4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f15fcu;
    wp::call(c, c.ctr);
R_010f15fc:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1624;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1624u;
    wp::call(c, c.ctr);
L_010f1624:
R_010f1624:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f164c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f164cu;
    wp::call(c, c.ctr);
L_010f164c:
R_010f164c:
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

void f_mr031_010f1670(wp::Cpu& c) {
    WP_ENTER(0x10f1670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1684u: goto R_010f1684;
        case 0x10f169cu: goto R_010f169c;
        case 0x10f16b0u: goto R_010f16b0;
        case 0x10f16d8u: goto R_010f16d8;
        case 0x10f16e8u: goto R_010f16e8;
        case 0x10f170cu: goto R_010f170c;
        case 0x10f176cu: goto R_010f176c;
        case 0x10f17ecu: goto R_010f17ec;
        case 0x10f1854u: goto R_010f1854;
        case 0x10f1888u: goto R_010f1888;
        case 0x10f189cu: goto R_010f189c;
        case 0x10f18acu: goto R_010f18ac;
        case 0x10f18ccu: goto R_010f18cc;
        case 0x10f18e4u: goto R_010f18e4;
        case 0x10f190cu: goto R_010f190c;
        case 0x10f1934u: goto R_010f1934;
        case 0x10f193cu: goto R_010f193c;
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
    c.lr = 0x10f1684u;
    f_801c83ac(c);
R_010f1684:
    c.r[29] = c.r[5] | c.r[5];
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f169cu;
    f_8006c450(c);
R_010f169c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010f18a0;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f16b0u;
    f_8006c460(c);
R_010f16b0:
    c.r[25] = ((((g_mr031_bases[5] + 0x307d0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr031_bases[5] + 0x307d0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f16d8u;
    f_801c7860(c);
R_010f16d8:
    c.r[24] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[24] | c.r[24];
    c.lr = 0x10f16e8u;
    f_mr031_0102a2e0(c);
R_010f16e8:
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
    c.lr = 0x10f170cu;
    f_mr031_0102a4a0(c);
R_010f170c:
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
    if (!wp::cr_get(c, 2)) goto L_010f1748;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f174c;
L_010f1748:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f174c:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10f176cu;
    f_mr031_0102a4a0(c);
R_010f176c:
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
    if (!wp::cr_get(c, 2)) goto L_010f17c8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f17cc;
L_010f17c8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f17cc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10f17ecu;
    f_mr031_0102a4a0(c);
R_010f17ec:
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
    if (!wp::cr_get(c, 2)) goto L_010f1830;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f1834;
L_010f1830:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f1834:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10f1854u;
    f_mr031_0102a4a0(c);
R_010f1854:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f1870;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010f1874;
L_010f1870:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010f1874:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1888u;
    wp::call(c, c.ctr);
R_010f1888:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f18cc;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f189cu;
    f_801c7a8c(c);
R_010f189c:
    goto L_010f18cc;
L_010f18a0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10f18acu;
    f_8006c4e0(c);
R_010f18ac:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10f18ccu;
    wp::call(c, c.ctr);
L_010f18cc:
R_010f18cc:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f18e4u;
    wp::call(c, c.ctr);
R_010f18e4:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f190c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f190cu;
    wp::call(c, c.ctr);
L_010f190c:
R_010f190c:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1934;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1934u;
    wp::call(c, c.ctr);
L_010f1934:
R_010f1934:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10f193cu;
    f_801c83f8(c);
R_010f193c:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010f1950(wp::Cpu& c) {
    WP_ENTER(0x10f1950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f197cu: goto R_010f197c;
        case 0x10f1998u: goto R_010f1998;
        case 0x10f19b0u: goto R_010f19b0;
        case 0x10f19d4u: goto R_010f19d4;
        case 0x10f19f8u: goto R_010f19f8;
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
    c.lr = 0x10f197cu;
    f_80010060(c);
R_010f197c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1998u;
    wp::call(c, c.ctr);
R_010f1998:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f19b0u;
    wp::call(c, c.ctr);
R_010f19b0:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f19d4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f19d4u;
    wp::call(c, c.ctr);
L_010f19d4:
R_010f19d4:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f19f8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f19f8u;
    wp::call(c, c.ctr);
L_010f19f8:
R_010f19f8:
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

void f_mr031_010f1a20(wp::Cpu& c) {
    WP_ENTER(0x10f1a20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1a34u: goto R_010f1a34;
        case 0x10f1a48u: goto R_010f1a48;
        case 0x10f1a5cu: goto R_010f1a5c;
        case 0x10f1a84u: goto R_010f1a84;
        case 0x10f1a94u: goto R_010f1a94;
        case 0x10f1ab8u: goto R_010f1ab8;
        case 0x10f1b18u: goto R_010f1b18;
        case 0x10f1b98u: goto R_010f1b98;
        case 0x10f1c00u: goto R_010f1c00;
        case 0x10f1c30u: goto R_010f1c30;
        case 0x10f1c44u: goto R_010f1c44;
        case 0x10f1c54u: goto R_010f1c54;
        case 0x10f1c70u: goto R_010f1c70;
        case 0x10f1c88u: goto R_010f1c88;
        case 0x10f1cacu: goto R_010f1cac;
        case 0x10f1cd0u: goto R_010f1cd0;
        case 0x10f1cd8u: goto R_010f1cd8;
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
    c.lr = 0x10f1a34u;
    f_801c83b0(c);
R_010f1a34:
    c.r[30] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f1a48u;
    f_8006c450(c);
R_010f1a48:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010f1c48;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f1a5cu;
    f_8006c460(c);
R_010f1a5c:
    c.r[26] = ((((g_mr031_bases[5] + 0x307d0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr031_bases[5] + 0x307d0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f1a84u;
    f_801c7860(c);
R_010f1a84:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x10f1a94u;
    f_mr031_0102a2e0(c);
R_010f1a94:
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
    c.lr = 0x10f1ab8u;
    f_mr031_0102a4a0(c);
R_010f1ab8:
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
    if (!wp::cr_get(c, 2)) goto L_010f1af4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f1af8;
L_010f1af4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f1af8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10f1b18u;
    f_mr031_0102a4a0(c);
R_010f1b18:
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
    if (!wp::cr_get(c, 2)) goto L_010f1b74;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f1b78;
L_010f1b74:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f1b78:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10f1b98u;
    f_mr031_0102a4a0(c);
R_010f1b98:
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
    if (!wp::cr_get(c, 2)) goto L_010f1bdc;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f1be0;
L_010f1bdc:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f1be0:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10f1c00u;
    f_mr031_0102a4a0(c);
R_010f1c00:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f1c1c;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010f1c20;
L_010f1c1c:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010f1c20:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1c30u;
    wp::call(c, c.ctr);
R_010f1c30:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f1c70;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f1c44u;
    f_801c7a8c(c);
R_010f1c44:
    goto L_010f1c70;
L_010f1c48:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10f1c54u;
    f_8006c4e0(c);
R_010f1c54:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1c70u;
    wp::call(c, c.ctr);
L_010f1c70:
R_010f1c70:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1c88u;
    wp::call(c, c.ctr);
R_010f1c88:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1cac;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1cacu;
    wp::call(c, c.ctr);
L_010f1cac:
R_010f1cac:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1cd0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1cd0u;
    wp::call(c, c.ctr);
L_010f1cd0:
R_010f1cd0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10f1cd8u;
    f_801c83fc(c);
R_010f1cd8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010f1cf0(wp::Cpu& c) {
    WP_ENTER(0x10f1cf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1d38u: goto R_010f1d38;
        case 0x10f1d5cu: goto R_010f1d5c;
        case 0x10f1d84u: goto R_010f1d84;
        case 0x10f1dacu: goto R_010f1dac;
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
    c.lr = 0x10f1d38u;
    wp::call(c, c.ctr);
R_010f1d38:
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
    c.lr = 0x10f1d5cu;
    wp::call(c, c.ctr);
R_010f1d5c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1d84;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1d84u;
    wp::call(c, c.ctr);
L_010f1d84:
R_010f1d84:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1dac;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1dacu;
    wp::call(c, c.ctr);
L_010f1dac:
R_010f1dac:
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

void f_mr031_010f1dd0(wp::Cpu& c) {
    WP_ENTER(0x10f1dd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr031_bases[6] + 0x5e48u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr031_bases[6] + 0x5e48u) & 0xFFFFu);
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr031_010f1df0(wp::Cpu& c) {
    WP_ENTER(0x10f1df0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1e20u: goto R_010f1e20;
        case 0x10f1e40u: goto R_010f1e40;
        case 0x10f1e70u: goto R_010f1e70;
        case 0x10f1e78u: goto R_010f1e78;
        case 0x10f1e8cu: goto R_010f1e8c;
        case 0x10f1e9cu: goto R_010f1e9c;
        case 0x10f1eb0u: goto R_010f1eb0;
        case 0x10f1eccu: goto R_010f1ecc;
        case 0x10f1ed4u: goto R_010f1ed4;
        case 0x10f1ee8u: goto R_010f1ee8;
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
    c.lr = 0x10f1e20u;
    wp::call(c, c.ctr);
R_010f1e20:
    c.r[31] = 0x0u;
    goto L_010f1e48;
L_010f1e28:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1e40u;
    wp::call(c, c.ctr);
R_010f1e40:
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_010f1e48:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f1e28;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1e70u;
    wp::call(c, c.ctr);
R_010f1e70:
    goto L_010f1e78;
L_010f1e74:
    c.lr = 0x10f1e78u;
    f_8006a940(c);
L_010f1e78:
R_010f1e78:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1e8cu;
    wp::call(c, c.ctr);
R_010f1e8c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f1e74;
    }
    goto L_010f1e9c;
L_010f1e98:
    c.lr = 0x10f1e9cu;
    f_8006a940(c);
L_010f1e9c:
R_010f1e9c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1eb0u;
    wp::call(c, c.ctr);
R_010f1eb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f1e98;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xa4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1eccu;
    wp::call(c, c.ctr);
R_010f1ecc:
    goto L_010f1ed4;
L_010f1ed0:
    c.lr = 0x10f1ed4u;
    f_8006a940(c);
L_010f1ed4:
R_010f1ed4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1ee8u;
    wp::call(c, c.ctr);
R_010f1ee8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f1ed0;
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

void f_mr031_010f1f10(wp::Cpu& c) {
    WP_ENTER(0x10f1f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1f38u: goto R_010f1f38;
        case 0x10f1f5cu: goto R_010f1f5c;
        case 0x10f1f80u: goto R_010f1f80;
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
    c.lr = 0x10f1f38u;
    f_80043290(c);
R_010f1f38:
    ea = c.r[31] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1f5c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1f5cu;
    wp::call(c, c.ctr);
L_010f1f5c:
R_010f1f5c:
    ea = c.r[31] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1f80;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1f80u;
    wp::call(c, c.ctr);
L_010f1f80:
R_010f1f80:
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

void f_mr031_010f1fa0(wp::Cpu& c) {
    WP_ENTER(0x10f1fa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f1fc0u: goto R_010f1fc0;
        case 0x10f1fe0u: goto R_010f1fe0;
        case 0x10f2000u: goto R_010f2000;
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
    c.lr = 0x10f1fc0u;
    f_800402f0(c);
R_010f1fc0:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f1fe0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f1fe0u;
    wp::call(c, c.ctr);
L_010f1fe0:
R_010f1fe0:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2000;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2000u;
    wp::call(c, c.ctr);
L_010f2000:
R_010f2000:
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

void f_mr031_010f2020(wp::Cpu& c) {
    WP_ENTER(0x10f2020u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f2048u: goto R_010f2048;
        case 0x10f2064u: goto R_010f2064;
        case 0x10f2094u: goto R_010f2094;
        case 0x10f20b4u: goto R_010f20b4;
        case 0x10f20c8u: goto R_010f20c8;
        case 0x10f20f8u: goto R_010f20f8;
        case 0x10f2118u: goto R_010f2118;
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
    c.lr = 0x10f2048u;
    f_801c79a4(c);
R_010f2048:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2064;
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10f2064u;
    f_mr031_010aa610(c);
L_010f2064:
R_010f2064:
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f2094;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f2094;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2094u;
    wp::call(c, c.ctr);
L_010f2094:
R_010f2094:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr031_bases[5] + 0x30b08u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x198u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30b08u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10f20b4u;
    wp::call(c, c.ctr);
R_010f20b4:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[6] = 0x1u;
    c.lr = 0x10f20c8u;
    f_80043490(c);
R_010f20c8:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f20f8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f20f8u;
    wp::call(c, c.ctr);
L_010f20f8:
R_010f20f8:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2118;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2118u;
    wp::call(c, c.ctr);
L_010f2118:
R_010f2118:
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

void f_mr031_010f2140(wp::Cpu& c) {
    WP_ENTER(0x10f2140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f2160u: goto R_010f2160;
        case 0x10f217cu: goto R_010f217c;
        case 0x10f2190u: goto R_010f2190;
        case 0x10f21a4u: goto R_010f21a4;
        case 0x10f21b8u: goto R_010f21b8;
        case 0x10f21ccu: goto R_010f21cc;
        case 0x10f21f0u: goto R_010f21f0;
        case 0x10f2208u: goto R_010f2208;
        case 0x10f2224u: goto R_010f2224;
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
    c.lr = 0x10f2160u;
    f_mr031_010ec780(c);
R_010f2160:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f217cu;
    wp::call(c, c.ctr);
R_010f217c:
    c.r[31] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f2190u;
    f_80071fe0(c);
R_010f2190:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_010f21ac;
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f21a4u;
    f_80071fe0(c);
R_010f21a4:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
    goto L_010f21d0;
L_010f21ac:
    c.r[31] = ((((g_mr031_bases[4] + 0x4254u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4254u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f21b8u;
    f_80071fe0(c);
R_010f21b8:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010f21d0;
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4254u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f21ccu;
    f_80071fe0(c);
R_010f21cc:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
L_010f21d0:
    ea = c.r[29] + 0x194u;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2224;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f21f0u;
    wp::call(c, c.ctr);
R_010f21f0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2208u;
    wp::call(c, c.ctr);
R_010f2208:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2224u;
    wp::call(c, c.ctr);
L_010f2224:
R_010f2224:
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

void f_mr031_010f2240(wp::Cpu& c) {
    WP_ENTER(0x10f2240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f2254u: goto R_010f2254;
        case 0x10f2274u: goto R_010f2274;
        case 0x10f229cu: goto R_010f229c;
        case 0x10f22e0u: goto R_010f22e0;
        case 0x10f22f8u: goto R_010f22f8;
        case 0x10f230cu: goto R_010f230c;
        case 0x10f2318u: goto R_010f2318;
        case 0x10f2320u: goto R_010f2320;
        case 0x10f234cu: goto R_010f234c;
        case 0x10f2394u: goto R_010f2394;
        case 0x10f23e0u: goto R_010f23e0;
        case 0x10f23f4u: goto R_010f23f4;
        case 0x10f240cu: goto R_010f240c;
        case 0x10f2428u: goto R_010f2428;
        case 0x10f2438u: goto R_010f2438;
        case 0x10f2444u: goto R_010f2444;
        case 0x10f2454u: goto R_010f2454;
        case 0x10f2458u: goto R_010f2458;
        case 0x10f2460u: goto R_010f2460;
        case 0x10f248cu: goto R_010f248c;
        case 0x10f2498u: goto R_010f2498;
        case 0x10f24a4u: goto R_010f24a4;
        case 0x10f24b4u: goto R_010f24b4;
        case 0x10f24b8u: goto R_010f24b8;
        case 0x10f24c0u: goto R_010f24c0;
        case 0x10f24f0u: goto R_010f24f0;
        case 0x10f2518u: goto R_010f2518;
        case 0x10f2524u: goto R_010f2524;
        case 0x10f2534u: goto R_010f2534;
        case 0x10f2538u: goto R_010f2538;
        case 0x10f2540u: goto R_010f2540;
        case 0x10f25b0u: goto R_010f25b0;
        case 0x10f25e4u: goto R_010f25e4;
        case 0x10f2600u: goto R_010f2600;
        case 0x10f2628u: goto R_010f2628;
        case 0x10f2644u: goto R_010f2644;
        case 0x10f2664u: goto R_010f2664;
        case 0x10f268cu: goto R_010f268c;
        case 0x10f26c8u: goto R_010f26c8;
        case 0x10f26f0u: goto R_010f26f0;
        case 0x10f2730u: goto R_010f2730;
        case 0x10f274cu: goto R_010f274c;
        case 0x10f27a0u: goto R_010f27a0;
        case 0x10f27a8u: goto R_010f27a8;
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
    c.lr = 0x10f2254u;
    f_801c83ac(c);
R_010f2254:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    ea = c.r[12] + 0xa0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10f2274u;
    wp::call(c, c.ctr);
R_010f2274:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f229c;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f229c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f229cu;
    wp::call(c, c.ctr);
L_010f229c:
R_010f229c:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2320;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f22c0;
    ea = c.r[28] + 0x186u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f22cc;
L_010f22c0:
    ea = c.r[28] + 0x187u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f22e4;
L_010f22cc:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f22e0u;
    wp::call(c, c.ctr);
R_010f22e0:
    goto L_010f22f8;
L_010f22e4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f22f8u;
    wp::call(c, c.ctr);
L_010f22f8:
R_010f22f8:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f230cu;
    wp::call(c, c.ctr);
R_010f230c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2320;
    c.lr = 0x10f2318u;
    f_8004a110(c);
R_010f2318:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x10f2320u;
    f_8004a100(c);
L_010f2320:
R_010f2320:
    ea = c.r[28] + 0x140u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f27a0;
    ea = c.r[28] + 0x150u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f23a4;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f234cu;
    wp::call(c, c.ctr);
R_010f234c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f27a0;
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f236c;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[0]);
L_010f236c:
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f2394;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2394u;
    wp::call(c, c.ctr);
L_010f2394:
R_010f2394:
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_010f23a4;
    goto L_010f27a0;
L_010f23a4:
    ea = c.r[28] + 0x16au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f268c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f268c;
    ea = c.r[28] + 0x16cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f23d4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    goto L_010f27a0;
L_010f23d4:
    c.r[30] = 0x0u;
    c.r[29] = 0x1u;
    c.lr = 0x10f23e0u;
    f_8000e2a0(c);
R_010f23e0:
    c.r[25] = c.r[3] | c.r[3];
    c.r[24] = 0x0u;
    c.r[26] = 0x1u;
L_010f23ec:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f23f4u;
    f_8000fc20(c);
R_010f23f4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = wp::slw(c.r[26], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f240cu;
    wp::call(c, c.ctr);
R_010f240c:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[0] & c.r[27];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f246c;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f2430;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f2428u;
    f_8000fc40(c);
R_010f2428:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f246c;
L_010f2430:
    c.r[29] = 0x0u;
    c.lr = 0x10f2438u;
    f_8000dd70(c);
R_010f2438:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f2444u;
    f_8000fc20(c);
R_010f2444:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010f246c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f2454u;
    f_8000fc20(c);
R_010f2454:
    c.lr = 0x10f2458u;
    f_800699d0(c);
R_010f2458:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f2460u;
    f_80066cd0(c);
R_010f2460:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f246c;
    c.r[30] = 0x1u;
L_010f246c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f23ec;
    }
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f24d8;
    c.r[24] = 0x0u;
L_010f2484:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f248cu;
    f_8000fc40(c);
R_010f248c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f24cc;
    c.lr = 0x10f2498u;
    f_8000dd70(c);
R_010f2498:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f24a4u;
    f_8000fc20(c);
R_010f24a4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010f24cc;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f24b4u;
    f_8000fc20(c);
R_010f24b4:
    c.lr = 0x10f24b8u;
    f_800699d0(c);
R_010f24b8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f24c0u;
    f_80066cd0(c);
R_010f24c0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f24cc;
    c.r[30] = 0x1u;
L_010f24cc:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f2484;
    }
L_010f24d8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2558;
    c.r[24] = 0x1u;
    c.r[25] = 0x0u;
L_010f24e8:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f24f0u;
    f_8000fc40(c);
R_010f24f0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f24fc;
    c.r[24] = 0x0u;
L_010f24fc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f24e8;
    }
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2558;
    c.r[24] = 0x0u;
L_010f2514:
    c.lr = 0x10f2518u;
    f_8000dd70(c);
R_010f2518:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f2524u;
    f_8000fc20(c);
R_010f2524:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010f254c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10f2534u;
    f_8000fc20(c);
R_010f2534:
    c.lr = 0x10f2538u;
    f_800699d0(c);
R_010f2538:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f2540u;
    f_80066cd0(c);
R_010f2540:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f254c;
    c.r[30] = 0x1u;
L_010f254c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f2514;
    }
L_010f2558:
    ea = c.r[28] + 0x15eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2588;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2588;
    ea = c.r[28] + 0x160u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_010f2588;
    c.r[30] = 0x1u;
L_010f2588:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f268c;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f268c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f25b0u;
    wp::call(c, c.ctr);
R_010f25b0:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f2600;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2600;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2600;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f25e4u;
    wp::call(c, c.ctr);
R_010f25e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2600;
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[31] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10f2600u;
    f_80018e30(c);
L_010f2600:
R_010f2600:
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
    c.lr = 0x10f2628u;
    wp::call(c, c.ctr);
R_010f2628:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x180u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2644u;
    wp::call(c, c.ctr);
R_010f2644:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010f2668;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x17cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2664u;
    wp::call(c, c.ctr);
R_010f2664:
    goto L_010f2674;
L_010f2668:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_010f2674:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f268cu;
    wp::call(c, c.ctr);
L_010f268c:
R_010f268c:
    ea = c.r[28] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f26fc;
    ea = c.r[28] + 0x15du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f26fc;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f26fc;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f26c8u;
    wp::call(c, c.ctr);
R_010f26c8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f26fc;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f26fc;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f26f0u;
    wp::call(c, c.ctr);
R_010f26f0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f26fc;
    c.r[30] = 0x1u;
L_010f26fc:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f27a0;
    ea = c.r[31] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f2780;
    c.r[24] = 0x0u;
    c.r[29] = 0x1u;
L_010f271c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2730u;
    wp::call(c, c.ctr);
R_010f2730:
    c.r[3] = c.r[3] & 0xffffu;
    c.r[0] = wp::slw(c.r[29], c.r[24]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010f2774;
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.lr = 0x10f274cu;
    f_8000ffd0(c);
R_010f274c:
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
    goto L_010f2780;
L_010f2774:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f271c;
    }
L_010f2780:
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
    c.lr = 0x10f27a0u;
    wp::call(c, c.ctr);
L_010f27a0:
R_010f27a0:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x10f27a8u;
    f_801c83f8(c);
R_010f27a8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr031_010f27c0(wp::Cpu& c) {
    WP_ENTER(0x10f27c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr031_010f27d0(wp::Cpu& c) {
    WP_ENTER(0x10f27d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr031_bases[4] + 0x420cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x420cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x0u;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010f27f8;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f27f8;
    c.r[4] = 0x1u;
L_010f27f8:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr031_010f2800(wp::Cpu& c) {
    WP_ENTER(0x10f2800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f2838u: goto R_010f2838;
        case 0x10f2850u: goto R_010f2850;
        case 0x10f2858u: goto R_010f2858;
        case 0x10f2884u: goto R_010f2884;
        case 0x10f289cu: goto R_010f289c;
        case 0x10f28a4u: goto R_010f28a4;
        case 0x10f28d0u: goto R_010f28d0;
        case 0x10f28e8u: goto R_010f28e8;
        case 0x10f28f0u: goto R_010f28f0;
        case 0x10f291cu: goto R_010f291c;
        case 0x10f2934u: goto R_010f2934;
        case 0x10f293cu: goto R_010f293c;
        case 0x10f294cu: goto R_010f294c;
        case 0x10f2964u: goto R_010f2964;
        case 0x10f297cu: goto R_010f297c;
        case 0x10f2994u: goto R_010f2994;
        case 0x10f29acu: goto R_010f29ac;
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
    if (wp::cr_get(c, 2)) goto L_010f2858;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2838u;
    wp::call(c, c.ctr);
R_010f2838:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2850u;
    wp::call(c, c.ctr);
R_010f2850:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10f2858u;
    f_80019f20(c);
L_010f2858:
R_010f2858:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2998;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f28a4;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2884u;
    wp::call(c, c.ctr);
R_010f2884:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f289cu;
    wp::call(c, c.ctr);
R_010f289c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10f28a4u;
    f_80019f20(c);
L_010f28a4:
R_010f28a4:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2980;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f28f0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f28d0u;
    wp::call(c, c.ctr);
R_010f28d0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f28e8u;
    wp::call(c, c.ctr);
R_010f28e8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10f28f0u;
    f_80019f20(c);
L_010f28f0:
R_010f28f0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2968;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f293c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f291cu;
    wp::call(c, c.ctr);
R_010f291c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2934u;
    wp::call(c, c.ctr);
R_010f2934:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10f293cu;
    f_80019f20(c);
L_010f293c:
R_010f293c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2950;
    c.lr = 0x10f294cu;
    f_mr031_010f2800(c);
R_010f294c:
    goto L_010f29ac;
L_010f2950:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2964u;
    wp::call(c, c.ctr);
R_010f2964:
    goto L_010f29ac;
L_010f2968:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f297cu;
    wp::call(c, c.ctr);
R_010f297c:
    goto L_010f29ac;
L_010f2980:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2994u;
    wp::call(c, c.ctr);
R_010f2994:
    goto L_010f29ac;
L_010f2998:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f29acu;
    wp::call(c, c.ctr);
L_010f29ac:
R_010f29ac:
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

void f_mr031_010f29d0(wp::Cpu& c) {
    WP_ENTER(0x10f29d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f2a18u: goto R_010f2a18;
        case 0x10f2a48u: goto R_010f2a48;
        case 0x10f2a50u: goto R_010f2a50;
        case 0x10f2a6cu: goto R_010f2a6c;
        case 0x10f2a74u: goto R_010f2a74;
        case 0x10f2a94u: goto R_010f2a94;
        case 0x10f2a9cu: goto R_010f2a9c;
        case 0x10f2ac0u: goto R_010f2ac0;
        case 0x10f2ae4u: goto R_010f2ae4;
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
    c.r[31] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
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
    c.lr = 0x10f2a18u;
    wp::call(c, c.ctr);
R_010f2a18:
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f2a30;
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f2a54;
L_010f2a30:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2a48u;
    wp::call(c, c.ctr);
R_010f2a48:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f2a50u;
    f_80043120(c);
R_010f2a50:
    goto L_010f2a74;
L_010f2a54:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2a6cu;
    wp::call(c, c.ctr);
R_010f2a6c:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f2a74u;
    f_80043120(c);
L_010f2a74:
R_010f2a74:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2a9c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2a94u;
    wp::call(c, c.ctr);
R_010f2a94:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f2a9cu;
    f_80043060(c);
L_010f2a9c:
R_010f2a9c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2ac0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2ac0u;
    wp::call(c, c.ctr);
L_010f2ac0:
R_010f2ac0:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2ae4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2ae4u;
    wp::call(c, c.ctr);
L_010f2ae4:
R_010f2ae4:
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

void f_mr031_010f2b10(wp::Cpu& c) {
    WP_ENTER(0x10f2b10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr031_010f2b20(wp::Cpu& c) {
    WP_ENTER(0x10f2b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f2bb0u: goto R_010f2bb0;
        case 0x10f2bd4u: goto R_010f2bd4;
        case 0x10f2c10u: goto R_010f2c10;
        case 0x10f2c24u: goto R_010f2c24;
        case 0x10f2c48u: goto R_010f2c48;
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
    if (wp::cr_get(c, 2)) goto L_010f2c48;
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2bd8;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2bd8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2b88;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f2b90;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f2bb4;
    goto L_010f2bdc;
L_010f2b88:
    c.r[31] = 0x1u;
    goto L_010f2bdc;
L_010f2b90:
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
    c.lr = 0x10f2bb0u;
    wp::call(c, c.ctr);
R_010f2bb0:
    goto L_010f2bdc;
L_010f2bb4:
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
    c.lr = 0x10f2bd4u;
    wp::call(c, c.ctr);
R_010f2bd4:
    goto L_010f2bdc;
L_010f2bd8:
    c.r[31] = 0x1u;
L_010f2bdc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2c48;
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2c48;
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
    c.lr = 0x10f2c10u;
    wp::call(c, c.ctr);
R_010f2c10:
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2c24u;
    wp::call(c, c.ctr);
R_010f2c24:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f2c48;
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2c48u;
    wp::call(c, c.ctr);
L_010f2c48:
R_010f2c48:
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

void f_mr031_010f2c70(wp::Cpu& c) {
    WP_ENTER(0x10f2c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2c84;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_010f2c84:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2d04;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2d04;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2cbc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f2cdc;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f2cf0;
    return;
L_010f2cbc:
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
L_010f2cdc:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010f2cf0:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010f2d04:
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

void f_mr031_010f2d30(wp::Cpu& c) {
    WP_ENTER(0x10f2d30u);
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
    if (!wp::cr_get(c, 2)) goto L_010f2d58;
    return;
L_010f2d58:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2dd8;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2dd8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f2d90;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f2db0;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f2dc4;
    return;
L_010f2d90:
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
L_010f2db0:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010f2dc4:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010f2dd8:
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

void f_mr031_010f2e00(wp::Cpu& c) {
    WP_ENTER(0x10f2e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f2e3cu: goto R_010f2e3c;
        case 0x10f2e50u: goto R_010f2e50;
        case 0x10f2ed8u: goto R_010f2ed8;
        case 0x10f2ef4u: goto R_010f2ef4;
        case 0x10f2f10u: goto R_010f2f10;
        case 0x10f2f1cu: goto R_010f2f1c;
        case 0x10f2f28u: goto R_010f2f28;
        case 0x10f2f30u: goto R_010f2f30;
        case 0x10f2f58u: goto R_010f2f58;
        case 0x10f2fc8u: goto R_010f2fc8;
        case 0x10f2ff8u: goto R_010f2ff8;
        case 0x10f3004u: goto R_010f3004;
        case 0x10f3010u: goto R_010f3010;
        case 0x10f301cu: goto R_010f301c;
        case 0x10f3028u: goto R_010f3028;
        case 0x10f303cu: goto R_010f303c;
        case 0x10f3048u: goto R_010f3048;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr031_bases[5] + 0x30cc0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[4] | c.r[4];
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr031_bases[5] + 0x30cc0u) & 0xFFFFu);
    c.lr = 0x10f2e3cu;
    f_mr031_010a38a0(c);
R_010f2e3c:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[29] + 0x2bcu;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x10f2e50u;
    f_80063370(c);
R_010f2e50:
    c.r[3] = ((((g_mr031_bases[5] + 0x310d8u) + 0x8000u) >> 16) << 16);
    c.r[6] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x310d8u) & 0xFFFFu);
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
    c.lr = 0x10f2ed8u;
    f_80053d20(c);
R_010f2ed8:
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
    c.lr = 0x10f2ef4u;
    f_80053df0(c);
R_010f2ef4:
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
    c.lr = 0x10f2f10u;
    f_mr031_0109b5f0(c);
R_010f2f10:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1000u;
    c.lr = 0x10f2f1cu;
    f_80052170(c);
R_010f2f1c:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0xcu;
    c.lr = 0x10f2f28u;
    f_80052190(c);
R_010f2f28:
    c.r[3] = 0x18u;
    c.lr = 0x10f2f30u;
    f_801c79a4(c);
R_010f2f30:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010f2f9c;
    c.r[5] = ((((g_mr031_bases[5] + 0x31880u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x1b30u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x31880u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x1b30u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10f2f58u;
    f_8003b350(c);
R_010f2f58:
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mr031_bases[5] + 0x31894u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x31894u) & 0xFFFFu);
    c.r[4] = ((((g_mr031_bases[5] + 0x310c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x310c0u) & 0xFFFFu);
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
L_010f2f9c:
    ea = c.r[29] + 0x2d4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f2fc8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x2d4u;
    wp::wr32(ea, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010f2fc8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f2fc8u;
    wp::call(c, c.ctr);
L_010f2fc8:
R_010f2fc8:
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
    c.lr = 0x10f2ff8u;
    wp::call(c, c.ctr);
R_010f2ff8:
    ea = c.r[29] + 0x2d4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f3004u;
    f_mr031_0109ad50(c);
R_010f3004:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x10f3010u;
    f_mr031_0109aeb0(c);
R_010f3010:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x10f301cu;
    f_mr031_0109aed0(c);
R_010f301c:
    ea = c.r[31] + 0x6cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f3028u;
    f_mr031_0109ae90(c);
R_010f3028:
    ea = c.r[29] + 0x2ecu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] + 0x54u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x10f303cu;
    f_80054e60(c);
R_010f303c:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x10f3048u;
    f_80056040(c);
R_010f3048:
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

void f_mr031_010f3070(wp::Cpu& c) {
    WP_ENTER(0x10f3070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f30a8u: goto R_010f30a8;
        case 0x10f30b8u: goto R_010f30b8;
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
    if (wp::cr_get(c, 2)) goto L_010f30b8;
    c.r[4] = ((((g_mr031_bases[5] + 0x31894u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31894u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f30a8u;
    f_8003b480(c);
R_010f30a8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f30b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f30b8u;
    f_801c7a8c(c);
L_010f30b8:
R_010f30b8:
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

void f_mr031_010f30e0(wp::Cpu& c) {
    WP_ENTER(0x10f30e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f3120u: goto R_010f3120;
        case 0x10f3130u: goto R_010f3130;
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
    if (wp::cr_get(c, 2)) goto L_010f3130;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010f3120;
    c.r[4] = ((((g_mr031_bases[5] + 0x31894u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31894u) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10f3120u;
    f_8003b480(c);
L_010f3120:
R_010f3120:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f3130;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f3130u;
    f_801c7a8c(c);
L_010f3130:
R_010f3130:
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

void f_mr031_010f3150(wp::Cpu& c) {
    WP_ENTER(0x10f3150u);
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

void f_mr031_010f3170(wp::Cpu& c) {
    WP_ENTER(0x10f3170u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f31b4u: goto R_010f31b4;
        case 0x10f31c4u: goto R_010f31c4;
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
    if (wp::cr_get(c, 2)) goto L_010f31c4;
    if (wp::cr_get(c, 2)) goto L_010f31b4;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010f31b4;
    c.r[4] = ((((g_mr031_bases[5] + 0x31894u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31894u) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10f31b4u;
    f_8003b480(c);
L_010f31b4:
R_010f31b4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f31c4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f31c4u;
    f_801c7a8c(c);
L_010f31c4:
R_010f31c4:
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

void f_mr031_010f31e0(wp::Cpu& c) {
    WP_ENTER(0x10f31e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f3230u: goto R_010f3230;
        case 0x10f3258u: goto R_010f3258;
        case 0x10f3264u: goto R_010f3264;
        case 0x10f3270u: goto R_010f3270;
        case 0x10f3280u: goto R_010f3280;
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
    if (wp::cr_get(c, 2)) goto L_010f3280;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010f3230;
    if (wp::cr_get(c, 2)) goto L_010f3230;
    if (wp::cr_get(c, 2)) goto L_010f3230;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f3230;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f3230u;
    f_801c7a8c(c);
L_010f3230:
R_010f3230:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f3258;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f3258;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f3258u;
    wp::call(c, c.ctr);
L_010f3258:
R_010f3258:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x10f3264u;
    f_80063bb0(c);
R_010f3264:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10f3270u;
    f_mr031_010a3dd0(c);
R_010f3270:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f3280;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f3280u;
    f_801c7a8c(c);
L_010f3280:
R_010f3280:
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

void f_mr031_010f32a0(wp::Cpu& c) {
    WP_ENTER(0x10f32a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f32b4u: goto R_010f32b4;
        case 0x10f32d4u: goto R_010f32d4;
        case 0x10f336cu: goto R_010f336c;
        case 0x10f33b4u: goto R_010f33b4;
        case 0x10f3410u: goto R_010f3410;
        case 0x10f34a4u: goto R_010f34a4;
        case 0x10f34ecu: goto R_010f34ec;
        case 0x10f3548u: goto R_010f3548;
        case 0x10f358cu: goto R_010f358c;
        case 0x10f35c4u: goto R_010f35c4;
        case 0x10f3660u: goto R_010f3660;
        case 0x10f36a4u: goto R_010f36a4;
        case 0x10f3704u: goto R_010f3704;
        case 0x10f3748u: goto R_010f3748;
        case 0x10f37a4u: goto R_010f37a4;
        case 0x10f37c0u: goto R_010f37c0;
        case 0x10f37c8u: goto R_010f37c8;
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
    c.lr = 0x10f32b4u;
    f_801c83ac(c);
R_010f32b4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x10f32d4u;
    wp::call(c, c.ctr);
R_010f32d4:
    c.r[4] = ((((g_mr031_bases[5] + 0x30ce8u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30ce8u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f331c;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f331c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f331c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f3410;
L_010f331c:
    c.r[3] = ((((g_mr031_bases[5] + 0x30ce8u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x30ce8u) & 0xFFFFu);
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
    c.lr = 0x10f336cu;
    wp::call(c, c.ctr);
R_010f336c:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f33b4;
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
    c.lr = 0x10f33b4u;
    wp::call(c, c.ctr);
L_010f33b4:
R_010f33b4:
    c.r[3] = ((((g_mr031_bases[5] + 0x30ce8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x30ce8u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f3410;
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
    c.lr = 0x10f3410u;
    wp::call(c, c.ctr);
L_010f3410:
R_010f3410:
    c.r[4] = ((((g_mr031_bases[5] + 0x30d48u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30d48u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f3450;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f3450;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f3450;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f35c4;
L_010f3450:
    c.r[3] = ((((g_mr031_bases[5] + 0x30d48u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x30d48u) & 0xFFFFu);
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
    c.lr = 0x10f34a4u;
    wp::call(c, c.ctr);
R_010f34a4:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f34ec;
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
    c.lr = 0x10f34ecu;
    wp::call(c, c.ctr);
L_010f34ec:
R_010f34ec:
    c.r[3] = ((((g_mr031_bases[5] + 0x30d48u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x30d48u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f3548;
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
    c.lr = 0x10f3548u;
    wp::call(c, c.ctr);
L_010f3548:
R_010f3548:
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
    c.lr = 0x10f358cu;
    wp::call(c, c.ctr);
R_010f358c:
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
    c.lr = 0x10f35c4u;
    wp::call(c, c.ctr);
L_010f35c4:
R_010f35c4:
    c.r[4] = ((((g_mr031_bases[5] + 0x30da8u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30da8u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f360c;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f360c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f360c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f3748;
L_010f360c:
    c.r[4] = ((((g_mr031_bases[5] + 0x30da8u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x30da8u) & 0xFFFFu);
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
    c.lr = 0x10f3660u;
    wp::call(c, c.ctr);
R_010f3660:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f36a4;
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
    c.lr = 0x10f36a4u;
    wp::call(c, c.ctr);
L_010f36a4:
R_010f36a4:
    c.r[3] = ((((g_mr031_bases[5] + 0x30da8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x30da8u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f3704;
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
    c.lr = 0x10f3704u;
    wp::call(c, c.ctr);
L_010f3704:
R_010f3704:
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
    c.lr = 0x10f3748u;
    wp::call(c, c.ctr);
L_010f3748:
R_010f3748:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f37a4;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f37a4;
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
    c.lr = 0x10f37a4u;
    wp::call(c, c.ctr);
L_010f37a4:
R_010f37a4:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f37c0u;
    wp::call(c, c.ctr);
R_010f37c0:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x10f37c8u;
    f_801c83f8(c);
R_010f37c8:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mr031_010f37e0(wp::Cpu& c) {
    WP_ENTER(0x10f37e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f389cu: goto R_010f389c;
        case 0x10f38a0u: goto R_010f38a0;
        case 0x10f3900u: goto R_010f3900;
        case 0x10f3904u: goto R_010f3904;
        case 0x10f39c4u: goto R_010f39c4;
        case 0x10f39c8u: goto R_010f39c8;
        case 0x10f39d0u: goto R_010f39d0;
        case 0x10f39f8u: goto R_010f39f8;
        case 0x10f39fcu: goto R_010f39fc;
        case 0x10f3b54u: goto R_010f3b54;
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
    if (!wp::cr_get(c, 0)) goto L_010f386c;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010f385c;
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
L_010f385c:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_010f3b54;
L_010f386c:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010f38a0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x3085cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3085cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f389cu;
    f_801cee24(c);
R_010f389c:
    c.lr = 0x10f38a0u;
    f_801d3940(c);
L_010f38a0:
R_010f38a0:
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
    if (!wp::cr_get(c, 1)) goto L_010f3904;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x3085cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3085cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f3900u;
    f_801cee24(c);
R_010f3900:
    c.lr = 0x10f3904u;
    f_801d3940(c);
L_010f3904:
R_010f3904:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010f3954;
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
    if (!wp::cr_get(c, 0)) goto L_010f3948;
    c.r[3] = c.r[1] + 0x10u;
L_010f3948:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010f3998;
L_010f3954:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010f3990;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010f3984;
    c.r[3] = c.r[1] + 0x10u;
L_010f3984:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010f3998;
L_010f3990:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_010f3998:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010f39c8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x3085cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3085cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f39c4u;
    f_801cee24(c);
R_010f39c4:
    c.lr = 0x10f39c8u;
    f_801d3940(c);
L_010f39c8:
R_010f39c8:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x10f39d0u;
    f_801c79a4(c);
R_010f39d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010f39fc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x31928u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31928u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f39f8u;
    f_801cee24(c);
R_010f39f8:
    c.lr = 0x10f39fcu;
    f_801d3940(c);
L_010f39fc:
R_010f39fc:
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
    if (wp::cr_get(c, 2)) goto L_010f3a5c;
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
L_010f3a5c:
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
    if (!wp::cr_get(c, 1)) goto L_010f3b08;
    c.r[0] = c.r[0] | 0x0u;
L_010f3aa8:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_010f3aec;
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
L_010f3aec:
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
    goto L_010f3aa8;
    }
L_010f3b08:
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
    if (wp::cr_get(c, 2)) goto L_010f3b54;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f3b54;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10f3b54u;
    f_801c7a8c(c);
L_010f3b54:
R_010f3b54:
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

void f_mr031_010f3b80(wp::Cpu& c) {
    WP_ENTER(0x10f3b80u);
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

void f_mr031_010f3ba0(wp::Cpu& c) {
    WP_ENTER(0x10f3ba0u);
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
    if (wp::cr_get(c, 2)) goto L_010f3e94;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_010f3e94;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_010f3e34;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_010f3c44;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_010f3c38;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f3c38;
    c.r[9] = 0x0u;
L_010f3c38:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f3c44;
    c.r[7] = 0x1u;
L_010f3c44:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f3e34;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010f3e34;
L_010f3c68:
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
    goto L_010f3c68;
    }
L_010f3e34:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_010f3e94;
L_010f3e50:
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
    goto L_010f3e50;
    }
L_010f3e94:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr031_010f3eb0(wp::Cpu& c) {
    WP_ENTER(0x10f3eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr031_010f3ec0(wp::Cpu& c) {
    WP_ENTER(0x10f3ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mr031_010f3ed0(wp::Cpu& c) {
    WP_ENTER(0x10f3ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f3fd0u: goto R_010f3fd0;
        case 0x10f4000u: goto R_010f4000;
        case 0x10f401cu: goto R_010f401c;
        case 0x10f4038u: goto R_010f4038;
        case 0x10f4078u: goto R_010f4078;
        case 0x10f4080u: goto R_010f4080;
        case 0x10f408cu: goto R_010f408c;
        case 0x10f4090u: goto R_010f4090;
        case 0x10f410cu: goto R_010f410c;
        case 0x10f411cu: goto R_010f411c;
        case 0x10f4138u: goto R_010f4138;
        case 0x10f414cu: goto R_010f414c;
        case 0x10f4194u: goto R_010f4194;
        case 0x10f41c8u: goto R_010f41c8;
        case 0x10f41dcu: goto R_010f41dc;
        case 0x10f41ecu: goto R_010f41ec;
        case 0x10f4200u: goto R_010f4200;
        case 0x10f4220u: goto R_010f4220;
        case 0x10f4250u: goto R_010f4250;
        case 0x10f4280u: goto R_010f4280;
        case 0x10f42a0u: goto R_010f42a0;
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
    c.r[31] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f3f64;
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
    if (!wp::cr_get(c, 1)) goto L_010f3f58;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010f3f58:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_010f3fb4;
L_010f3f64:
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
    if (!wp::cr_get(c, 0)) goto L_010f3fb4;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010f3fb4:
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
    c.lr = 0x10f3fd0u;
    f_mr031_0109b5f0(c);
R_010f3fd0:
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
    if (!wp::cr_get(c, 1)) goto L_010f4254;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010f4098;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10f4000u;
    f_80053d40(c);
R_010f4000:
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
    c.lr = 0x10f401cu;
    f_8006b460(c);
R_010f401c:
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
    c.lr = 0x10f4038u;
    f_8006b460(c);
R_010f4038:
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
    c.lr = 0x10f4078u;
    wp::call(c, c.ctr);
R_010f4078:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f4080u;
    f_80071fe0(c);
R_010f4080:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10f408cu;
    f_80071fe0(c);
R_010f408c:
    c.lr = 0x10f4090u;
    f_8006b590(c);
R_010f4090:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_010f4098:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4220;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_010f4220;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f40c4;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_010f40c4:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f40f8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f4104;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010f413c;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_010f41e0;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_010f4204;
    goto L_010f4220;
L_010f40f8:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_010f4220;
L_010f4104:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10f410cu;
    f_80055bb0(c);
R_010f410c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4220;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x10f411cu;
    f_80055d80(c);
R_010f411c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010f4220;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4138u;
    wp::call(c, c.ctr);
R_010f4138:
    goto L_010f4220;
L_010f413c:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f414c;
    c.lr = 0x10f414cu;
    f_80019fa0(c);
L_010f414c:
R_010f414c:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f41a0;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010f41a0;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_010f4178;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_010f417c;
L_010f4178:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_010f417c:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x10f4194u;
    f_80055290(c);
R_010f4194:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_010f41a0:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f41c8;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f41c8u;
    wp::call(c, c.ctr);
L_010f41c8:
R_010f41c8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f41dcu;
    wp::call(c, c.ctr);
R_010f41dc:
    goto L_010f4220;
L_010f41e0:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10f41ecu;
    f_80019f20(c);
R_010f41ec:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4200u;
    wp::call(c, c.ctr);
R_010f4200:
    goto L_010f4220;
L_010f4204:
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
    c.lr = 0x10f4220u;
    wp::call(c, c.ctr);
L_010f4220:
R_010f4220:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f4234;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_010f4234:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10f4250u;
    f_mr031_0109aed0(c);
R_010f4250:
    goto L_010f42a4;
L_010f4254:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_010f42a4;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f42a4;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x10f4280u;
    f_80055290(c);
R_010f4280:
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
    c.lr = 0x10f42a0u;
    wp::call(c, c.ctr);
R_010f42a0:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_010f42a4:
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

void f_mr031_010f42d0(wp::Cpu& c) {
    WP_ENTER(0x10f42d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f42f4u: goto R_010f42f4;
        case 0x10f431cu: goto R_010f431c;
        case 0x10f432cu: goto R_010f432c;
        case 0x10f4344u: goto R_010f4344;
        case 0x10f4358u: goto R_010f4358;
        case 0x10f4374u: goto R_010f4374;
        case 0x10f437cu: goto R_010f437c;
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
    c.lr = 0x10f42f4u;
    f_8001b910(c);
R_010f42f4:
    c.r[3] = ((((g_mr031_bases[6] + 0x5e4cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x311b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[6] + 0x5e4cu) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x311b8u) & 0xFFFFu);
    c.r[0] = c.r[4] + 0x14u;
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x1u;
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f431cu;
    f_8001c510(c);
R_010f431c:
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f432cu;
    f_8001c520(c);
R_010f432c:
    c.r[31] = ((((g_mr031_bases[4] + 0x420cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x420cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x10f4344u;
    f_8001e440(c);
R_010f4344:
    ea = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x420cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x10f4358u;
    f_8001eb90(c);
R_010f4358:
    c.r[3] = ((((g_mr031_bases[5] + 0x30e08u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x30e08u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.lr = 0x10f4374u;
    f_8001fb40(c);
R_010f4374:
    c.r[3] = 0x1000u;
    c.lr = 0x10f437cu;
    f_8004a120(c);
R_010f437c:
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

void f_mr031_010f43a0(wp::Cpu& c) {
    WP_ENTER(0x10f43a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f43b4u: goto R_010f43b4;
        case 0x10f43dcu: goto R_010f43dc;
        case 0x10f4418u: goto R_010f4418;
        case 0x10f4460u: goto R_010f4460;
        case 0x10f447cu: goto R_010f447c;
        case 0x10f44e0u: goto R_010f44e0;
        case 0x10f44fcu: goto R_010f44fc;
        case 0x10f452cu: goto R_010f452c;
        case 0x10f4548u: goto R_010f4548;
        case 0x10f455cu: goto R_010f455c;
        case 0x10f457cu: goto R_010f457c;
        case 0x10f4594u: goto R_010f4594;
        case 0x10f45a0u: goto R_010f45a0;
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
    c.lr = 0x10f43b4u;
    f_801c83b4(c);
R_010f43b4:
    c.r[28] = ((((g_mr031_bases[5] + 0x307c8u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[5] | c.r[5];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr031_bases[5] + 0x307c8u) & 0xFFFFu);
    c.r[26] = c.r[4] | c.r[4];
    c.r[7] = c.r[6] | c.r[6];
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] + 0x644u;
    c.r[4] = c.r[28] + 0x658u;
    c.lr = 0x10f43dcu;
    f_8003f8f0(c);
R_010f43dc:
    c.r[4] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x10000u;
    c.r[29] = 0x0u;
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
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
    c.lr = 0x10f4418u;
    f_80069af0(c);
R_010f4418:
    c.r[3] = ((((g_mr031_bases[5] + 0x30e78u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x30e78u) & 0xFFFFu);
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
    c.lr = 0x10f4460u;
    wp::call(c, c.ctr);
R_010f4460:
    ea = c.r[31] + 0x2d8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] + 0x684u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f447cu;
    wp::call(c, c.ctr);
R_010f447c:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x2e6u;
    c.r[4] = wp::rd16(ea);
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    ea = c.r[31] + 0x2dcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[29] = 0xffffffffu;
    if (!wp::cr_get(c, 2)) goto L_010f449c;
    c.r[29] = 0x0u;
L_010f449c:
    c.r[0] = 0x1u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f44b0;
    c.r[29] = 0x1u;
L_010f44b0:
    c.r[0] = 0x2u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f44c4;
    c.r[29] = 0x2u;
L_010f44c4:
    c.r[0] = 0x3u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f44d8;
    c.r[29] = 0x3u;
L_010f44d8:
    c.r[3] = 0x350u;
    c.lr = 0x10f44e0u;
    f_801c79a4(c);
R_010f44e0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f44fc;
    c.r[0] = c.r[27] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10f44fcu;
    f_mr031_010aa610(c);
L_010f44fc:
R_010f44fc:
    ea = c.r[31] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f452c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x2ecu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f452c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f452cu;
    wp::call(c, c.ctr);
L_010f452c:
R_010f452c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x6a0u;
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x2ecu;
    c.r[28] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4548u;
    wp::call(c, c.ctr);
R_010f4548:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = 0x1u;
    c.lr = 0x10f455cu;
    f_80043490(c);
R_010f455c:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f457c;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x314u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f457cu;
    wp::call(c, c.ctr);
L_010f457c:
R_010f457c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4594u;
    wp::call(c, c.ctr);
R_010f4594:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f45a0u;
    f_801c8400(c);
R_010f45a0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010f45b0(wp::Cpu& c) {
    WP_ENTER(0x10f45b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f45fcu: goto R_010f45fc;
        case 0x10f4608u: goto R_010f4608;
        case 0x10f4640u: goto R_010f4640;
        case 0x10f467cu: goto R_010f467c;
        case 0x10f4688u: goto R_010f4688;
        case 0x10f4698u: goto R_010f4698;
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
    if (wp::cr_get(c, 2)) goto L_010f4698;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f45fc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f45fc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f45fcu;
    wp::call(c, c.ctr);
L_010f45fc:
R_010f45fc:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x10f4608u;
    f_80069c40(c);
R_010f4608:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4688;
    c.r[3] = ((((g_mr031_bases[5] + 0x31688u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x31688u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f4640;
L_010f4620:
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
    c.lr = 0x10f4640u;
    wp::call(c, c.ctr);
L_010f4640:
R_010f4640:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f4620;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010f467c;
    if (wp::cr_get(c, 2)) goto L_010f467c;
    if (wp::cr_get(c, 2)) goto L_010f467c;
    if (wp::cr_get(c, 2)) goto L_010f467c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f467c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f467cu;
    f_801c7a8c(c);
L_010f467c:
R_010f467c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10f4688u;
    f_8003fb90(c);
L_010f4688:
R_010f4688:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f4698;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f4698u;
    f_801c7a8c(c);
L_010f4698:
R_010f4698:
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

void f_mr031_010f46c0(wp::Cpu& c) {
    WP_ENTER(0x10f46c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f46ecu: goto R_010f46ec;
        case 0x10f46f8u: goto R_010f46f8;
        case 0x10f4704u: goto R_010f4704;
        case 0x10f4710u: goto R_010f4710;
        case 0x10f4728u: goto R_010f4728;
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
    if (wp::cr_get(c, 2)) goto L_010f46fc;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x10f46ecu;
    f_80069e30(c);
R_010f46ec:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x10f46f8u;
    f_800403b0(c);
R_010f46f8:
    goto L_010f4710;
L_010f46fc:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x10f4704u;
    f_80069e40(c);
R_010f4704:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x10f4710u;
    f_800403a0(c);
L_010f4710:
R_010f4710:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4728u;
    wp::call(c, c.ctr);
R_010f4728:
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

void f_mr031_010f4740(wp::Cpu& c) {
    WP_ENTER(0x10f4740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f4760u: goto R_010f4760;
        case 0x10f4780u: goto R_010f4780;
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
    c.lr = 0x10f4760u;
    f_800402c0(c);
R_010f4760:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4780;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4780u;
    wp::call(c, c.ctr);
L_010f4780:
R_010f4780:
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

void f_mr031_010f47a0(wp::Cpu& c) {
    WP_ENTER(0x10f47a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f47f0u: goto R_010f47f0;
        case 0x10f480cu: goto R_010f480c;
        case 0x10f484cu: goto R_010f484c;
        case 0x10f4864u: goto R_010f4864;
        case 0x10f486cu: goto R_010f486c;
        case 0x10f4884u: goto R_010f4884;
        case 0x10f488cu: goto R_010f488c;
        case 0x10f48b8u: goto R_010f48b8;
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
    c.r[31] = ((((g_mr031_bases[4] + 0x41d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x41d8u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010f48b8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010f47f4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f47f0u;
    f_80071fe0(c);
R_010f47f0:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_010f47f4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f480cu;
    wp::call(c, c.ctr);
R_010f480c:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4824;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010f482c;
L_010f4824:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_010f482c:
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
    c.lr = 0x10f484cu;
    wp::call(c, c.ctr);
R_010f484c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4864u;
    wp::call(c, c.ctr);
R_010f4864:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f486cu;
    f_80043060(c);
R_010f486c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4884u;
    wp::call(c, c.ctr);
R_010f4884:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f488cu;
    f_80043120(c);
R_010f488c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f48b8;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f48b8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f48b8u;
    wp::call(c, c.ctr);
L_010f48b8:
R_010f48b8:
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

void f_mr031_010f48e0(wp::Cpu& c) {
    WP_ENTER(0x10f48e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mr031_010f48f0(wp::Cpu& c) {
    WP_ENTER(0x10f48f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr031_010f4900(wp::Cpu& c) {
    WP_ENTER(0x10f4900u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr031_010f4910(wp::Cpu& c) {
    WP_ENTER(0x10f4910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f4938u: goto R_010f4938;
        case 0x10f4940u: goto R_010f4940;
        case 0x10f4954u: goto R_010f4954;
        case 0x10f4964u: goto R_010f4964;
        case 0x10f4978u: goto R_010f4978;
        case 0x10f4998u: goto R_010f4998;
        case 0x10f49a0u: goto R_010f49a0;
        case 0x10f49b4u: goto R_010f49b4;
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
    c.lr = 0x10f4938u;
    wp::call(c, c.ctr);
R_010f4938:
    goto L_010f4940;
L_010f493c:
    c.lr = 0x10f4940u;
    f_8006a940(c);
L_010f4940:
R_010f4940:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4954u;
    wp::call(c, c.ctr);
R_010f4954:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f493c;
    }
    goto L_010f4964;
L_010f4960:
    c.lr = 0x10f4964u;
    f_8006a940(c);
L_010f4964:
R_010f4964:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4978u;
    wp::call(c, c.ctr);
R_010f4978:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f4960;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4998u;
    wp::call(c, c.ctr);
R_010f4998:
    goto L_010f49a0;
L_010f499c:
    c.lr = 0x10f49a0u;
    f_8006a940(c);
L_010f49a0:
R_010f49a0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f49b4u;
    wp::call(c, c.ctr);
R_010f49b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f499c;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010f49d0(wp::Cpu& c) {
    WP_ENTER(0x10f49d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f49e4u: goto R_010f49e4;
        case 0x10f4a04u: goto R_010f4a04;
        case 0x10f4a54u: goto R_010f4a54;
        case 0x10f4a78u: goto R_010f4a78;
        case 0x10f4a84u: goto R_010f4a84;
        case 0x10f4a98u: goto R_010f4a98;
        case 0x10f4ab8u: goto R_010f4ab8;
        case 0x10f4ac8u: goto R_010f4ac8;
        case 0x10f4ad4u: goto R_010f4ad4;
        case 0x10f4ae4u: goto R_010f4ae4;
        case 0x10f4ae8u: goto R_010f4ae8;
        case 0x10f4af0u: goto R_010f4af0;
        case 0x10f4b1cu: goto R_010f4b1c;
        case 0x10f4b28u: goto R_010f4b28;
        case 0x10f4b34u: goto R_010f4b34;
        case 0x10f4b44u: goto R_010f4b44;
        case 0x10f4b48u: goto R_010f4b48;
        case 0x10f4b50u: goto R_010f4b50;
        case 0x10f4b80u: goto R_010f4b80;
        case 0x10f4ba8u: goto R_010f4ba8;
        case 0x10f4bb4u: goto R_010f4bb4;
        case 0x10f4bc4u: goto R_010f4bc4;
        case 0x10f4bc8u: goto R_010f4bc8;
        case 0x10f4bd0u: goto R_010f4bd0;
        case 0x10f4c0cu: goto R_010f4c0c;
        case 0x10f4c28u: goto R_010f4c28;
        case 0x10f4c38u: goto R_010f4c38;
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
    c.lr = 0x10f49e4u;
    f_801c83b0(c);
R_010f49e4:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010f4a18;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4a04u;
    wp::call(c, c.ctr);
R_010f4a04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4c30;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010f4c30;
L_010f4a18:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4c30;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010f4c30;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f4c30;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4a54u;
    wp::call(c, c.ctr);
R_010f4a54:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f4a78;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4a78u;
    wp::call(c, c.ctr);
L_010f4a78:
R_010f4a78:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x10f4a84u;
    f_8000e2a0(c);
R_010f4a84:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_010f4a90:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4a98u;
    f_8000fc20(c);
R_010f4a98:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f4afc;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f4ac0;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4ab8u;
    f_8000fc40(c);
R_010f4ab8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f4afc;
L_010f4ac0:
    c.r[26] = 0x0u;
    c.lr = 0x10f4ac8u;
    f_8000dd70(c);
R_010f4ac8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4ad4u;
    f_8000fc20(c);
R_010f4ad4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010f4afc;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4ae4u;
    f_8000fc20(c);
R_010f4ae4:
    c.lr = 0x10f4ae8u;
    f_800699d0(c);
R_010f4ae8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f4af0u;
    f_80066cd0(c);
R_010f4af0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f4afc;
    c.r[27] = 0x1u;
L_010f4afc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f4a90;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4b68;
    c.r[25] = 0x0u;
L_010f4b14:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4b1cu;
    f_8000fc40(c);
R_010f4b1c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f4b5c;
    c.lr = 0x10f4b28u;
    f_8000dd70(c);
R_010f4b28:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4b34u;
    f_8000fc20(c);
R_010f4b34:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010f4b5c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4b44u;
    f_8000fc20(c);
R_010f4b44:
    c.lr = 0x10f4b48u;
    f_800699d0(c);
R_010f4b48:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f4b50u;
    f_80066cd0(c);
R_010f4b50:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f4b5c;
    c.r[27] = 0x1u;
L_010f4b5c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f4b14;
    }
L_010f4b68:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4be8;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_010f4b78:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10f4b80u;
    f_8000fc40(c);
R_010f4b80:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f4b8c;
    c.r[25] = 0x0u;
L_010f4b8c:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f4b78;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4be8;
    c.r[25] = 0x0u;
L_010f4ba4:
    c.lr = 0x10f4ba8u;
    f_8000dd70(c);
R_010f4ba8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4bb4u;
    f_8000fc20(c);
R_010f4bb4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010f4bdc;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10f4bc4u;
    f_8000fc20(c);
R_010f4bc4:
    c.lr = 0x10f4bc8u;
    f_800699d0(c);
R_010f4bc8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f4bd0u;
    f_80066cd0(c);
R_010f4bd0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f4bdc;
    c.r[27] = 0x1u;
L_010f4bdc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f4ba4;
    }
L_010f4be8:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f4c30;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4c0cu;
    wp::call(c, c.ctr);
R_010f4c0c:
    c.r[3] = ((((g_mr031_bases[4] + 0x4234u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[4] + 0x420cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4234u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x420cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10f4c28u;
    f_80018e30(c);
R_010f4c28:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_010f4c30:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10f4c38u;
    f_801c83fc(c);
R_010f4c38:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr031_010f4c50(wp::Cpu& c) {
    WP_ENTER(0x10f4c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f4c78u: goto R_010f4c78;
        case 0x10f4c7cu: goto R_010f4c7c;
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
L_010f4c64:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4c78u;
    wp::call(c, c.ctr);
R_010f4c78:
    c.lr = 0x10f4c7cu;
    f_8006a940(c);
R_010f4c7c:
    WP_POLL(c);
    goto L_010f4c64;
}

void f_mr031_010f4c80(wp::Cpu& c) {
    WP_ENTER(0x10f4c80u);
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

void f_mr031_010f4ca0(wp::Cpu& c) {
    WP_ENTER(0x10f4ca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f4cc4u: goto R_010f4cc4;
        case 0x10f4ce8u: goto R_010f4ce8;
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
    c.lr = 0x10f4cc4u;
    f_80010060(c);
R_010f4cc4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr031_bases[5] + 0x3199cu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x3199cu) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10f4ce8u;
    wp::call(c, c.ctr);
R_010f4ce8:
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

void f_mr031_010f4d00(wp::Cpu& c) {
    WP_ENTER(0x10f4d00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f4d14u: goto R_010f4d14;
        case 0x10f4d28u: goto R_010f4d28;
        case 0x10f4d3cu: goto R_010f4d3c;
        case 0x10f4d64u: goto R_010f4d64;
        case 0x10f4d74u: goto R_010f4d74;
        case 0x10f4d98u: goto R_010f4d98;
        case 0x10f4df8u: goto R_010f4df8;
        case 0x10f4e78u: goto R_010f4e78;
        case 0x10f4ee0u: goto R_010f4ee0;
        case 0x10f4f18u: goto R_010f4f18;
        case 0x10f4f2cu: goto R_010f4f2c;
        case 0x10f4f3cu: goto R_010f4f3c;
        case 0x10f4f60u: goto R_010f4f60;
        case 0x10f4f68u: goto R_010f4f68;
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
    c.lr = 0x10f4d14u;
    f_801c83b4(c);
R_010f4d14:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10f4d28u;
    f_8006c450(c);
R_010f4d28:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010f4f30;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10f4d3cu;
    f_8006c460(c);
R_010f4d3c:
    c.r[27] = ((((g_mr031_bases[5] + 0x307d0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr031_bases[5] + 0x307d0u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f4d64u;
    f_801c7860(c);
R_010f4d64:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10f4d74u;
    f_mr031_0102a2e0(c);
R_010f4d74:
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
    c.lr = 0x10f4d98u;
    f_mr031_0102a4a0(c);
R_010f4d98:
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
    if (!wp::cr_get(c, 2)) goto L_010f4dd4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f4dd8;
L_010f4dd4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f4dd8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10f4df8u;
    f_mr031_0102a4a0(c);
R_010f4df8:
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
    if (!wp::cr_get(c, 2)) goto L_010f4e54;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f4e58;
L_010f4e54:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f4e58:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10f4e78u;
    f_mr031_0102a4a0(c);
R_010f4e78:
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
    if (!wp::cr_get(c, 2)) goto L_010f4ebc;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010f4ec0;
L_010f4ebc:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010f4ec0:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10f4ee0u;
    f_mr031_0102a4a0(c);
R_010f4ee0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr031_bases[5] + 0x319a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x319a8u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_010f4f00;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010f4f04;
L_010f4f00:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010f4f04:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f4f18u;
    wp::call(c, c.ctr);
R_010f4f18:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f4f60;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f4f2cu;
    f_801c7a8c(c);
R_010f4f2c:
    goto L_010f4f60;
L_010f4f30:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10f4f3cu;
    f_8006c4e0(c);
R_010f4f3c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr031_bases[5] + 0x319a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x319a8u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10f4f60u;
    wp::call(c, c.ctr);
L_010f4f60:
R_010f4f60:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10f4f68u;
    f_801c8400(c);
R_010f4f68:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010f4f80(wp::Cpu& c) {
    WP_ENTER(0x10f4f80u);
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

void f_mr031_010f4fa0(wp::Cpu& c) {
    WP_ENTER(0x10f4fa0u);
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

void f_mr031_010f4fc0(wp::Cpu& c) {
    WP_ENTER(0x10f4fc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f4fecu: goto R_010f4fec;
        case 0x10f5004u: goto R_010f5004;
        case 0x10f5014u: goto R_010f5014;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr031_bases[5] + 0x31984u) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr031_bases[5] + 0x31984u) & 0xFFFFu);
    c.lr = 0x10f4fecu;
    f_mr031_010ec780(c);
R_010f4fec:
    c.r[5] = ((((g_mr031_bases[5] + 0x30800u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x30800u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f5004u;
    f_801d34c4(c);
R_010f5004:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10f5014u;
    f_mr031_010efad0(c);
R_010f5014:
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

void f_mr031_010f5030(wp::Cpu& c) {
    WP_ENTER(0x10f5030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5068u: goto R_010f5068;
        case 0x10f508cu: goto R_010f508c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mr031_bases[5] + 0x307c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr031_bases[5] + 0x307c8u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10f5068u;
    f_801d3590(c);
R_010f5068:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr031_bases[5] + 0x31990u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31990u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10f508cu;
    wp::call(c, c.ctr);
R_010f508c:
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

void f_mr031_010f50b0(wp::Cpu& c) {
    WP_ENTER(0x10f50b0u);
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

void f_mr031_010f50d0(wp::Cpu& c) {
    WP_ENTER(0x10f50d0u);
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

void f_mr031_010f50f0(wp::Cpu& c) {
    WP_ENTER(0x10f50f0u);
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

void f_mr031_010f5110(wp::Cpu& c) {
    WP_ENTER(0x10f5110u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5130u: goto R_010f5130;
        case 0x10f5138u: goto R_010f5138;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[5] + 0x3196cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x3196cu) & 0xFFFFu);
    c.lr = 0x10f5130u;
    f_mr031_010ec780(c);
R_010f5130:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10f5138u;
    f_mr031_010eebd0(c);
R_010f5138:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010f5150(wp::Cpu& c) {
    WP_ENTER(0x10f5150u);
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

void f_mr031_010f5170(wp::Cpu& c) {
    WP_ENTER(0x10f5170u);
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

void f_mr031_010f5190(wp::Cpu& c) {
    WP_ENTER(0x10f5190u);
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

void f_mr031_010f51b0(wp::Cpu& c) {
    WP_ENTER(0x10f51b0u);
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

void f_mr031_010f51d0(wp::Cpu& c) {
    WP_ENTER(0x10f51d0u);
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

void f_mr031_010f51f0(wp::Cpu& c) {
    WP_ENTER(0x10f51f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr031_bases[4] + 0x4378u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x4378u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010f5220;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f5220;
    c.r[4] = 0x1u;
L_010f5220:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr031_010f5230(wp::Cpu& c) {
    WP_ENTER(0x10f5230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5274u: goto R_010f5274;
        case 0x10f5284u: goto R_010f5284;
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
    if (wp::cr_get(c, 2)) goto L_010f5284;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f5268;
    c.r[3] = ((((g_mr031_bases[6] + 0x5e4cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[6] + 0x5e4cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010f5268:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10f5274u;
    f_8001bfe0(c);
R_010f5274:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f5284;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f5284u;
    f_801c7a8c(c);
L_010f5284:
R_010f5284:
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

void f_mr031_010f52a0(wp::Cpu& c) {
    WP_ENTER(0x10f52a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr031_010f2240(c);
    return;
}

void f_mr031_010f52b0(wp::Cpu& c) {
    WP_ENTER(0x10f52b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr031_010f05c0(c);
    return;
}

void f_mr031_010f52c0(wp::Cpu& c) {
    WP_ENTER(0x10f52c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mr031_010f52d0(wp::Cpu& c) {
    WP_ENTER(0x10f52d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mr031_010f5230(c);
    return;
}

void f_mr031_010f52e0(wp::Cpu& c) {
    WP_ENTER(0x10f52e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mr031_010f31e0(c);
    return;
}

void f_mr031_010f52f0(wp::Cpu& c) {
    WP_ENTER(0x10f52f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mr031_010f31e0(c);
    return;
}

void f_mr031_010f5300(wp::Cpu& c) {
    WP_ENTER(0x10f5300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mr031_010f31e0(c);
    return;
}

void f_mr031_010f5310(wp::Cpu& c) {
    WP_ENTER(0x10f5310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr031_010f3ed0(c);
    return;
}

void f_mr031_010f5320(wp::Cpu& c) {
    WP_ENTER(0x10f5320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr031_010f31e0(c);
    return;
}

void f_mr031_010f5330(wp::Cpu& c) {
    WP_ENTER(0x10f5330u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr031_010f4c50(c);
    return;
}

void f_mr031_010f5340(wp::Cpu& c) {
    WP_ENTER(0x10f5340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr031_010f45b0(c);
    return;
}

void f_mr031_010f5350(wp::Cpu& c) {
    WP_ENTER(0x10f5350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5370u: goto R_010f5370;
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
    c.lr = 0x10f5370u;
    f_8011bd40(c);
R_010f5370:
    c.r[3] = ((((g_mr031_bases[4] + 0x4380u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x31ab0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4380u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31ab0u) & 0xFFFFu);
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

void f_mr031_010f53b0(wp::Cpu& c) {
    WP_ENTER(0x10f53b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f53dcu: goto R_010f53dc;
        case 0x10f53ecu: goto R_010f53ec;
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
    if (wp::cr_get(c, 2)) goto L_010f53ec;
    c.r[4] = 0x0u;
    c.lr = 0x10f53dcu;
    f_8011bd50(c);
R_010f53dc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f53ec;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f53ecu;
    f_801c7a8c(c);
L_010f53ec:
R_010f53ec:
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

void f_mr031_010f5410(wp::Cpu& c) {
    WP_ENTER(0x10f5410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5444u: goto R_010f5444;
        case 0x10f551cu: goto R_010f551c;
        case 0x10f569cu: goto R_010f569c;
        case 0x10f56b0u: goto R_010f56b0;
        case 0x10f5710u: goto R_010f5710;
        case 0x10f571cu: goto R_010f571c;
        case 0x10f5744u: goto R_010f5744;
        case 0x10f575cu: goto R_010f575c;
        case 0x10f577cu: goto R_010f577c;
        case 0x10f5788u: goto R_010f5788;
        case 0x10f57b0u: goto R_010f57b0;
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
    c.lr = 0x10f5444u;
    f_801c83ac(c);
R_010f5444:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mr031_bases[4] + 0x4380u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4380u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010f5464;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010f5530;
    goto L_010f5784;
L_010f5464:
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
    if (wp::cr_get(c, 2)) goto L_010f54e0;
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
L_010f54e0:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f551c;
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
    c.lr = 0x10f551cu;
    f_8011eeb0(c);
L_010f551c:
R_010f551c:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010f5788;
L_010f5530:
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
    if (!wp::cr_get(c, 2)) goto L_010f555c;
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
L_010f555c:
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
    c.lr = 0x10f569cu;
    f_801225e0(c);
R_010f569c:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10f56b0u;
    f_801225e0(c);
R_010f56b0:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010f56f0;
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
L_010f56f0:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_010f5708;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_010f5708:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10f5710u;
    f_8011eaa0(c);
R_010f5710:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f571cu;
    f_8011ea40(c);
R_010f571c:
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
    c.lr = 0x10f5744u;
    f_80122d80(c);
R_010f5744:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x10f575cu;
    f_80122d80(c);
R_010f575c:
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
    c.lr = 0x10f577cu;
    f_80121cf0(c);
R_010f577c:
    c.r[3] = 0x2u;
    goto L_010f5788;
L_010f5784:
    c.lr = 0x10f5788u;
    f_8011bd90(c);
L_010f5788:
R_010f5788:
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
    c.lr = 0x10f57b0u;
    f_801c83f8(c);
R_010f57b0:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mr031_010f57c0(wp::Cpu& c) {
    WP_ENTER(0x10f57c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f57dcu: goto R_010f57dc;
        case 0x10f5960u: goto R_010f5960;
        case 0x10f59b4u: goto R_010f59b4;
        case 0x10f59d8u: goto R_010f59d8;
        case 0x10f59e4u: goto R_010f59e4;
        case 0x10f59f4u: goto R_010f59f4;
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
    c.lr = 0x10f57dcu;
    f_801c83b0(c);
R_010f57dc:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010f57f8;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010f580c;
    goto L_010f59e0;
L_010f57f8:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010f59e4;
L_010f580c:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mr031_bases[4] + 0x438cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mr031_bases[4] + 0x4390u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mr031_bases[4] + 0x438cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mr031_bases[4] + 0x4390u) & 0xFFFFu);
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
    c.lr = 0x10f5960u;
    f_801225e0(c);
R_010f5960:
    ea = c.r[26] + wp::sign_extend16((g_mr031_bases[4] + 0x4390u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_010f5970;
    goto L_010f5974;
L_010f5970:
    c.f[2] = c.f[1];
L_010f5974:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f5984;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_010f598c;
L_010f5984:
    c.r[3] = ((((g_mr031_bases[4] + 0x4390u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4390u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_010f598c:
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
    c.lr = 0x10f59b4u;
    f_8011e9e0(c);
R_010f59b4:
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
    c.lr = 0x10f59d8u;
    f_80121cf0(c);
R_010f59d8:
    c.r[3] = 0x2u;
    goto L_010f59e4;
L_010f59e0:
    c.lr = 0x10f59e4u;
    f_8011bec0(c);
L_010f59e4:
R_010f59e4:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10f59f4u;
    f_801c83fc(c);
R_010f59f4:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr031_010f5a10(wp::Cpu& c) {
    WP_ENTER(0x10f5a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5a24u: goto R_010f5a24;
        case 0x10f5a54u: goto R_010f5a54;
        case 0x10f5b6cu: goto R_010f5b6c;
        case 0x10f5bf4u: goto R_010f5bf4;
        case 0x10f5c00u: goto R_010f5c00;
        case 0x10f5c0cu: goto R_010f5c0c;
        case 0x10f5d24u: goto R_010f5d24;
        case 0x10f5e6cu: goto R_010f5e6c;
        case 0x10f5e88u: goto R_010f5e88;
        case 0x10f5e90u: goto R_010f5e90;
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
    c.lr = 0x10f5a24u;
    f_801c83b4(c);
R_010f5a24:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr031_bases[4] + 0x4380u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4380u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010f5a4c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f5c04;
    goto L_010f5e88;
L_010f5a4c:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x10f5a54u;
    f_80132a30(c);
R_010f5a54:
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
    if (!wp::cr_get(c, 2)) goto L_010f5b6c;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x10f5b6cu;
    f_8014b090(c);
L_010f5b6c:
R_010f5b6c:
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
    c.lr = 0x10f5bf4u;
    f_8012be60(c);
R_010f5bf4:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f5c00u;
    f_80132ab0(c);
R_010f5c00:
    goto L_010f5e88;
L_010f5c04:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x10f5c0cu;
    f_80132a30(c);
R_010f5c0c:
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
    if (!wp::cr_get(c, 2)) goto L_010f5d24;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x10f5d24u;
    f_8014b090(c);
L_010f5d24:
R_010f5d24:
    c.r[5] = ((((g_mr031_bases[6] + 0x5e50u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[6] + 0x5e50u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f5d90;
    c.r[4] = ((((g_mr031_bases[6] + 0x5e58u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr031_bases[6] + 0x5e58u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[6] + 0x5e58u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[6] + 0x5e50u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_010f5d90:
    c.r[26] = ((((g_mr031_bases[6] + 0x5e58u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr031_bases[6] + 0x5e58u) & 0xFFFFu);
L_010f5d9c:
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
    c.lr = 0x10f5e6cu;
    f_8012be60(c);
R_010f5e6c:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f5d9c;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f5e88u;
    f_80132ab0(c);
L_010f5e88:
R_010f5e88:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x10f5e90u;
    f_801c8400(c);
R_010f5e90:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mr031_010f5ea0(wp::Cpu& c) {
    WP_ENTER(0x10f5ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mr031_010f5eb0(wp::Cpu& c) {
    WP_ENTER(0x10f5eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr031_010f5ec0(wp::Cpu& c) {
    WP_ENTER(0x10f5ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5ed8u: goto R_010f5ed8;
        case 0x10f5ee0u: goto R_010f5ee0;
        case 0x10f5ee8u: goto R_010f5ee8;
        case 0x10f5f24u: goto R_010f5f24;
        case 0x10f5f30u: goto R_010f5f30;
        case 0x10f5f40u: goto R_010f5f40;
        case 0x10f5f4cu: goto R_010f5f4c;
        case 0x10f5f58u: goto R_010f5f58;
        case 0x10f5f68u: goto R_010f5f68;
        case 0x10f5f74u: goto R_010f5f74;
        case 0x10f5f80u: goto R_010f5f80;
        case 0x10f5f90u: goto R_010f5f90;
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
    c.lr = 0x10f5ed8u;
    f_80034ac0(c);
R_010f5ed8:
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x10f5ee0u;
    f_80034ac0(c);
R_010f5ee0:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x10f5ee8u;
    f_80034ac0(c);
R_010f5ee8:
    c.r[4] = ((((g_mr031_bases[4] + 0x43b8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr031_bases[4] + 0x43bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x43b8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x43bcu) & 0xFFFFu);
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
    c.lr = 0x10f5f24u;
    f_80034c10(c);
R_010f5f24:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x10f5f30u;
    f_80034df0(c);
R_010f5f30:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10f5f40u;
    f_80034e10(c);
R_010f5f40:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x39u;
    c.lr = 0x10f5f4cu;
    f_80034c10(c);
R_010f5f4c:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x0u;
    c.lr = 0x10f5f58u;
    f_80034df0(c);
R_010f5f58:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10f5f68u;
    f_80034e10(c);
R_010f5f68:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x4u;
    c.lr = 0x10f5f74u;
    f_80034c10(c);
R_010f5f74:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x1u;
    c.lr = 0x10f5f80u;
    f_80034df0(c);
R_010f5f80:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x10f5f90u;
    f_80034e10(c);
R_010f5f90:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010f5fb0(wp::Cpu& c) {
    WP_ENTER(0x10f5fb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f5fd8u: goto R_010f5fd8;
        case 0x10f5fe4u: goto R_010f5fe4;
        case 0x10f5ff0u: goto R_010f5ff0;
        case 0x10f601cu: goto R_010f601c;
        case 0x10f6034u: goto R_010f6034;
        case 0x10f6044u: goto R_010f6044;
        case 0x10f6050u: goto R_010f6050;
        case 0x10f6058u: goto R_010f6058;
        case 0x10f6060u: goto R_010f6060;
        case 0x10f6080u: goto R_010f6080;
        case 0x10f60a0u: goto R_010f60a0;
        case 0x10f60a8u: goto R_010f60a8;
        case 0x10f60b0u: goto R_010f60b0;
        case 0x10f60c4u: goto R_010f60c4;
        case 0x10f60dcu: goto R_010f60dc;
        case 0x10f60f8u: goto R_010f60f8;
        case 0x10f6110u: goto R_010f6110;
        case 0x10f612cu: goto R_010f612c;
        case 0x10f6134u: goto R_010f6134;
        case 0x10f613cu: goto R_010f613c;
        case 0x10f6144u: goto R_010f6144;
        case 0x10f614cu: goto R_010f614c;
        case 0x10f615cu: goto R_010f615c;
        case 0x10f6174u: goto R_010f6174;
        case 0x10f6188u: goto R_010f6188;
        case 0x10f618cu: goto R_010f618c;
        case 0x10f6198u: goto R_010f6198;
        case 0x10f61b0u: goto R_010f61b0;
        case 0x10f61c0u: goto R_010f61c0;
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
    c.lr = 0x10f5fd8u;
    f_800e9850(c);
R_010f5fd8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x14u;
    c.lr = 0x10f5fe4u;
    f_800e9070(c);
R_010f5fe4:
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    c.r[3] = c.r[1] + 0x20u;
    c.lr = 0x10f5ff0u;
    f_8014b090(c);
R_010f5ff0:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = ((((g_mr031_bases[4] + 0x43c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x43c0u) & 0xFFFFu);
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
    c.lr = 0x10f601cu;
    f_8014b8a0(c);
R_010f601c:
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
    c.lr = 0x10f6034u;
    f_8014b820(c);
R_010f6034:
    c.r[4] = c.r[1] + 0x20u;
    c.r[3] = c.r[1] + 0x50u;
    c.r[5] = c.r[4] | c.r[4];
    c.lr = 0x10f6044u;
    f_8014b100(c);
R_010f6044:
    c.r[3] = c.r[1] + 0x20u;
    c.r[4] = 0x0u;
    c.lr = 0x10f6050u;
    f_80154d30(c);
R_010f6050:
    c.r[3] = 0x0u;
    c.lr = 0x10f6058u;
    f_80154e50(c);
R_010f6058:
    c.r[3] = 0x1u;
    c.lr = 0x10f6060u;
    f_80151a30(c);
R_010f6060:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10f6080u;
    f_80151a60(c);
R_010f6080:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10f60a0u;
    f_80151a60(c);
R_010f60a0:
    c.r[3] = 0x0u;
    c.lr = 0x10f60a8u;
    f_8014f9d0(c);
R_010f60a8:
    c.r[3] = 0x1u;
    c.lr = 0x10f60b0u;
    f_80153920(c);
R_010f60b0:
    c.r[3] = 0x0u;
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x10f60c4u;
    f_801537c0(c);
R_010f60c4:
    c.r[3] = 0x0u;
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0xfu;
    c.lr = 0x10f60dcu;
    f_80153320(c);
R_010f60dc:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f60f8u;
    f_801533a0(c);
R_010f60f8:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x10f6110u;
    f_80153360(c);
R_010f6110:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f612cu;
    f_80153400(c);
R_010f612c:
    c.r[3] = 0x2u;
    c.lr = 0x10f6134u;
    f_80150850(c);
R_010f6134:
    c.r[3] = 0x0u;
    c.lr = 0x10f613cu;
    f_80153e40(c);
R_010f613c:
    c.r[3] = 0x0u;
    c.lr = 0x10f6144u;
    f_80153e90(c);
R_010f6144:
    c.r[3] = 0x1u;
    c.lr = 0x10f614cu;
    f_80153f20(c);
R_010f614c:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x10f615cu;
    f_80153ee0(c);
R_010f615c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x10f6174u;
    f_801536f0(c);
R_010f6174:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x5u;
    c.lr = 0x10f6188u;
    f_80153df0(c);
R_010f6188:
    c.lr = 0x10f618cu;
    f_8014f020(c);
R_010f618c:
    c.r[3] = 0x9u;
    c.r[4] = 0x1u;
    c.lr = 0x10f6198u;
    f_8014e770(c);
R_010f6198:
    c.r[3] = 0x0u;
    c.r[4] = 0x9u;
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    c.r[7] = 0x0u;
    c.lr = 0x10f61b0u;
    f_8014f060(c);
R_010f61b0:
    c.r[3] = 0x80u;
    c.r[4] = 0x0u;
    c.r[5] = 0x4u;
    c.lr = 0x10f61c0u;
    f_80150560(c);
R_010f61c0:
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

void f_mr031_010f6220(wp::Cpu& c) {
    WP_ENTER(0x10f6220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f6274u: goto R_010f6274;
        case 0x10f6294u: goto R_010f6294;
        case 0x10f62b0u: goto R_010f62b0;
        case 0x10f62ccu: goto R_010f62cc;
        case 0x10f62dcu: goto R_010f62dc;
        case 0x10f62f8u: goto R_010f62f8;
        case 0x10f6380u: goto R_010f6380;
        case 0x10f638cu: goto R_010f638c;
        case 0x10f63a0u: goto R_010f63a0;
        case 0x10f63b0u: goto R_010f63b0;
        case 0x10f63ccu: goto R_010f63cc;
        case 0x10f6424u: goto R_010f6424;
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
    c.lr = 0x10f6274u;
    f_801c83b4(c);
R_010f6274:
    wp::compare_signed(c, 0, c.r[4], 0x1u);
    c.r[29] = ((((g_mr031_bases[4] + 0x43b8u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr031_bases[4] + 0x43b8u) & 0xFFFFu);
    if (wp::cr_get(c, 1)) goto L_010f62d0;
    c.r[3] = 0x2u;
    c.lr = 0x10f6294u;
    f_8014f9d0(c);
R_010f6294:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10f62b0u;
    f_8014f780(c);
R_010f62b0:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10f62ccu;
    f_8014f780(c);
R_010f62cc:
    goto L_010f63dc;
L_010f62d0:
    c.r[0] = c.r[4] + 0x1u;
    c.r[3] = c.r[0] & 0xffu;
    c.lr = 0x10f62dcu;
    f_8014f9d0(c);
R_010f62dc:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10f62f8u;
    f_8014f780(c);
R_010f62f8:
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
    c.r[28] = ((((g_mr031_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.f[2] = wp::round_single(c.f[3] / c.f[1]);
    c.ps1[2] = c.f[2];
    c.r[4] = (((0x802f5684u + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5684u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr031_bases[4] + 0x43c8u) & 0xFFFFu);
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
    goto L_010f63d4;
L_010f6348:
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
    c.lr = 0x10f6380u;
    f_80126360(c);
R_010f6380:
    c.f[24] = wp::round_single(c.f[27] * wp::force25(c.f[1]));
    c.ps1[24] = c.f[24];
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[25]));
    c.ps1[1] = c.f[1];
    c.lr = 0x10f638cu;
    f_801263e0(c);
R_010f638c:
    c.f[2] = wp::round_single(c.f[26] * wp::force25(c.f[1]));
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.f[1] = c.f[24];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10f63a0u;
    f_8014b7e0(c);
R_010f63a0:
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = 0x1u;
    c.lr = 0x10f63b0u;
    f_80154e70(c);
R_010f63b0:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[28] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10f63ccu;
    f_8014f780(c);
R_010f63cc:
    c.r[28] = c.r[28] + 0x8u;
    c.r[27] = c.r[27] + 0x1u;
L_010f63d4:
    wp::compare_signed(c, 0, c.r[27], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f6348;
    }
L_010f63dc:
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
    c.lr = 0x10f6424u;
    f_801c8400(c);
R_010f6424:
    ea = c.r[1] + 0xe4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xe0u;
    return;
}

void f_mr031_010f6440(wp::Cpu& c) {
    WP_ENTER(0x10f6440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f6454u: goto R_010f6454;
        case 0x10f6480u: goto R_010f6480;
        case 0x10f649cu: goto R_010f649c;
        case 0x10f64b4u: goto R_010f64b4;
        case 0x10f64d0u: goto R_010f64d0;
        case 0x10f64dcu: goto R_010f64dc;
        case 0x10f64f0u: goto R_010f64f0;
        case 0x10f6508u: goto R_010f6508;
        case 0x10f6524u: goto R_010f6524;
        case 0x10f653cu: goto R_010f653c;
        case 0x10f6554u: goto R_010f6554;
        case 0x10f6570u: goto R_010f6570;
        case 0x10f658cu: goto R_010f658c;
        case 0x10f65a4u: goto R_010f65a4;
        case 0x10f65c0u: goto R_010f65c0;
        case 0x10f65d8u: goto R_010f65d8;
        case 0x10f65f4u: goto R_010f65f4;
        case 0x10f6610u: goto R_010f6610;
        case 0x10f662cu: goto R_010f662c;
        case 0x10f6640u: goto R_010f6640;
        case 0x10f6664u: goto R_010f6664;
        case 0x10f6680u: goto R_010f6680;
        case 0x10f6698u: goto R_010f6698;
        case 0x10f66b4u: goto R_010f66b4;
        case 0x10f66dcu: goto R_010f66dc;
        case 0x10f66f0u: goto R_010f66f0;
        case 0x10f6708u: goto R_010f6708;
        case 0x10f6724u: goto R_010f6724;
        case 0x10f673cu: goto R_010f673c;
        case 0x10f6758u: goto R_010f6758;
        case 0x10f6760u: goto R_010f6760;
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
    c.lr = 0x10f6454u;
    f_801c83b4(c);
R_010f6454:
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
    c.lr = 0x10f6480u;
    f_80153920(c);
R_010f6480:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f6528;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0xffu;
    c.lr = 0x10f649cu;
    f_801537c0(c);
R_010f649c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x10f64b4u;
    f_80153360(c);
R_010f64b4:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f64d0u;
    f_80153400(c);
R_010f64d0:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.lr = 0x10f64dcu;
    f_801535e0(c);
R_010f64dc:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x10f64f0u;
    f_801537c0(c);
R_010f64f0:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x6u;
    c.r[6] = 0x0u;
    c.r[7] = 0x7u;
    c.lr = 0x10f6508u;
    f_80153360(c);
R_010f6508:
    c.r[3] = 0x1u;
    c.r[4] = 0xfu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f6524u;
    f_80153400(c);
R_010f6524:
    goto L_010f6570;
L_010f6528:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x10f653cu;
    f_801537c0(c);
R_010f653c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x10f6554u;
    f_80153360(c);
R_010f6554:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f6570u;
    f_80153400(c);
L_010f6570:
R_010f6570:
    wp::compare_signed(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 1)) goto L_010f65f8;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x10f658cu;
    f_801537c0(c);
R_010f658c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x8u;
    c.lr = 0x10f65a4u;
    f_80153320(c);
R_010f65a4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f65c0u;
    f_801533a0(c);
R_010f65c0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x10f65d8u;
    f_80153360(c);
R_010f65d8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f65f4u;
    f_80153400(c);
R_010f65f4:
    goto L_010f66c8;
L_010f65f8:
    c.r[5] = ((((g_mr031_bases[4] + 0x4418u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x4418u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f6610u;
    f_80153530(c);
R_010f6610:
    c.r[31] = ((((g_mr031_bases[4] + 0x4420u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x4420u) & 0xFFFFu);
    goto L_010f66c0;
L_010f6620:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10f662cu;
    f_80153590(c);
R_010f662c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] + 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x10f6640u;
    f_801537c0(c);
R_010f6640:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_010f6654;
    c.r[4] = 0xfu;
L_010f6654:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x10f6664u;
    f_80153320(c);
R_010f6664:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f6680u;
    f_801533a0(c);
R_010f6680:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x10f6698u;
    f_80153360(c);
R_010f6698:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f66b4u;
    f_80153400(c);
R_010f66b4:
    c.r[28] = c.r[28] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_010f66c0:
    wp::compare_signed(c, 0, c.r[29], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f6620;
    }
L_010f66c8:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6758;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10f66dcu;
    f_801535e0(c);
R_010f66dc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x10f66f0u;
    f_801537c0(c);
R_010f66f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x1u;
    c.lr = 0x10f6708u;
    f_80153320(c);
R_010f6708:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f6724u;
    f_801533a0(c);
R_010f6724:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x6u;
    c.lr = 0x10f673cu;
    f_80153360(c);
R_010f673c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f6758u;
    f_80153400(c);
L_010f6758:
R_010f6758:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10f6760u;
    f_801c8400(c);
R_010f6760:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr031_010f6770(wp::Cpu& c) {
    WP_ENTER(0x10f6770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f67a4u: goto R_010f67a4;
        case 0x10f67acu: goto R_010f67ac;
        case 0x10f67b4u: goto R_010f67b4;
        case 0x10f67bcu: goto R_010f67bc;
        case 0x10f67ccu: goto R_010f67cc;
        case 0x10f67e4u: goto R_010f67e4;
        case 0x10f67f8u: goto R_010f67f8;
        case 0x10f67fcu: goto R_010f67fc;
        case 0x10f6808u: goto R_010f6808;
        case 0x10f6818u: goto R_010f6818;
        case 0x10f681cu: goto R_010f681c;
        case 0x10f6820u: goto R_010f6820;
        case 0x10f6844u: goto R_010f6844;
        case 0x10f688cu: goto R_010f688c;
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
    c.lr = 0x10f67a4u;
    f_80150850(c);
R_010f67a4:
    c.r[3] = 0x1u;
    c.lr = 0x10f67acu;
    f_80153e40(c);
R_010f67ac:
    c.r[3] = 0x0u;
    c.lr = 0x10f67b4u;
    f_80153e90(c);
R_010f67b4:
    c.r[3] = 0x1u;
    c.lr = 0x10f67bcu;
    f_80153f20(c);
R_010f67bc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x10f67ccu;
    f_80153ee0(c);
R_010f67cc:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.r[7] = 0xffu;
    c.lr = 0x10f67e4u;
    f_801536f0(c);
R_010f67e4:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x5u;
    c.r[6] = 0x5u;
    c.lr = 0x10f67f8u;
    f_80153df0(c);
R_010f67f8:
    c.lr = 0x10f67fcu;
    f_8014f020(c);
R_010f67fc:
    c.r[3] = ((((g_mr031_bases[4] + 0x4440u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x4440u) & 0xFFFFu);
    c.lr = 0x10f6808u;
    f_8014e9e0(c);
R_010f6808:
    c.r[4] = ((((g_mr031_bases[4] + 0x4458u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x4458u) & 0xFFFFu);
    c.lr = 0x10f6818u;
    f_8014f200(c);
R_010f6818:
    c.lr = 0x10f681cu;
    f_8004aa80(c);
R_010f681c:
    c.lr = 0x10f6820u;
    f_800ee3c0(c);
R_010f6820:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x10f6844u;
    f_800e95b0(c);
R_010f6844:
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
    c.lr = 0x10f688cu;
    f_80150560(c);
R_010f688c:
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

void f_mr031_010f6910(wp::Cpu& c) {
    WP_ENTER(0x10f6910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f694cu: goto R_010f694c;
        case 0x10f6960u: goto R_010f6960;
        case 0x10f696cu: goto R_010f696c;
        case 0x10f697cu: goto R_010f697c;
        case 0x10f6988u: goto R_010f6988;
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
    c.lr = 0x10f694cu;
    f_8003d6b0(c);
R_010f694c:
    c.r[4] = ((((g_mr031_bases[5] + 0x31ad0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31ad0u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10f6960u;
    f_801c79a4(c);
R_010f6960:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f696c;
    c.lr = 0x10f696cu;
    f_mr031_010f5ec0(c);
L_010f696c:
R_010f696c:
    ea = c.r[29] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10f697cu;
    f_80052170(c);
R_010f697c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10f6988u;
    f_80052190(c);
R_010f6988:
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

void f_mr031_010f69b0(wp::Cpu& c) {
    WP_ENTER(0x10f69b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f69f8u: goto R_010f69f8;
        case 0x10f6a04u: goto R_010f6a04;
        case 0x10f6a10u: goto R_010f6a10;
        case 0x10f6a18u: goto R_010f6a18;
        case 0x10f6a2cu: goto R_010f6a2c;
        case 0x10f6a3cu: goto R_010f6a3c;
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
    if (wp::cr_get(c, 2)) goto L_010f6a3c;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6a18;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6a18;
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f69f8u;
    f_80034b10(c);
R_010f69f8:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f6a04u;
    f_80034b10(c);
R_010f6a04:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f6a10u;
    f_80034b10(c);
R_010f6a10:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f6a18u;
    f_801c7a8c(c);
L_010f6a18:
R_010f6a18:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6a2c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10f6a2cu;
    f_80051600(c);
L_010f6a2c:
R_010f6a2c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f6a3c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f6a3cu;
    f_801c7a8c(c);
L_010f6a3c:
R_010f6a3c:
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

void f_mr031_010f6a60(wp::Cpu& c) {
    WP_ENTER(0x10f6a60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr031_010f6a70(wp::Cpu& c) {
    WP_ENTER(0x10f6a70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr031_010f6a80(wp::Cpu& c) {
    WP_ENTER(0x10f6a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x18u;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mr031_010f6a90(wp::Cpu& c) {
    WP_ENTER(0x10f6a90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr031_010f6aa0(wp::Cpu& c) {
    WP_ENTER(0x10f6aa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f6ac4u: goto R_010f6ac4;
        case 0x10f6ac8u: goto R_010f6ac8;
        case 0x10f6ae4u: goto R_010f6ae4;
        case 0x10f6b0cu: goto R_010f6b0c;
        case 0x10f6b18u: goto R_010f6b18;
        case 0x10f6b20u: goto R_010f6b20;
        case 0x10f6b2cu: goto R_010f6b2c;
        case 0x10f6b34u: goto R_010f6b34;
        case 0x10f6b3cu: goto R_010f6b3c;
        case 0x10f6b5cu: goto R_010f6b5c;
        case 0x10f6b7cu: goto R_010f6b7c;
        case 0x10f6b84u: goto R_010f6b84;
        case 0x10f6b90u: goto R_010f6b90;
        case 0x10f6ba4u: goto R_010f6ba4;
        case 0x10f6bb0u: goto R_010f6bb0;
        case 0x10f6bb8u: goto R_010f6bb8;
        case 0x10f6bc4u: goto R_010f6bc4;
        case 0x10f6bd0u: goto R_010f6bd0;
        case 0x10f6be0u: goto R_010f6be0;
        case 0x10f6be4u: goto R_010f6be4;
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
    if (!wp::cr_get(c, 1)) goto L_010f6be4;
    c.lr = 0x10f6ac4u;
    f_8004aa80(c);
R_010f6ac4:
    c.lr = 0x10f6ac8u;
    f_800ee3c0(c);
R_010f6ac8:
    ea = c.r[31] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6ae4;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[31] + 0x1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f6ae4u;
    f_mr031_010f5fb0(c);
L_010f6ae4:
R_010f6ae4:
    c.r[3] = ((((g_mr031_bases[4] + 0x43bcu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[4] + 0x43c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x43bcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x43c0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[3] = c.f[1];
    c.f[4] = c.f[2];
    c.f[5] = c.f[1];
    c.f[6] = c.f[2];
    c.lr = 0x10f6b0cu;
    f_8014c050(c);
R_010f6b0c:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x10f6b18u;
    f_80154c30(c);
R_010f6b18:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10f6b20u;
    f_8014b090(c);
R_010f6b20:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x10f6b2cu;
    f_80154d30(c);
R_010f6b2c:
    c.r[3] = 0x0u;
    c.lr = 0x10f6b34u;
    f_80154e50(c);
R_010f6b34:
    c.r[3] = 0x0u;
    c.lr = 0x10f6b3cu;
    f_80151a30(c);
R_010f6b3c:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10f6b5cu;
    f_80151a60(c);
R_010f6b5c:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10f6b7cu;
    f_80151a60(c);
R_010f6b7c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f6b84u;
    f_80034f00(c);
R_010f6b84:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x10f6b90u;
    f_80034f20(c);
R_010f6b90:
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f6bb0;
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x10f6ba4u;
    f_80034f00(c);
R_010f6ba4:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x1u;
    c.lr = 0x10f6bb0u;
    f_80034f20(c);
L_010f6bb0:
R_010f6bb0:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x10f6bb8u;
    f_80034f00(c);
R_010f6bb8:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10f6bc4u;
    f_80034f20(c);
R_010f6bc4:
    ea = c.r[31] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f6bd0u;
    f_mr031_010f6220(c);
R_010f6bd0:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[5] = wp::rd8(ea);
    c.lr = 0x10f6be0u;
    f_mr031_010f6440(c);
R_010f6be0:
    c.lr = 0x10f6be4u;
    f_mr031_010f6770(c);
L_010f6be4:
R_010f6be4:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr031_010f6c00(wp::Cpu& c) {
    WP_ENTER(0x10f6c00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f6c20u: goto R_010f6c20;
        case 0x10f6c44u: goto R_010f6c44;
        case 0x10f6c7cu: goto R_010f6c7c;
        case 0x10f6c90u: goto R_010f6c90;
        case 0x10f6ca4u: goto R_010f6ca4;
        case 0x10f6cb4u: goto R_010f6cb4;
        case 0x10f6cc0u: goto R_010f6cc0;
        case 0x10f6cf0u: goto R_010f6cf0;
        case 0x10f6d10u: goto R_010f6d10;
        case 0x10f6d18u: goto R_010f6d18;
        case 0x10f6d20u: goto R_010f6d20;
        case 0x10f6d28u: goto R_010f6d28;
        case 0x10f6d2cu: goto R_010f6d2c;
        case 0x10f6d34u: goto R_010f6d34;
        case 0x10f6d40u: goto R_010f6d40;
        case 0x10f6d70u: goto R_010f6d70;
        case 0x10f6d78u: goto R_010f6d78;
        case 0x10f6d7cu: goto R_010f6d7c;
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
    c.lr = 0x10f6c20u;
    f_80069af0(c);
R_010f6c20:
    c.r[3] = ((((g_mr031_bases[6] + 0x5e98u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr031_bases[5] + 0x31b08u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[6] + 0x5e98u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31b08u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x10f6c44u;
    f_801c79a4(c);
R_010f6c44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6c60;
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
L_010f6c60:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10f6c7cu;
    f_801c79a4(c);
R_010f6c7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010f6cf4;
    c.r[29] = 0x0u;
    c.lr = 0x10f6c90u;
    f_8000dd70(c);
R_010f6c90:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010f6cb0;
    c.r[3] = 0xffffffffu;
    c.lr = 0x10f6ca4u;
    f_8000e240(c);
R_010f6ca4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f6cb0;
    c.r[29] = 0x1u;
L_010f6cb0:
    c.lr = 0x10f6cb4u;
    f_8000dd70(c);
R_010f6cb4:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f6cc0u;
    f_80007570(c);
R_010f6cc0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_010f6ce0;
    c.r[4] = c.r[1] + 0xcu;
L_010f6ce0:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x10f6cf0u;
    f_mr031_010a3370(c);
R_010f6cf0:
    c.r[30] = c.r[3] | c.r[3];
L_010f6cf4:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6d10;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x10f6d10u;
    f_mr031_010a3540(c);
L_010f6d10:
R_010f6d10:
    c.r[3] = 0x0u;
    c.lr = 0x10f6d18u;
    f_8006a800(c);
R_010f6d18:
    c.r[3] = 0x0u;
    c.lr = 0x10f6d20u;
    f_80065040(c);
R_010f6d20:
    c.r[3] = 0x0u;
    c.lr = 0x10f6d28u;
    f_8006c8b0(c);
R_010f6d28:
    c.lr = 0x10f6d2cu;
    f_80066250(c);
R_010f6d2c:
    c.r[3] = 0x128u;
    c.lr = 0x10f6d34u;
    f_801c79a4(c);
R_010f6d34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6d40;
    c.lr = 0x10f6d40u;
    f_mr031_010f42d0(c);
L_010f6d40:
R_010f6d40:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f6d70;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6d70;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6d70u;
    wp::call(c, c.ctr);
L_010f6d70:
R_010f6d70:
    c.r[3] = 0x1u;
    c.lr = 0x10f6d78u;
    f_8001b020(c);
R_010f6d78:
    c.lr = 0x10f6d7cu;
    f_8000dd30(c);
R_010f6d7c:
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

void f_mr031_010f6db0(wp::Cpu& c) {
    WP_ENTER(0x10f6db0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f6decu: goto R_010f6dec;
        case 0x10f6e18u: goto R_010f6e18;
        case 0x10f6e1cu: goto R_010f6e1c;
        case 0x10f6e2cu: goto R_010f6e2c;
        case 0x10f6e30u: goto R_010f6e30;
        case 0x10f6e34u: goto R_010f6e34;
        case 0x10f6e60u: goto R_010f6e60;
        case 0x10f6e74u: goto R_010f6e74;
        case 0x10f6e9cu: goto R_010f6e9c;
        case 0x10f6ec4u: goto R_010f6ec4;
        case 0x10f6eecu: goto R_010f6eec;
        case 0x10f6ef4u: goto R_010f6ef4;
        case 0x10f6ef8u: goto R_010f6ef8;
        case 0x10f6efcu: goto R_010f6efc;
        case 0x10f6f04u: goto R_010f6f04;
        case 0x10f6f08u: goto R_010f6f08;
        case 0x10f6f0cu: goto R_010f6f0c;
        case 0x10f6f34u: goto R_010f6f34;
        case 0x10f6f48u: goto R_010f6f48;
        case 0x10f6f70u: goto R_010f6f70;
        case 0x10f6f98u: goto R_010f6f98;
        case 0x10f6fc0u: goto R_010f6fc0;
        case 0x10f6fc8u: goto R_010f6fc8;
        case 0x10f6ff0u: goto R_010f6ff0;
        case 0x10f7010u: goto R_010f7010;
        case 0x10f7020u: goto R_010f7020;
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
    if (wp::cr_get(c, 2)) goto L_010f7020;
    c.r[4] = ((((g_mr031_bases[5] + 0x31b08u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31b08u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x10f6decu;
    f_mr031_010a35e0(c);
R_010f6dec:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6e18;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f6e18;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6e18u;
    wp::call(c, c.ctr);
L_010f6e18:
R_010f6e18:
    c.lr = 0x10f6e1cu;
    f_8001aac0(c);
R_010f6e1c:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f6e2c;
    c.lr = 0x10f6e2cu;
    f_8001b0c0(c);
L_010f6e2c:
R_010f6e2c:
    c.lr = 0x10f6e30u;
    f_8004abf0(c);
R_010f6e30:
    c.lr = 0x10f6e34u;
    f_80066250(c);
R_010f6e34:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6ef4;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f6ef4;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6e60;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10f6e60u;
    f_mr031_0109f520(c);
L_010f6e60:
R_010f6e60:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6e74;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10f6e74u;
    f_mr031_010a3540(c);
L_010f6e74:
R_010f6e74:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6e9c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6e9c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6e9cu;
    wp::call(c, c.ctr);
L_010f6e9c:
R_010f6e9c:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6ec4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6ec4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6ec4u;
    wp::call(c, c.ctr);
L_010f6ec4:
R_010f6ec4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6eec;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6eec;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6eecu;
    wp::call(c, c.ctr);
L_010f6eec:
R_010f6eec:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f6ef4u;
    f_801c7a8c(c);
L_010f6ef4:
R_010f6ef4:
    c.lr = 0x10f6ef8u;
    f_80041c20(c);
R_010f6ef8:
    c.lr = 0x10f6efcu;
    f_8002d270(c);
R_010f6efc:
    c.r[3] = 0x0u;
    c.lr = 0x10f6f04u;
    f_80076130(c);
R_010f6f04:
    c.lr = 0x10f6f08u;
    f_800656f0(c);
R_010f6f08:
    c.lr = 0x10f6f0cu;
    f_80011270(c);
R_010f6f0c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6fc8;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6fc8;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6f34;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10f6f34u;
    f_mr031_0109f520(c);
L_010f6f34:
R_010f6f34:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6f48;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10f6f48u;
    f_mr031_010a3540(c);
L_010f6f48:
R_010f6f48:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6f70;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6f70;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6f70u;
    wp::call(c, c.ctr);
L_010f6f70:
R_010f6f70:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6f98;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6f98;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6f98u;
    wp::call(c, c.ctr);
L_010f6f98:
R_010f6f98:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6fc0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6fc0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6fc0u;
    wp::call(c, c.ctr);
L_010f6fc0:
R_010f6fc0:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f6fc8u;
    f_801c7a8c(c);
L_010f6fc8:
R_010f6fc8:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f6ff0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f6ff0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f6ff0u;
    wp::call(c, c.ctr);
L_010f6ff0:
R_010f6ff0:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7004;
    c.r[3] = ((((g_mr031_bases[6] + 0x5e98u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr031_bases[6] + 0x5e98u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010f7004:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10f7010u;
    f_80069c40(c);
R_010f7010:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f7020;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f7020u;
    f_801c7a8c(c);
L_010f7020:
R_010f7020:
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

void f_mr031_010f7040(wp::Cpu& c) {
    WP_ENTER(0x10f7040u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr031_010f7050(wp::Cpu& c) {
    WP_ENTER(0x10f7050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr031_010f7060(wp::Cpu& c) {
    WP_ENTER(0x10f7060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f70acu: goto R_010f70ac;
        case 0x10f70b0u: goto R_010f70b0;
        case 0x10f70c0u: goto R_010f70c0;
        case 0x10f70e8u: goto R_010f70e8;
        case 0x10f70f0u: goto R_010f70f0;
        case 0x10f7104u: goto R_010f7104;
        case 0x10f712cu: goto R_010f712c;
        case 0x10f7134u: goto R_010f7134;
        case 0x10f713cu: goto R_010f713c;
        case 0x10f7150u: goto R_010f7150;
        case 0x10f716cu: goto R_010f716c;
        case 0x10f7174u: goto R_010f7174;
        case 0x10f7188u: goto R_010f7188;
        case 0x10f71a4u: goto R_010f71a4;
        case 0x10f71b8u: goto R_010f71b8;
        case 0x10f71c0u: goto R_010f71c0;
        case 0x10f71ccu: goto R_010f71cc;
        case 0x10f71e4u: goto R_010f71e4;
        case 0x10f71e8u: goto R_010f71e8;
        case 0x10f71f0u: goto R_010f71f0;
        case 0x10f71fcu: goto R_010f71fc;
        case 0x10f7204u: goto R_010f7204;
        case 0x10f7208u: goto R_010f7208;
        case 0x10f7210u: goto R_010f7210;
        case 0x10f721cu: goto R_010f721c;
        case 0x10f722cu: goto R_010f722c;
        case 0x10f7234u: goto R_010f7234;
        case 0x10f7250u: goto R_010f7250;
        case 0x10f7254u: goto R_010f7254;
        case 0x10f7264u: goto R_010f7264;
        case 0x10f726cu: goto R_010f726c;
        case 0x10f727cu: goto R_010f727c;
        case 0x10f7298u: goto R_010f7298;
        case 0x10f72c4u: goto R_010f72c4;
        case 0x10f72e0u: goto R_010f72e0;
        case 0x10f7314u: goto R_010f7314;
        case 0x10f7320u: goto R_010f7320;
        case 0x10f7340u: goto R_010f7340;
        case 0x10f7374u: goto R_010f7374;
        case 0x10f7380u: goto R_010f7380;
        case 0x10f739cu: goto R_010f739c;
        case 0x10f73d0u: goto R_010f73d0;
        case 0x10f73ecu: goto R_010f73ec;
        case 0x10f7404u: goto R_010f7404;
        case 0x10f7414u: goto R_010f7414;
        case 0x10f7434u: goto R_010f7434;
        case 0x10f7468u: goto R_010f7468;
        case 0x10f7480u: goto R_010f7480;
        case 0x10f74acu: goto R_010f74ac;
        case 0x10f74e0u: goto R_010f74e0;
        case 0x10f74e4u: goto R_010f74e4;
        case 0x10f74fcu: goto R_010f74fc;
        case 0x10f7534u: goto R_010f7534;
        case 0x10f753cu: goto R_010f753c;
        case 0x10f7548u: goto R_010f7548;
        case 0x10f7568u: goto R_010f7568;
        case 0x10f7574u: goto R_010f7574;
        case 0x10f7580u: goto R_010f7580;
        case 0x10f758cu: goto R_010f758c;
        case 0x10f75a4u: goto R_010f75a4;
        case 0x10f75e0u: goto R_010f75e0;
        case 0x10f75e4u: goto R_010f75e4;
        case 0x10f75e8u: goto R_010f75e8;
        case 0x10f75fcu: goto R_010f75fc;
        case 0x10f7630u: goto R_010f7630;
        case 0x10f7634u: goto R_010f7634;
        case 0x10f7640u: goto R_010f7640;
        case 0x10f7650u: goto R_010f7650;
        case 0x10f7658u: goto R_010f7658;
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
    goto L_010f70b0;
L_010f708c:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f70ac;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f70acu;
    wp::call(c, c.ctr);
L_010f70ac:
R_010f70ac:
    c.lr = 0x10f70b0u;
    f_8006a940(c);
L_010f70b0:
R_010f70b0:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f708c;
    }
    c.lr = 0x10f70c0u;
    f_800760f0(c);
R_010f70c0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f708c;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f70e8;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10f70e8u;
    f_mr031_010a3540(c);
L_010f70e8:
R_010f70e8:
    c.r[3] = 0x1u;
    c.lr = 0x10f70f0u;
    f_80076130(c);
R_010f70f0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7104u;
    wp::call(c, c.ctr);
R_010f7104:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f718c;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f712cu;
    f_800104d0(c);
R_010f712c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10f7134u;
    f_8000a7f0(c);
R_010f7134:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10f713cu;
    f_8000e240(c);
R_010f713c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f717c;
    c.r[30] = 0x0u;
    goto L_010f7170;
L_010f714c:
    c.lr = 0x10f7150u;
    f_8000dd70(c);
R_010f7150:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x10f716cu;
    f_8000fc60(c);
R_010f716c:
    c.r[30] = c.r[30] + 0x1u;
L_010f7170:
    c.lr = 0x10f7174u;
    f_80007570(c);
R_010f7174:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f714c;
    }
L_010f717c:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10f7188u;
    f_800293c0(c);
R_010f7188:
    goto L_010f7650;
L_010f718c:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f71d0;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f71a4u;
    f_8000e070(c);
R_010f71a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_010f71b4;
    c.r[3] = 0x6u;
L_010f71b4:
    c.lr = 0x10f71b8u;
    f_8000e080(c);
R_010f71b8:
    c.r[3] = 0x1u;
    c.lr = 0x10f71c0u;
    f_80029330(c);
R_010f71c0:
    c.r[3] = ((((g_mr031_bases[5] + 0x31af8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[5] + 0x31af8u) & 0xFFFFu);
    c.lr = 0x10f71ccu;
    f_80029270(c);
R_010f71cc:
    goto L_010f7650;
L_010f71d0:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7214;
    c.r[29] = ((((g_mr031_bases[4] + 0x4488u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr031_bases[4] + 0x4488u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f71e4u;
    f_80071fe0(c);
R_010f71e4:
    c.lr = 0x10f71e8u;
    f_8001a890(c);
R_010f71e8:
    c.r[3] = 0x0u;
    c.lr = 0x10f71f0u;
    f_80076130(c);
R_010f71f0:
    ea = c.r[29] + wp::sign_extend16((g_mr031_bases[4] + 0x4488u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10f71fcu;
    f_80075f20(c);
R_010f71fc:
    c.r[3] = 0x1u;
    c.lr = 0x10f7204u;
    f_80076130(c);
R_010f7204:
    c.lr = 0x10f7208u;
    f_80076100(c);
R_010f7208:
    c.r[3] = 0x1u;
    c.lr = 0x10f7210u;
    f_80029330(c);
R_010f7210:
    goto L_010f7650;
L_010f7214:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10f721cu;
    f_80007f20(c);
R_010f721c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x10f722cu;
    f_mr031_010f7680(c);
R_010f722c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10f7234u;
    f_80041f70(c);
R_010f7234:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7250;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10f7250u;
    f_800402c0(c);
L_010f7250:
R_010f7250:
    c.lr = 0x10f7254u;
    f_80076140(c);
R_010f7254:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7284;
    c.r[3] = 0x0u;
    c.lr = 0x10f7264u;
    f_8004a100(c);
R_010f7264:
    c.r[3] = 0x1u;
    c.lr = 0x10f726cu;
    f_80072020(c);
R_010f726c:
    c.r[4] = ((((g_mr031_bases[4] + 0x448cu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x448cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f727cu;
    f_80075ed0(c);
R_010f727c:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_010f7284:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7480;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x10f7298u;
    f_80007530(c);
R_010f7298:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010f72bc;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_010f7318;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_010f7378;
    goto L_010f73ec;
L_010f72bc:
    c.r[3] = 0x1acu;
    c.lr = 0x10f72c4u;
    f_801c79a4(c);
R_010f72c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f72e0;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x10f72e0u;
    f_mr031_010becc0(c);
L_010f72e0:
R_010f72e0:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f73ec;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f73ec;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7314u;
    wp::call(c, c.ctr);
R_010f7314:
    goto L_010f73ec;
L_010f7318:
    c.r[3] = 0x1acu;
    c.lr = 0x10f7320u;
    f_801c79a4(c);
R_010f7320:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7340;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x10f7340u;
    f_mr031_010bfd00(c);
L_010f7340:
R_010f7340:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f73ec;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f73ec;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7374u;
    wp::call(c, c.ctr);
R_010f7374:
    goto L_010f73ec;
L_010f7378:
    c.r[3] = 0x1bcu;
    c.lr = 0x10f7380u;
    f_801c79a4(c);
R_010f7380:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f739c;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x10f739cu;
    f_mr031_010c0900(c);
L_010f739c:
R_010f739c:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f73d0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f73d0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f73d0u;
    wp::call(c, c.ctr);
L_010f73d0:
R_010f73d0:
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
    c.lr = 0x10f73ecu;
    wp::call(c, c.ctr);
L_010f73ec:
R_010f73ec:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7468;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f7404u;
    f_mr031_010f78c0(c);
R_010f7404:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_010f7468;
    c.r[3] = 0x1acu;
    c.lr = 0x10f7414u;
    f_801c79a4(c);
R_010f7414:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7434;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x10f7434u;
    f_mr031_010bfd00(c);
L_010f7434:
R_010f7434:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7468;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f7468;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7468u;
    wp::call(c, c.ctr);
L_010f7468:
R_010f7468:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7480;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f7480u;
    f_mr031_010f78c0(c);
L_010f7480:
R_010f7480:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7534;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f74acu;
    wp::call(c, c.ctr);
R_010f74ac:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010f74e4;
L_010f74b4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f74e0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f74e0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f74e0u;
    wp::call(c, c.ctr);
L_010f74e0:
R_010f74e0:
    c.lr = 0x10f74e4u;
    f_8006a940(c);
L_010f74e4:
R_010f74e4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f74fcu;
    wp::call(c, c.ctr);
R_010f74fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f74b4;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7534;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7534;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7534u;
    wp::call(c, c.ctr);
L_010f7534:
R_010f7534:
    c.r[3] = 0x4u;
    c.lr = 0x10f753cu;
    f_801c79a4(c);
R_010f753c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7548;
    c.lr = 0x10f7548u;
    f_mr031_0109f480(c);
L_010f7548:
R_010f7548:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7568;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x10f7568u;
    f_mr031_0109f520(c);
L_010f7568:
R_010f7568:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f7574u;
    f_mr031_0109f5c0(c);
R_010f7574:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f7580u;
    f_mr031_0109f5b0(c);
R_010f7580:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f758cu;
    f_mr031_0109f5a0(c);
R_010f758c:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f75f0;
    c.r[3] = 0x1u;
    c.lr = 0x10f75a4u;
    f_mr031_0109df50(c);
R_010f75a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f75f0;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010f75e4;
L_010f75b4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f75e0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f75e0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f75e0u;
    wp::call(c, c.ctr);
L_010f75e0:
R_010f75e0:
    c.lr = 0x10f75e4u;
    f_8006a940(c);
L_010f75e4:
R_010f75e4:
    c.lr = 0x10f75e8u;
    f_8006b760(c);
R_010f75e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f75b4;
    }
L_010f75f0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f75fcu;
    f_mr031_0109f5d0(c);
R_010f75fc:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010f7634;
L_010f7604:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7630;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7630;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7630u;
    wp::call(c, c.ctr);
L_010f7630:
R_010f7630:
    c.lr = 0x10f7634u;
    f_8006a940(c);
L_010f7634:
R_010f7634:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10f7640u;
    f_mr031_0109f5f0(c);
R_010f7640:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f7604;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f7650u;
    f_mr031_010f7b10(c);
L_010f7650:
R_010f7650:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10f7658u;
    f_8006a8f0(c);
R_010f7658:
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

void f_mr031_010f7680(wp::Cpu& c) {
    WP_ENTER(0x10f7680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f7694u: goto R_010f7694;
        case 0x10f76a4u: goto R_010f76a4;
        case 0x10f76b0u: goto R_010f76b0;
        case 0x10f76ccu: goto R_010f76cc;
        case 0x10f76d4u: goto R_010f76d4;
        case 0x10f76dcu: goto R_010f76dc;
        case 0x10f7740u: goto R_010f7740;
        case 0x10f775cu: goto R_010f775c;
        case 0x10f7778u: goto R_010f7778;
        case 0x10f77b0u: goto R_010f77b0;
        case 0x10f77ccu: goto R_010f77cc;
        case 0x10f77e8u: goto R_010f77e8;
        case 0x10f7804u: goto R_010f7804;
        case 0x10f781cu: goto R_010f781c;
        case 0x10f7854u: goto R_010f7854;
        case 0x10f7870u: goto R_010f7870;
        case 0x10f788cu: goto R_010f788c;
        case 0x10f78a8u: goto R_010f78a8;
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
    c.lr = 0x10f7694u;
    f_801c83b8(c);
R_010f7694:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x10f76a4u;
    f_8000fc40(c);
R_010f76a4:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x10f76b0u;
    f_8000fc40(c);
R_010f76b0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f76c8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f76c8;
    c.r[3] = 0x0u;
    goto L_010f78a0;
L_010f76c8:
    c.lr = 0x10f76ccu;
    f_80007530(c);
R_010f76cc:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10f76d4u;
    f_800075a0(c);
R_010f76d4:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10f76dcu;
    f_8000dd00(c);
R_010f76dc:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7710;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_010f7780;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_010f77f0;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_010f7824;
    goto L_010f7894;
L_010f7710:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f772c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f7748;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f7764;
    goto L_010f789c;
L_010f772c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f7740u;
    f_8000b780(c);
R_010f7740:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f7748:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f775cu;
    f_8000b780(c);
R_010f775c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f7764:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f7778u;
    f_8000b780(c);
R_010f7778:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f7780:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f779c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f77b8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f77d4;
    goto L_010f789c;
L_010f779c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f77b0u;
    f_8000b780(c);
R_010f77b0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f77b8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f77ccu;
    f_8000b780(c);
R_010f77cc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f77d4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f77e8u;
    f_8000b780(c);
R_010f77e8:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f77f0:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f7804u;
    f_8000b780(c);
R_010f7804:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f781cu;
    f_8000b780(c);
R_010f781c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f7824:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7840;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f785c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f7878;
    goto L_010f789c;
L_010f7840:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f7854u;
    f_8000b780(c);
R_010f7854:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f785c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f7870u;
    f_8000b780(c);
R_010f7870:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f7878:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x10f788cu;
    f_8000b780(c);
R_010f788c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010f789c;
L_010f7894:
    c.r[3] = 0x0u;
    goto L_010f78a0;
L_010f789c:
    c.r[3] = 0x1u;
L_010f78a0:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10f78a8u;
    f_801c8404(c);
R_010f78a8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010f78c0(wp::Cpu& c) {
    WP_ENTER(0x10f78c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f78d4u: goto R_010f78d4;
        case 0x10f78f8u: goto R_010f78f8;
        case 0x10f7930u: goto R_010f7930;
        case 0x10f7934u: goto R_010f7934;
        case 0x10f794cu: goto R_010f794c;
        case 0x10f7984u: goto R_010f7984;
        case 0x10f799cu: goto R_010f799c;
        case 0x10f79a0u: goto R_010f79a0;
        case 0x10f79a8u: goto R_010f79a8;
        case 0x10f79f4u: goto R_010f79f4;
        case 0x10f79f8u: goto R_010f79f8;
        case 0x10f7a34u: goto R_010f7a34;
        case 0x10f7a54u: goto R_010f7a54;
        case 0x10f7a8cu: goto R_010f7a8c;
        case 0x10f7a90u: goto R_010f7a90;
        case 0x10f7aa8u: goto R_010f7aa8;
        case 0x10f7aecu: goto R_010f7aec;
        case 0x10f7af4u: goto R_010f7af4;
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
    c.lr = 0x10f78d4u;
    f_801c83b8(c);
R_010f78d4:
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
    c.lr = 0x10f78f8u;
    wp::call(c, c.ctr);
R_010f78f8:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010f7934;
L_010f7904:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7930;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7930;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7930u;
    wp::call(c, c.ctr);
L_010f7930:
R_010f7930:
    c.lr = 0x10f7934u;
    f_8006a940(c);
L_010f7934:
R_010f7934:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f794cu;
    wp::call(c, c.ctr);
R_010f794c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7960;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f7904;
    }
L_010f7960:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010f79f8;
L_010f7974:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_010f797c:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10f7984u;
    f_8000fc40(c);
R_010f7984:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7994;
    c.r[0] = 0x0u;
    goto L_010f79b4;
L_010f7994:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10f799cu;
    f_8000fc20(c);
R_010f799c:
    c.lr = 0x10f79a0u;
    f_800699d0(c);
R_010f79a0:
    c.r[4] = 0x800u;
    c.lr = 0x10f79a8u;
    f_80066cd0(c);
R_010f79a8:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_010f79b4:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f797c;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f79f4;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f79f4;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f79f4u;
    wp::call(c, c.ctr);
L_010f79f4:
R_010f79f4:
    c.lr = 0x10f79f8u;
    f_8006a940(c);
L_010f79f8:
R_010f79f8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7a1c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7a1c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f7974;
    }
L_010f7a1c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7a34u;
    wp::call(c, c.ctr);
R_010f7a34:
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
    c.lr = 0x10f7a54u;
    wp::call(c, c.ctr);
R_010f7a54:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010f7a90;
L_010f7a60:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7a8c;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7a8c;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7a8cu;
    wp::call(c, c.ctr);
L_010f7a8c:
R_010f7a8c:
    c.lr = 0x10f7a90u;
    f_8006a940(c);
L_010f7a90:
R_010f7a90:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7aa8u;
    wp::call(c, c.ctr);
R_010f7aa8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7abc;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f7a60;
    }
L_010f7abc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7aec;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7aec;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7aecu;
    wp::call(c, c.ctr);
L_010f7aec:
R_010f7aec:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10f7af4u;
    f_801c8404(c);
R_010f7af4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr031_010f7b10(wp::Cpu& c) {
    WP_ENTER(0x10f7b10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f7b24u: goto R_010f7b24;
        case 0x10f7b3cu: goto R_010f7b3c;
        case 0x10f7b48u: goto R_010f7b48;
        case 0x10f7b58u: goto R_010f7b58;
        case 0x10f7b64u: goto R_010f7b64;
        case 0x10f7b74u: goto R_010f7b74;
        case 0x10f7b8cu: goto R_010f7b8c;
        case 0x10f7ba8u: goto R_010f7ba8;
        case 0x10f7bc4u: goto R_010f7bc4;
        case 0x10f7bf4u: goto R_010f7bf4;
        case 0x10f7c2cu: goto R_010f7c2c;
        case 0x10f7c30u: goto R_010f7c30;
        case 0x10f7cc0u: goto R_010f7cc0;
        case 0x10f7cecu: goto R_010f7cec;
        case 0x10f7cf4u: goto R_010f7cf4;
        case 0x10f7d00u: goto R_010f7d00;
        case 0x10f7d08u: goto R_010f7d08;
        case 0x10f7d0cu: goto R_010f7d0c;
        case 0x10f7d14u: goto R_010f7d14;
        case 0x10f7d28u: goto R_010f7d28;
        case 0x10f7d44u: goto R_010f7d44;
        case 0x10f7d4cu: goto R_010f7d4c;
        case 0x10f7d60u: goto R_010f7d60;
        case 0x10f7d6cu: goto R_010f7d6c;
        case 0x10f7d74u: goto R_010f7d74;
        case 0x10f7d80u: goto R_010f7d80;
        case 0x10f7d88u: goto R_010f7d88;
        case 0x10f7d8cu: goto R_010f7d8c;
        case 0x10f7d90u: goto R_010f7d90;
        case 0x10f7da4u: goto R_010f7da4;
        case 0x10f7dacu: goto R_010f7dac;
        case 0x10f7db8u: goto R_010f7db8;
        case 0x10f7dbcu: goto R_010f7dbc;
        case 0x10f7dc4u: goto R_010f7dc4;
        case 0x10f7dd0u: goto R_010f7dd0;
        case 0x10f7dd8u: goto R_010f7dd8;
        case 0x10f7ddcu: goto R_010f7ddc;
        case 0x10f7de4u: goto R_010f7de4;
        case 0x10f7decu: goto R_010f7dec;
        case 0x10f7df8u: goto R_010f7df8;
        case 0x10f7dfcu: goto R_010f7dfc;
        case 0x10f7e04u: goto R_010f7e04;
        case 0x10f7e10u: goto R_010f7e10;
        case 0x10f7e18u: goto R_010f7e18;
        case 0x10f7e1cu: goto R_010f7e1c;
        case 0x10f7e24u: goto R_010f7e24;
        case 0x10f7e2cu: goto R_010f7e2c;
        case 0x10f7e34u: goto R_010f7e34;
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
    c.lr = 0x10f7b24u;
    f_801c83b4(c);
R_010f7b24:
    c.r[27] = ((((g_mr031_bases[4] + 0x4488u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr031_bases[4] + 0x4488u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x10f7b3cu;
    f_800699d0(c);
R_010f7b3c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x10f7b48u;
    f_80066e70(c);
R_010f7b48:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x10f7b58u;
    f_80066db0(c);
R_010f7b58:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x10f7b64u;
    f_801c79a4(c);
R_010f7b64:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010f7bc8;
    c.lr = 0x10f7b74u;
    f_80007530(c);
R_010f7b74:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010f7b88;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_010f7ba0;
L_010f7b88:
    c.lr = 0x10f7b8cu;
    f_8000dc30(c);
R_010f7b8c:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_010f7ba4;
L_010f7ba0:
    c.r[26] = 0x0u;
L_010f7ba4:
    c.lr = 0x10f7ba8u;
    f_8000e070(c);
R_010f7ba8:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x10f7bc4u;
    f_mr031_010d7d80(c);
R_010f7bc4:
    c.r[29] = c.r[3] | c.r[3];
L_010f7bc8:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f7bf4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010f7bf4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7bf4u;
    wp::call(c, c.ctr);
L_010f7bf4:
R_010f7bf4:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010f7c30;
L_010f7c00:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7c2c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7c2c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7c2cu;
    wp::call(c, c.ctr);
L_010f7c2c:
R_010f7c2c:
    c.lr = 0x10f7c30u;
    f_8006a940(c);
L_010f7c30:
R_010f7c30:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_010f7c50;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010f7c00;
    }
L_010f7c50:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7c78;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f7c80;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f7c88;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010f7c90;
    goto L_010f7c94;
L_010f7c78:
    c.r[31] = 0x0u;
    goto L_010f7c94;
L_010f7c80:
    c.r[31] = 0x1u;
    goto L_010f7c94;
L_010f7c88:
    c.r[31] = 0x2u;
    goto L_010f7c94;
L_010f7c90:
    c.r[31] = 0x3u;
L_010f7c94:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7cc0;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010f7cc0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f7cc0u;
    wp::call(c, c.ctr);
L_010f7cc0:
R_010f7cc0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7ce4;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010f7d64;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010f7db0;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010f7df0;
    goto L_010f7e2c;
L_010f7ce4:
    c.r[3] = 0x5u;
    c.lr = 0x10f7cecu;
    f_8001a890(c);
R_010f7cec:
    c.r[3] = 0x0u;
    c.lr = 0x10f7cf4u;
    f_80076130(c);
R_010f7cf4:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10f7d00u;
    f_80075f20(c);
R_010f7d00:
    c.r[3] = 0x1u;
    c.lr = 0x10f7d08u;
    f_80076130(c);
R_010f7d08:
    c.lr = 0x10f7d0cu;
    f_80076100(c);
R_010f7d0c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10f7d14u;
    f_8000e240(c);
R_010f7d14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7d54;
    c.r[26] = 0x0u;
    goto L_010f7d48;
L_010f7d24:
    c.lr = 0x10f7d28u;
    f_8000dd70(c);
R_010f7d28:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x10f7d44u;
    f_8000fc60(c);
R_010f7d44:
    c.r[26] = c.r[26] + 0x1u;
L_010f7d48:
    c.lr = 0x10f7d4cu;
    f_80007570(c);
R_010f7d4c:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f7d24;
    }
L_010f7d54:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10f7d60u;
    f_800293c0(c);
R_010f7d60:
    goto L_010f7e2c;
L_010f7d64:
    c.r[3] = 0x5u;
    c.lr = 0x10f7d6cu;
    f_8001a890(c);
R_010f7d6c:
    c.r[3] = 0x0u;
    c.lr = 0x10f7d74u;
    f_80076130(c);
R_010f7d74:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10f7d80u;
    f_80075f20(c);
R_010f7d80:
    c.r[3] = 0x1u;
    c.lr = 0x10f7d88u;
    f_80076130(c);
R_010f7d88:
    c.lr = 0x10f7d8cu;
    f_80076100(c);
R_010f7d8c:
    c.lr = 0x10f7d90u;
    f_8000e070(c);
R_010f7d90:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_010f7da0;
    c.r[3] = 0x6u;
L_010f7da0:
    c.lr = 0x10f7da4u;
    f_8000e080(c);
R_010f7da4:
    c.r[3] = 0x1u;
    c.lr = 0x10f7dacu;
    f_80029330(c);
R_010f7dac:
    goto L_010f7e2c;
L_010f7db0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f7db8u;
    f_80071fe0(c);
R_010f7db8:
    c.lr = 0x10f7dbcu;
    f_8001a890(c);
R_010f7dbc:
    c.r[3] = 0x0u;
    c.lr = 0x10f7dc4u;
    f_80076130(c);
R_010f7dc4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10f7dd0u;
    f_80075f20(c);
R_010f7dd0:
    c.r[3] = 0x1u;
    c.lr = 0x10f7dd8u;
    f_80076130(c);
R_010f7dd8:
    c.lr = 0x10f7ddcu;
    f_80076100(c);
R_010f7ddc:
    c.r[3] = 0x4u;
    c.lr = 0x10f7de4u;
    f_8000e080(c);
R_010f7de4:
    c.r[3] = 0x1u;
    c.lr = 0x10f7decu;
    f_80029330(c);
R_010f7dec:
    goto L_010f7e2c;
L_010f7df0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10f7df8u;
    f_80071fe0(c);
R_010f7df8:
    c.lr = 0x10f7dfcu;
    f_8001a890(c);
R_010f7dfc:
    c.r[3] = 0x0u;
    c.lr = 0x10f7e04u;
    f_80076130(c);
R_010f7e04:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10f7e10u;
    f_80075f20(c);
R_010f7e10:
    c.r[3] = 0x1u;
    c.lr = 0x10f7e18u;
    f_80076130(c);
R_010f7e18:
    c.lr = 0x10f7e1cu;
    f_80076100(c);
R_010f7e1c:
    c.r[3] = 0x8u;
    c.lr = 0x10f7e24u;
    f_8000e080(c);
R_010f7e24:
    c.r[3] = 0x1u;
    c.lr = 0x10f7e2cu;
    f_80029330(c);
L_010f7e2c:
R_010f7e2c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10f7e34u;
    f_801c8400(c);
R_010f7e34:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr031_010f7e50(wp::Cpu& c) {
    WP_ENTER(0x10f7e50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f7e88u: goto R_010f7e88;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr031_bases[5] + 0x31b20u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr031_bases[6] + 0x3d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31b20u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[6] + 0x3d8u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    c.lr = 0x10f7e88u;
    f_80030b40(c);
R_010f7e88:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010f7ea0(wp::Cpu& c) {
    WP_ENTER(0x10f7ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    f_800315f0(c);
    return;
}

void f_mr031_010f7eb0(wp::Cpu& c) {
    WP_ENTER(0x10f7eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f7f04u: goto R_010f7f04;
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
    if (wp::cr_get(c, 2)) goto L_010f7ed4;
    c.r[3] = 0x0u;
    goto L_010f7f48;
L_010f7ed4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010f7eec;
    c.r[0] = c.r[4] & 0x100u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010f7eec;
    c.r[3] = 0x0u;
    goto L_010f7f48;
L_010f7eec:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x400u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f7f04u;
    f_801c79a4(c);
R_010f7f04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7f48;
    c.r[6] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[6]);
    c.r[5] = ((((g_mr031_bases[5] + 0x31b30u) + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[6]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr031_bases[5] + 0x31b30u) & 0xFFFFu);
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
L_010f7f48:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010f7f60(wp::Cpu& c) {
    WP_ENTER(0x10f7f60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f7fa4u: goto R_010f7fa4;
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
    if (!wp::cr_get(c, 2)) goto L_010f7f88;
    c.r[3] = 0x0u;
    goto L_010f7fe4;
L_010f7f88:
    c.r[3] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[4] & 0xfffffbffu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80231d68u & 0xFFFFu);
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[31] = c.r[3] + 0x11u;
    c.r[3] = 0x24u;
    c.lr = 0x10f7fa4u;
    f_801c79a4(c);
R_010f7fa4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f7fe4;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[4] = ((((g_mr031_bases[5] + 0x31b30u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31b30u) & 0xFFFFu);
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
L_010f7fe4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr031_010f8000(wp::Cpu& c) {
    WP_ENTER(0x10f8000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr031_010f8010(wp::Cpu& c) {
    WP_ENTER(0x10f8010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr031_010f8020(wp::Cpu& c) {
    WP_ENTER(0x10f8020u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr031_010f8030(wp::Cpu& c) {
    WP_ENTER(0x10f8030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f6050u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f6050u & 0xFFFFu);
    return;
}

void f_mr031_010f8040(wp::Cpu& c) {
    WP_ENTER(0x10f8040u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f8084u: goto R_010f8084;
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
    if (wp::cr_get(c, 2)) goto L_010f8088;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f8088;
    ea = c.r[3] + 0x14u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x10f8084u;
    f_80143290(c);
R_010f8084:
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_010f8088:
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

void f_mr031_010f80b0(wp::Cpu& c) {
    WP_ENTER(0x10f80b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f80e4u: goto R_010f80e4;
        case 0x10f80fcu: goto R_010f80fc;
        case 0x10f8108u: goto R_010f8108;
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
    c.lr = 0x10f80e4u;
    wp::call(c, c.ctr);
R_010f80e4:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[0] + c.r[3];
    c.r[3] = c.r[3] + 0x8u;
    c.lr = 0x10f80fcu;
    f_800043c4(c);
R_010f80fc:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x10f8108u;
    f_8011c2d0(c);
R_010f8108:
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

void f_mr031_010f8130(wp::Cpu& c) {
    WP_ENTER(0x10f8130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr031_010f8140(wp::Cpu& c) {
    WP_ENTER(0x10f8140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f8174u: goto R_010f8174;
        case 0x10f818cu: goto R_010f818c;
        case 0x10f8198u: goto R_010f8198;
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
    c.lr = 0x10f8174u;
    wp::call(c, c.ctr);
R_010f8174:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = c.r[0] + c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + 0x8u;
    c.lr = 0x10f818cu;
    f_800043c4(c);
R_010f818c:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x10f8198u;
    f_8011c260(c);
R_010f8198:
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

void f_mr031_010f81c0(wp::Cpu& c) {
    WP_ENTER(0x10f81c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0x1cu;
    f_8011c320(c);
    return;
}

void f_mr031_010f81d0(wp::Cpu& c) {
    WP_ENTER(0x10f81d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr031_010f81e0(wp::Cpu& c) {
    WP_ENTER(0x10f81e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr031_010f81f0(wp::Cpu& c) {
    WP_ENTER(0x10f81f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_mr031_010f8200(wp::Cpu& c) {
    WP_ENTER(0x10f8200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_mr031_010f8210(wp::Cpu& c) {
    WP_ENTER(0x10f8210u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_mr031_010f8220(wp::Cpu& c) {
    WP_ENTER(0x10f8220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr031_010f8230(wp::Cpu& c) {
    WP_ENTER(0x10f8230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f826cu: goto R_010f826c;
        case 0x10f827cu: goto R_010f827c;
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
    if (wp::cr_get(c, 2)) goto L_010f827c;
    c.r[12] = ((((g_mr031_bases[5] + 0x31b30u) + 0x8000u) >> 16) << 16);
    c.r[12] = c.r[12] + wp::sign_extend16((g_mr031_bases[5] + 0x31b30u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10f826cu;
    wp::call(c, c.ctr);
R_010f826c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f827c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10f827cu;
    f_801c7a8c(c);
L_010f827c:
R_010f827c:
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

void f_mr031_010f82a0(wp::Cpu& c) {
    WP_ENTER(0x10f82a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f82d0u: goto R_010f82d0;
        case 0x10f82d8u: goto R_010f82d8;
        case 0x10f8304u: goto R_010f8304;
        case 0x10f8310u: goto R_010f8310;
        case 0x10f8334u: goto R_010f8334;
        case 0x10f835cu: goto R_010f835c;
        case 0x10f8374u: goto R_010f8374;
        case 0x10f8390u: goto R_010f8390;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr031_bases[4] + 0x44c0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr031_bases[4] + 0x44c0u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10f82d0u;
    f_80153530(c);
R_010f82d0:
    c.r[3] = 0x6u;
    c.lr = 0x10f82d8u;
    f_80153920(c);
R_010f82d8:
    c.r[31] = ((((g_mr031_bases[4] + 0x44c8u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr031_bases[4] + 0x44c8u) & 0xFFFFu);
L_010f82e4:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x10f8304u;
    f_801537c0(c);
R_010f8304:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f8310u;
    f_80153590(c);
R_010f8310:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_010f8324;
    c.r[4] = 0xfu;
L_010f8324:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x10f8334u;
    f_80153320(c);
R_010f8334:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010f8350;
    c.r[6] = 0x3u;
L_010f8350:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f835cu;
    f_801533a0(c);
R_010f835c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x10f8374u;
    f_80153360(c);
R_010f8374:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10f8390u;
    f_80153400(c);
R_010f8390:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f82e4;
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

void f_mr031_010f83c0(wp::Cpu& c) {
    WP_ENTER(0x10f83c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f83f4u: goto R_010f83f4;
        case 0x10f83fcu: goto R_010f83fc;
        case 0x10f8404u: goto R_010f8404;
        case 0x10f840cu: goto R_010f840c;
        case 0x10f841cu: goto R_010f841c;
        case 0x10f8434u: goto R_010f8434;
        case 0x10f8448u: goto R_010f8448;
        case 0x10f844cu: goto R_010f844c;
        case 0x10f8458u: goto R_010f8458;
        case 0x10f8468u: goto R_010f8468;
        case 0x10f846cu: goto R_010f846c;
        case 0x10f8470u: goto R_010f8470;
        case 0x10f8494u: goto R_010f8494;
        case 0x10f84dcu: goto R_010f84dc;
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
    c.lr = 0x10f83f4u;
    f_80150850(c);
R_010f83f4:
    c.r[3] = 0x1u;
    c.lr = 0x10f83fcu;
    f_80153e40(c);
R_010f83fc:
    c.r[3] = 0x0u;
    c.lr = 0x10f8404u;
    f_80153e90(c);
R_010f8404:
    c.r[3] = 0x1u;
    c.lr = 0x10f840cu;
    f_80153f20(c);
R_010f840c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x10f841cu;
    f_80153ee0(c);
R_010f841c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x10f8434u;
    f_801536f0(c);
R_010f8434:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x10f8448u;
    f_80153df0(c);
R_010f8448:
    c.lr = 0x10f844cu;
    f_8014f020(c);
R_010f844c:
    c.r[3] = ((((g_mr031_bases[4] + 0x44e8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr031_bases[4] + 0x44e8u) & 0xFFFFu);
    c.lr = 0x10f8458u;
    f_8014e9e0(c);
R_010f8458:
    c.r[4] = ((((g_mr031_bases[4] + 0x4500u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[4] + 0x4500u) & 0xFFFFu);
    c.lr = 0x10f8468u;
    f_8014f200(c);
R_010f8468:
    c.lr = 0x10f846cu;
    f_8004aa80(c);
R_010f846c:
    c.lr = 0x10f8470u;
    f_800ee3c0(c);
R_010f8470:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x10f8494u;
    f_800e95b0(c);
R_010f8494:
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
    c.lr = 0x10f84dcu;
    f_80150560(c);
R_010f84dc:
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

void f_mr031_010f8560(wp::Cpu& c) {
    WP_ENTER(0x10f8560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f85a0u: goto R_010f85a0;
        case 0x10f85b4u: goto R_010f85b4;
        case 0x10f85c4u: goto R_010f85c4;
        case 0x10f85d4u: goto R_010f85d4;
        case 0x10f85e0u: goto R_010f85e0;
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
    c.lr = 0x10f85a0u;
    f_8003d6b0(c);
R_010f85a0:
    c.r[4] = ((((g_mr031_bases[5] + 0x31b90u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr031_bases[5] + 0x31b90u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10f85b4u;
    f_801c79a4(c);
R_010f85b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010f85c4;
    c.lr = 0x10f85c4u;
    f_80034ac0(c);
L_010f85c4:
R_010f85c4:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10f85d4u;
    f_80052170(c);
R_010f85d4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10f85e0u;
    f_80052190(c);
R_010f85e0:
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

void f_mr031_010f8610(wp::Cpu& c) {
    WP_ENTER(0x10f8610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f8658u: goto R_010f8658;
        case 0x10f8660u: goto R_010f8660;
        case 0x10f8674u: goto R_010f8674;
        case 0x10f8684u: goto R_010f8684;
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
    if (wp::cr_get(c, 2)) goto L_010f8684;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010f8660;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f8660;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10f8658u;
    f_80034b10(c);
R_010f8658:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10f8660u;
    f_801c7a8c(c);
L_010f8660:
R_010f8660:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010f8674;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10f8674u;
    f_80051600(c);
L_010f8674:
R_010f8674:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010f8684;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10f8684u;
    f_801c7a8c(c);
L_010f8684:
R_010f8684:
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

void f_mr031_010f86b0(wp::Cpu& c) {
    WP_ENTER(0x10f86b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10f86f4u: goto R_010f86f4;
        case 0x10f8720u: goto R_010f8720;
        case 0x10f872cu: goto R_010f872c;
        case 0x10f8734u: goto R_010f8734;
        case 0x10f8740u: goto R_010f8740;
        case 0x10f8748u: goto R_010f8748;
        case 0x10f8750u: goto R_010f8750;
        case 0x10f8770u: goto R_010f8770;
        case 0x10f8790u: goto R_010f8790;
        case 0x10f8798u: goto R_010f8798;
        case 0x10f87a4u: goto R_010f87a4;
        case 0x10f87d4u: goto R_010f87d4;
        case 0x10f87f0u: goto R_010f87f0;
        case 0x10f8838u: goto R_010f8838;
        case 0x10f8854u: goto R_010f8854;
        case 0x10f886cu: goto R_010f886c;
        case 0x10f8888u: goto R_010f8888;
        case 0x10f8898u: goto R_010f8898;
        case 0x10f889cu: goto R_010f889c;
        case 0x10f88d4u: goto R_010f88d4;
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
    c.lr = 0x10f86f4u;
    f_801c83b8(c);
R_010f86f4:
    c.r[29] = ((((g_mr031_bases[4] + 0x44a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr031_bases[4] + 0x44a0u) & 0xFFFFu);
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
    c.lr = 0x10f8720u;
    f_8014c050(c);
R_010f8720:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x10f872cu;
    f_80154c30(c);
R_010f872c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10f8734u;
    f_8014b090(c);
R_010f8734:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x10f8740u;
    f_80154d30(c);
R_010f8740:
    c.r[3] = 0x0u;
    c.lr = 0x10f8748u;
    f_80154e50(c);
R_010f8748:
    c.r[3] = 0x0u;
    c.lr = 0x10f8750u;
    f_80151a30(c);
R_010f8750:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10f8770u;
    f_80151a60(c);
R_010f8770:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x10f8790u;
    f_80151a60(c);
R_010f8790:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10f8798u;
    f_80034f00(c);
R_010f8798:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x10f87a4u;
    f_80034f20(c);
R_010f87a4:
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
    c.lr = 0x10f87d4u;
    f_8014f9d0(c);
R_010f87d4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10f87f0u;
    f_8014f780(c);
R_010f87f0:
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
L_010f880c:
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
    c.lr = 0x10f8838u;
    f_80126450(c);
R_010f8838:
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
    c.lr = 0x10f8854u;
    f_8014b7e0(c);
R_010f8854:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x10f886cu;
    f_80154e70(c);
R_010f886c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10f8888u;
    f_8014f780(c);
R_010f8888:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010f880c;
    }
    c.lr = 0x10f8898u;
    f_mr031_010f82a0(c);
R_010f8898:
    c.lr = 0x10f889cu;
    f_mr031_010f83c0(c);
R_010f889c:
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
    c.lr = 0x10f88d4u;
    f_801c8404(c);
R_010f88d4:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

