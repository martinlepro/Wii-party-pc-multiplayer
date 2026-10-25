#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr701_bases[17];
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
void f_mr701_01023710(wp::Cpu& c);
void f_mr701_010238d0(wp::Cpu& c);
void f_mr701_01035690(wp::Cpu& c);
void f_mr701_010357f0(wp::Cpu& c);
void f_mr701_01035810(wp::Cpu& c);
void f_mr701_01035830(wp::Cpu& c);
void f_mr701_01035d90(wp::Cpu& c);
void f_mr701_01035e60(wp::Cpu& c);
void f_mr701_01038720(wp::Cpu& c);
void f_mr701_01039c60(wp::Cpu& c);
void f_mr701_01039d00(wp::Cpu& c);
void f_mr701_01039d80(wp::Cpu& c);
void f_mr701_01039d90(wp::Cpu& c);
void f_mr701_01039da0(wp::Cpu& c);
void f_mr701_01039db0(wp::Cpu& c);
void f_mr701_01039dd0(wp::Cpu& c);
void f_mr701_0103ead0(wp::Cpu& c);
void f_mr701_0103eca0(wp::Cpu& c);
void f_mr701_0103ed20(wp::Cpu& c);
void f_mr701_0103ed40(wp::Cpu& c);
void f_mr701_0103f0e0(wp::Cpu& c);
void f_mr701_0103f610(wp::Cpu& c);
void f_mr701_01045eb0(wp::Cpu& c);
void f_mr701_01047f70(wp::Cpu& c);
void f_mr701_010584a0(wp::Cpu& c);
void f_mr701_010594e0(wp::Cpu& c);
void f_mr701_0105a0e0(wp::Cpu& c);
void f_mr701_01070420(wp::Cpu& c);
void f_mr701_0107f1f0(wp::Cpu& c);
void f_mr701_0107f330(wp::Cpu& c);
void f_mr701_0107f450(wp::Cpu& c);
void f_mr701_0107f5e0(wp::Cpu& c);
void f_mr701_0107f650(wp::Cpu& c);
void f_mr701_0107f660(wp::Cpu& c);
void f_mr701_0107f710(wp::Cpu& c);
void f_mr701_0107f7c0(wp::Cpu& c);
void f_mr701_0107f870(wp::Cpu& c);
void f_mr701_0107fa40(wp::Cpu& c);
void f_mr701_0107fbd0(wp::Cpu& c);
void f_mr701_0107fd60(wp::Cpu& c);
void f_mr701_010804f0(wp::Cpu& c);
void f_mr701_01080c40(wp::Cpu& c);
void f_mr701_010814f0(wp::Cpu& c);
void f_mr701_01081d60(wp::Cpu& c);
void f_mr701_01081d70(wp::Cpu& c);
void f_mr701_01081d80(wp::Cpu& c);
void f_mr701_01081d90(wp::Cpu& c);
void f_mr701_01081da0(wp::Cpu& c);
void f_mr701_01081e90(wp::Cpu& c);
void f_mr701_01081ef0(wp::Cpu& c);
void f_mr701_01081fd0(wp::Cpu& c);
void f_mr701_01082090(wp::Cpu& c);
void f_mr701_01082170(wp::Cpu& c);
void f_mr701_010821f0(wp::Cpu& c);
void f_mr701_01082560(wp::Cpu& c);
void f_mr701_01082690(wp::Cpu& c);
void f_mr701_01082740(wp::Cpu& c);
void f_mr701_010827e0(wp::Cpu& c);
void f_mr701_010828f0(wp::Cpu& c);
void f_mr701_01082940(wp::Cpu& c);
void f_mr701_01082990(wp::Cpu& c);
void f_mr701_010829e0(wp::Cpu& c);
void f_mr701_01082cd0(wp::Cpu& c);
void f_mr701_01082d60(wp::Cpu& c);
void f_mr701_01082db0(wp::Cpu& c);
void f_mr701_01082e00(wp::Cpu& c);
void f_mr701_01082ed0(wp::Cpu& c);
void f_mr701_010830c0(wp::Cpu& c);
void f_mr701_01083100(wp::Cpu& c);
void f_mr701_01083160(wp::Cpu& c);
void f_mr701_010831d0(wp::Cpu& c);
void f_mr701_01083440(wp::Cpu& c);
void f_mr701_010834a0(wp::Cpu& c);
void f_mr701_010836b0(wp::Cpu& c);
void f_mr701_010836c0(wp::Cpu& c);
void f_mr701_010836f0(wp::Cpu& c);
void f_mr701_010838c0(wp::Cpu& c);
void f_mr701_010838e0(wp::Cpu& c);
void f_mr701_01083950(wp::Cpu& c);
void f_mr701_010839c0(wp::Cpu& c);
void f_mr701_01083a30(wp::Cpu& c);
void f_mr701_01083ab0(wp::Cpu& c);
void f_mr701_01083b20(wp::Cpu& c);
void f_mr701_01083da0(wp::Cpu& c);
void f_mr701_01083e80(wp::Cpu& c);
void f_mr701_01083f80(wp::Cpu& c);
void f_mr701_01084060(wp::Cpu& c);
void f_mr701_01084140(wp::Cpu& c);
void f_mr701_01084220(wp::Cpu& c);
void f_mr701_01084300(wp::Cpu& c);
void f_mr701_01084a30(wp::Cpu& c);
void f_mr701_01084a40(wp::Cpu& c);
void f_mr701_01084a50(wp::Cpu& c);
void f_mr701_01084b70(wp::Cpu& c);
void f_mr701_01084bb0(wp::Cpu& c);
void f_mr701_01084bd0(wp::Cpu& c);
void f_mr701_01084c60(wp::Cpu& c);
void f_mr701_01084d50(wp::Cpu& c);
void f_mr701_01084e40(wp::Cpu& c);
void f_mr701_01084f80(wp::Cpu& c);
void f_mr701_010850c0(wp::Cpu& c);
void f_mr701_010851c0(wp::Cpu& c);
void f_mr701_01085200(wp::Cpu& c);
void f_mr701_010853f0(wp::Cpu& c);
void f_mr701_01085470(wp::Cpu& c);
void f_mr701_010854f0(wp::Cpu& c);
void f_mr701_01085570(wp::Cpu& c);
void f_mr701_01085860(wp::Cpu& c);
void f_mr701_01085a00(wp::Cpu& c);
void f_mr701_01085ba0(wp::Cpu& c);
void f_mr701_01085cb0(wp::Cpu& c);
void f_mr701_01085db0(wp::Cpu& c);
void f_mr701_01085ee0(wp::Cpu& c);
void f_mr701_01085fe0(wp::Cpu& c);
void f_mr701_01085ff0(wp::Cpu& c);
void f_mr701_010860f0(wp::Cpu& c);
void f_mr701_01086100(wp::Cpu& c);
void f_mr701_01086150(wp::Cpu& c);
void f_mr701_010862f0(wp::Cpu& c);
void f_mr701_01086410(wp::Cpu& c);
void f_mr701_010864a0(wp::Cpu& c);
void f_mr701_010865e0(wp::Cpu& c);
void f_mr701_010866f0(wp::Cpu& c);
void f_mr701_01086750(wp::Cpu& c);
void f_mr701_010869a0(wp::Cpu& c);
void f_mr701_01087650(wp::Cpu& c);
void f_mr701_010879e0(wp::Cpu& c);
void f_mr701_01087a10(wp::Cpu& c);
void f_mr701_01087ae0(wp::Cpu& c);
void f_mr701_01087d30(wp::Cpu& c);
void f_mr701_01088140(wp::Cpu& c);
void f_mr701_010882e0(wp::Cpu& c);
void f_mr701_010882f0(wp::Cpu& c);
void f_mr701_01088300(wp::Cpu& c);
void f_mr701_01088390(wp::Cpu& c);
void f_mr701_01088460(wp::Cpu& c);
void f_mr701_010884f0(wp::Cpu& c);
void f_mr701_01088500(wp::Cpu& c);
void f_mr701_01088550(wp::Cpu& c);
void f_mr701_01088710(wp::Cpu& c);
void f_mr701_010888d0(wp::Cpu& c);
void f_mr701_01088950(wp::Cpu& c);
void f_mr701_010889c0(wp::Cpu& c);
void f_mr701_01088d80(wp::Cpu& c);
void f_mr701_01088eb0(wp::Cpu& c);
void f_mr701_01088fa0(wp::Cpu& c);
void f_mr701_01089080(wp::Cpu& c);
void f_mr701_01089150(wp::Cpu& c);
void f_mr701_01089240(wp::Cpu& c);
void f_mr701_01089320(wp::Cpu& c);
void f_mr701_01089600(wp::Cpu& c);
void f_mr701_010896d0(wp::Cpu& c);
void f_mr701_010899a0(wp::Cpu& c);
void f_mr701_01089a80(wp::Cpu& c);
void f_mr701_01089aa0(wp::Cpu& c);
void f_mr701_01089bc0(wp::Cpu& c);
void f_mr701_01089c50(wp::Cpu& c);
void f_mr701_01089cd0(wp::Cpu& c);
void f_mr701_01089df0(wp::Cpu& c);
void f_mr701_01089ef0(wp::Cpu& c);
void f_mr701_0108a470(wp::Cpu& c);
void f_mr701_0108a480(wp::Cpu& c);
void f_mr701_0108a4b0(wp::Cpu& c);
void f_mr701_0108a4c0(wp::Cpu& c);
void f_mr701_0108a690(wp::Cpu& c);
void f_mr701_0108a7d0(wp::Cpu& c);
void f_mr701_0108a7e0(wp::Cpu& c);
void f_mr701_0108a930(wp::Cpu& c);
void f_mr701_0108a9f0(wp::Cpu& c);
void f_mr701_0108aac0(wp::Cpu& c);
void f_mr701_0108ad30(wp::Cpu& c);
void f_mr701_0108ada0(wp::Cpu& c);
void f_mr701_0108ae10(wp::Cpu& c);
void f_mr701_0108ae30(wp::Cpu& c);
void f_mr701_0108aea0(wp::Cpu& c);
void f_mr701_0108af60(wp::Cpu& c);
void f_mr701_0108b4a0(wp::Cpu& c);
void f_mr701_0108b840(wp::Cpu& c);
void f_mr701_0108b860(wp::Cpu& c);
void f_mr701_0108bb70(wp::Cpu& c);
void f_mr701_0108bb80(wp::Cpu& c);
void f_mr701_0108bb90(wp::Cpu& c);
void f_mr701_0108bf90(wp::Cpu& c);
void f_mr701_0108c060(wp::Cpu& c);
void f_mr701_0108c270(wp::Cpu& c);
void f_mr701_0108c380(wp::Cpu& c);
void f_mr701_0108c400(wp::Cpu& c);
void f_mr701_0108c460(wp::Cpu& c);
void f_mr701_0108c5a0(wp::Cpu& c);
void f_mr701_0108c5b0(wp::Cpu& c);
void f_mr701_0108c5c0(wp::Cpu& c);
void f_mr701_0108c5d0(wp::Cpu& c);
void f_mr701_0108c690(wp::Cpu& c);
void f_mr701_0108c910(wp::Cpu& c);
void f_mr701_0108c940(wp::Cpu& c);
void f_mr701_0108c960(wp::Cpu& c);
void f_mr701_0108c9c0(wp::Cpu& c);
void f_mr701_0108cc40(wp::Cpu& c);
void f_mr701_0108cc60(wp::Cpu& c);
void f_mr701_0108cc80(wp::Cpu& c);
void f_mr701_0108ccf0(wp::Cpu& c);
void f_mr701_0108cd70(wp::Cpu& c);
void f_mr701_0108cd90(wp::Cpu& c);
void f_mr701_0108cdb0(wp::Cpu& c);
void f_mr701_0108cdd0(wp::Cpu& c);
void f_mr701_0108ce10(wp::Cpu& c);
void f_mr701_0108ce30(wp::Cpu& c);
void f_mr701_0108ce50(wp::Cpu& c);
void f_mr701_0108ce70(wp::Cpu& c);
void f_mr701_0108ce90(wp::Cpu& c);
void f_mr701_0108ceb0(wp::Cpu& c);
void f_mr701_0108cef0(wp::Cpu& c);
void f_mr701_0108d0c0(wp::Cpu& c);
void f_mr701_0108d0e0(wp::Cpu& c);
void f_mr701_0108d110(wp::Cpu& c);
void f_mr701_0108d140(wp::Cpu& c);
void f_mr701_0108d170(wp::Cpu& c);
void f_mr701_0108d190(wp::Cpu& c);
void f_mr701_0108d1c0(wp::Cpu& c);
void f_mr701_0108d1e0(wp::Cpu& c);
void f_mr701_0108d200(wp::Cpu& c);
void f_mr701_0108d210(wp::Cpu& c);
void f_mr701_0108d220(wp::Cpu& c);
void f_mr701_0108d230(wp::Cpu& c);
void f_mr701_0108d250(wp::Cpu& c);
void f_mr701_0108d2c0(wp::Cpu& c);
void f_mr701_0108d2d0(wp::Cpu& c);
void f_mr701_0108d2e0(wp::Cpu& c);
void f_mr701_0108d2f0(wp::Cpu& c);
void f_mr701_0108d300(wp::Cpu& c);
void f_mr701_0108d310(wp::Cpu& c);
void f_mr701_0108d320(wp::Cpu& c);
void f_mr701_0108d330(wp::Cpu& c);
void f_mr701_0108d340(wp::Cpu& c);
void f_mr701_0108d350(wp::Cpu& c);
void f_mr701_0108d360(wp::Cpu& c);
void f_mr701_0108d370(wp::Cpu& c);
void f_mr701_0108d3d0(wp::Cpu& c);
void f_mr701_0108d430(wp::Cpu& c);
void f_mr701_0108d7e0(wp::Cpu& c);
void f_mr701_0108da30(wp::Cpu& c);
void f_mr701_0108dec0(wp::Cpu& c);
void f_mr701_0108ded0(wp::Cpu& c);
void f_mr701_0108dee0(wp::Cpu& c);
void f_mr701_0108dfd0(wp::Cpu& c);
void f_mr701_0108e240(wp::Cpu& c);
void f_mr701_0108e460(wp::Cpu& c);
void f_mr701_0108e790(wp::Cpu& c);
void f_mr701_0108e930(wp::Cpu& c);
void f_mr701_0108e9d0(wp::Cpu& c);
void f_mr701_0108ea80(wp::Cpu& c);
void f_mr701_0108ea90(wp::Cpu& c);
void f_mr701_0108eaa0(wp::Cpu& c);
void f_mr701_0108eac0(wp::Cpu& c);
void f_mr701_0108ead0(wp::Cpu& c);
void f_mr701_0108ec30(wp::Cpu& c);
void f_mr701_0108ede0(wp::Cpu& c);
void f_mr701_0108f070(wp::Cpu& c);
void f_mr701_0108f130(wp::Cpu& c);
void f_mr701_0108f140(wp::Cpu& c);
void f_mr701_0108f150(wp::Cpu& c);
void f_mr701_0108f770(wp::Cpu& c);
void f_mr701_0108f9b0(wp::Cpu& c);
void f_mr701_0108fc00(wp::Cpu& c);
void f_mr701_0108ff40(wp::Cpu& c);
void f_mr701_0108ff90(wp::Cpu& c);
void f_mr701_010900b0(wp::Cpu& c);
void f_mr701_01090250(wp::Cpu& c);
void f_mr701_01090300(wp::Cpu& c);
void f_mr701_010903a0(wp::Cpu& c);

void f_mr701_0107f5e0(wp::Cpu& c) {
    WP_ENTER(0x107f5e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f628u: goto R_0107f628;
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
    if (wp::cr_get(c, 1)) goto L_0107f630;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107f630;
    c.r[5] = ((((g_mr701_bases[4] + 0x2ea8u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x2ea8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107f628u;
    f_80018e30(c);
R_0107f628:
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0107f630:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_0107f650(wp::Cpu& c) {
    WP_ENTER(0x107f650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[4]);
    f_800402c0(c);
    return;
}

void f_mr701_0107f660(wp::Cpu& c) {
    WP_ENTER(0x107f660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f67cu: goto R_0107f67c;
        case 0x107f690u: goto R_0107f690;
        case 0x107f6d0u: goto R_0107f6d0;
        case 0x107f6f4u: goto R_0107f6f4;
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
    c.lr = 0x107f67cu;
    f_801c83b4(c);
R_0107f67c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x107f690u;
    f_mr701_0107f1f0(c);
R_0107f690:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_0107f6a8:
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
    ea = c.r[30] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x107f6d0u;
    f_80040980(c);
R_0107f6d0:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107f6a8;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x107f6f4u;
    f_801c8400(c);
R_0107f6f4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr701_0107f710(wp::Cpu& c) {
    WP_ENTER(0x107f710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f72cu: goto R_0107f72c;
        case 0x107f740u: goto R_0107f740;
        case 0x107f780u: goto R_0107f780;
        case 0x107f7a4u: goto R_0107f7a4;
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
    c.lr = 0x107f72cu;
    f_801c83b4(c);
R_0107f72c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x107f740u;
    f_mr701_0107f330(c);
R_0107f740:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_0107f758:
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
    ea = c.r[30] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x107f780u;
    f_80040980(c);
R_0107f780:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107f758;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x107f7a4u;
    f_801c8400(c);
R_0107f7a4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr701_0107f7c0(wp::Cpu& c) {
    WP_ENTER(0x107f7c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f7dcu: goto R_0107f7dc;
        case 0x107f7f0u: goto R_0107f7f0;
        case 0x107f830u: goto R_0107f830;
        case 0x107f854u: goto R_0107f854;
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
    c.lr = 0x107f7dcu;
    f_801c83b4(c);
R_0107f7dc:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x107f7f0u;
    f_mr701_0107f450(c);
R_0107f7f0:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_0107f808:
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
    ea = c.r[30] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x107f830u;
    f_80040980(c);
R_0107f830:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107f808;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x107f854u;
    f_801c8400(c);
R_0107f854:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr701_0107f870(wp::Cpu& c) {
    WP_ENTER(0x107f870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107f88cu: goto R_0107f88c;
        case 0x107f8f8u: goto R_0107f8f8;
        case 0x107f950u: goto R_0107f950;
        case 0x107f970u: goto R_0107f970;
        case 0x107f99cu: goto R_0107f99c;
        case 0x107f9bcu: goto R_0107f9bc;
        case 0x107f9f8u: goto R_0107f9f8;
        case 0x107fa20u: goto R_0107fa20;
        case 0x107fa30u: goto R_0107fa30;
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
    c.lr = 0x107f88cu;
    f_801c839c(c);
R_0107f88c:
    c.r[22] = ((((g_mr701_bases[4] + 0x2eb8u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb8u) & 0xFFFFu);
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
    c.lr = 0x107f8f8u;
    f_mr701_0107f1f0(c);
R_0107f8f8:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    c.r[30] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    c.r[30] = c.r[30] + c.r[0];
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0107f928:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107f940;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0107f944;
L_0107f940:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_0107f944:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x107f950u;
    f_801c7860(c);
R_0107f950:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x107f970u;
    f_mr701_010238d0(c);
R_0107f970:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107f98c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0107f990;
L_0107f98c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_0107f990:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x107f99cu;
    f_801c7860(c);
R_0107f99c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x107f9bcu;
    f_mr701_010238d0(c);
R_0107f9bc:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107f9d4;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0107f9d8;
L_0107f9d4:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_0107f9d8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x107f9f8u;
    f_80040980(c);
R_0107f9f8:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107f928;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fa20;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fa20u;
    f_801c7a8c(c);
L_0107fa20:
R_0107fa20:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x107fa30u;
    f_801c83e8(c);
R_0107fa30:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_0107fa40(wp::Cpu& c) {
    WP_ENTER(0x107fa40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fa5cu: goto R_0107fa5c;
        case 0x107fa84u: goto R_0107fa84;
        case 0x107fae0u: goto R_0107fae0;
        case 0x107fb00u: goto R_0107fb00;
        case 0x107fb2cu: goto R_0107fb2c;
        case 0x107fb4cu: goto R_0107fb4c;
        case 0x107fb88u: goto R_0107fb88;
        case 0x107fbb0u: goto R_0107fbb0;
        case 0x107fbc0u: goto R_0107fbc0;
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
    c.lr = 0x107fa5cu;
    f_801c839c(c);
R_0107fa5c:
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
    c.lr = 0x107fa84u;
    f_mr701_0107f1f0(c);
R_0107fa84:
    c.r[4] = ((((g_mr701_bases[5] + 0x2e360u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e360u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0107fab8:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107fad0;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0107fad4;
L_0107fad0:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_0107fad4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x107fae0u;
    f_801c7860(c);
R_0107fae0:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x107fb00u;
    f_mr701_010238d0(c);
R_0107fb00:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107fb1c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0107fb20;
L_0107fb1c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_0107fb20:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x107fb2cu;
    f_801c7860(c);
R_0107fb2c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x107fb4cu;
    f_mr701_010238d0(c);
R_0107fb4c:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107fb64;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0107fb68;
L_0107fb64:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_0107fb68:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x107fb88u;
    f_80040980(c);
R_0107fb88:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107fab8;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fbb0;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fbb0u;
    f_801c7a8c(c);
L_0107fbb0:
R_0107fbb0:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x107fbc0u;
    f_801c83e8(c);
R_0107fbc0:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr701_0107fbd0(wp::Cpu& c) {
    WP_ENTER(0x107fbd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fbecu: goto R_0107fbec;
        case 0x107fc14u: goto R_0107fc14;
        case 0x107fc70u: goto R_0107fc70;
        case 0x107fc90u: goto R_0107fc90;
        case 0x107fcbcu: goto R_0107fcbc;
        case 0x107fcdcu: goto R_0107fcdc;
        case 0x107fd18u: goto R_0107fd18;
        case 0x107fd40u: goto R_0107fd40;
        case 0x107fd50u: goto R_0107fd50;
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
    c.lr = 0x107fbecu;
    f_801c839c(c);
R_0107fbec:
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
    c.lr = 0x107fc14u;
    f_mr701_0107f450(c);
R_0107fc14:
    c.r[0] = c.r[20] * 0x18u;
    c.r[4] = ((((g_mr701_bases[5] + 0x2e380u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e380u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x28u;
    c.r[28] = c.r[1] + 0x19u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0107fc48:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107fc60;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0107fc64;
L_0107fc60:
    ea = c.r[1] + 0x1cu;
    c.r[21] = wp::rd32(ea);
L_0107fc64:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x107fc70u;
    f_801c7860(c);
R_0107fc70:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x107fc90u;
    f_mr701_010238d0(c);
R_0107fc90:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107fcac;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0107fcb0;
L_0107fcac:
    ea = c.r[1] + 0x1cu;
    c.r[20] = wp::rd32(ea);
L_0107fcb0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x107fcbcu;
    f_801c7860(c);
R_0107fcbc:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x107fcdcu;
    f_mr701_010238d0(c);
R_0107fcdc:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107fcf4;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0107fcf8;
L_0107fcf4:
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
L_0107fcf8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x107fd18u;
    f_80040980(c);
R_0107fd18:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107fc48;
    }
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fd40;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107fd40u;
    f_801c7a8c(c);
L_0107fd40:
R_0107fd40:
    c.r[11] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x107fd50u;
    f_801c83e8(c);
R_0107fd50:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr701_0107fd60(wp::Cpu& c) {
    WP_ENTER(0x107fd60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fd7cu: goto R_0107fd7c;
        case 0x107fe30u: goto R_0107fe30;
        case 0x107fe34u: goto R_0107fe34;
        case 0x107fe74u: goto R_0107fe74;
        case 0x107fee4u: goto R_0107fee4;
        case 0x107fee8u: goto R_0107fee8;
        case 0x107ffa8u: goto R_0107ffa8;
        case 0x107ffacu: goto R_0107ffac;
        case 0x107ffb4u: goto R_0107ffb4;
        case 0x107ffdcu: goto R_0107ffdc;
        case 0x107ffe0u: goto R_0107ffe0;
        case 0x1080010u: goto R_01080010;
        case 0x1080060u: goto R_01080060;
        case 0x1080070u: goto R_01080070;
        case 0x10800bcu: goto R_010800bc;
        case 0x1080438u: goto R_01080438;
        case 0x1080474u: goto R_01080474;
        case 0x1080484u: goto R_01080484;
        case 0x10804c4u: goto R_010804c4;
        case 0x10804d4u: goto R_010804d4;
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
    c.lr = 0x107fd7cu;
    f_801c83a0(c);
R_0107fd7c:
    c.r[9] = ((((g_mr701_bases[4] + 0x2e58u) + 0x8000u) >> 16) << 16);
    c.r[10] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[10]);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr701_bases[4] + 0x2e58u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_0107fdbc;
    c.r[6] = c.r[0] | c.r[0];
L_0107fdbc:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[29] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_010800c0;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[30] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[30], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0107fdf0;
    c.r[0] = c.r[6] - c.r[30];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0107fe5c;
L_0107fdf0:
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
    if (!wp::cr_get(c, 1)) goto L_0107fe34;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107fe30u;
    f_801cee24(c);
R_0107fe30:
    c.lr = 0x107fe34u;
    f_801d3940(c);
L_0107fe34:
R_0107fe34:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107fe48;
    goto L_0107fe84;
L_0107fe48:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107fe84;
    goto L_0107fe84;
L_0107fe5c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x107fe74u;
    f_80004714(c);
R_0107fe74:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_010800d0;
L_0107fe84:
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
    if (!wp::cr_get(c, 1)) goto L_0107fee8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107fee4u;
    f_801cee24(c);
R_0107fee4:
    c.lr = 0x107fee8u;
    f_801d3940(c);
L_0107fee8:
R_0107fee8:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107ff38;
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
    if (!wp::cr_get(c, 0)) goto L_0107ff2c;
    c.r[3] = c.r[1] + 0x8u;
L_0107ff2c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0107ff7c;
L_0107ff38:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107ff74;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0107ff68;
    c.r[3] = c.r[1] + 0x8u;
L_0107ff68:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0107ff7c;
L_0107ff74:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0107ff7c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0107ffac;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107ffa8u;
    f_801cee24(c);
R_0107ffa8:
    c.lr = 0x107ffacu;
    f_801d3940(c);
L_0107ffac:
R_0107ffac:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x107ffb4u;
    f_801c79a4(c);
R_0107ffb4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0107ffe0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0xb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0xb0cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107ffdcu;
    f_801cee24(c);
R_0107ffdc:
    c.lr = 0x107ffe0u;
    f_801d3940(c);
L_0107ffe0:
R_0107ffe0:
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
    c.lr = 0x1080010u;
    f_80004714(c);
R_01080010:
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
    c.lr = 0x1080060u;
    f_800043c4(c);
R_01080060:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[23] | c.r[23];
    c.r[4] = 0x0u;
    c.lr = 0x1080070u;
    f_80004714(c);
R_01080070:
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
    if (wp::cr_get(c, 2)) goto L_010800d0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010800d0;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10800bcu;
    f_801c7a8c(c);
R_010800bc:
    goto L_010800d0;
L_010800c0:
    if (!wp::cr_get(c, 0)) goto L_010800d0;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_010800d0:
    wp::compare_unsigned(c, 1, c.r[26], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01080374;
    wp::compare_unsigned(c, 0, c.r[26], 0x8u);
    c.r[6] = c.r[26] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0108031c;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_01080108;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080108;
    c.r[7] = 0x1u;
L_01080108:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108011c;
    wp::compare_unsigned(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0108011c;
    c.r[5] = 0x1u;
L_0108011c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080134;
    c.r[0] = c.r[26] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01080134;
    c.r[4] = 0x1u;
L_01080134:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108031c;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0108031c;
L_01080158:
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
    goto L_01080158;
    }
L_0108031c:
    c.r[0] = c.r[26] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[26]);
    if (wp::cr_get(c, 1)) goto L_01080374;
L_01080338:
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
    goto L_01080338;
    }
L_01080374:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080380;
    c.r[27] = c.r[28] | c.r[28];
L_01080380:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010803c8;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010803b8;
L_010803a0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010803b8;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010803a0;
    }
L_010803b8:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_010803cc;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_010803cc;
L_010803c8:
    c.r[23] = 0x0u;
L_010803cc:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = 0x0u;
    c.r[29] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    goto L_01080490;
L_010803e8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    ea = c.r[25] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0108043c;
    c.r[0] = c.r[31] + c.r[23];
    wp::compare_unsigned(c, 0, c.r[0], c.r[26]);
    if (!wp::cr_get(c, 0)) goto L_01080474;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[4] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[29] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
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
    c.lr = 0x1080438u;
    f_80040980(c);
R_01080438:
    goto L_01080474;
L_0108043c:
    wp::compare_unsigned(c, 0, c.r[23], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_01080474;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[5] + c.r[30];
    c.r[0] = wp::rd32(ea);
    c.r[21] = 0x1u;
    ea = c.r[29] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1080474u;
    f_80040980(c);
L_01080474:
R_01080474:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[22] | c.r[22];
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x1080484u;
    f_800403f0(c);
R_01080484:
    c.r[25] = c.r[25] + 0x4u;
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_01080490:
    wp::compare_unsigned(c, 0, c.r[31], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010803e8;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010804c4;
    if (wp::cr_get(c, 2)) goto L_010804c4;
    if (wp::cr_get(c, 2)) goto L_010804c4;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010804c4;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10804c4u;
    f_801c7a8c(c);
L_010804c4:
R_010804c4:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10804d4u;
    f_801c83ec(c);
R_010804d4:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr701_010804f0(wp::Cpu& c) {
    WP_ENTER(0x10804f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108050cu: goto R_0108050c;
        case 0x10805e0u: goto R_010805e0;
        case 0x10805e4u: goto R_010805e4;
        case 0x1080624u: goto R_01080624;
        case 0x1080694u: goto R_01080694;
        case 0x1080698u: goto R_01080698;
        case 0x1080758u: goto R_01080758;
        case 0x108075cu: goto R_0108075c;
        case 0x1080764u: goto R_01080764;
        case 0x108078cu: goto R_0108078c;
        case 0x1080790u: goto R_01080790;
        case 0x10807c0u: goto R_010807c0;
        case 0x1080810u: goto R_01080810;
        case 0x1080820u: goto R_01080820;
        case 0x108086cu: goto R_0108086c;
        case 0x1080bd0u: goto R_01080bd0;
        case 0x1080be0u: goto R_01080be0;
        case 0x1080c20u: goto R_01080c20;
        case 0x1080c30u: goto R_01080c30;
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
    c.lr = 0x108050cu;
    f_801c83a4(c);
R_0108050c:
    c.r[8] = ((((g_mr701_bases[4] + 0x2e80u) + 0x8000u) >> 16) << 16);
    c.r[9] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[28] = c.r[5] + c.r[6];
    c.r[8] = c.r[8] + wp::sign_extend16((g_mr701_bases[4] + 0x2e80u) & 0xFFFFu);
    c.r[6] = ((((g_mr701_bases[4] + 0x2e58u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[28], 2) & 0xfffffffcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr701_bases[4] + 0x2e58u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_0108056c;
    c.r[4] = c.r[0] | c.r[0];
L_0108056c:
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[5]);
    c.r[30] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_01080870;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[28] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[29], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010805a0;
    c.r[0] = c.r[6] - c.r[29];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0108060c;
L_010805a0:
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
    if (!wp::cr_get(c, 1)) goto L_010805e4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10805e0u;
    f_801cee24(c);
R_010805e0:
    c.lr = 0x10805e4u;
    f_801d3940(c);
L_010805e4:
R_010805e4:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010805f8;
    goto L_01080634;
L_010805f8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080634;
    goto L_01080634;
L_0108060c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[29], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x1080624u;
    f_80004714(c);
R_01080624:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[29];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_01080880;
L_01080634:
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
    if (!wp::cr_get(c, 1)) goto L_01080698;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080694u;
    f_801cee24(c);
R_01080694:
    c.lr = 0x1080698u;
    f_801d3940(c);
L_01080698:
R_01080698:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010806e8;
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
    if (!wp::cr_get(c, 0)) goto L_010806dc;
    c.r[3] = c.r[1] + 0x10u;
L_010806dc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0108072c;
L_010806e8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080724;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01080718;
    c.r[3] = c.r[1] + 0x10u;
L_01080718:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0108072c;
L_01080724:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0108072c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0108075c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080758u;
    f_801cee24(c);
R_01080758:
    c.lr = 0x108075cu;
    f_801d3940(c);
L_0108075c:
R_0108075c:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x1080764u;
    f_801c79a4(c);
R_01080764:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01080790;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0xb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0xb0cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108078cu;
    f_801cee24(c);
R_0108078c:
    c.lr = 0x1080790u;
    f_801d3940(c);
L_01080790:
R_01080790:
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
    c.lr = 0x10807c0u;
    f_80004714(c);
R_010807c0:
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
    c.lr = 0x1080810u;
    f_800043c4(c);
R_01080810:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1080820u;
    f_80004714(c);
R_01080820:
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
    if (wp::cr_get(c, 2)) goto L_01080880;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080880;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x108086cu;
    f_801c7a8c(c);
R_0108086c:
    goto L_01080880;
L_01080870:
    if (!wp::cr_get(c, 0)) goto L_01080880;
    c.r[0] = c.r[5] - c.r[28];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_01080880:
    wp::compare_unsigned(c, 1, c.r[28], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01080b24;
    wp::compare_unsigned(c, 0, c.r[28], 0x8u);
    c.r[6] = c.r[28] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_01080acc;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010808b8;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010808b8;
    c.r[7] = 0x1u;
L_010808b8:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010808cc;
    wp::compare_unsigned(c, 0, c.r[28], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010808cc;
    c.r[5] = 0x1u;
L_010808cc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010808e4;
    c.r[0] = c.r[28] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010808e4;
    c.r[4] = 0x1u;
L_010808e4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080acc;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_01080acc;
L_01080908:
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
    goto L_01080908;
    }
L_01080acc:
    c.r[0] = c.r[28] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[28]);
    if (wp::cr_get(c, 1)) goto L_01080b24;
L_01080ae8:
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
    goto L_01080ae8;
    }
L_01080b24:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080b70;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01080b60;
    c.r[0] = c.r[0] | 0x0u;
L_01080b48:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080b60;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01080b48;
    }
L_01080b60:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_01080b74;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_01080b74;
L_01080b70:
    c.r[23] = 0x0u;
L_01080b74:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = 0x0u;
    c.r[27] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x43300000u;
    goto L_01080bec;
L_01080b90:
    wp::compare_unsigned(c, 0, c.r[23], c.r[30]);
    ea = c.r[25] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_01080bd0;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[26]);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[5] + c.r[29];
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x1u;
    ea = c.r[27] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1080bd0u;
    f_80040980(c);
L_01080bd0:
R_01080bd0:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x1080be0u;
    f_800403f0(c);
R_01080be0:
    c.r[25] = c.r[25] + 0x4u;
    c.r[29] = c.r[29] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_01080bec:
    wp::compare_unsigned(c, 0, c.r[30], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080b90;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080c20;
    if (wp::cr_get(c, 2)) goto L_01080c20;
    if (wp::cr_get(c, 2)) goto L_01080c20;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080c20;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080c20u;
    f_801c7a8c(c);
L_01080c20:
R_01080c20:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1080c30u;
    f_801c83f0(c);
R_01080c30:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr701_01080c40(wp::Cpu& c) {
    WP_ENTER(0x1080c40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080c5cu: goto R_01080c5c;
        case 0x1080d14u: goto R_01080d14;
        case 0x1080d18u: goto R_01080d18;
        case 0x1080d58u: goto R_01080d58;
        case 0x1080dc8u: goto R_01080dc8;
        case 0x1080dccu: goto R_01080dcc;
        case 0x1080e8cu: goto R_01080e8c;
        case 0x1080e90u: goto R_01080e90;
        case 0x1080e98u: goto R_01080e98;
        case 0x1080ec0u: goto R_01080ec0;
        case 0x1080ec4u: goto R_01080ec4;
        case 0x1080ef4u: goto R_01080ef4;
        case 0x1080f44u: goto R_01080f44;
        case 0x1080f54u: goto R_01080f54;
        case 0x1080fa0u: goto R_01080fa0;
        case 0x1081324u: goto R_01081324;
        case 0x1081334u: goto R_01081334;
        case 0x1081354u: goto R_01081354;
        case 0x1081380u: goto R_01081380;
        case 0x10813a0u: goto R_010813a0;
        case 0x1081400u: goto R_01081400;
        case 0x1081450u: goto R_01081450;
        case 0x1081474u: goto R_01081474;
        case 0x1081488u: goto R_01081488;
        case 0x10814c8u: goto R_010814c8;
        case 0x10814d8u: goto R_010814d8;
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
    c.lr = 0x1080c5cu;
    f_801c838c(c);
R_01080c5c:
    c.r[10] = ((((g_mr701_bases[4] + 0x2e58u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[11]);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mr701_bases[4] + 0x2e58u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_01080ca0;
    c.r[6] = c.r[0] | c.r[0];
L_01080ca0:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[25] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_01080fa4;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[24] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[24], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_01080cd4;
    c.r[0] = c.r[6] - c.r[24];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01080d40;
L_01080cd4:
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
    if (!wp::cr_get(c, 1)) goto L_01080d18;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080d14u;
    f_801cee24(c);
R_01080d14:
    c.lr = 0x1080d18u;
    f_801d3940(c);
L_01080d18:
R_01080d18:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080d2c;
    goto L_01080d68;
L_01080d2c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080d68;
    goto L_01080d68;
L_01080d40:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x1080d58u;
    f_80004714(c);
R_01080d58:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[24];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_01080fb4;
L_01080d68:
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
    if (!wp::cr_get(c, 1)) goto L_01080dcc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080dc8u;
    f_801cee24(c);
R_01080dc8:
    c.lr = 0x1080dccu;
    f_801d3940(c);
L_01080dcc:
R_01080dcc:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080e1c;
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
    if (!wp::cr_get(c, 0)) goto L_01080e10;
    c.r[3] = c.r[1] + 0x18u;
L_01080e10:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_01080e60;
L_01080e1c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080e58;
    c.r[3] = c.r[23] + 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_01080e4c;
    c.r[3] = c.r[1] + 0x18u;
L_01080e4c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_01080e60;
L_01080e58:
    c.r[3] = 0x40000000u;
    c.r[23] = c.r[3] + 0xffffffffu;
L_01080e60:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01080e90;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080e8cu;
    f_801cee24(c);
R_01080e8c:
    c.lr = 0x1080e90u;
    f_801d3940(c);
L_01080e90:
R_01080e90:
    c.r[3] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.lr = 0x1080e98u;
    f_801c79a4(c);
R_01080e98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01080ec4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0xb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0xb0cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1080ec0u;
    f_801cee24(c);
R_01080ec0:
    c.lr = 0x1080ec4u;
    f_801d3940(c);
L_01080ec4:
R_01080ec4:
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
    c.lr = 0x1080ef4u;
    f_80004714(c);
R_01080ef4:
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
    c.lr = 0x1080f44u;
    f_800043c4(c);
R_01080f44:
    c.r[3] = c.r[18] | c.r[18];
    c.r[5] = c.r[16] | c.r[16];
    c.r[4] = 0x0u;
    c.lr = 0x1080f54u;
    f_80004714(c);
R_01080f54:
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
    if (wp::cr_get(c, 2)) goto L_01080fb4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080fb4;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1080fa0u;
    f_801c7a8c(c);
R_01080fa0:
    goto L_01080fb4;
L_01080fa4:
    if (!wp::cr_get(c, 0)) goto L_01080fb4;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_01080fb4:
    wp::compare_unsigned(c, 1, c.r[30], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01081258;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_01081200;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_01080fec;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01080fec;
    c.r[7] = 0x1u;
L_01080fec:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081000;
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (wp::cr_get(c, 0)) goto L_01081000;
    c.r[5] = 0x1u;
L_01081000:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081018;
    c.r[0] = c.r[30] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01081018;
    c.r[4] = 0x1u;
L_01081018:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081200;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_01081200;
L_0108103c:
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
    goto L_0108103c;
    }
L_01081200:
    c.r[0] = c.r[30] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (wp::cr_get(c, 1)) goto L_01081258;
L_0108121c:
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
    goto L_0108121c;
    }
L_01081258:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081264;
    c.r[17] = c.r[31] | c.r[31];
L_01081264:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010812b0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010812a0;
    c.r[0] = c.r[0] | 0x0u;
L_01081288:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010812a0;
    c.r[22] = c.r[22] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01081288;
    }
L_010812a0:
    wp::compare_unsigned(c, 0, c.r[22], c.r[30]);
    if (wp::cr_get(c, 0)) goto L_010812b4;
    c.r[22] = c.r[30] + 0xffffffffu;
    goto L_010812b4;
L_010812b0:
    c.r[22] = 0x0u;
L_010812b4:
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010812c4;
    c.r[4] = wp::sub_carry(c, c.r[30], 0x8u);
L_010812c4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[17] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0108149c;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e308u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[19], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e308u) & 0xFFFFu);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0x14u;
    c.r[24] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[25] = wp::rd8(ea);
    c.r[20] = c.r[4] + c.r[0];
    c.r[18] = c.r[1] + 0x25u;
    c.r[19] = 0x0u;
    c.r[26] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    c.r[23] = 0x0u;
    goto L_01081494;
L_01081310:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[23]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[23]);
    c.lr = 0x1081324u;
    f_801c7860(c);
R_01081324:
    c.r[21] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[21] | c.r[21];
    c.lr = 0x1081334u;
    f_mr701_01023710(c);
R_01081334:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[24]);
    c.r[6] = c.r[29] | c.r[29];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[29] + c.r[21];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x1081354u;
    f_mr701_010238d0(c);
R_01081354:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[20] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01081370;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[16] = c.r[0] & 0x7fu;
    goto L_01081374;
L_01081370:
    ea = c.r[1] + 0x28u;
    c.r[16] = wp::rd32(ea);
L_01081374:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[25]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x1081380u;
    f_801c7860(c);
R_01081380:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[16] | c.r[16];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10813a0u;
    f_mr701_010238d0(c);
R_010813a0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01081404;
    c.r[4] = c.r[17] + c.r[22];
    wp::compare_unsigned(c, 0, c.r[4], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01081450;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[21] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_010813dc;
    c.r[4] = c.r[18] | c.r[18];
    goto L_010813e0;
L_010813dc:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_010813e0:
    ea = c.r[6] + c.r[5];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1081400u;
    f_80040980(c);
R_01081400:
    goto L_01081450;
L_01081404:
    wp::compare_unsigned(c, 0, c.r[22], c.r[17]);
    if (wp::cr_get(c, 1)) goto L_01081450;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[21] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108142c;
    c.r[4] = c.r[18] | c.r[18];
    goto L_01081430;
L_0108142c:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_01081430:
    ea = c.r[5] + c.r[19];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1081450u;
    f_80040980(c);
L_01081450:
R_01081450:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01081468;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0108146c;
L_01081468:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0108146c:
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x1081474u;
    f_800403f0(c);
R_01081474:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081488;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1081488u;
    f_801c7a8c(c);
L_01081488:
R_01081488:
    c.r[20] = c.r[20] + 0x4u;
    c.r[19] = c.r[19] + 0x4u;
    c.r[17] = c.r[17] + 0x1u;
L_01081494:
    wp::compare_unsigned(c, 0, c.r[17], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01081310;
    }
L_0108149c:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010814c8;
    if (wp::cr_get(c, 2)) goto L_010814c8;
    if (wp::cr_get(c, 2)) goto L_010814c8;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010814c8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10814c8u;
    f_801c7a8c(c);
L_010814c8:
R_010814c8:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10814d8u;
    f_801c83d8(c);
R_010814d8:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr701_010814f0(wp::Cpu& c) {
    WP_ENTER(0x10814f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108150cu: goto R_0108150c;
        case 0x10815e8u: goto R_010815e8;
        case 0x10815ecu: goto R_010815ec;
        case 0x108162cu: goto R_0108162c;
        case 0x108169cu: goto R_0108169c;
        case 0x10816a0u: goto R_010816a0;
        case 0x1081760u: goto R_01081760;
        case 0x1081764u: goto R_01081764;
        case 0x108176cu: goto R_0108176c;
        case 0x1081794u: goto R_01081794;
        case 0x1081798u: goto R_01081798;
        case 0x10817c8u: goto R_010817c8;
        case 0x1081818u: goto R_01081818;
        case 0x1081828u: goto R_01081828;
        case 0x1081874u: goto R_01081874;
        case 0x1081bf0u: goto R_01081bf0;
        case 0x1081c00u: goto R_01081c00;
        case 0x1081c20u: goto R_01081c20;
        case 0x1081c4cu: goto R_01081c4c;
        case 0x1081c6cu: goto R_01081c6c;
        case 0x1081cbcu: goto R_01081cbc;
        case 0x1081ce0u: goto R_01081ce0;
        case 0x1081cf4u: goto R_01081cf4;
        case 0x1081d34u: goto R_01081d34;
        case 0x1081d44u: goto R_01081d44;
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
    c.lr = 0x108150cu;
    f_801c8390(c);
R_0108150c:
    c.r[10] = ((((g_mr701_bases[4] + 0x2e80u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[9] = ((((g_mr701_bases[4] + 0x2e58u) + 0x8000u) >> 16) << 16);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mr701_bases[4] + 0x2e80u) & 0xFFFFu);
    c.r[31] = c.r[5] + c.r[6];
    ea = c.r[10] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr701_bases[4] + 0x2e58u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_01081574;
    c.r[4] = c.r[0] | c.r[0];
L_01081574:
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[5]);
    c.r[25] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_01081878;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[26] = c.r[31] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[26], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_010815a8;
    c.r[0] = c.r[6] - c.r[26];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01081614;
L_010815a8:
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
    if (!wp::cr_get(c, 1)) goto L_010815ec;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10815e8u;
    f_801cee24(c);
R_010815e8:
    c.lr = 0x10815ecu;
    f_801d3940(c);
L_010815ec:
R_010815ec:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01081600;
    goto L_0108163c;
L_01081600:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108163c;
    goto L_0108163c;
L_01081614:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[26], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x108162cu;
    f_80004714(c);
R_0108162c:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[26];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_01081888;
L_0108163c:
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
    if (!wp::cr_get(c, 1)) goto L_010816a0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108169cu;
    f_801cee24(c);
R_0108169c:
    c.lr = 0x10816a0u;
    f_801d3940(c);
L_010816a0:
R_010816a0:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010816f0;
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
    if (!wp::cr_get(c, 0)) goto L_010816e4;
    c.r[3] = c.r[1] + 0x20u;
L_010816e4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_01081734;
L_010816f0:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108172c;
    c.r[3] = c.r[24] + 0x1u;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_01081720;
    c.r[3] = c.r[1] + 0x20u;
L_01081720:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_01081734;
L_0108172c:
    c.r[3] = 0x40000000u;
    c.r[24] = c.r[3] + 0xffffffffu;
L_01081734:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01081764;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1081760u;
    f_801cee24(c);
R_01081760:
    c.lr = 0x1081764u;
    f_801d3940(c);
L_01081764:
R_01081764:
    c.r[3] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.lr = 0x108176cu;
    f_801c79a4(c);
R_0108176c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[19] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01081798;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0xb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0xb0cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1081794u;
    f_801cee24(c);
R_01081794:
    c.lr = 0x1081798u;
    f_801d3940(c);
L_01081798:
R_01081798:
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
    c.lr = 0x10817c8u;
    f_80004714(c);
R_010817c8:
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
    c.lr = 0x1081818u;
    f_800043c4(c);
R_01081818:
    c.r[3] = c.r[19] | c.r[19];
    c.r[5] = c.r[17] | c.r[17];
    c.r[4] = 0x0u;
    c.lr = 0x1081828u;
    f_80004714(c);
R_01081828:
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
    if (wp::cr_get(c, 2)) goto L_01081888;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081888;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x1081874u;
    f_801c7a8c(c);
R_01081874:
    goto L_01081888;
L_01081878:
    if (!wp::cr_get(c, 0)) goto L_01081888;
    c.r[0] = c.r[5] - c.r[31];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_01081888:
    wp::compare_unsigned(c, 1, c.r[31], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_01081b2c;
    wp::compare_unsigned(c, 0, c.r[31], 0x8u);
    c.r[6] = c.r[31] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_01081ad4;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010818c0;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010818c0;
    c.r[7] = 0x1u;
L_010818c0:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010818d4;
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 0)) goto L_010818d4;
    c.r[5] = 0x1u;
L_010818d4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010818ec;
    c.r[0] = c.r[31] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010818ec;
    c.r[4] = 0x1u;
L_010818ec:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081ad4;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_01081ad4;
L_01081910:
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
    goto L_01081910;
    }
L_01081ad4:
    c.r[0] = c.r[31] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_01081b2c;
L_01081af0:
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
    goto L_01081af0;
    }
L_01081b2c:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081b78;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01081b68;
    c.r[0] = c.r[0] | 0x0u;
L_01081b50:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081b68;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01081b50;
    }
L_01081b68:
    wp::compare_unsigned(c, 0, c.r[23], c.r[22]);
    if (wp::cr_get(c, 0)) goto L_01081b7c;
    c.r[23] = c.r[22] + 0xffffffffu;
    goto L_01081b7c;
L_01081b78:
    c.r[23] = 0x0u;
L_01081b7c:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01081b90;
    c.r[0] = c.r[22] - c.r[21];
    c.r[4] = wp::sub_carry(c, c.r[0], 0x8u);
L_01081b90:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[18] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01081d08;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e308u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr701_bases[4] + 0x2eb0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e308u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    c.r[25] = wp::rd8(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0xcu;
    c.r[26] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eb0u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[21] = c.r[4] + c.r[0];
    c.r[19] = c.r[1] + 0x25u;
    c.r[20] = 0x0u;
    c.r[24] = 0x0u;
    c.r[27] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[28] = 0x43300000u;
    goto L_01081d00;
L_01081bdc:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[24]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[24]);
    c.lr = 0x1081bf0u;
    f_801c7860(c);
R_01081bf0:
    c.r[22] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[22] | c.r[22];
    c.lr = 0x1081c00u;
    f_mr701_01023710(c);
R_01081c00:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[25]);
    c.r[6] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[30] + c.r[22];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x1081c20u;
    f_mr701_010238d0(c);
R_01081c20:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[21] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01081c3c;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[17] = c.r[0] & 0x7fu;
    goto L_01081c40;
L_01081c3c:
    ea = c.r[1] + 0x28u;
    c.r[17] = wp::rd32(ea);
L_01081c40:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[26]);
    c.r[3] = c.r[22] | c.r[22];
    c.lr = 0x1081c4cu;
    f_801c7860(c);
R_01081c4c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[17] | c.r[17];
    c.r[6] = c.r[22] | c.r[22];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[22] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x1081c6cu;
    f_mr701_010238d0(c);
R_01081c6c:
    wp::compare_unsigned(c, 0, c.r[23], c.r[18]);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_01081cbc;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[22] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01081c98;
    c.r[4] = c.r[19] | c.r[19];
    goto L_01081c9c;
L_01081c98:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_01081c9c:
    ea = c.r[5] + c.r[20];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[28]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x1081cbcu;
    f_80040980(c);
L_01081cbc:
R_01081cbc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01081cd4;
    c.r[4] = c.r[19] | c.r[19];
    goto L_01081cd8;
L_01081cd4:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_01081cd8:
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x1081ce0u;
    f_800403f0(c);
R_01081ce0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081cf4;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1081cf4u;
    f_801c7a8c(c);
L_01081cf4:
R_01081cf4:
    c.r[21] = c.r[21] + 0x4u;
    c.r[20] = c.r[20] + 0x4u;
    c.r[18] = c.r[18] + 0x1u;
L_01081d00:
    wp::compare_unsigned(c, 0, c.r[18], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01081bdc;
    }
L_01081d08:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081d34;
    if (wp::cr_get(c, 2)) goto L_01081d34;
    if (wp::cr_get(c, 2)) goto L_01081d34;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081d34;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1081d34u;
    f_801c7a8c(c);
L_01081d34:
R_01081d34:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1081d44u;
    f_801c83dc(c);
R_01081d44:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr701_01081d60(wp::Cpu& c) {
    WP_ENTER(0x1081d60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr701_01082ed0(c);
    return;
}

void f_mr701_01081d70(wp::Cpu& c) {
    WP_ENTER(0x1081d70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr701_01084a50(c);
    return;
}

void f_mr701_01081d80(wp::Cpu& c) {
    WP_ENTER(0x1081d80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr701_01084b70(c);
    return;
}

void f_mr701_01081d90(wp::Cpu& c) {
    WP_ENTER(0x1081d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr701_01084e40(c);
    return;
}

void f_mr701_01081da0(wp::Cpu& c) {
    WP_ENTER(0x1081da0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081de0u: goto R_01081de0;
        case 0x1081e04u: goto R_01081e04;
        case 0x1081e4cu: goto R_01081e4c;
        case 0x1081e68u: goto R_01081e68;
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
    c.r[5] = ((((g_mr701_bases[5] + 0x2e35cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[7] | c.r[7];
    c.r[7] = c.r[8] | c.r[8];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e35cu) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[8] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x1081de0u;
    f_mr701_01082db0(c);
R_01081de0:
    c.r[4] = ((((g_mr701_bases[5] + 0x2e620u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e620u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081e04u;
    wp::call(c, c.ctr);
R_01081e04:
    c.r[3] = ((((g_mr701_bases[5] + 0x2e3c0u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2e3c0u) & 0xFFFFu);
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
    c.lr = 0x1081e4cu;
    f_800402c0(c);
R_01081e4c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081e68u;
    wp::call(c, c.ctr);
R_01081e68:
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

void f_mr701_01081e90(wp::Cpu& c) {
    WP_ENTER(0x1081e90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081ebcu: goto R_01081ebc;
        case 0x1081eccu: goto R_01081ecc;
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
    if (wp::cr_get(c, 2)) goto L_01081ecc;
    c.r[4] = 0x0u;
    c.lr = 0x1081ebcu;
    f_mr701_01082e00(c);
R_01081ebc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01081ecc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1081eccu;
    f_801c7a8c(c);
L_01081ecc:
R_01081ecc:
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

void f_mr701_01081ef0(wp::Cpu& c) {
    WP_ENTER(0x1081ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081f24u: goto R_01081f24;
        case 0x1081f48u: goto R_01081f48;
        case 0x1081f90u: goto R_01081f90;
        case 0x1081fa8u: goto R_01081fa8;
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
    c.r[5] = ((((g_mr701_bases[5] + 0x2e35cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e35cu) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x1081f24u;
    f_mr701_01082db0(c);
R_01081f24:
    c.r[4] = ((((g_mr701_bases[5] + 0x2e620u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e620u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081f48u;
    wp::call(c, c.ctr);
R_01081f48:
    c.r[3] = ((((g_mr701_bases[5] + 0x2e3c0u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2e3c0u) & 0xFFFFu);
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
    c.lr = 0x1081f90u;
    f_800402c0(c);
R_01081f90:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081fa8u;
    wp::call(c, c.ctr);
R_01081fa8:
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

void f_mr701_01081fd0(wp::Cpu& c) {
    WP_ENTER(0x1081fd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082000u: goto R_01082000;
        case 0x1082024u: goto R_01082024;
        case 0x108206cu: goto R_0108206c;
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
    c.r[5] = ((((g_mr701_bases[5] + 0x2e35cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e35cu) & 0xFFFFu);
    c.lr = 0x1082000u;
    f_mr701_01082db0(c);
R_01082000:
    c.r[4] = ((((g_mr701_bases[5] + 0x2e620u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e620u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082024u;
    wp::call(c, c.ctr);
R_01082024:
    c.r[3] = ((((g_mr701_bases[5] + 0x2e3c0u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2e3c0u) & 0xFFFFu);
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
    c.lr = 0x108206cu;
    f_800402c0(c);
R_0108206c:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_01082090(wp::Cpu& c) {
    WP_ENTER(0x1082090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10820f8u: goto R_010820f8;
        case 0x1082124u: goto R_01082124;
        case 0x1082138u: goto R_01082138;
        case 0x1082148u: goto R_01082148;
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
    if (wp::cr_get(c, 2)) goto L_01082148;
    ea = c.r[3] + 0x130u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e3c0u) + 0x8000u) >> 16) << 16);
    c.r[5] = wp::add_carry(c, c.r[3], 0x138u, 0);
    wp::record(c, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e3c0u) & 0xFFFFu);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x130u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010820f8;
    if (wp::cr_get(c, 2)) goto L_010820f8;
    if (wp::cr_get(c, 2)) goto L_010820f8;
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010820f8;
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10820f8u;
    f_801c7a8c(c);
L_010820f8:
R_010820f8:
    c.r[4] = wp::add_carry(c, c.r[30], 0x12cu, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01082124;
    if (wp::cr_get(c, 2)) goto L_01082124;
    if (wp::cr_get(c, 2)) goto L_01082124;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082124;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1082124u;
    f_801c7a8c(c);
L_01082124:
R_01082124:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082138;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1082138u;
    f_mr701_01082e00(c);
L_01082138:
R_01082138:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01082148;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1082148u;
    f_801c7a8c(c);
L_01082148:
R_01082148:
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

void f_mr701_01082170(wp::Cpu& c) {
    WP_ENTER(0x1082170u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10821b8u: goto R_010821b8;
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
    goto L_010821c0;
L_010821a0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10821b8u;
    wp::call(c, c.ctr);
R_010821b8:
    c.r[31] = c.r[31] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_010821c0:
    wp::compare_signed(c, 0, c.r[30], c.r[29]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010821a0;
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

void f_mr701_010821f0(wp::Cpu& c) {
    WP_ENTER(0x10821f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082204u: goto R_01082204;
        case 0x1082218u: goto R_01082218;
        case 0x1082234u: goto R_01082234;
        case 0x1082240u: goto R_01082240;
        case 0x108224cu: goto R_0108224c;
        case 0x108225cu: goto R_0108225c;
        case 0x108227cu: goto R_0108227c;
        case 0x10822dcu: goto R_010822dc;
        case 0x10822e0u: goto R_010822e0;
        case 0x1082340u: goto R_01082340;
        case 0x1082344u: goto R_01082344;
        case 0x1082404u: goto R_01082404;
        case 0x1082408u: goto R_01082408;
        case 0x1082410u: goto R_01082410;
        case 0x1082438u: goto R_01082438;
        case 0x108243cu: goto R_0108243c;
        case 0x1082530u: goto R_01082530;
        case 0x1082548u: goto R_01082548;
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
    c.lr = 0x1082204u;
    f_801c83b8(c);
R_01082204:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082218u;
    wp::call(c, c.ctr);
R_01082218:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x1082234u;
    wp::call(c, c.ctr);
R_01082234:
    c.r[29] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x1082240u;
    f_80043180(c);
R_01082240:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108224cu;
    f_800431a0(c);
R_0108224c:
    c.r[4] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108225cu;
    f_80043060(c);
R_0108225c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x108227cu;
    wp::call(c, c.ctr);
R_0108227c:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x134u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010822ac;
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
    goto L_01082530;
L_010822ac:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010822e0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10822dcu;
    f_801cee24(c);
R_010822dc:
    c.lr = 0x10822e0u;
    f_801d3940(c);
L_010822e0:
R_010822e0:
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
    if (!wp::cr_get(c, 1)) goto L_01082344;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082340u;
    f_801cee24(c);
R_01082340:
    c.lr = 0x1082344u;
    f_801d3940(c);
L_01082344:
R_01082344:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01082394;
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
    if (!wp::cr_get(c, 0)) goto L_01082388;
    c.r[3] = c.r[1] + 0x10u;
L_01082388:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010823d8;
L_01082394:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010823d0;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010823c4;
    c.r[3] = c.r[1] + 0x10u;
L_010823c4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010823d8;
L_010823d0:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010823d8:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01082408;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082404u;
    f_801cee24(c);
R_01082404:
    c.lr = 0x1082408u;
    f_801d3940(c);
L_01082408:
R_01082408:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x1082410u;
    f_801c79a4(c);
R_01082410:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0108243c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e854u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e854u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082438u;
    f_801cee24(c);
R_01082438:
    c.lr = 0x108243cu;
    f_801d3940(c);
L_0108243c:
R_0108243c:
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
    if (!wp::cr_get(c, 1)) goto L_010824e0;
L_010824a8:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010824c4;
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010824c4:
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
    goto L_010824a8;
    }
L_010824e0:
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
    if (wp::cr_get(c, 2)) goto L_01082530;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082530;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1082530u;
    f_801c7a8c(c);
L_01082530:
R_01082530:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x124u;
    wp::wr32(ea, c.r[3]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[28] + 0x121u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1082548u;
    f_801c8404(c);
R_01082548:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr701_01082560(wp::Cpu& c) {
    WP_ENTER(0x1082560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108257cu: goto R_0108257c;
        case 0x10825acu: goto R_010825ac;
        case 0x10825ccu: goto R_010825cc;
        case 0x10825ecu: goto R_010825ec;
        case 0x1082610u: goto R_01082610;
        case 0x108261cu: goto R_0108261c;
        case 0x1082628u: goto R_01082628;
        case 0x1082634u: goto R_01082634;
        case 0x108264cu: goto R_0108264c;
        case 0x1082664u: goto R_01082664;
        case 0x1082674u: goto R_01082674;
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
    c.lr = 0x108257cu;
    f_801c83b8(c);
R_0108257c:
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    c.f[30] = c.f[1];
    c.f[31] = c.f[2];
    c.r[27] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[6] | c.r[6];
    if (!wp::cr_get(c, 2)) goto L_010825b0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10825acu;
    f_800402c0(c);
R_010825ac:
    goto L_01082664;
L_010825b0:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010825d0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10825ccu;
    wp::call(c, c.ctr);
R_010825cc:
    goto L_010825f4;
L_010825d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10825ecu;
    wp::call(c, c.ctr);
R_010825ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082664;
L_010825f4:
    ea = c.r[27] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = wp::rotl(c.r[28], 3) & 0xfffffff8u;
    c.f[1] = c.f[31];
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1082610u;
    f_80043060(c);
R_01082610:
    c.f[1] = c.f[30];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108261cu;
    f_80043120(c);
R_0108261c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x1082628u;
    f_800431a0(c);
R_01082628:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1082634u;
    f_80043180(c);
R_01082634:
    ea = c.r[27] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108264cu;
    f_80042650(c);
R_0108264c:
    c.r[0] = 0x1u;
    ea = c.r[27] + 0x128u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1082664u;
    f_800402c0(c);
L_01082664:
R_01082664:
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x28u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    c.f[30] = wp::rdf64(ea);
    c.lr = 0x1082674u;
    f_801c8404(c);
R_01082674:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr701_01082690(wp::Cpu& c) {
    WP_ENTER(0x1082690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10826f0u: goto R_010826f0;
        case 0x1082708u: goto R_01082708;
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
    if (wp::cr_get(c, 0)) goto L_010826bc;
    c.r[31] = c.r[4] | c.r[4];
    goto L_010826c0;
L_010826bc:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_010826c0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108271c;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010826d8;
    goto L_0108271c;
L_010826d8:
    ea = c.r[3] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10826f0u;
    f_80043180(c);
R_010826f0:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[30];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1082708u;
    f_80042650(c);
R_01082708:
    ea = c.r[29] + 0x128u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108271c;
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_0108271c:
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

void f_mr701_01082740(wp::Cpu& c) {
    WP_ENTER(0x1082740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082788u: goto R_01082788;
        case 0x10827a0u: goto R_010827a0;
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
    if (wp::cr_get(c, 2)) goto L_010827bc;
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
    goto L_010827a8;
L_01082774:
    ea = c.r[29] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1082788u;
    f_80043180(c);
R_01082788:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10827a0u;
    f_80042650(c);
R_010827a0:
    c.r[31] = c.r[31] + 0x8u;
    c.r[30] = c.r[30] + 0x1u;
L_010827a8:
    ea = c.r[29] + 0x124u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01082774;
    }
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_010827bc:
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

void f_mr701_010827e0(wp::Cpu& c) {
    WP_ENTER(0x10827e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10827f4u: goto R_010827f4;
        case 0x1082844u: goto R_01082844;
        case 0x1082864u: goto R_01082864;
        case 0x108288cu: goto R_0108288c;
        case 0x10828b0u: goto R_010828b0;
        case 0x10828d4u: goto R_010828d4;
        case 0x10828e0u: goto R_010828e0;
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
    c.lr = 0x10827f4u;
    f_801c83b8(c);
R_010827f4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 0)) goto L_01082810;
    c.r[31] = c.r[4] | c.r[4];
    goto L_01082814;
L_01082810:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_01082814:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01082828;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082830;
L_01082828:
    c.r[3] = 0x1u;
    goto L_010828d8;
L_01082830:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x1f8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082844u;
    wp::call(c, c.ctr);
R_01082844:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108286c;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082864u;
    wp::call(c, c.ctr);
R_01082864:
    c.r[3] = 0x1u;
    goto L_010828d8;
L_0108286c:
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
    c.lr = 0x108288cu;
    wp::call(c, c.ctr);
R_0108288c:
    wp::compare_unsigned(c, 0, c.r[3], 0x1u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010828d4;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10828b0u;
    wp::call(c, c.ctr);
R_010828b0:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010828d4;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010828d4;
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x10828d4u;
    f_800402c0(c);
L_010828d4:
R_010828d4:
    c.r[3] = c.r[30] | c.r[30];
L_010828d8:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10828e0u;
    f_801c8404(c);
R_010828e0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_010828f0(wp::Cpu& c) {
    WP_ENTER(0x10828f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010828fc;
    goto L_01082900;
L_010828fc:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_01082900:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01082914;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082920;
L_01082914:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_01082920:
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

void f_mr701_01082940(wp::Cpu& c) {
    WP_ENTER(0x1082940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108294c;
    goto L_01082950;
L_0108294c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_01082950:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01082964;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082970;
L_01082964:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_01082970:
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

void f_mr701_01082990(wp::Cpu& c) {
    WP_ENTER(0x1082990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108299c;
    goto L_010829a0;
L_0108299c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_010829a0:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010829b4;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010829c0;
L_010829b4:
    c.r[3] = ((((g_mr701_bases[4] + 0x2eacu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2eacu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_010829c0:
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

void f_mr701_010829e0(wp::Cpu& c) {
    WP_ENTER(0x10829e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10829f4u: goto R_010829f4;
        case 0x1082a64u: goto R_01082a64;
        case 0x1082a68u: goto R_01082a68;
        case 0x1082ac8u: goto R_01082ac8;
        case 0x1082accu: goto R_01082acc;
        case 0x1082b8cu: goto R_01082b8c;
        case 0x1082b90u: goto R_01082b90;
        case 0x1082b98u: goto R_01082b98;
        case 0x1082bc0u: goto R_01082bc0;
        case 0x1082bc4u: goto R_01082bc4;
        case 0x1082cb8u: goto R_01082cb8;
        case 0x1082cc0u: goto R_01082cc0;
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
    c.lr = 0x10829f4u;
    f_801c83b8(c);
R_010829f4:
    ea = c.r[3] + 0x13cu;
    c.r[7] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x140u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    wp::compare_unsigned(c, 0, c.r[7], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01082a34;
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
    goto L_01082cb8;
L_01082a34:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[6];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01082a68;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082a64u;
    f_801cee24(c);
R_01082a64:
    c.lr = 0x1082a68u;
    f_801d3940(c);
L_01082a68:
R_01082a68:
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
    if (!wp::cr_get(c, 1)) goto L_01082acc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082ac8u;
    f_801cee24(c);
R_01082ac8:
    c.lr = 0x1082accu;
    f_801d3940(c);
L_01082acc:
R_01082acc:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01082b1c;
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
    if (!wp::cr_get(c, 0)) goto L_01082b10;
    c.r[3] = c.r[1] + 0x10u;
L_01082b10:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01082b60;
L_01082b1c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01082b58;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01082b4c;
    c.r[3] = c.r[1] + 0x10u;
L_01082b4c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01082b60;
L_01082b58:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_01082b60:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01082b90;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e348u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e348u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082b8cu;
    f_801cee24(c);
R_01082b8c:
    c.lr = 0x1082b90u;
    f_801d3940(c);
L_01082b90:
R_01082b90:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x1082b98u;
    f_801c79a4(c);
R_01082b98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01082bc4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e870u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e870u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082bc0u;
    f_801cee24(c);
R_01082bc0:
    c.lr = 0x1082bc4u;
    f_801d3940(c);
L_01082bc4:
R_01082bc4:
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
    if (!wp::cr_get(c, 1)) goto L_01082c68;
L_01082c30:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_01082c4c;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01082c4c:
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
    goto L_01082c30;
    }
L_01082c68:
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
    if (wp::cr_get(c, 2)) goto L_01082cb8;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082cb8;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1082cb8u;
    f_801c7a8c(c);
L_01082cb8:
R_01082cb8:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1082cc0u;
    f_801c8404(c);
R_01082cc0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr701_01082cd0(wp::Cpu& c) {
    WP_ENTER(0x1082cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082d2cu: goto R_01082d2c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr701_bases[5] + 0x2e3b0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e3b0u) & 0xFFFFu);
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
    goto L_01082d34;
L_01082d20:
    c.r[3] = c.r[30] | c.r[30];
    c.r[12] = c.r[1] + 0x14u;
    c.lr = 0x1082d2cu;
    f_801c8244(c);
R_01082d2c:
    c.r[0] = c.r[0] | 0x0u;
    c.r[30] = c.r[30] + 0x8u;
L_01082d34:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082d20;
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

void f_mr701_01082d60(wp::Cpu& c) {
    WP_ENTER(0x1082d60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082d78u: goto R_01082d78;
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
    c.lr = 0x1082d78u;
    f_8003f8f0(c);
R_01082d78:
    c.r[3] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
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

void f_mr701_01082db0(wp::Cpu& c) {
    WP_ENTER(0x1082db0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082dc8u: goto R_01082dc8;
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
    c.lr = 0x1082dc8u;
    f_8003f640(c);
R_01082dc8:
    c.r[3] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
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

void f_mr701_01082e00(wp::Cpu& c) {
    WP_ENTER(0x1082e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082e54u: goto R_01082e54;
        case 0x1082e90u: goto R_01082e90;
        case 0x1082e9cu: goto R_01082e9c;
        case 0x1082eacu: goto R_01082eac;
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
    if (wp::cr_get(c, 2)) goto L_01082eac;
    c.r[4] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_01082e54;
L_01082e34:
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
    c.lr = 0x1082e54u;
    wp::call(c, c.ctr);
L_01082e54:
R_01082e54:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082e34;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01082e90;
    if (wp::cr_get(c, 2)) goto L_01082e90;
    if (wp::cr_get(c, 2)) goto L_01082e90;
    if (wp::cr_get(c, 2)) goto L_01082e90;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082e90;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1082e90u;
    f_801c7a8c(c);
L_01082e90:
R_01082e90:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1082e9cu;
    f_8003fb90(c);
R_01082e9c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01082eac;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1082eacu;
    f_801c7a8c(c);
L_01082eac:
R_01082eac:
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

void f_mr701_01082ed0(wp::Cpu& c) {
    WP_ENTER(0x1082ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082f14u: goto R_01082f14;
        case 0x1082f30u: goto R_01082f30;
        case 0x1082f38u: goto R_01082f38;
        case 0x1082f60u: goto R_01082f60;
        case 0x1082fb8u: goto R_01082fb8;
        case 0x1082fd4u: goto R_01082fd4;
        case 0x1083000u: goto R_01083000;
        case 0x108302cu: goto R_0108302c;
        case 0x1083054u: goto R_01083054;
        case 0x1083070u: goto R_01083070;
        case 0x1083094u: goto R_01083094;
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
    c.r[30] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
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
    c.lr = 0x1082f14u;
    f_8003cc90(c);
R_01082f14:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082f30u;
    wp::call(c, c.ctr);
R_01082f30:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1082f38u;
    f_8003d2d0(c);
R_01082f38:
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
    c.lr = 0x1082f60u;
    wp::call(c, c.ctr);
R_01082f60:
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
    c.lr = 0x1082fb8u;
    wp::call(c, c.ctr);
R_01082fb8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082fd4u;
    wp::call(c, c.ctr);
R_01082fd4:
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
    c.lr = 0x1083000u;
    wp::call(c, c.ctr);
R_01083000:
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
    c.lr = 0x108302cu;
    wp::call(c, c.ctr);
R_0108302c:
    ea = c.r[31] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083094;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083054u;
    wp::call(c, c.ctr);
R_01083054:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083070u;
    wp::call(c, c.ctr);
R_01083070:
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
    c.lr = 0x1083094u;
    wp::call(c, c.ctr);
L_01083094:
R_01083094:
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

void f_mr701_010830c0(wp::Cpu& c) {
    WP_ENTER(0x10830c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10830d8u: goto R_010830d8;
        case 0x10830e0u: goto R_010830e0;
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
    c.lr = 0x10830d8u;
    f_mr701_01084300(c);
R_010830d8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10830e0u;
    f_mr701_01086750(c);
R_010830e0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_01083100(wp::Cpu& c) {
    WP_ENTER(0x1083100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083124u: goto R_01083124;
        case 0x1083140u: goto R_01083140;
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
    c.lr = 0x1083124u;
    f_80010060(c);
R_01083124:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083140u;
    wp::call(c, c.ctr);
R_01083140:
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

void f_mr701_01083160(wp::Cpu& c) {
    WP_ENTER(0x1083160u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083198u: goto R_01083198;
        case 0x10831b4u: goto R_010831b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = ((((g_mr701_bases[5] + 0x2e890u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr701_bases[5] + 0x2e890u) & 0xFFFFu);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1083198u;
    f_801d3590(c);
R_01083198:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10831b4u;
    wp::call(c, c.ctr);
R_010831b4:
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

void f_mr701_010831d0(wp::Cpu& c) {
    WP_ENTER(0x10831d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10831e4u: goto R_010831e4;
        case 0x10831f8u: goto R_010831f8;
        case 0x108320cu: goto R_0108320c;
        case 0x1083234u: goto R_01083234;
        case 0x1083244u: goto R_01083244;
        case 0x1083268u: goto R_01083268;
        case 0x10832c8u: goto R_010832c8;
        case 0x1083348u: goto R_01083348;
        case 0x10833b0u: goto R_010833b0;
        case 0x10833e0u: goto R_010833e0;
        case 0x10833f4u: goto R_010833f4;
        case 0x1083404u: goto R_01083404;
        case 0x1083420u: goto R_01083420;
        case 0x1083428u: goto R_01083428;
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
    c.lr = 0x10831e4u;
    f_801c83b4(c);
R_010831e4:
    c.r[26] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10831f8u;
    f_8006c450(c);
R_010831f8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010833f8;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x108320cu;
    f_8006c460(c);
R_0108320c:
    c.r[28] = ((((g_mr701_bases[5] + 0x2e898u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr701_bases[5] + 0x2e898u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1083234u;
    f_801c7860(c);
R_01083234:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x1083244u;
    f_mr701_01023710(c);
R_01083244:
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
    c.lr = 0x1083268u;
    f_mr701_010238d0(c);
R_01083268:
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
    if (!wp::cr_get(c, 2)) goto L_010832a4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010832a8;
L_010832a4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010832a8:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x10832c8u;
    f_mr701_010238d0(c);
R_010832c8:
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
    if (!wp::cr_get(c, 2)) goto L_01083324;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01083328;
L_01083324:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01083328:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x1083348u;
    f_mr701_010238d0(c);
R_01083348:
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
    if (!wp::cr_get(c, 2)) goto L_0108338c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01083390;
L_0108338c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01083390:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x10833b0u;
    f_mr701_010238d0(c);
R_010833b0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010833cc;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010833d0;
L_010833cc:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010833d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10833e0u;
    wp::call(c, c.ctr);
R_010833e0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083420;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10833f4u;
    f_801c7a8c(c);
R_010833f4:
    goto L_01083420;
L_010833f8:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1083404u;
    f_8006c4e0(c);
R_01083404:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083420u;
    wp::call(c, c.ctr);
L_01083420:
R_01083420:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1083428u;
    f_801c8400(c);
R_01083428:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_01083440(wp::Cpu& c) {
    WP_ENTER(0x1083440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083464u: goto R_01083464;
        case 0x1083480u: goto R_01083480;
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
    c.lr = 0x1083464u;
    f_8003cc90(c);
R_01083464:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083480u;
    wp::call(c, c.ctr);
R_01083480:
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

void f_mr701_010834a0(wp::Cpu& c) {
    WP_ENTER(0x10834a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10834d4u: goto R_010834d4;
        case 0x10834fcu: goto R_010834fc;
        case 0x1083524u: goto R_01083524;
        case 0x1083540u: goto R_01083540;
        case 0x108355cu: goto R_0108355c;
        case 0x108357cu: goto R_0108357c;
        case 0x10835a4u: goto R_010835a4;
        case 0x10835c0u: goto R_010835c0;
        case 0x10835e8u: goto R_010835e8;
        case 0x1083648u: goto R_01083648;
        case 0x1083688u: goto R_01083688;
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
    c.lr = 0x10834d4u;
    wp::call(c, c.ctr);
R_010834d4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr701_bases[4] + 0x2efcu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr701_bases[4] + 0x2f00u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr701_bases[4] + 0x2efcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x2f00u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10834fcu;
    wp::call(c, c.ctr);
R_010834fc:
    c.r[5] = ((((g_mr701_bases[4] + 0x2ef0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x2ef0u) & 0xFFFFu);
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
    c.lr = 0x1083524u;
    wp::call(c, c.ctr);
R_01083524:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083540u;
    wp::call(c, c.ctr);
R_01083540:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108355cu;
    wp::call(c, c.ctr);
R_0108355c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x108357cu;
    wp::call(c, c.ctr);
R_0108357c:
    c.r[5] = ((((g_mr701_bases[4] + 0x2ef4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x2ef4u) & 0xFFFFu);
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
    c.lr = 0x10835a4u;
    wp::call(c, c.ctr);
R_010835a4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10835c0u;
    wp::call(c, c.ctr);
R_010835c0:
    c.r[5] = ((((g_mr701_bases[4] + 0x2ef8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x2ef8u) & 0xFFFFu);
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
    c.lr = 0x10835e8u;
    wp::call(c, c.ctr);
R_010835e8:
    c.r[3] = ((((g_mr701_bases[5] + 0x2e8a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8a0u) & 0xFFFFu);
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
    goto L_01083630;
L_0108362c:
    c.r[28] = c.r[28] + 0x4u;
L_01083630:
    wp::compare_unsigned(c, 0, c.r[28], c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01083654;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1083648u;
    f_801c8244(c);
R_01083648:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108362c;
    }
L_01083654:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01083674;
    c.r[3] = 0x0u;
    goto L_01083678;
L_01083674:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01083678:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083688;
    c.r[4] = 0x1u;
    c.lr = 0x1083688u;
    f_mr701_010869a0(c);
L_01083688:
R_01083688:
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

void f_mr701_010836b0(wp::Cpu& c) {
    WP_ENTER(0x10836b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr701_010836c0(wp::Cpu& c) {
    WP_ENTER(0x10836c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10836d0u: goto R_010836d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10836d0u;
    f_mr701_01084300(c);
R_010836d0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_010836f0(wp::Cpu& c) {
    WP_ENTER(0x10836f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083704u: goto R_01083704;
        case 0x108376cu: goto R_0108376c;
        case 0x10837bcu: goto R_010837bc;
        case 0x10837c4u: goto R_010837c4;
        case 0x10837dcu: goto R_010837dc;
        case 0x10837e4u: goto R_010837e4;
        case 0x1083844u: goto R_01083844;
        case 0x1083888u: goto R_01083888;
        case 0x10838a0u: goto R_010838a0;
        case 0x10838a8u: goto R_010838a8;
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
    c.lr = 0x1083704u;
    f_801c83b8(c);
R_01083704:
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8acu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8acu) & 0xFFFFu);
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
    goto L_01083754;
L_01083750:
    c.r[31] = c.r[31] + 0x4u;
L_01083754:
    wp::compare_unsigned(c, 0, c.r[31], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01083778;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108376cu;
    f_801c8244(c);
R_0108376c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083750;
    }
L_01083778:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01083798;
    c.r[31] = 0x0u;
    goto L_0108379c;
L_01083798:
    ea = c.r[31] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0108379c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010838a0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10837bcu;
    wp::call(c, c.ctr);
R_010837bc:
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10837c4u;
    f_801290d0(c);
R_010837c4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10837dcu;
    wp::call(c, c.ctr);
R_010837dc:
    ea = c.r[31] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10837e4u;
    f_801290d0(c);
R_010837e4:
    c.r[3] = ((((g_mr701_bases[5] + 0x2e8b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8b8u) & 0xFFFFu);
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
    goto L_0108382c;
L_01083828:
    c.r[27] = c.r[27] + 0x4u;
L_0108382c:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01083850;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1083844u;
    f_801c8244(c);
R_01083844:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083828;
    }
L_01083850:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083894;
    c.r[0] = c.r[0] - c.r[27];
    c.r[3] = c.r[27] | c.r[27];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[4] = c.r[27] + 0x4u;
    c.r[5] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.lr = 0x1083888u;
    f_801cc76c(c);
R_01083888:
    ea = c.r[29] + 0x118u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x118u;
    wp::wr32(ea, c.r[0]);
L_01083894:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10838a0u;
    f_mr701_010865e0(c);
L_010838a0:
R_010838a0:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x10838a8u;
    f_801c8404(c);
R_010838a8:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr701_010838c0(wp::Cpu& c) {
    WP_ENTER(0x10838c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8c4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8c4u) & 0xFFFFu);
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_010838e0(wp::Cpu& c) {
    WP_ENTER(0x10838e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108391cu: goto R_0108391c;
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
    goto L_01083920;
L_01083900:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x15cu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xcu;
    c.ctr = c.r[12];
    c.lr = 0x108391cu;
    wp::call(c, c.ctr);
R_0108391c:
    c.r[31] = c.r[31] + 0x4u;
L_01083920:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083900;
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

void f_mr701_01083950(wp::Cpu& c) {
    WP_ENTER(0x1083950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108397cu: goto R_0108397c;
        case 0x108399cu: goto R_0108399c;
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
    c.lr = 0x108397cu;
    f_8003cc90(c);
R_0108397c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x108399cu;
    wp::call(c, c.ctr);
R_0108399c:
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

void f_mr701_010839c0(wp::Cpu& c) {
    WP_ENTER(0x10839c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10839e4u: goto R_010839e4;
        case 0x10839fcu: goto R_010839fc;
        case 0x1083a0cu: goto R_01083a0c;
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
    c.lr = 0x10839e4u;
    f_mr701_01084300(c);
R_010839e4:
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8c8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8c8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10839fcu;
    f_801d34c4(c);
R_010839fc:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x1083a0cu;
    f_mr701_01087650(c);
R_01083a0c:
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

void f_mr701_01083a30(wp::Cpu& c) {
    WP_ENTER(0x1083a30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083a74u: goto R_01083a74;
        case 0x1083a94u: goto R_01083a94;
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
    c.r[5] = ((((g_mr701_bases[5] + 0x2e890u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e890u) & 0xFFFFu);
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1083a74u;
    f_801d3590(c);
R_01083a74:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x1083a94u;
    wp::call(c, c.ctr);
R_01083a94:
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

void f_mr701_01083ab0(wp::Cpu& c) {
    WP_ENTER(0x1083ab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083adcu: goto R_01083adc;
        case 0x1083afcu: goto R_01083afc;
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
    c.lr = 0x1083adcu;
    f_80010060(c);
R_01083adc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x1083afcu;
    wp::call(c, c.ctr);
R_01083afc:
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

void f_mr701_01083b20(wp::Cpu& c) {
    WP_ENTER(0x1083b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083b34u: goto R_01083b34;
        case 0x1083b4cu: goto R_01083b4c;
        case 0x1083b60u: goto R_01083b60;
        case 0x1083b88u: goto R_01083b88;
        case 0x1083b98u: goto R_01083b98;
        case 0x1083bbcu: goto R_01083bbc;
        case 0x1083c1cu: goto R_01083c1c;
        case 0x1083c9cu: goto R_01083c9c;
        case 0x1083d04u: goto R_01083d04;
        case 0x1083d38u: goto R_01083d38;
        case 0x1083d4cu: goto R_01083d4c;
        case 0x1083d5cu: goto R_01083d5c;
        case 0x1083d7cu: goto R_01083d7c;
        case 0x1083d84u: goto R_01083d84;
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
    c.lr = 0x1083b34u;
    f_801c83b0(c);
R_01083b34:
    c.r[25] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1083b4cu;
    f_8006c450(c);
R_01083b4c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01083d50;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1083b60u;
    f_8006c460(c);
R_01083b60:
    c.r[27] = ((((g_mr701_bases[5] + 0x2e898u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr701_bases[5] + 0x2e898u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1083b88u;
    f_801c7860(c);
R_01083b88:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x1083b98u;
    f_mr701_01023710(c);
R_01083b98:
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
    c.lr = 0x1083bbcu;
    f_mr701_010238d0(c);
R_01083bbc:
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
    if (!wp::cr_get(c, 2)) goto L_01083bf8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01083bfc;
L_01083bf8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01083bfc:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x1083c1cu;
    f_mr701_010238d0(c);
R_01083c1c:
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
    if (!wp::cr_get(c, 2)) goto L_01083c78;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01083c7c;
L_01083c78:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01083c7c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x1083c9cu;
    f_mr701_010238d0(c);
R_01083c9c:
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
    if (!wp::cr_get(c, 2)) goto L_01083ce0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01083ce4;
L_01083ce0:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01083ce4:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x1083d04u;
    f_mr701_010238d0(c);
R_01083d04:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01083d20;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01083d24;
L_01083d20:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01083d24:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083d38u;
    wp::call(c, c.ctr);
R_01083d38:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083d7c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1083d4cu;
    f_801c7a8c(c);
R_01083d4c:
    goto L_01083d7c;
L_01083d50:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1083d5cu;
    f_8006c4e0(c);
R_01083d5c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x1083d7cu;
    wp::call(c, c.ctr);
L_01083d7c:
R_01083d7c:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1083d84u;
    f_801c83fc(c);
R_01083d84:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_01083da0(wp::Cpu& c) {
    WP_ENTER(0x1083da0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083e1cu: goto R_01083e1c;
        case 0x1083e64u: goto R_01083e64;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8d0u) & 0xFFFFu);
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
    goto L_01083e04;
L_01083e00:
    c.r[30] = c.r[30] + 0x4u;
L_01083e04:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01083e28;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1083e1cu;
    f_801c8244(c);
R_01083e1c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083e00;
    }
L_01083e28:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01083e48;
    c.r[3] = 0x0u;
    goto L_01083e4c;
L_01083e48:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01083e4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083e64;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x0u;
    c.lr = 0x1083e64u;
    f_mr701_010869a0(c);
L_01083e64:
R_01083e64:
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

void f_mr701_01083e80(wp::Cpu& c) {
    WP_ENTER(0x1083e80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083efcu: goto R_01083efc;
        case 0x1083f5cu: goto R_01083f5c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8dcu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8dcu) & 0xFFFFu);
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
    goto L_01083ee4;
L_01083ee0:
    c.r[30] = c.r[30] + 0x4u;
L_01083ee4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01083f08;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1083efcu;
    f_801c8244(c);
R_01083efc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083ee0;
    }
L_01083f08:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01083f28;
    c.r[3] = 0x0u;
    goto L_01083f2c;
L_01083f28:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01083f2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083f5c;
    ea = c.r[3] + 0xa8u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xacu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01083f54;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
L_01083f54:
    c.r[4] = 0x0u;
    c.lr = 0x1083f5cu;
    f_mr701_010869a0(c);
L_01083f5c:
R_01083f5c:
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

void f_mr701_01083f80(wp::Cpu& c) {
    WP_ENTER(0x1083f80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083ffcu: goto R_01083ffc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8e8u) & 0xFFFFu);
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
    goto L_01083fe4;
L_01083fe0:
    c.r[30] = c.r[30] + 0x4u;
L_01083fe4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01084008;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1083ffcu;
    f_801c8244(c);
R_01083ffc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01083fe0;
    }
L_01084008:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084028;
    c.r[3] = 0x0u;
    goto L_0108402c;
L_01084028:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0108402c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108403c;
    c.r[3] = 0x0u;
    goto L_01084040;
L_0108403c:
    ea = c.r[3] + 0xa8u;
    c.r[3] = wp::rd32(ea);
L_01084040:
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

void f_mr701_01084060(wp::Cpu& c) {
    WP_ENTER(0x1084060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10840dcu: goto R_010840dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8f4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8f4u) & 0xFFFFu);
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
    goto L_010840c4;
L_010840c0:
    c.r[30] = c.r[30] + 0x4u;
L_010840c4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010840e8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10840dcu;
    f_801c8244(c);
R_010840dc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010840c0;
    }
L_010840e8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084108;
    c.r[3] = 0x0u;
    goto L_0108410c;
L_01084108:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0108410c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108411c;
    c.r[3] = 0x0u;
    goto L_01084120;
L_0108411c:
    ea = c.r[3] + 0xacu;
    c.r[3] = wp::rd32(ea);
L_01084120:
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

void f_mr701_01084140(wp::Cpu& c) {
    WP_ENTER(0x1084140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10841bcu: goto R_010841bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e900u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e900u) & 0xFFFFu);
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
    goto L_010841a4;
L_010841a0:
    c.r[30] = c.r[30] + 0x4u;
L_010841a4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010841c8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10841bcu;
    f_801c8244(c);
R_010841bc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010841a0;
    }
L_010841c8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010841e8;
    c.r[3] = 0x0u;
    goto L_010841ec;
L_010841e8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010841ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010841fc;
    c.r[3] = 0x0u;
    goto L_01084200;
L_010841fc:
    ea = c.r[3] + 0xbcu;
    c.r[3] = wp::rd8(ea);
L_01084200:
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

void f_mr701_01084220(wp::Cpu& c) {
    WP_ENTER(0x1084220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108429cu: goto R_0108429c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e90cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e90cu) & 0xFFFFu);
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
    goto L_01084284;
L_01084280:
    c.r[30] = c.r[30] + 0x4u;
L_01084284:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010842a8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108429cu;
    f_801c8244(c);
R_0108429c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084280;
    }
L_010842a8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010842c8;
    c.r[3] = 0x0u;
    goto L_010842cc;
L_010842c8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010842cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010842dc;
    c.r[3] = 0x0u;
    goto L_010842e0;
L_010842dc:
    ea = c.r[3] + 0xbdu;
    c.r[3] = wp::rd8(ea);
L_010842e0:
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

void f_mr701_01084300(wp::Cpu& c) {
    WP_ENTER(0x1084300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084314u: goto R_01084314;
        case 0x108437cu: goto R_0108437c;
        case 0x10843d0u: goto R_010843d0;
        case 0x10843d8u: goto R_010843d8;
        case 0x10843f0u: goto R_010843f0;
        case 0x108440cu: goto R_0108440c;
        case 0x1084424u: goto R_01084424;
        case 0x1084438u: goto R_01084438;
        case 0x1084440u: goto R_01084440;
        case 0x1084450u: goto R_01084450;
        case 0x1084468u: goto R_01084468;
        case 0x1084478u: goto R_01084478;
        case 0x1084488u: goto R_01084488;
        case 0x1084498u: goto R_01084498;
        case 0x10844b0u: goto R_010844b0;
        case 0x10844c0u: goto R_010844c0;
        case 0x1084578u: goto R_01084578;
        case 0x1084590u: goto R_01084590;
        case 0x10845bcu: goto R_010845bc;
        case 0x10845d4u: goto R_010845d4;
        case 0x108474cu: goto R_0108474c;
        case 0x1084758u: goto R_01084758;
        case 0x10847b4u: goto R_010847b4;
        case 0x10847b8u: goto R_010847b8;
        case 0x1084818u: goto R_01084818;
        case 0x108481cu: goto R_0108481c;
        case 0x10848dcu: goto R_010848dc;
        case 0x10848e0u: goto R_010848e0;
        case 0x10848e8u: goto R_010848e8;
        case 0x1084910u: goto R_01084910;
        case 0x1084914u: goto R_01084914;
        case 0x1084988u: goto R_01084988;
        case 0x1084998u: goto R_01084998;
        case 0x10849f4u: goto R_010849f4;
        case 0x1084a10u: goto R_01084a10;
        case 0x1084a1cu: goto R_01084a1c;
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
    c.lr = 0x1084314u;
    f_801c83b4(c);
R_01084314:
    c.r[5] = ((((g_mr701_bases[5] + 0x2e918u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e918u) & 0xFFFFu);
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
    goto L_01084364;
L_01084360:
    c.r[27] = c.r[27] + 0x4u;
L_01084364:
    wp::compare_unsigned(c, 0, c.r[27], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01084388;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108437cu;
    f_801c8244(c);
R_0108437c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084360;
    }
L_01084388:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010843a8;
    c.r[3] = 0x0u;
    goto L_010843ac;
L_010843a8:
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010843ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010843b8;
    goto L_01084a14;
L_010843b8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10843d0u;
    wp::call(c, c.ctr);
R_010843d0:
    c.r[3] = 0xf0u;
    c.lr = 0x10843d8u;
    f_801c79a4(c);
R_010843d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010843f4;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.lr = 0x10843f0u;
    f_mr701_010864a0(c);
R_010843f0:
    c.r[30] = c.r[3] | c.r[3];
L_010843f4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108440cu;
    wp::call(c, c.ctr);
R_0108440c:
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
    c.lr = 0x1084424u;
    f_80042130(c);
R_01084424:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x70u;
    ea = c.r[12] + 0x4cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084438u;
    wp::call(c, c.ctr);
R_01084438:
    c.r[3] = 0x104u;
    c.lr = 0x1084440u;
    f_801c79a4(c);
R_01084440:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108447c;
    c.lr = 0x1084450u;
    f_80042130(c);
R_01084450:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084468u;
    wp::call(c, c.ctr);
R_01084468:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x1084478u;
    f_8012b8d0(c);
R_01084478:
    c.r[27] = c.r[3] | c.r[3];
L_0108447c:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = 0x10cu;
    c.lr = 0x1084488u;
    f_801c79a4(c);
R_01084488:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010844e0;
    c.lr = 0x1084498u;
    f_80042130(c);
R_01084498:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10844b0u;
    wp::call(c, c.ctr);
R_010844b0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x10844c0u;
    f_8012b8d0(c);
R_010844c0:
    c.r[4] = ((((g_mr701_bases[5] + 0x2fae8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr701_bases[4] + 0x2f08u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fae8u) & 0xFFFFu);
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f08u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[27] + 0x108u;
    wp::wr32(ea, c.r[0]);
L_010844e0:
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = ((((g_mr701_bases[4] + 0x2f0cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f0cu) & 0xFFFFu);
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
    c.lr = 0x1084578u;
    wp::call(c, c.ctr);
R_01084578:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x40u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084590u;
    wp::call(c, c.ctr);
R_01084590:
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
    c.lr = 0x10845bcu;
    wp::call(c, c.ctr);
R_010845bc:
    ea = c.r[30] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0xd0u;
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10845d4u;
    wp::call(c, c.ctr);
R_010845d4:
    c.r[4] = ((((g_mr701_bases[4] + 0x2f04u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x55550000u;
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2f04u) & 0xFFFFu);
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
    c.lr = 0x108474cu;
    f_80129080(c);
R_0108474c:
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1084758u;
    f_80129080(c);
R_01084758:
    ea = c.r[28] + 0x118u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x11cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01084784;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    goto L_010849f4;
L_01084784:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010847b8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e924u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e924u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10847b4u;
    f_801cee24(c);
R_010847b4:
    c.lr = 0x10847b8u;
    f_801d3940(c);
L_010847b8:
R_010847b8:
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
    if (!wp::cr_get(c, 1)) goto L_0108481c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e924u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e924u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084818u;
    f_801cee24(c);
R_01084818:
    c.lr = 0x108481cu;
    f_801d3940(c);
L_0108481c:
R_0108481c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108486c;
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
    if (!wp::cr_get(c, 0)) goto L_01084860;
    c.r[3] = c.r[1] + 0x8u;
L_01084860:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010848b0;
L_0108486c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010848a8;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0108489c;
    c.r[3] = c.r[1] + 0x8u;
L_0108489c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010848b0;
L_010848a8:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010848b0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010848e0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e924u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e924u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10848dcu;
    f_801cee24(c);
R_010848dc:
    c.lr = 0x10848e0u;
    f_801d3940(c);
L_010848e0:
R_010848e0:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x10848e8u;
    f_801c79a4(c);
R_010848e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01084914;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0xb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0xb0cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1084910u;
    f_801cee24(c);
R_01084910:
    c.lr = 0x1084914u;
    f_801d3940(c);
L_01084914:
R_01084914:
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
    c.lr = 0x1084988u;
    f_800043c4(c);
R_01084988:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.lr = 0x1084998u;
    f_80004714(c);
R_01084998:
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
    if (wp::cr_get(c, 2)) goto L_010849f4;
    ea = c.r[1] + 0x80u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010849f4;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10849f4u;
    f_801c7a8c(c);
L_010849f4:
R_010849f4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x19cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084a10u;
    wp::call(c, c.ctr);
R_01084a10:
    c.r[3] = c.r[30] | c.r[30];
L_01084a14:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x1084a1cu;
    f_801c8400(c);
R_01084a1c:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr701_01084a30(wp::Cpu& c) {
    WP_ENTER(0x1084a30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr701_01084a40(wp::Cpu& c) {
    WP_ENTER(0x1084a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr701_01084a50(wp::Cpu& c) {
    WP_ENTER(0x1084a50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084ad4u: goto R_01084ad4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr701_bases[5] + 0x2e944u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e944u) & 0xFFFFu);
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
    goto L_01084abc;
L_01084ab8:
    c.r[30] = c.r[30] + 0x4u;
L_01084abc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01084ae0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1084ad4u;
    f_801c8244(c);
R_01084ad4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084ab8;
    }
L_01084ae0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084b00;
    c.r[3] = 0x0u;
    goto L_01084b04;
L_01084b00:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01084b04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084b44;
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
L_01084b44:
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

void f_mr701_01084b70(wp::Cpu& c) {
    WP_ENTER(0x1084b70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084b98u: goto R_01084b98;
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
    c.lr = 0x1084b98u;
    wp::call(c, c.ctr);
R_01084b98:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_01084bb0(wp::Cpu& c) {
    WP_ENTER(0x1084bb0u);
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

void f_mr701_01084bd0(wp::Cpu& c) {
    WP_ENTER(0x1084bd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[8] = ((((g_mr701_bases[6] + 0x4f78u) + 0x8000u) >> 16) << 16);
    c.r[9] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[6] + 0x4f78u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084c40;
    c.r[7] = ((((g_mr701_bases[6] + 0x4f80u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x38u;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    c.r[6] = c.r[7] + wp::sign_extend16((g_mr701_bases[6] + 0x4f80u) & 0xFFFFu);
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
    ea = c.r[7] + wp::sign_extend16((g_mr701_bases[6] + 0x4f80u) & 0xFFFFu);
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
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[6] + 0x4f78u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01084c40:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr701_bases[6] + 0x4f80u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[12] + 0x190u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr701_bases[6] + 0x4f80u) & 0xFFFFu);
    c.r[5] = c.r[6] + c.r[0];
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_01084c60(wp::Cpu& c) {
    WP_ENTER(0x1084c60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084ce4u: goto R_01084ce4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e950u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e950u) & 0xFFFFu);
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
    goto L_01084ccc;
L_01084cc8:
    c.r[30] = c.r[30] + 0x4u;
L_01084ccc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01084cf0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1084ce4u;
    f_801c8244(c);
R_01084ce4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084cc8;
    }
L_01084cf0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084d10;
    c.r[4] = 0x0u;
    goto L_01084d14;
L_01084d10:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_01084d14:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084d30;
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
L_01084d30:
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

void f_mr701_01084d50(wp::Cpu& c) {
    WP_ENTER(0x1084d50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084dd4u: goto R_01084dd4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e95cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e95cu) & 0xFFFFu);
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
    goto L_01084dbc;
L_01084db8:
    c.r[30] = c.r[30] + 0x4u;
L_01084dbc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01084de0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1084dd4u;
    f_801c8244(c);
R_01084dd4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084db8;
    }
L_01084de0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084e00;
    c.r[4] = 0x0u;
    goto L_01084e04;
L_01084e00:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_01084e04:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084e20;
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
L_01084e20:
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

void f_mr701_01084e40(wp::Cpu& c) {
    WP_ENTER(0x1084e40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084ec4u: goto R_01084ec4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr701_bases[5] + 0x2e968u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e968u) & 0xFFFFu);
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
    goto L_01084eac;
L_01084ea8:
    c.r[29] = c.r[29] + 0x4u;
L_01084eac:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01084ed0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1084ec4u;
    f_801c8244(c);
R_01084ec4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084ea8;
    }
L_01084ed0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084ef0;
    c.r[5] = 0x0u;
    goto L_01084ef4;
L_01084ef0:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_01084ef4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084f54;
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
L_01084f54:
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

void f_mr701_01084f80(wp::Cpu& c) {
    WP_ENTER(0x1084f80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085004u: goto R_01085004;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr701_bases[5] + 0x2e974u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e974u) & 0xFFFFu);
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
    goto L_01084fec;
L_01084fe8:
    c.r[29] = c.r[29] + 0x4u;
L_01084fec:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01085010;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085004u;
    f_801c8244(c);
R_01085004:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084fe8;
    }
L_01085010:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085030;
    c.r[6] = 0x0u;
    goto L_01085034;
L_01085030:
    ea = c.r[29] + 0x0u;
    c.r[6] = wp::rd32(ea);
L_01085034:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108509c;
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
L_0108509c:
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

void f_mr701_010850c0(wp::Cpu& c) {
    WP_ENTER(0x10850c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085100u: goto R_01085100;
        case 0x108511cu: goto R_0108511c;
        case 0x1085134u: goto R_01085134;
        case 0x1085158u: goto R_01085158;
        case 0x108517cu: goto R_0108517c;
        case 0x108519cu: goto R_0108519c;
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
    if (!wp::cr_get(c, 0)) goto L_01085104;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085100u;
    wp::call(c, c.ctr);
R_01085100:
    goto L_01085134;
L_01085104:
    if (!wp::cr_get(c, 2)) goto L_01085120;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108511cu;
    wp::call(c, c.ctr);
R_0108511c:
    goto L_01085134;
L_01085120:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085134u;
    wp::call(c, c.ctr);
L_01085134:
R_01085134:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108515c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085158u;
    wp::call(c, c.ctr);
R_01085158:
    goto L_0108519c;
L_0108515c:
    if (!wp::cr_get(c, 2)) goto L_01085180;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108517cu;
    wp::call(c, c.ctr);
R_0108517c:
    goto L_0108519c;
L_01085180:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108519cu;
    wp::call(c, c.ctr);
L_0108519c:
R_0108519c:
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

void f_mr701_010851c0(wp::Cpu& c) {
    WP_ENTER(0x10851c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10851f0u: goto R_010851f0;
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
    c.lr = 0x10851f0u;
    wp::call(c, c.ctr);
R_010851f0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_01085200(wp::Cpu& c) {
    WP_ENTER(0x1085200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085214u: goto R_01085214;
        case 0x1085280u: goto R_01085280;
        case 0x10853dcu: goto R_010853dc;
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
    c.lr = 0x1085214u;
    f_801c83b8(c);
R_01085214:
    c.r[9] = ((((g_mr701_bases[5] + 0x2e980u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mr701_bases[5] + 0x2e980u) & 0xFFFFu);
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
    goto L_01085268;
L_01085264:
    c.r[29] = c.r[29] + 0x4u;
L_01085268:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0108528c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085280u;
    f_801c8244(c);
R_01085280:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085264;
    }
L_0108528c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010852ac;
    c.r[5] = 0x0u;
    goto L_010852b0;
L_010852ac:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010852b0:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010853d4;
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
    if (wp::cr_get(c, 0)) goto L_01085384;
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_01085384;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_01085384;
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
    goto L_010853d4;
L_01085384:
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
L_010853d4:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x10853dcu;
    f_801c8404(c);
R_010853dc:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr701_010853f0(wp::Cpu& c) {
    WP_ENTER(0x10853f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085430u: goto R_01085430;
        case 0x1085454u: goto R_01085454;
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
    c.lr = 0x1085430u;
    wp::call(c, c.ctr);
R_01085430:
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
    c.lr = 0x1085454u;
    wp::call(c, c.ctr);
R_01085454:
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

void f_mr701_01085470(wp::Cpu& c) {
    WP_ENTER(0x1085470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10854a4u: goto R_010854a4;
        case 0x10854c8u: goto R_010854c8;
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
    c.lr = 0x10854a4u;
    wp::call(c, c.ctr);
R_010854a4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010854c8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10854c8u;
    wp::call(c, c.ctr);
L_010854c8:
R_010854c8:
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

void f_mr701_010854f0(wp::Cpu& c) {
    WP_ENTER(0x10854f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085524u: goto R_01085524;
        case 0x108554cu: goto R_0108554c;
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
    c.lr = 0x1085524u;
    wp::call(c, c.ctr);
R_01085524:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr701_bases[4] + 0x2efcu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr701_bases[4] + 0x2f00u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr701_bases[4] + 0x2efcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x2f00u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x108554cu;
    wp::call(c, c.ctr);
R_0108554c:
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

void f_mr701_01085570(wp::Cpu& c) {
    WP_ENTER(0x1085570u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108559cu: goto R_0108559c;
        case 0x1085608u: goto R_01085608;
        case 0x1085690u: goto R_01085690;
        case 0x10856f8u: goto R_010856f8;
        case 0x108579cu: goto R_0108579c;
        case 0x10857e0u: goto R_010857e0;
        case 0x1085820u: goto R_01085820;
        case 0x108584cu: goto R_0108584c;
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
    c.lr = 0x108559cu;
    f_801c83b8(c);
R_0108559c:
    c.r[8] = ((((g_mr701_bases[5] + 0x2e98cu) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e98cu) & 0xFFFFu);
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
    goto L_010855f0;
L_010855ec:
    c.r[27] = c.r[27] + 0x4u;
L_010855f0:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01085614;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085608u;
    f_801c8244(c);
R_01085608:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010855ec;
    }
L_01085614:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085634;
    c.r[28] = 0x0u;
    goto L_01085638;
L_01085634:
    ea = c.r[27] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_01085638:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[27] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0108564c;
    c.r[3] = 0x0u;
    goto L_0108582c;
L_0108564c:
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
    c.lr = 0x1085690u;
    wp::call(c, c.ctr);
R_01085690:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[1] + 0x18u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x1cu;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    if (!wp::cr_get(c, 2)) goto L_010856fc;
    c.r[3] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_010856d0;
    c.f[2] = wp::round_single(c.f[0] / c.f[5]);
    c.ps1[2] = c.f[2];
L_010856d0:
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
    c.lr = 0x10856f8u;
    wp::call(c, c.ctr);
R_010856f8:
    goto L_0108579c;
L_010856fc:
    c.r[3] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_0108572c;
    goto L_01085730;
L_0108572c:
    c.f[3] = c.f[2];
L_01085730:
    c.r[3] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[0], c.f[2]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_01085748;
    goto L_0108574c;
L_01085748:
    c.f[2] = c.f[0];
L_0108574c:
    wp::compare_float(c, 0, c.f[2], c.f[3]);
    if (!wp::cr_get(c, 1)) goto L_01085758;
    c.f[2] = c.f[3];
L_01085758:
    c.r[3] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (wp::cr_get(c, 0)) goto L_01085770;
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01085774;
L_01085770:
    c.r[27] = 0x1u;
L_01085774:
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
    c.lr = 0x108579cu;
    wp::call(c, c.ctr);
L_0108579c:
R_0108579c:
    c.r[4] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr701_bases[4] + 0x2f38u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[1] + 0x28u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f38u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
L_010857b0:
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
    c.lr = 0x10857e0u;
    wp::call(c, c.ctr);
R_010857e0:
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[30]);
    c.r[0] = wp::mfcr(c);
    c.r[0] = wp::rotl(c.r[0], 2) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01085828;
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
    c.lr = 0x1085820u;
    wp::call(c, c.ctr);
R_01085820:
    c.r[27] = 0x1u;
    WP_POLL(c);
    goto L_010857b0;
L_01085828:
    c.r[3] = c.r[27] | c.r[27];
L_0108582c:
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
    c.lr = 0x108584cu;
    f_801c8404(c);
R_0108584c:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_01085860(wp::Cpu& c) {
    WP_ENTER(0x1085860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085874u: goto R_01085874;
        case 0x10858e4u: goto R_010858e4;
        case 0x10859f0u: goto R_010859f0;
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
    c.lr = 0x1085874u;
    f_801c83b4(c);
R_01085874:
    c.r[10] = ((((g_mr701_bases[5] + 0x2e998u) + 0x8000u) >> 16) << 16);
    ea = c.r[10] + wp::sign_extend16((g_mr701_bases[5] + 0x2e998u) & 0xFFFFu);
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
    goto L_010858cc;
L_010858c8:
    c.r[27] = c.r[27] + 0x4u;
L_010858cc:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010858f0;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10858e4u;
    f_801c8244(c);
R_010858e4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010858c8;
    }
L_010858f0:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085910;
    c.r[5] = 0x0u;
    goto L_01085914;
L_01085910:
    ea = c.r[27] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_01085914:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010859e8;
    ea = c.r[5] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108593c;
    goto L_010859e8;
L_0108593c:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_010859c4;
L_01085958:
    wp::compare_unsigned(c, 0, c.r[0], 0xbu);
    if (!wp::cr_get(c, 2)) goto L_01085968;
    c.r[7] = c.r[7] + 0x3u;
    goto L_010859c4;
L_01085968:
    wp::compare_unsigned(c, 0, c.r[0], 0xcu);
    if (!wp::cr_get(c, 2)) goto L_01085990;
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
    goto L_010859c0;
L_01085990:
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_010859bc;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010859b4;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_010859b4:
    c.r[8] = 0x0u;
    goto L_010859c0;
L_010859bc:
    c.r[8] = c.r[8] + 0x1u;
L_010859c0:
    c.r[7] = c.r[7] + 0x1u;
L_010859c4:
    ea = c.r[5] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[6];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085958;
    }
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_010859e8;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_010859e8:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x10859f0u;
    f_801c8400(c);
R_010859f0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr701_01085a00(wp::Cpu& c) {
    WP_ENTER(0x1085a00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085a14u: goto R_01085a14;
        case 0x1085a88u: goto R_01085a88;
        case 0x1085accu: goto R_01085acc;
        case 0x1085b38u: goto R_01085b38;
        case 0x1085b84u: goto R_01085b84;
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
    c.lr = 0x1085a14u;
    f_801c83b4(c);
R_01085a14:
    c.r[9] = ((((g_mr701_bases[5] + 0x2e9a4u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9a4u) & 0xFFFFu);
    c.r[8] = wp::rd32(ea);
    c.r[9] = ea;
    c.r[27] = c.r[5] | c.r[5];
    c.r[30] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[9] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
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
    goto L_01085a70;
L_01085a6c:
    c.r[29] = c.r[29] + 0x4u;
L_01085a70:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01085a94;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085a88u;
    f_801c8244(c);
R_01085a88:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085a6c;
    }
L_01085a94:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085ab4;
    c.r[31] = 0x0u;
    goto L_01085ab8;
L_01085ab4:
    ea = c.r[29] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_01085ab8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085b00;
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x1085accu;
    f_8012be00(c);
R_01085acc:
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
    goto L_01085b7c;
L_01085b00:
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
    c.lr = 0x1085b38u;
    f_8012be00(c);
R_01085b38:
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
L_01085b7c:
    c.r[11] = c.r[1] + 0x70u;
    c.lr = 0x1085b84u;
    f_801c8400(c);
R_01085b84:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mr701_01085ba0(wp::Cpu& c) {
    WP_ENTER(0x1085ba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085bb4u: goto R_01085bb4;
        case 0x1085c20u: goto R_01085c20;
        case 0x1085c68u: goto R_01085c68;
        case 0x1085c98u: goto R_01085c98;
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
    c.lr = 0x1085bb4u;
    f_801c83b8(c);
R_01085bb4:
    c.r[8] = ((((g_mr701_bases[5] + 0x2e9b0u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9b0u) & 0xFFFFu);
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
    goto L_01085c08;
L_01085c04:
    c.r[30] = c.r[30] + 0x4u;
L_01085c08:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01085c2c;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085c20u;
    f_801c8244(c);
R_01085c20:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085c04;
    }
L_01085c2c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085c4c;
    c.r[31] = 0x0u;
    goto L_01085c50;
L_01085c4c:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_01085c50:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085c68u;
    wp::call(c, c.ctr);
R_01085c68:
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
    c.lr = 0x1085c98u;
    f_801c8404(c);
R_01085c98:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr701_01085cb0(wp::Cpu& c) {
    WP_ENTER(0x1085cb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085d34u: goto R_01085d34;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr701_bases[5] + 0x2e9bcu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9bcu) & 0xFFFFu);
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
    goto L_01085d1c;
L_01085d18:
    c.r[30] = c.r[30] + 0x4u;
L_01085d1c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01085d40;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085d34u;
    f_801c8244(c);
R_01085d34:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085d18;
    }
L_01085d40:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085d60;
    c.r[3] = 0x0u;
    goto L_01085d64;
L_01085d60:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01085d64:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085d84;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[29] & 0xffu;
    ea = c.r[4] + 0xbbu;
    c.r[3] = wp::rd8(ea);
    c.r[3] = c.r[3] & 0xfeu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0xbbu;
    wp::wr8(ea, c.r[0]);
L_01085d84:
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

void f_mr701_01085db0(wp::Cpu& c) {
    WP_ENTER(0x1085db0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085e34u: goto R_01085e34;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr701_bases[5] + 0x2e9c8u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9c8u) & 0xFFFFu);
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
    goto L_01085e1c;
L_01085e18:
    c.r[30] = c.r[30] + 0x4u;
L_01085e1c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01085e40;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085e34u;
    f_801c8244(c);
R_01085e34:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085e18;
    }
L_01085e40:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085e60;
    c.r[4] = 0x0u;
    goto L_01085e64;
L_01085e60:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_01085e64:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085ebc;
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
L_01085ebc:
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

void f_mr701_01085ee0(wp::Cpu& c) {
    WP_ENTER(0x1085ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085f64u: goto R_01085f64;
        case 0x1085fb4u: goto R_01085fb4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e9d4u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9d4u) & 0xFFFFu);
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
    goto L_01085f4c;
L_01085f48:
    c.r[30] = c.r[30] + 0x4u;
L_01085f4c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01085f70;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1085f64u;
    f_801c8244(c);
R_01085f64:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01085f48;
    }
L_01085f70:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01085f90;
    c.r[3] = 0x0u;
    goto L_01085f94;
L_01085f90:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01085f94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085fb4;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.f[1] = c.f[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x84u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085fb4u;
    wp::call(c, c.ctr);
L_01085fb4:
R_01085fb4:
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

void f_mr701_01085fe0(wp::Cpu& c) {
    WP_ENTER(0x1085fe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr701_01085ff0(wp::Cpu& c) {
    WP_ENTER(0x1085ff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086074u: goto R_01086074;
        case 0x10860ccu: goto R_010860cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr701_bases[5] + 0x2e9e0u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9e0u) & 0xFFFFu);
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
    goto L_0108605c;
L_01086058:
    c.r[30] = c.r[30] + 0x4u;
L_0108605c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01086080;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1086074u;
    f_801c8244(c);
R_01086074:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086058;
    }
L_01086080:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010860a0;
    c.r[3] = 0x0u;
    goto L_010860a4;
L_010860a0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010860a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010860cc;
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
    c.lr = 0x10860ccu;
    wp::call(c, c.ctr);
L_010860cc:
R_010860cc:
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

void f_mr701_010860f0(wp::Cpu& c) {
    WP_ENTER(0x10860f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x108u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr701_01086100(wp::Cpu& c) {
    WP_ENTER(0x1086100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108613cu: goto R_0108613c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = c.r[4] ^ 0x80000000u;
    c.r[4] = ((((g_mr701_bases[4] + 0x2f48u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2f48u) & 0xFFFFu);
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mr701_bases[4] + 0x2f44u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f44u) & 0xFFFFu);
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
    c.lr = 0x108613cu;
    f_80071fe0(c);
R_0108613c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_01086150(wp::Cpu& c) {
    WP_ENTER(0x1086150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10861ccu: goto R_010861cc;
        case 0x1086224u: goto R_01086224;
        case 0x1086248u: goto R_01086248;
        case 0x1086258u: goto R_01086258;
        case 0x108626cu: goto R_0108626c;
        case 0x108627cu: goto R_0108627c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e9ecu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9ecu) & 0xFFFFu);
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
    goto L_010861b4;
L_010861b0:
    c.r[30] = c.r[30] + 0x4u;
L_010861b4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010861d8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10861ccu;
    f_801c8244(c);
R_010861cc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010861b0;
    }
L_010861d8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010861f8;
    c.r[31] = 0x0u;
    goto L_010861fc;
L_010861f8:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010861fc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108620c;
    c.r[3] = 0x0u;
    goto L_010862c8;
L_0108620c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x64u;
    ea = c.r[12] + 0x1e8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086224u;
    wp::call(c, c.ctr);
R_01086224:
    ea = c.r[31] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x51ec0000u;
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] * c.r[3];
    c.r[3] = c.r[4] + 0xffff851fu;
    c.r[0] = wp::mulhwu(c.r[3], c.r[0]);
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1086248u;
    f_80071fe0(c);
R_01086248:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01086260;
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1086258u;
    f_80071fe0(c);
R_01086258:
    c.r[30] = c.r[3] | c.r[3];
    goto L_01086280;
L_01086260:
    c.r[31] = ((((g_mr701_bases[4] + 0x2f54u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f54u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108626cu;
    f_80071fe0(c);
R_0108626c:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01086280;
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f54u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108627cu;
    f_80071fe0(c);
R_0108627c:
    c.r[30] = c.r[3] | c.r[3];
L_01086280:
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
    if (!wp::cr_get(c, 0)) goto L_010862b8;
    c.r[30] = c.r[0] | c.r[0];
    goto L_010862c4;
L_010862b8:
    wp::compare_signed(c, 0, c.r[30], 0x190u);
    if (!wp::cr_get(c, 1)) goto L_010862c4;
    c.r[30] = 0x190u;
L_010862c4:
    c.r[3] = c.r[30] | c.r[30];
L_010862c8:
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

void f_mr701_010862f0(wp::Cpu& c) {
    WP_ENTER(0x10862f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108636cu: goto R_0108636c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2e9f8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e9f8u) & 0xFFFFu);
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
    goto L_01086354;
L_01086350:
    c.r[30] = c.r[30] + 0x4u;
L_01086354:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01086378;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108636cu;
    f_801c8244(c);
R_0108636c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086350;
    }
L_01086378:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01086398;
    c.r[5] = 0x0u;
    goto L_0108639c;
L_01086398:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0108639c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010863ac;
    c.r[3] = 0x0u;
    goto L_010863f4;
L_010863ac:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[9] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = c.r[3] | c.r[3];
    goto L_010863dc;
L_010863c0:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[6] = c.r[6] + 0x2u;
    c.r[0] = c.r[8] + c.r[0];
    c.r[9] = c.r[9] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_010863dc:
    wp::compare_unsigned(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_010863f4;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[6];
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010863c0;
    }
L_010863f4:
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

void f_mr701_01086410(wp::Cpu& c) {
    WP_ENTER(0x1086410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086440u: goto R_01086440;
        case 0x108645cu: goto R_0108645c;
        case 0x1086464u: goto R_01086464;
        case 0x108647cu: goto R_0108647c;
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
    c.lr = 0x1086440u;
    wp::call(c, c.ctr);
R_01086440:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1f0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108645cu;
    wp::call(c, c.ctr);
R_0108645c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1086464u;
    f_80019f20(c);
R_01086464:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1ecu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108647cu;
    wp::call(c, c.ctr);
R_0108647c:
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

void f_mr701_010864a0(wp::Cpu& c) {
    WP_ENTER(0x10864a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10864b4u: goto R_010864b4;
        case 0x10864d4u: goto R_010864d4;
        case 0x10864e0u: goto R_010864e0;
        case 0x10864fcu: goto R_010864fc;
        case 0x10865c4u: goto R_010865c4;
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
    c.lr = 0x10864b4u;
    f_801c83b8(c);
R_010864b4:
    c.r[30] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0xd0u;
    c.lr = 0x10864d4u;
    f_mr701_0108d370(c);
R_010864d4:
    c.r[3] = c.r[27] + 0xe0u;
    c.r[4] = 0x0u;
    c.lr = 0x10864e0u;
    f_mr701_0108d370(c);
R_010864e0:
    c.r[31] = 0x0u;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + 0xcu;
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x10864fcu;
    f_801cf394(c);
R_010864fc:
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
    c.lr = 0x10865c4u;
    f_801c8404(c);
R_010865c4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_010865e0(wp::Cpu& c) {
    WP_ENTER(0x10865e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108661cu: goto R_0108661c;
        case 0x108662cu: goto R_0108662c;
        case 0x1086650u: goto R_01086650;
        case 0x1086674u: goto R_01086674;
        case 0x1086690u: goto R_01086690;
        case 0x10866acu: goto R_010866ac;
        case 0x10866b8u: goto R_010866b8;
        case 0x10866c8u: goto R_010866c8;
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
    if (wp::cr_get(c, 2)) goto L_010866c8;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108661c;
    c.lr = 0x108661cu;
    f_80048f30(c);
L_0108661c:
R_0108661c:
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108662c;
    c.lr = 0x108662cu;
    f_80048f30(c);
L_0108662c:
R_0108662c:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086650;
    if (wp::cr_get(c, 2)) goto L_01086650;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086650u;
    wp::call(c, c.ctr);
L_01086650:
R_01086650:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086674;
    if (wp::cr_get(c, 2)) goto L_01086674;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086674u;
    wp::call(c, c.ctr);
L_01086674:
R_01086674:
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
L_0108667c:
    c.r[3] = c.r[28] + c.r[31];
    ea = c.r[3] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086690;
    c.lr = 0x1086690u;
    f_80048f30(c);
L_01086690:
R_01086690:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0xau);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108667c;
    }
    c.r[3] = c.r[28] + 0xe0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10866acu;
    f_mr701_0108d3d0(c);
R_010866ac:
    c.r[3] = c.r[28] + 0xd0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10866b8u;
    f_mr701_0108d3d0(c);
R_010866b8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010866c8;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10866c8u;
    f_801c7a8c(c);
L_010866c8:
R_010866c8:
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

void f_mr701_010866f0(wp::Cpu& c) {
    WP_ENTER(0x10866f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108671cu: goto R_0108671c;
        case 0x108672cu: goto R_0108672c;
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
    if (wp::cr_get(c, 2)) goto L_0108672c;
    c.r[4] = 0x0u;
    c.lr = 0x108671cu;
    f_8012bbc0(c);
R_0108671c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108672c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108672cu;
    f_801c7a8c(c);
L_0108672c:
R_0108672c:
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

void f_mr701_01086750(wp::Cpu& c) {
    WP_ENTER(0x1086750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086788u: goto R_01086788;
        case 0x10867c0u: goto R_010867c0;
        case 0x1086974u: goto R_01086974;
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
    if (wp::cr_get(c, 2)) goto L_01086788;
    c.r[3] = c.r[0] | c.r[0];
    c.lr = 0x1086788u;
    f_80048f30(c);
L_01086788:
R_01086788:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[31] = 0x0u;
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01086974;
    c.r[30] = 0x0u;
    goto L_010867a8;
L_010867a0:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x2u;
L_010867a8:
    ea = c.r[29] + c.r[31];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010867a0;
    }
    c.r[0] = c.r[30] + 0x1u;
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x10867c0u;
    f_80048ec0(c);
R_010867c0:
    wp::compare_signed(c, 1, c.r[30], 0x0u);
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 5)) goto L_010868d8;
    wp::compare_signed(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_010868a8;
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_010867f8;
    c.r[3] = 0x80000000u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010867f8;
    c.r[4] = 0x1u;
L_010867f8:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010868a8;
    c.r[0] = c.r[6] + 0x7u;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = 0x0u;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010868a8;
L_0108681c:
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
    goto L_0108681c;
    }
L_010868a8:
    c.r[6] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    c.r[0] = c.r[30] - c.r[5];
    c.r[4] = c.r[29] + c.r[6];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010868d8;
L_010868c0:
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
    goto L_010868c0;
    }
L_010868d8:
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
    if (!wp::cr_get(c, 1)) goto L_01086968;
    c.r[0] = c.r[0] | 0x0u;
L_01086910:
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[6];
    ea = c.r[6] + c.r[0];
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5bu);
    if (!wp::cr_get(c, 2)) goto L_0108695c;
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x77u);
    if (!wp::cr_get(c, 2)) goto L_0108695c;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5du);
    if (!wp::cr_get(c, 2)) goto L_0108695c;
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
L_0108695c:
    c.r[6] = c.r[6] + 0x2u;
    c.r[7] = c.r[7] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01086910;
    }
L_01086968:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1086974u;
    f_mr701_010869a0(c);
L_01086974:
R_01086974:
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

void f_mr701_010869a0(wp::Cpu& c) {
    WP_ENTER(0x10869a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10869b4u: goto R_010869b4;
        case 0x1086a80u: goto R_01086a80;
        case 0x1086a88u: goto R_01086a88;
        case 0x1086a98u: goto R_01086a98;
        case 0x1086ab0u: goto R_01086ab0;
        case 0x1086ac8u: goto R_01086ac8;
        case 0x1087614u: goto R_01087614;
        case 0x1087630u: goto R_01087630;
        case 0x1087638u: goto R_01087638;
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
    c.lr = 0x10869b4u;
    f_801c8384(c);
R_010869b4:
    c.r[31] = 0x0u;
    ea = c.r[3] + 0xbdu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[3] + 0xa0u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = ((((g_mr701_bases[5] + 0x2e890u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0xbcu;
    wp::wr8(ea, c.r[31]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = c.r[5] + 0x1u;
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xa4u;
    wp::wr32(ea, c.r[31]);
    c.r[14] = c.r[0] & 0xffffu;
    c.r[16] = c.r[16] + wp::sign_extend16((g_mr701_bases[5] + 0x2e890u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 0)) goto L_01086a6c;
    c.r[14] = 0x40u;
L_01086a6c:
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[15] = wp::rotl(c.r[14], 1) & 0x1fffeu;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086a80;
    c.lr = 0x1086a80u;
    f_80048f30(c);
L_01086a80:
R_01086a80:
    c.r[3] = c.r[15] | c.r[15];
    c.lr = 0x1086a88u;
    f_80048ec0(c);
R_01086a88:
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x1086a98u;
    f_80004714(c);
R_01086a98:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086ab0u;
    wp::call(c, c.ctr);
R_01086ab0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086ac8u;
    wp::call(c, c.ctr);
R_01086ac8:
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
    if (!wp::cr_get(c, 2)) goto L_01086af0;
    c.r[30] = 0x1u;
L_01086af0:
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
    goto L_010875d8;
L_01086b20:
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
    if (!wp::cr_get(c, 2)) goto L_01086c58;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[14] | c.r[14];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_01086be4;
L_01086b70:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01086b8c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01086be4;
L_01086b8c:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01086bbc;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01086bbc;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01086be4;
L_01086bbc:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01086bd8;
    c.r[5] = 0x0u;
    goto L_01086bf4;
L_01086bd8:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_01086be4:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086b70;
    }
    c.r[5] = 0x1u;
L_01086bf4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086c58;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[5] = c.r[5] + 0xffffffd0u;
    c.r[5] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[6] = c.r[28] + c.r[5];
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086c4c;
    c.r[17] = 0x0u;
    goto L_01086c3c;
    c.r[0] = c.r[0] | 0x0u;
L_01086c28:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[17] + 0x2u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[18]);
    c.r[16] = c.r[16] + 0x2u;
L_01086c3c:
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[17];
    c.r[18] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086c28;
    }
L_01086c4c:
    c.r[31] = c.r[31] + 0xffffffffu;
    c.r[21] = c.r[21] + 0x4u;
    goto L_01086fc4;
L_01086c58:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01086e44;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[15] | c.r[15];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_01086cec;
L_01086c78:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01086c94;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01086cec;
L_01086c94:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01086cc4;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01086cc4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01086cec;
L_01086cc4:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01086ce0;
    c.r[5] = 0x0u;
    goto L_01086cfc;
L_01086ce0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_01086cec:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086c78;
    }
    c.r[5] = 0x1u;
L_01086cfc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086e44;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x6u;
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x63u);
    if (wp::cr_get(c, 2)) goto L_01086e20;
    if (!wp::cr_get(c, 0)) goto L_01086d60;
    wp::compare_signed(c, 0, c.r[5], 0x31u);
    if (wp::cr_get(c, 2)) goto L_01086e00;
    if (!wp::cr_get(c, 0)) goto L_01086d48;
    wp::compare_signed(c, 0, c.r[5], 0x2cu);
    if (wp::cr_get(c, 2)) goto L_01086e3c;
    if (!wp::cr_get(c, 0)) goto L_01086d3c;
    wp::compare_signed(c, 0, c.r[5], 0x2bu);
    if (!wp::cr_get(c, 0)) goto L_01086de0;
    goto L_01086e3c;
L_01086d3c:
    wp::compare_signed(c, 0, c.r[5], 0x2eu);
    if (!wp::cr_get(c, 0)) goto L_01086e3c;
    goto L_01086df0;
L_01086d48:
    wp::compare_signed(c, 0, c.r[5], 0x61u);
    if (wp::cr_get(c, 2)) goto L_01086db0;
    if (!wp::cr_get(c, 0)) goto L_01086dc0;
    wp::compare_signed(c, 0, c.r[5], 0x33u);
    if (!wp::cr_get(c, 0)) goto L_01086e3c;
    goto L_01086e10;
L_01086d60:
    wp::compare_signed(c, 0, c.r[5], 0x78u);
    if (wp::cr_get(c, 2)) goto L_01086da0;
    if (!wp::cr_get(c, 0)) goto L_01086d84;
    wp::compare_signed(c, 0, c.r[5], 0x70u);
    if (wp::cr_get(c, 2)) goto L_01086d90;
    if (!wp::cr_get(c, 0)) goto L_01086e3c;
    wp::compare_signed(c, 0, c.r[5], 0x68u);
    if (wp::cr_get(c, 2)) goto L_01086dd0;
    goto L_01086e3c;
L_01086d84:
    wp::compare_signed(c, 0, c.r[5], 0x7au);
    if (wp::cr_get(c, 2)) goto L_01086e30;
    goto L_01086e3c;
L_01086d90:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe040u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086da0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe041u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086db0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe042u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086dc0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe043u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086dd0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe044u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086de0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe045u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086df0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe046u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086e00:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe047u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086e10:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe048u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086e20:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04au;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086e3c;
L_01086e30:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04bu;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
L_01086e3c:
    c.r[21] = c.r[21] + 0x5u;
    goto L_01086fc4;
L_01086e44:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01086f08;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[19] = c.r[9] | c.r[9];
    c.r[6] = 0x0u;
    c.r[18] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_01086edc;
    c.r[0] = c.r[0] | 0x0u;
L_01086e68:
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::compare_signed(c, 0, c.r[20], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01086e84;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_01086edc;
L_01086e84:
    wp::compare_signed(c, 0, c.r[20], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01086eb4;
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[20] = c.r[20] + 0x10000u;
    c.r[20] = c.r[20] + 0xffffffd0u;
    c.r[20] = c.r[20] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01086eb4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_01086edc;
L_01086eb4:
    c.r[17] = wp::sign_extend8(c.r[17]);
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], c.r[17]);
    if (wp::cr_get(c, 2)) goto L_01086ed0;
    c.r[5] = 0x0u;
    goto L_01086eec;
L_01086ed0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_01086edc:
    ea = c.r[19] + 0x0u;
    c.r[17] = wp::rd8(ea);
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::record(c, c.r[20]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086e68;
    }
    c.r[5] = 0x1u;
L_01086eec:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086f08;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe049u;
    c.r[21] = c.r[21] + 0x5u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_01086fc4;
L_01086f08:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01086fc4;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_01086f9c;
L_01086f28:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01086f44;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_01086f9c;
L_01086f44:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01086f74;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01086f74;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_01086f9c;
L_01086f74:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01086f90;
    c.r[5] = 0x0u;
    goto L_01086fac;
L_01086f90:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_01086f9c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086f28;
    }
    c.r[5] = 0x1u;
L_01086fac:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086fc4;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbcu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
    goto L_010875e4;
L_01086fc4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01087348;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[11] | c.r[11];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0108705c;
    c.r[0] = c.r[0] | 0x0u;
L_01086fe8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01087004;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0108705c;
L_01087004:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01087034;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01087034;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0108705c;
L_01087034:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01087050;
    c.r[5] = 0x0u;
    goto L_0108706c;
L_01087050:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0108705c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086fe8;
    }
    c.r[5] = 0x1u;
L_0108706c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087348;
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
    if (wp::cr_get(c, 1)) goto L_010870a8;
    goto L_010870d4;
L_010870a8:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010870bc;
    c.r[17] = c.r[6] + 0xau;
    goto L_010870d4;
L_010870bc:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010870d4:
    ea = c.r[16] + 0x8u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010870e8;
    goto L_01087114;
L_010870e8:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010870fc;
    c.r[6] = c.r[6] + 0xau;
    goto L_01087114;
L_010870fc:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_01087114:
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
    if (wp::cr_get(c, 1)) goto L_0108713c;
    goto L_01087168;
L_0108713c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01087150;
    c.r[17] = c.r[6] + 0xau;
    goto L_01087168;
L_01087150:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_01087168:
    ea = c.r[16] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0108717c;
    goto L_010871a8;
L_0108717c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01087190;
    c.r[6] = c.r[6] + 0xau;
    goto L_010871a8;
L_01087190:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_010871a8:
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
    if (wp::cr_get(c, 1)) goto L_010871d0;
    goto L_010871fc;
L_010871d0:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010871e4;
    c.r[17] = c.r[6] + 0xau;
    goto L_010871fc;
L_010871e4:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010871fc:
    ea = c.r[16] + 0x10u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01087210;
    goto L_0108723c;
L_01087210:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01087224;
    c.r[6] = c.r[6] + 0xau;
    goto L_0108723c;
L_01087224:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0108723c:
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
    if (wp::cr_get(c, 1)) goto L_01087264;
    goto L_01087290;
L_01087264:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01087278;
    c.r[16] = c.r[5] + 0xau;
    goto L_01087290;
L_01087278:
    c.r[16] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[16], 0);
    c.r[4] = c.r[16] + 0xau;
    c.r[5] = c.r[16] - c.r[5];
    c.r[16] = c.r[4] & c.r[5];
L_01087290:
    ea = c.r[6] + 0x14u;
    c.r[4] = wp::rd16(ea);
    c.r[5] = c.r[4] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[5], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010872a4;
    goto L_010872d0;
L_010872a4:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010872b8;
    c.r[5] = c.r[5] + 0xau;
    goto L_010872d0;
L_010872b8:
    c.r[6] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[6], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[6], 0);
    c.r[4] = c.r[6] + 0xau;
    c.r[5] = c.r[6] - c.r[5];
    c.r[5] = c.r[4] & c.r[5];
L_010872d0:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::rotl(c.r[5], 4) & 0xfffffff0u;
    c.r[5] = c.r[16] + c.r[5];
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010872ec;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
L_010872ec:
    ea = c.r[1] + 0x9u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010872fc;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[0]);
L_010872fc:
    ea = c.r[1] + 0xau;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108730c;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_0108730c:
    ea = c.r[1] + 0xbu;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108731c;
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
L_0108731c:
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
    goto L_010875d0;
L_01087348:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010875b4;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[12] | c.r[12];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010873dc;
L_01087368:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01087384;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010873dc;
L_01087384:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010873b4;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010873b4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010873dc;
L_010873b4:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010873d0;
    c.r[5] = 0x0u;
    goto L_010873ec;
L_010873d0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_010873dc:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087368;
    }
    c.r[5] = 0x1u;
L_010873ec:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010875b4;
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
    goto L_01087454;
L_01087428:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01087438;
    c.r[16] = 0x1u;
    goto L_0108746c;
L_01087438:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x1u;
    c.r[6] = c.r[6] + 0x2u;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[20]);
    c.r[4] = c.r[4] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_01087454:
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[6];
    c.r[20] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[20], 0x5du);
    if (wp::cr_get(c, 2)) goto L_0108746c;
    wp::compare_signed(c, 0, c.r[19], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01087428;
    }
L_0108746c:
    c.r[4] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[5] + c.r[4];
    c.r[4] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087480;
    c.r[3] = c.r[3] + 0x1u;
L_01087480:
    c.r[24] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[20] = 0x0u;
    goto L_010874bc;
L_01087490:
    ea = c.r[23] + c.r[24];
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010874a4;
    c.r[16] = 0x1u;
    goto L_0108756c;
L_010874a4:
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[24] = c.r[24] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[4] + c.r[3];
    wp::wr16(ea, c.r[5]);
    c.r[3] = c.r[3] + 0x2u;
L_010874bc:
    ea = c.r[28] + 0x20u;
    c.r[23] = wp::rd32(ea);
    c.r[5] = c.r[26] | c.r[26];
    c.r[25] = 0x0u;
    c.r[4] = 0x0u;
    c.r[27] = c.r[23] + c.r[24];
    goto L_0108754c;
    c.r[0] = c.r[0] | 0x0u;
L_010874d8:
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010874f4;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0108754c;
L_010874f4:
    wp::compare_signed(c, 0, c.r[6], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01087524;
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[6] = c.r[6] + 0x10000u;
    c.r[6] = c.r[6] + 0xffffffd0u;
    c.r[6] = c.r[6] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01087524;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0108754c;
L_01087524:
    c.r[22] = wp::sign_extend8(c.r[22]);
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], c.r[22]);
    if (wp::cr_get(c, 2)) goto L_01087540;
    c.r[4] = 0x0u;
    goto L_0108755c;
L_01087540:
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
L_0108754c:
    ea = c.r[5] + 0x0u;
    c.r[22] = wp::rd8(ea);
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010874d8;
    }
    c.r[4] = 0x1u;
L_0108755c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108756c;
    wp::compare_signed(c, 0, c.r[20], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01087490;
    }
L_0108756c:
    wp::compare_signed(c, 0, c.r[16], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108758c;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[17], 1) & 0xfffffffeu;
    c.r[3] = 0x0u;
    c.r[31] = c.r[17] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[3]);
    goto L_010875d0;
L_0108758c:
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
    goto L_010875d0;
L_010875b4:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010875d0;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbdu;
    wp::wr8(ea, c.r[0]);
    goto L_010875e4;
L_010875d0:
    c.r[21] = c.r[21] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
L_010875d8:
    ea = c.r[28] + 0xa0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[21], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01086b20;
    }
L_010875e4:
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
    c.lr = 0x1087614u;
    wp::call(c, c.ctr);
R_01087614:
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
    c.lr = 0x1087630u;
    wp::call(c, c.ctr);
R_01087630:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x1087638u;
    f_801c83d0(c);
R_01087638:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr701_01087650(wp::Cpu& c) {
    WP_ENTER(0x1087650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087664u: goto R_01087664;
        case 0x1087688u: goto R_01087688;
        case 0x10876d0u: goto R_010876d0;
        case 0x10879bcu: goto R_010879bc;
        case 0x10879c4u: goto R_010879c4;
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
    c.lr = 0x1087664u;
    f_801c8390(c);
R_01087664:
    c.r[18] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[29] = c.r[3] | c.r[3];
    c.r[17] = c.r[3] + c.r[18];
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[17] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087688;
    c.lr = 0x1087688u;
    f_80048f30(c);
L_01087688:
R_01087688:
    c.r[4] = 0x0u;
    ea = c.r[17] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] + c.r[18];
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    ea = c.r[3] + 0x50u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010879bc;
    c.r[3] = 0x0u;
    goto L_010876b0;
L_010876a8:
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
L_010876b0:
    ea = c.r[30] + c.r[4];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010876a8;
    }
    c.r[17] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + 0x10u;
    c.r[28] = c.r[29] + c.r[17];
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x10876d0u;
    f_80048ec0(c);
R_010876d0:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[12] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[27] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087990;
    c.r[4] = ((((g_mr701_bases[5] + 0x2ea2cu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr701_bases[5] + 0x2ea30u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2ea2cu) & 0xFFFFu);
    c.r[7] = c.r[28] | c.r[28];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2ea30u) & 0xFFFFu);
    c.r[3] = 0xcu;
    c.r[0] = 0x5bu;
    goto L_01087980;
L_01087708:
    c.r[18] = c.r[30] + c.r[8];
    c.r[9] = c.r[4] | c.r[4];
    c.r[17] = 0x0u;
    c.r[8] = 0x0u;
    goto L_01087794;
    c.r[0] = c.r[0] | 0x0u;
L_01087720:
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[10], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0108773c;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_01087794;
L_0108773c:
    wp::compare_signed(c, 0, c.r[10], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0108776c;
    ea = c.r[18] + c.r[8];
    c.r[10] = wp::rd16(ea);
    c.r[10] = c.r[10] + 0x10000u;
    c.r[10] = c.r[10] + 0xffffffd0u;
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[10], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0108776c;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_01087794;
L_0108776c:
    c.r[10] = wp::sign_extend8(c.r[11]);
    ea = c.r[18] + c.r[8];
    c.r[11] = wp::rd16(ea);
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[11], c.r[10]);
    if (wp::cr_get(c, 2)) goto L_01087788;
    c.r[8] = 0x0u;
    goto L_010877a4;
L_01087788:
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
L_01087794:
    ea = c.r[9] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[10]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087720;
    }
    c.r[8] = 0x1u;
L_010877a4:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108796c;
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
    goto L_01087814;
    c.r[0] = c.r[0] | 0x0u;
L_010877e8:
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010877f8;
    c.r[21] = 0x1u;
    goto L_01087828;
L_010877f8:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[12] = c.r[12] + 0x1u;
    c.r[9] = c.r[9] + 0x2u;
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[10]);
    c.r[6] = c.r[6] + 0x2u;
    c.r[25] = c.r[25] + 0x1u;
L_01087814:
    ea = c.r[9] + 0x0u;
    c.r[10] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[10], 0x5du);
    if (wp::cr_get(c, 2)) goto L_01087828;
    wp::compare_signed(c, 0, c.r[25], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010877e8;
    }
L_01087828:
    c.r[6] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[6];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108783c;
    c.r[27] = c.r[27] + 0x1u;
L_0108783c:
    c.r[10] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    c.r[20] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[26] = 0x0u;
    c.r[9] = c.r[30] + c.r[10];
    goto L_01087884;
L_01087850:
    ea = c.r[9] + 0x0u;
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01087864;
    c.r[21] = 0x1u;
    goto L_0108792c;
L_01087864:
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
L_01087884:
    c.r[18] = c.r[5] | c.r[5];
    c.r[8] = c.r[30] + c.r[10];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    goto L_0108790c;
L_01087898:
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[17], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010878b4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0108790c;
L_010878b4:
    wp::compare_signed(c, 0, c.r[17], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010878e4;
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[17] = c.r[17] + 0x10000u;
    c.r[17] = c.r[17] + 0xffffffd0u;
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010878e4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0108790c;
L_010878e4:
    c.r[11] = wp::sign_extend8(c.r[11]);
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[11] = c.r[11] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], c.r[11]);
    if (wp::cr_get(c, 2)) goto L_01087900;
    c.r[6] = 0x0u;
    goto L_0108791c;
L_01087900:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
L_0108790c:
    ea = c.r[18] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[17]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087898;
    }
    c.r[6] = 0x1u;
L_0108791c:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108792c;
    wp::compare_signed(c, 0, c.r[26], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01087850;
    }
L_0108792c:
    wp::compare_signed(c, 0, c.r[21], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108794c;
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[23], 1) & 0xfffffffeu;
    c.r[12] = c.r[23] | c.r[23];
    c.r[27] = c.r[22] | c.r[22];
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[0]);
    goto L_01087978;
L_0108794c:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[9] = c.r[26] & 0xffu;
    c.r[6] = wp::rotl(c.r[24], 1) & 0xfffffffeu;
    c.r[27] = c.r[27] + 0x3u;
    c.r[9] = (wp::rotl(c.r[25], 8) & 0xff00u) | (c.r[9] & 0xffff00ffu);
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[9]);
    c.r[12] = c.r[12] + 0xffffffffu;
    goto L_01087978;
L_0108796c:
    ea = c.r[7] + 0x28u;
    c.r[9] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    ea = c.r[9] + c.r[8];
    wp::wr16(ea, c.r[6]);
L_01087978:
    c.r[27] = c.r[27] + 0x1u;
    c.r[12] = c.r[12] + 0x1u;
L_01087980:
    c.r[8] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[8];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087708;
    }
L_01087990:
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
    c.lr = 0x10879bcu;
    f_mr701_010869a0(c);
L_010879bc:
R_010879bc:
    c.r[11] = c.r[1] + 0x50u;
    c.lr = 0x10879c4u;
    f_801c83dc(c);
R_010879c4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr701_010879e0(wp::Cpu& c) {
    WP_ENTER(0x10879e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10879f4u: goto R_010879f4;
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
    c.lr = 0x10879f4u;
    f_801cf510(c);
R_010879f4:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_01087a10(wp::Cpu& c) {
    WP_ENTER(0x1087a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087a68u: goto R_01087a68;
        case 0x1087aa4u: goto R_01087aa4;
        case 0x1087ab0u: goto R_01087ab0;
        case 0x1087ac0u: goto R_01087ac0;
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
    if (wp::cr_get(c, 2)) goto L_01087ac0;
    if (wp::cr_get(c, 2)) goto L_01087ab0;
    c.r[4] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_01087a68;
L_01087a48:
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
    c.lr = 0x1087a68u;
    wp::call(c, c.ctr);
L_01087a68:
R_01087a68:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087a48;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01087aa4;
    if (wp::cr_get(c, 2)) goto L_01087aa4;
    if (wp::cr_get(c, 2)) goto L_01087aa4;
    if (wp::cr_get(c, 2)) goto L_01087aa4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087aa4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1087aa4u;
    f_801c7a8c(c);
L_01087aa4:
R_01087aa4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1087ab0u;
    f_8003fb90(c);
L_01087ab0:
R_01087ab0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01087ac0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1087ac0u;
    f_801c7a8c(c);
L_01087ac0:
R_01087ac0:
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

void f_mr701_01087ae0(wp::Cpu& c) {
    WP_ENTER(0x1087ae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087b30u: goto R_01087b30;
        case 0x1087b40u: goto R_01087b40;
        case 0x1087b50u: goto R_01087b50;
        case 0x1087b88u: goto R_01087b88;
        case 0x1087b9cu: goto R_01087b9c;
        case 0x1087bb0u: goto R_01087bb0;
        case 0x1087bc4u: goto R_01087bc4;
        case 0x1087bdcu: goto R_01087bdc;
        case 0x1087becu: goto R_01087bec;
        case 0x1087c00u: goto R_01087c00;
        case 0x1087c0cu: goto R_01087c0c;
        case 0x1087c1cu: goto R_01087c1c;
        case 0x1087c74u: goto R_01087c74;
        case 0x1087c84u: goto R_01087c84;
        case 0x1087c94u: goto R_01087c94;
        case 0x1087ca8u: goto R_01087ca8;
        case 0x1087cbcu: goto R_01087cbc;
        case 0x1087ce8u: goto R_01087ce8;
        case 0x1087cf0u: goto R_01087cf0;
        case 0x1087cfcu: goto R_01087cfc;
        case 0x1087d04u: goto R_01087d04;
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
    c.r[29] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
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
    c.lr = 0x1087b30u;
    f_8014c170(c);
R_01087b30:
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[1] + 0x7cu;
    c.lr = 0x1087b40u;
    f_800f5a50(c);
R_01087b40:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x7cu;
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x1087b50u;
    f_800f5a70(c);
R_01087b50:
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
    c.lr = 0x1087b88u;
    f_800f5aa0(c);
R_01087b88:
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
    c.lr = 0x1087b9cu;
    f_800f5ae0(c);
R_01087b9c:
    ea = c.r[29] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[1] + 0x7cu;
    ea = c.r[29] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[3] = c.f[2];
    c.lr = 0x1087bb0u;
    f_800f5b60(c);
R_01087bb0:
    ea = c.r[29] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[1] + 0x7cu;
    ea = c.r[29] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[3] = c.f[2];
    c.lr = 0x1087bc4u;
    f_800f5be0(c);
R_01087bc4:
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = c.r[0] | 0x4u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1087bdcu;
    f_800f5a50(c);
R_01087bdc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x38u;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x1087becu;
    f_800f5a70(c);
R_01087bec:
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
    c.lr = 0x1087c00u;
    f_800f5c20(c);
R_01087c00:
    ea = c.r[29] + 0x98u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x1087c0cu;
    f_800f5c60(c);
R_01087c0c:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x4u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1087c1cu;
    f_8004aa80(c);
R_01087c1c:
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
    if (!wp::cr_get(c, 0)) goto L_01087c5c;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01087c5c;
    c.r[0] = c.r[29] * 0xcu;
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    goto L_01087c68;
L_01087c5c:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
L_01087c68:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x1087c74u;
    f_800f64c0(c);
R_01087c74:
    c.r[3] = c.r[1] + 0x18u;
    c.r[5] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x0u;
    c.lr = 0x1087c84u;
    f_800f6450(c);
R_01087c84:
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x1u;
    c.lr = 0x1087c94u;
    f_800f6450(c);
R_01087c94:
    c.r[30] = 0x2u;
L_01087c98:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x1087ca8u;
    f_800f6450(c);
R_01087ca8:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01087c98;
    }
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x1087cbcu;
    f_800f6400(c);
R_01087cbc:
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
    c.lr = 0x1087ce8u;
    f_800f63a0(c);
R_01087ce8:
    c.r[4] = c.r[1] + 0x7cu;
    c.lr = 0x1087cf0u;
    f_800f5a00(c);
R_01087cf0:
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x1u;
    c.lr = 0x1087cfcu;
    f_800f63a0(c);
R_01087cfc:
    c.r[4] = c.r[1] + 0x38u;
    c.lr = 0x1087d04u;
    f_800f5a00(c);
R_01087d04:
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

void f_mr701_01087d30(wp::Cpu& c) {
    WP_ENTER(0x1087d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087d44u: goto R_01087d44;
        case 0x1087d88u: goto R_01087d88;
        case 0x1087db8u: goto R_01087db8;
        case 0x1087df8u: goto R_01087df8;
        case 0x1087e14u: goto R_01087e14;
        case 0x1087e50u: goto R_01087e50;
        case 0x1087e68u: goto R_01087e68;
        case 0x1087e9cu: goto R_01087e9c;
        case 0x1087eb8u: goto R_01087eb8;
        case 0x1087ed8u: goto R_01087ed8;
        case 0x1087ef4u: goto R_01087ef4;
        case 0x1087f14u: goto R_01087f14;
        case 0x1087f30u: goto R_01087f30;
        case 0x1087f54u: goto R_01087f54;
        case 0x1087f74u: goto R_01087f74;
        case 0x1087f84u: goto R_01087f84;
        case 0x1087fa4u: goto R_01087fa4;
        case 0x1087fd4u: goto R_01087fd4;
        case 0x1087fecu: goto R_01087fec;
        case 0x1087ff4u: goto R_01087ff4;
        case 0x1088014u: goto R_01088014;
        case 0x1088044u: goto R_01088044;
        case 0x108805cu: goto R_0108805c;
        case 0x1088078u: goto R_01088078;
        case 0x10880a4u: goto R_010880a4;
        case 0x10880d4u: goto R_010880d4;
        case 0x10880dcu: goto R_010880dc;
        case 0x10880e8u: goto R_010880e8;
        case 0x108811cu: goto R_0108811c;
        case 0x1088128u: goto R_01088128;
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
    c.lr = 0x1087d44u;
    f_801c83a4(c);
R_01087d44:
    c.r[24] = ((((g_mr701_bases[5] + 0x2e890u) + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[24] + wp::sign_extend16((g_mr701_bases[5] + 0x2e890u) & 0xFFFFu);
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
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    c.r[4] = c.r[24] + 0x1f0u;
    c.lr = 0x1087d88u;
    f_8003f8f0(c);
R_01087d88:
    c.r[3] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
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
    c.lr = 0x1087db8u;
    f_80063370(c);
R_01087db8:
    c.r[4] = ((((g_mr701_bases[5] + 0x2f2a8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f2a8u) & 0xFFFFu);
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
    c.lr = 0x1087df8u;
    f_80071fe0(c);
R_01087df8:
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
    c.lr = 0x1087e14u;
    f_80071fe0(c);
R_01087e14:
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
    c.lr = 0x1087e50u;
    wp::call(c, c.ctr);
R_01087e50:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e68u;
    wp::call(c, c.ctr);
R_01087e68:
    wp::compare_signed(c, 0, c.r[22], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087e84;
    wp::compare_signed(c, 0, c.r[22], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01087ec0;
    wp::compare_signed(c, 0, c.r[22], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01087efc;
    goto L_01087f34;
L_01087e84:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x204u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e9cu;
    wp::call(c, c.ctr);
R_01087e9c:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x21cu;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087eb8u;
    wp::call(c, c.ctr);
R_01087eb8:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
    goto L_01087f34;
L_01087ec0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x234u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087ed8u;
    wp::call(c, c.ctr);
R_01087ed8:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x248u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087ef4u;
    wp::call(c, c.ctr);
R_01087ef4:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
    goto L_01087f34;
L_01087efc:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x260u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087f14u;
    wp::call(c, c.ctr);
R_01087f14:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x278u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087f30u;
    wp::call(c, c.ctr);
R_01087f30:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
L_01087f34:
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
    c.lr = 0x1087f54u;
    wp::call(c, c.ctr);
R_01087f54:
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
    c.lr = 0x1087f74u;
    wp::call(c, c.ctr);
R_01087f74:
    wp::compare_signed(c, 0, c.r[22], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088060;
    c.r[3] = 0x19cu;
    c.lr = 0x1087f84u;
    f_801c79a4(c);
R_01087f84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087fa4;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[8] = c.r[23] | c.r[23];
    c.r[7] = 0x1u;
    c.lr = 0x1087fa4u;
    f_mr701_01087d30(c);
L_01087fa4:
R_01087fa4:
    ea = c.r[28] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01087fd4;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x18cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087fd4;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087fd4u;
    wp::call(c, c.ctr);
L_01087fd4:
R_01087fd4:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087fecu;
    wp::call(c, c.ctr);
R_01087fec:
    c.r[3] = 0x19cu;
    c.lr = 0x1087ff4u;
    f_801c79a4(c);
R_01087ff4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088014;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[8] = c.r[23] | c.r[23];
    c.r[7] = 0x2u;
    c.lr = 0x1088014u;
    f_mr701_01087d30(c);
L_01088014:
R_01088014:
    ea = c.r[28] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01088044;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x190u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088044;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088044u;
    wp::call(c, c.ctr);
L_01088044:
R_01088044:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108805cu;
    wp::call(c, c.ctr);
R_0108805c:
    goto L_01088104;
L_01088060:
    wp::compare_signed(c, 0, c.r[22], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010880f4;
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010880e8;
    c.r[3] = 0x30cu;
    c.lr = 0x1088078u;
    f_801c79a4(c);
R_01088078:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010880a4;
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
    c.lr = 0x10880a4u;
    f_mr701_0108aac0(c);
L_010880a4:
R_010880a4:
    ea = c.r[28] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010880d4;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x194u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010880d4;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10880d4u;
    wp::call(c, c.ctr);
L_010880d4:
R_010880d4:
    ea = c.r[28] + 0x194u;
    c.r[24] = wp::rd32(ea);
    c.lr = 0x10880dcu;
    f_mr701_01087ae0(c);
R_010880dc:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10880e8u;
    f_mr701_01035e60(c);
L_010880e8:
R_010880e8:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x140u;
    wp::wr8(ea, c.r[0]);
    goto L_01088104;
L_010880f4:
    wp::compare_signed(c, 0, c.r[22], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_01088104;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x140u;
    wp::wr8(ea, c.r[0]);
L_01088104:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108811cu;
    wp::call(c, c.ctr);
R_0108811c:
    c.r[11] = c.r[1] + 0x40u;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1088128u;
    f_801c83f0(c);
R_01088128:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr701_01088140(wp::Cpu& c) {
    WP_ENTER(0x1088140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108817cu: goto R_0108817c;
        case 0x10881a4u: goto R_010881a4;
        case 0x10881ccu: goto R_010881cc;
        case 0x10881f4u: goto R_010881f4;
        case 0x108821cu: goto R_0108821c;
        case 0x1088228u: goto R_01088228;
        case 0x1088260u: goto R_01088260;
        case 0x108829cu: goto R_0108829c;
        case 0x10882a8u: goto R_010882a8;
        case 0x10882b8u: goto R_010882b8;
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
    if (wp::cr_get(c, 2)) goto L_010882b8;
    c.r[4] = ((((g_mr701_bases[5] + 0x2f2a8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f2a8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x1f8u;
    ea = c.r[3] + 0x120u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108817cu;
    f_8001a010(c);
R_0108817c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x198u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010881a4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010881a4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10881a4u;
    wp::call(c, c.ctr);
L_010881a4:
R_010881a4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x194u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010881cc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010881cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10881ccu;
    wp::call(c, c.ctr);
L_010881cc:
R_010881cc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x190u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010881f4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010881f4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10881f4u;
    wp::call(c, c.ctr);
L_010881f4:
R_010881f4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x18cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108821c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108821c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108821cu;
    wp::call(c, c.ctr);
L_0108821c:
R_0108821c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1088228u;
    f_80063bb0(c);
R_01088228:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010882a8;
    c.r[3] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01088260;
L_01088240:
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
    c.lr = 0x1088260u;
    wp::call(c, c.ctr);
L_01088260:
R_01088260:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088240;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0108829c;
    if (wp::cr_get(c, 2)) goto L_0108829c;
    if (wp::cr_get(c, 2)) goto L_0108829c;
    if (wp::cr_get(c, 2)) goto L_0108829c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108829c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108829cu;
    f_801c7a8c(c);
L_0108829c:
R_0108829c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10882a8u;
    f_8003fb90(c);
L_010882a8:
R_010882a8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010882b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10882b8u;
    f_801c7a8c(c);
L_010882b8:
R_010882b8:
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

void f_mr701_010882e0(wp::Cpu& c) {
    WP_ENTER(0x10882e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    wp::wr16(ea, c.r[4]);
    return;
}

void f_mr701_010882f0(wp::Cpu& c) {
    WP_ENTER(0x10882f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    c.r[3] = wp::rd16(ea);
    return;
}

void f_mr701_01088300(wp::Cpu& c) {
    WP_ENTER(0x1088300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088338u: goto R_01088338;
        case 0x1088340u: goto R_01088340;
        case 0x108835cu: goto R_0108835c;
        case 0x1088378u: goto R_01088378;
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
    if (wp::cr_get(c, 2)) goto L_01088338;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088338u;
    wp::call(c, c.ctr);
L_01088338:
R_01088338:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088340u;
    f_8000fc20(c);
R_01088340:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0x1u;
    c.r[31] = wp::slw(c.r[0], c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108835cu;
    wp::call(c, c.ctr);
R_0108835c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x1088378u;
    wp::call(c, c.ctr);
R_01088378:
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

void f_mr701_01088390(wp::Cpu& c) {
    WP_ENTER(0x1088390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10883a4u: goto R_010883a4;
        case 0x10883ccu: goto R_010883cc;
        case 0x10883e4u: goto R_010883e4;
        case 0x1088400u: goto R_01088400;
        case 0x1088418u: goto R_01088418;
        case 0x1088434u: goto R_01088434;
        case 0x1088448u: goto R_01088448;
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
    c.lr = 0x10883a4u;
    f_801c83b4(c);
R_010883a4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010883cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10883ccu;
    wp::call(c, c.ctr);
L_010883cc:
R_010883cc:
    c.r[29] = 0x0u;
    c.r[30] = 0x1u;
L_010883d4:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010883ec;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10883e4u;
    f_8000fc40(c);
R_010883e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088434;
L_010883ec:
    c.r[0] = wp::slw(c.r[30], c.r[29]);
    c.r[0] = c.r[27] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01088434;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1088400u;
    f_8000fc20(c);
R_01088400:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = wp::slw(c.r[30], c.r[3]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088418u;
    wp::call(c, c.ctr);
R_01088418:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x1088434u;
    wp::call(c, c.ctr);
L_01088434:
R_01088434:
    c.r[29] = c.r[29] + 0x1u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010883d4;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1088448u;
    f_801c8400(c);
R_01088448:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_01088460(wp::Cpu& c) {
    WP_ENTER(0x1088460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088490u: goto R_01088490;
        case 0x10884a8u: goto R_010884a8;
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
L_01088488:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1088490u;
    f_8000fc20(c);
R_01088490:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = wp::slw(c.r[31], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10884a8u;
    wp::call(c, c.ctr);
R_010884a8:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[29] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010884bc;
    c.r[3] = c.r[30] | c.r[30];
    goto L_010884cc;
L_010884bc:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01088488;
    }
    c.r[3] = 0xffffffffu;
L_010884cc:
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

void f_mr701_010884f0(wp::Cpu& c) {
    WP_ENTER(0x10884f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x169u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr701_01088500(wp::Cpu& c) {
    WP_ENTER(0x1088500u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108851cu: goto R_0108851c;
        case 0x1088530u: goto R_01088530;
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
    goto L_0108851c;
L_01088518:
    c.lr = 0x108851cu;
    f_8006a940(c);
L_0108851c:
R_0108851c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088530u;
    wp::call(c, c.ctr);
R_01088530:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088518;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_01088550(wp::Cpu& c) {
    WP_ENTER(0x1088550u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108857cu: goto R_0108857c;
        case 0x1088594u: goto R_01088594;
        case 0x10885b4u: goto R_010885b4;
        case 0x10885d4u: goto R_010885d4;
        case 0x10885f8u: goto R_010885f8;
        case 0x1088610u: goto R_01088610;
        case 0x1088628u: goto R_01088628;
        case 0x1088640u: goto R_01088640;
        case 0x108866cu: goto R_0108866c;
        case 0x1088684u: goto R_01088684;
        case 0x10886a0u: goto R_010886a0;
        case 0x10886bcu: goto R_010886bc;
        case 0x10886ccu: goto R_010886cc;
        case 0x10886e4u: goto R_010886e4;
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
    if (!wp::cr_get(c, 2)) goto L_010885d8;
    c.r[4] = 0x0u;
    c.lr = 0x108857cu;
    f_800402c0(c);
R_0108857c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088594;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x1088594u;
    f_80052250(c);
L_01088594:
R_01088594:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010885b4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10885b4u;
    wp::call(c, c.ctr);
L_010885b4:
R_010885b4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010886e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10885d4u;
    wp::call(c, c.ctr);
R_010885d4:
    goto L_010886e4;
L_010885d8:
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010886c0;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010886c0;
    c.r[4] = 0x0u;
    c.lr = 0x10885f8u;
    f_800402c0(c);
R_010885f8:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088610;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x1088610u;
    f_80052250(c);
L_01088610:
R_01088610:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088628u;
    wp::call(c, c.ctr);
R_01088628:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088640u;
    wp::call(c, c.ctr);
R_01088640:
    ea = c.r[30] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088660;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01088688;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010886a4;
    goto L_010886e4;
L_01088660:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x108866cu;
    f_800402c0(c);
R_0108866c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010886e4;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x1088684u;
    f_80052250(c);
R_01088684:
    goto L_010886e4;
L_01088688:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10886a0u;
    wp::call(c, c.ctr);
R_010886a0:
    goto L_010886e4;
L_010886a4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10886bcu;
    wp::call(c, c.ctr);
R_010886bc:
    goto L_010886e4;
L_010886c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10886ccu;
    f_800402c0(c);
R_010886cc:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010886e4;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x10886e4u;
    f_80052250(c);
L_010886e4:
R_010886e4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[30] + 0x185u;
    wp::wr8(ea, c.r[31]);
    if (!wp::cr_get(c, 2)) goto L_010886f4;
    ea = c.r[30] + 0x154u;
    wp::wr8(ea, c.r[31]);
L_010886f4:
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

void f_mr701_01088710(wp::Cpu& c) {
    WP_ENTER(0x1088710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088744u: goto R_01088744;
        case 0x10887c8u: goto R_010887c8;
        case 0x10887f4u: goto R_010887f4;
        case 0x1088824u: goto R_01088824;
        case 0x1088848u: goto R_01088848;
        case 0x1088854u: goto R_01088854;
        case 0x1088874u: goto R_01088874;
        case 0x1088888u: goto R_01088888;
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
    c.lr = 0x1088744u;
    wp::call(c, c.ctr);
R_01088744:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088754;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010888b4;
L_01088754:
    ea = c.r[29] + 0x154u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) goto L_01088768;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010888b4;
L_01088768:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088784;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088784;
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010888b4;
L_01088784:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x154u;
    wp::wr8(ea, c.r[30]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088798;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_01088798:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010887a8;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_010887a8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010887c8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10887c8u;
    wp::call(c, c.ctr);
L_010887c8:
R_010887c8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088800;
    ea = c.r[29] + 0x144u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01088854;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10887f4u;
    wp::call(c, c.ctr);
R_010887f4:
    ea = c.r[29] + 0x144u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01088854;
L_01088800:
    ea = c.r[29] + 0x148u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01088830;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088824u;
    wp::call(c, c.ctr);
R_01088824:
    ea = c.r[29] + 0x148u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01088848;
L_01088830:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088848u;
    wp::call(c, c.ctr);
L_01088848:
R_01088848:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1088854u;
    f_8001a010(c);
L_01088854:
R_01088854:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088874;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088874u;
    wp::call(c, c.ctr);
L_01088874:
R_01088874:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x290u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088888u;
    wp::call(c, c.ctr);
R_01088888:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x186u;
    wp::wr8(ea, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010888a4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_010888a4:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010888b4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_010888b4:
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

void f_mr701_010888d0(wp::Cpu& c) {
    WP_ENTER(0x10888d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088910u: goto R_01088910;
        case 0x1088930u: goto R_01088930;
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
    if (wp::cr_get(c, 2)) goto L_01088910;
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088910u;
    wp::call(c, c.ctr);
L_01088910:
R_01088910:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088930;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088930u;
    wp::call(c, c.ctr);
L_01088930:
R_01088930:
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

void f_mr701_01088950(wp::Cpu& c) {
    WP_ENTER(0x1088950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088978u: goto R_01088978;
        case 0x108897cu: goto R_0108897c;
        case 0x10889a0u: goto R_010889a0;
        case 0x10889a4u: goto R_010889a4;
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
    if (wp::cr_get(c, 2)) goto L_0108898c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x144u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088978u;
    wp::call(c, c.ctr);
R_01088978:
    c.lr = 0x108897cu;
    f_80043140(c);
R_0108897c:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    goto L_010889b0;
L_0108898c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x148u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10889a0u;
    wp::call(c, c.ctr);
R_010889a0:
    c.lr = 0x10889a4u;
    f_80043140(c);
R_010889a4:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
L_010889b0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_010889c0(wp::Cpu& c) {
    WP_ENTER(0x10889c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10889d4u: goto R_010889d4;
        case 0x10889fcu: goto R_010889fc;
        case 0x1088a18u: goto R_01088a18;
        case 0x1088a20u: goto R_01088a20;
        case 0x1088a48u: goto R_01088a48;
        case 0x1088aa0u: goto R_01088aa0;
        case 0x1088abcu: goto R_01088abc;
        case 0x1088ae8u: goto R_01088ae8;
        case 0x1088b14u: goto R_01088b14;
        case 0x1088b3cu: goto R_01088b3c;
        case 0x1088b58u: goto R_01088b58;
        case 0x1088b7cu: goto R_01088b7c;
        case 0x1088b98u: goto R_01088b98;
        case 0x1088bb0u: goto R_01088bb0;
        case 0x1088bd8u: goto R_01088bd8;
        case 0x1088bf0u: goto R_01088bf0;
        case 0x1088c20u: goto R_01088c20;
        case 0x1088c68u: goto R_01088c68;
        case 0x1088c78u: goto R_01088c78;
        case 0x1088ca0u: goto R_01088ca0;
        case 0x1088cbcu: goto R_01088cbc;
        case 0x1088cd4u: goto R_01088cd4;
        case 0x1088cf4u: goto R_01088cf4;
        case 0x1088d18u: goto R_01088d18;
        case 0x1088d3cu: goto R_01088d3c;
        case 0x1088d60u: goto R_01088d60;
        case 0x1088d68u: goto R_01088d68;
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
    c.lr = 0x10889d4u;
    f_801c83ac(c);
R_010889d4:
    c.r[0] = 0x43300000u;
    c.r[28] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10889fcu;
    f_8003cc90(c);
R_010889fc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088a18u;
    wp::call(c, c.ctr);
R_01088a18:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088a20u;
    f_8003d2d0(c);
R_01088a20:
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
    c.lr = 0x1088a48u;
    wp::call(c, c.ctr);
R_01088a48:
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
    c.lr = 0x1088aa0u;
    wp::call(c, c.ctr);
R_01088aa0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088abcu;
    wp::call(c, c.ctr);
R_01088abc:
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
    c.lr = 0x1088ae8u;
    wp::call(c, c.ctr);
R_01088ae8:
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
    c.lr = 0x1088b14u;
    wp::call(c, c.ctr);
R_01088b14:
    ea = c.r[27] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088b7c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088b3cu;
    wp::call(c, c.ctr);
R_01088b3c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088b58u;
    wp::call(c, c.ctr);
R_01088b58:
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
    c.lr = 0x1088b7cu;
    wp::call(c, c.ctr);
L_01088b7c:
R_01088b7c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088b98u;
    wp::call(c, c.ctr);
R_01088b98:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088bb0u;
    wp::call(c, c.ctr);
R_01088bb0:
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
    c.lr = 0x1088bd8u;
    f_801cf394(c);
R_01088bd8:
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088be8;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_01088be8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088bf0u;
    f_8003cfb0(c);
R_01088bf0:
    c.r[0] = 0x0u;
    c.r[26] = ((((g_mr701_bases[4] + 0x2f80u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr701_bases[4] + 0x2f80u) & 0xFFFFu);
    c.r[24] = 0x0u;
    ea = c.r[29] + 0x188u;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ((((g_mr701_bases[5] + 0x2ebb8u) + 0x8000u) >> 16) << 16);
    goto L_01088c80;
L_01088c14:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x1088c20u;
    f_801cf510(c);
R_01088c20:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088c6c;
    c.r[0] = c.r[24] * 0xcu;
    c.r[4] = ((((g_mr701_bases[4] + 0x2f80u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x194u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2f80u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_01088c8c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + 0xau;
    c.r[4] = wp::rd16(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088c68u;
    wp::call(c, c.ctr);
R_01088c68:
    goto L_01088c8c;
L_01088c6c:
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + wp::sign_extend16((g_mr701_bases[5] + 0x2ebb8u) & 0xFFFFu);
    c.lr = 0x1088c78u;
    f_801cf510(c);
R_01088c78:
    c.r[26] = c.r[26] + 0xcu;
    c.r[24] = c.r[24] + 0x1u;
L_01088c80:
    ea = c.r[26] + 0x0u;
    c.r[28] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088c14;
    }
L_01088c8c:
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088cf4;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088ca0u;
    f_8003d2d0(c);
R_01088ca0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x194u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088cbcu;
    wp::call(c, c.ctr);
R_01088cbc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088cd4u;
    wp::call(c, c.ctr);
R_01088cd4:
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
    c.lr = 0x1088cf4u;
    wp::call(c, c.ctr);
L_01088cf4:
R_01088cf4:
    ea = c.r[29] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088d18;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088d18u;
    wp::call(c, c.ctr);
L_01088d18:
R_01088d18:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088d3c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088d3cu;
    wp::call(c, c.ctr);
L_01088d3c:
R_01088d3c:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088d60;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088d60u;
    wp::call(c, c.ctr);
L_01088d60:
R_01088d60:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1088d68u;
    f_801c83f8(c);
R_01088d68:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr701_01088d80(wp::Cpu& c) {
    WP_ENTER(0x1088d80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088e04u: goto R_01088e04;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr701_bases[5] + 0x2fa90u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr701_bases[5] + 0x2ebc4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fa90u) & 0xFFFFu);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2ebc4u) & 0xFFFFu);
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
    goto L_01088dec;
L_01088de8:
    c.r[30] = c.r[30] + 0x4u;
L_01088dec:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01088e10;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1088e04u;
    f_801c8244(c);
R_01088e04:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088de8;
    }
L_01088e10:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01088e30;
    c.r[5] = 0x0u;
    goto L_01088e34;
L_01088e30:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_01088e34:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088e44;
    c.r[3] = 0x0u;
    goto L_01088e8c;
L_01088e44:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = c.r[3] | c.r[3];
    goto L_01088e74;
L_01088e58:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[7] = c.r[7] + 0x2u;
    c.r[0] = c.r[9] + c.r[0];
    c.r[6] = c.r[6] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_01088e74:
    wp::compare_unsigned(c, 0, c.r[6], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01088e8c;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[7];
    c.r[9] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088e58;
    }
L_01088e8c:
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

void f_mr701_01088eb0(wp::Cpu& c) {
    WP_ENTER(0x1088eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088ed8u: goto R_01088ed8;
        case 0x1088ee0u: goto R_01088ee0;
        case 0x1088efcu: goto R_01088efc;
        case 0x1088f14u: goto R_01088f14;
        case 0x1088f3cu: goto R_01088f3c;
        case 0x1088f60u: goto R_01088f60;
        case 0x1088f84u: goto R_01088f84;
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
    c.lr = 0x1088ed8u;
    f_mr701_01084300(c);
R_01088ed8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1088ee0u;
    f_mr701_01086750(c);
R_01088ee0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088efcu;
    wp::call(c, c.ctr);
R_01088efc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088f14u;
    wp::call(c, c.ctr);
R_01088f14:
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
    c.lr = 0x1088f3cu;
    f_801cf394(c);
R_01088f3c:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088f60;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088f60u;
    wp::call(c, c.ctr);
L_01088f60:
R_01088f60:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088f84;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088f84u;
    wp::call(c, c.ctr);
L_01088f84:
R_01088f84:
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

void f_mr701_01088fa0(wp::Cpu& c) {
    WP_ENTER(0x1088fa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088fd4u: goto R_01088fd4;
        case 0x1088ff4u: goto R_01088ff4;
        case 0x108900cu: goto R_0108900c;
        case 0x1089034u: goto R_01089034;
        case 0x108905cu: goto R_0108905c;
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
    c.lr = 0x1088fd4u;
    f_8003cc90(c);
R_01088fd4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x1088ff4u;
    wp::call(c, c.ctr);
R_01088ff4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108900cu;
    wp::call(c, c.ctr);
R_0108900c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089034;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089034u;
    wp::call(c, c.ctr);
L_01089034:
R_01089034:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108905c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108905cu;
    wp::call(c, c.ctr);
L_0108905c:
R_0108905c:
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

void f_mr701_01089080(wp::Cpu& c) {
    WP_ENTER(0x1089080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089094u: goto R_01089094;
        case 0x10890a8u: goto R_010890a8;
        case 0x10890c0u: goto R_010890c0;
        case 0x10890d0u: goto R_010890d0;
        case 0x10890e8u: goto R_010890e8;
        case 0x1089110u: goto R_01089110;
        case 0x1089138u: goto R_01089138;
        case 0x1089140u: goto R_01089140;
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
    c.lr = 0x1089094u;
    f_801c83b8(c);
R_01089094:
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[6] | c.r[6];
    c.lr = 0x10890a8u;
    f_mr701_01084300(c);
R_010890a8:
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8c8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8c8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10890c0u;
    f_801d34c4(c);
R_010890c0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10890d0u;
    f_mr701_01087650(c);
R_010890d0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10890e8u;
    wp::call(c, c.ctr);
R_010890e8:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089110;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089110u;
    wp::call(c, c.ctr);
L_01089110:
R_01089110:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089138;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089138u;
    wp::call(c, c.ctr);
L_01089138:
R_01089138:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1089140u;
    f_801c8404(c);
R_01089140:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_01089150(wp::Cpu& c) {
    WP_ENTER(0x1089150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089198u: goto R_01089198;
        case 0x10891b8u: goto R_010891b8;
        case 0x10891d0u: goto R_010891d0;
        case 0x10891f8u: goto R_010891f8;
        case 0x1089220u: goto R_01089220;
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
    c.r[5] = ((((g_mr701_bases[5] + 0x2e890u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e890u) & 0xFFFFu);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1089198u;
    f_801d3590(c);
R_01089198:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x10891b8u;
    wp::call(c, c.ctr);
R_010891b8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10891d0u;
    wp::call(c, c.ctr);
R_010891d0:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010891f8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10891f8u;
    wp::call(c, c.ctr);
L_010891f8:
R_010891f8:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089220;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089220u;
    wp::call(c, c.ctr);
L_01089220:
R_01089220:
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

void f_mr701_01089240(wp::Cpu& c) {
    WP_ENTER(0x1089240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089274u: goto R_01089274;
        case 0x1089294u: goto R_01089294;
        case 0x10892acu: goto R_010892ac;
        case 0x10892d4u: goto R_010892d4;
        case 0x10892fcu: goto R_010892fc;
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
    c.lr = 0x1089274u;
    f_80010060(c);
R_01089274:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x1089294u;
    wp::call(c, c.ctr);
R_01089294:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10892acu;
    wp::call(c, c.ctr);
R_010892ac:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010892d4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10892d4u;
    wp::call(c, c.ctr);
L_010892d4:
R_010892d4:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010892fc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10892fcu;
    wp::call(c, c.ctr);
L_010892fc:
R_010892fc:
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

void f_mr701_01089320(wp::Cpu& c) {
    WP_ENTER(0x1089320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089334u: goto R_01089334;
        case 0x108934cu: goto R_0108934c;
        case 0x1089360u: goto R_01089360;
        case 0x1089388u: goto R_01089388;
        case 0x1089398u: goto R_01089398;
        case 0x10893bcu: goto R_010893bc;
        case 0x108941cu: goto R_0108941c;
        case 0x108949cu: goto R_0108949c;
        case 0x1089504u: goto R_01089504;
        case 0x1089538u: goto R_01089538;
        case 0x108954cu: goto R_0108954c;
        case 0x108955cu: goto R_0108955c;
        case 0x108957cu: goto R_0108957c;
        case 0x1089594u: goto R_01089594;
        case 0x10895bcu: goto R_010895bc;
        case 0x10895e4u: goto R_010895e4;
        case 0x10895ecu: goto R_010895ec;
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
    c.lr = 0x1089334u;
    f_801c83ac(c);
R_01089334:
    c.r[29] = c.r[5] | c.r[5];
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108934cu;
    f_8006c450(c);
R_0108934c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01089550;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1089360u;
    f_8006c460(c);
R_01089360:
    c.r[25] = ((((g_mr701_bases[5] + 0x2e898u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr701_bases[5] + 0x2e898u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1089388u;
    f_801c7860(c);
R_01089388:
    c.r[24] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[24] | c.r[24];
    c.lr = 0x1089398u;
    f_mr701_01023710(c);
R_01089398:
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
    c.lr = 0x10893bcu;
    f_mr701_010238d0(c);
R_010893bc:
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
    if (!wp::cr_get(c, 2)) goto L_010893f8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010893fc;
L_010893f8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010893fc:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x108941cu;
    f_mr701_010238d0(c);
R_0108941c:
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
    if (!wp::cr_get(c, 2)) goto L_01089478;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0108947c;
L_01089478:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0108947c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x108949cu;
    f_mr701_010238d0(c);
R_0108949c:
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
    if (!wp::cr_get(c, 2)) goto L_010894e0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010894e4;
L_010894e0:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010894e4:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1089504u;
    f_mr701_010238d0(c);
R_01089504:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01089520;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01089524;
L_01089520:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01089524:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089538u;
    wp::call(c, c.ctr);
R_01089538:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108957c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108954cu;
    f_801c7a8c(c);
R_0108954c:
    goto L_0108957c;
L_01089550:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x108955cu;
    f_8006c4e0(c);
R_0108955c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x108957cu;
    wp::call(c, c.ctr);
L_0108957c:
R_0108957c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089594u;
    wp::call(c, c.ctr);
R_01089594:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010895bc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10895bcu;
    wp::call(c, c.ctr);
L_010895bc:
R_010895bc:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010895e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10895e4u;
    wp::call(c, c.ctr);
L_010895e4:
R_010895e4:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10895ecu;
    f_801c83f8(c);
R_010895ec:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_01089600(wp::Cpu& c) {
    WP_ENTER(0x1089600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108962cu: goto R_0108962c;
        case 0x1089648u: goto R_01089648;
        case 0x1089660u: goto R_01089660;
        case 0x1089684u: goto R_01089684;
        case 0x10896a8u: goto R_010896a8;
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
    c.lr = 0x108962cu;
    f_80010060(c);
R_0108962c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089648u;
    wp::call(c, c.ctr);
R_01089648:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089660u;
    wp::call(c, c.ctr);
R_01089660:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089684;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089684u;
    wp::call(c, c.ctr);
L_01089684:
R_01089684:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010896a8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10896a8u;
    wp::call(c, c.ctr);
L_010896a8:
R_010896a8:
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

void f_mr701_010896d0(wp::Cpu& c) {
    WP_ENTER(0x10896d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10896e4u: goto R_010896e4;
        case 0x10896f8u: goto R_010896f8;
        case 0x108970cu: goto R_0108970c;
        case 0x1089734u: goto R_01089734;
        case 0x1089744u: goto R_01089744;
        case 0x1089768u: goto R_01089768;
        case 0x10897c8u: goto R_010897c8;
        case 0x1089848u: goto R_01089848;
        case 0x10898b0u: goto R_010898b0;
        case 0x10898e0u: goto R_010898e0;
        case 0x10898f4u: goto R_010898f4;
        case 0x1089904u: goto R_01089904;
        case 0x1089920u: goto R_01089920;
        case 0x1089938u: goto R_01089938;
        case 0x108995cu: goto R_0108995c;
        case 0x1089980u: goto R_01089980;
        case 0x1089988u: goto R_01089988;
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
    c.lr = 0x10896e4u;
    f_801c83b0(c);
R_010896e4:
    c.r[30] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10896f8u;
    f_8006c450(c);
R_010896f8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010898f8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108970cu;
    f_8006c460(c);
R_0108970c:
    c.r[26] = ((((g_mr701_bases[5] + 0x2e898u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr701_bases[5] + 0x2e898u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1089734u;
    f_801c7860(c);
R_01089734:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x1089744u;
    f_mr701_01023710(c);
R_01089744:
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
    c.lr = 0x1089768u;
    f_mr701_010238d0(c);
R_01089768:
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
    if (!wp::cr_get(c, 2)) goto L_010897a4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010897a8;
L_010897a4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010897a8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10897c8u;
    f_mr701_010238d0(c);
R_010897c8:
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
    if (!wp::cr_get(c, 2)) goto L_01089824;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01089828;
L_01089824:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01089828:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1089848u;
    f_mr701_010238d0(c);
R_01089848:
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
    if (!wp::cr_get(c, 2)) goto L_0108988c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01089890;
L_0108988c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01089890:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10898b0u;
    f_mr701_010238d0(c);
R_010898b0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010898cc;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010898d0;
L_010898cc:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010898d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10898e0u;
    wp::call(c, c.ctr);
R_010898e0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089920;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10898f4u;
    f_801c7a8c(c);
R_010898f4:
    goto L_01089920;
L_010898f8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1089904u;
    f_8006c4e0(c);
R_01089904:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089920u;
    wp::call(c, c.ctr);
L_01089920:
R_01089920:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089938u;
    wp::call(c, c.ctr);
R_01089938:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108995c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108995cu;
    wp::call(c, c.ctr);
L_0108995c:
R_0108995c:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089980;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089980u;
    wp::call(c, c.ctr);
L_01089980:
R_01089980:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1089988u;
    f_801c83fc(c);
R_01089988:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_010899a0(wp::Cpu& c) {
    WP_ENTER(0x10899a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10899e8u: goto R_010899e8;
        case 0x1089a0cu: goto R_01089a0c;
        case 0x1089a34u: goto R_01089a34;
        case 0x1089a5cu: goto R_01089a5c;
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
    c.lr = 0x10899e8u;
    wp::call(c, c.ctr);
R_010899e8:
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
    c.lr = 0x1089a0cu;
    wp::call(c, c.ctr);
R_01089a0c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089a34;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089a34u;
    wp::call(c, c.ctr);
L_01089a34:
R_01089a34:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089a5c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089a5cu;
    wp::call(c, c.ctr);
L_01089a5c:
R_01089a5c:
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

void f_mr701_01089a80(wp::Cpu& c) {
    WP_ENTER(0x1089a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr701_bases[6] + 0x4fa8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr701_bases[6] + 0x4fa8u) & 0xFFFFu);
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_01089aa0(wp::Cpu& c) {
    WP_ENTER(0x1089aa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089ad0u: goto R_01089ad0;
        case 0x1089af0u: goto R_01089af0;
        case 0x1089b20u: goto R_01089b20;
        case 0x1089b28u: goto R_01089b28;
        case 0x1089b3cu: goto R_01089b3c;
        case 0x1089b4cu: goto R_01089b4c;
        case 0x1089b60u: goto R_01089b60;
        case 0x1089b7cu: goto R_01089b7c;
        case 0x1089b84u: goto R_01089b84;
        case 0x1089b98u: goto R_01089b98;
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
    c.lr = 0x1089ad0u;
    wp::call(c, c.ctr);
R_01089ad0:
    c.r[31] = 0x0u;
    goto L_01089af8;
L_01089ad8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089af0u;
    wp::call(c, c.ctr);
R_01089af0:
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_01089af8:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01089ad8;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089b20u;
    wp::call(c, c.ctr);
R_01089b20:
    goto L_01089b28;
L_01089b24:
    c.lr = 0x1089b28u;
    f_8006a940(c);
L_01089b28:
R_01089b28:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089b3cu;
    wp::call(c, c.ctr);
R_01089b3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01089b24;
    }
    goto L_01089b4c;
L_01089b48:
    c.lr = 0x1089b4cu;
    f_8006a940(c);
L_01089b4c:
R_01089b4c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089b60u;
    wp::call(c, c.ctr);
R_01089b60:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01089b48;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xa4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089b7cu;
    wp::call(c, c.ctr);
R_01089b7c:
    goto L_01089b84;
L_01089b80:
    c.lr = 0x1089b84u;
    f_8006a940(c);
L_01089b84:
R_01089b84:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089b98u;
    wp::call(c, c.ctr);
R_01089b98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01089b80;
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

void f_mr701_01089bc0(wp::Cpu& c) {
    WP_ENTER(0x1089bc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089be8u: goto R_01089be8;
        case 0x1089c0cu: goto R_01089c0c;
        case 0x1089c30u: goto R_01089c30;
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
    c.lr = 0x1089be8u;
    f_80043290(c);
R_01089be8:
    ea = c.r[31] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089c0c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089c0cu;
    wp::call(c, c.ctr);
L_01089c0c:
R_01089c0c:
    ea = c.r[31] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089c30;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089c30u;
    wp::call(c, c.ctr);
L_01089c30:
R_01089c30:
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

void f_mr701_01089c50(wp::Cpu& c) {
    WP_ENTER(0x1089c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089c70u: goto R_01089c70;
        case 0x1089c90u: goto R_01089c90;
        case 0x1089cb0u: goto R_01089cb0;
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
    c.lr = 0x1089c70u;
    f_800402f0(c);
R_01089c70:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089c90;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089c90u;
    wp::call(c, c.ctr);
L_01089c90:
R_01089c90:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089cb0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089cb0u;
    wp::call(c, c.ctr);
L_01089cb0:
R_01089cb0:
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

void f_mr701_01089cd0(wp::Cpu& c) {
    WP_ENTER(0x1089cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089cf8u: goto R_01089cf8;
        case 0x1089d14u: goto R_01089d14;
        case 0x1089d44u: goto R_01089d44;
        case 0x1089d64u: goto R_01089d64;
        case 0x1089d78u: goto R_01089d78;
        case 0x1089da8u: goto R_01089da8;
        case 0x1089dc8u: goto R_01089dc8;
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
    c.lr = 0x1089cf8u;
    f_801c79a4(c);
R_01089cf8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089d14;
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x1089d14u;
    f_mr701_01045eb0(c);
L_01089d14:
R_01089d14:
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089d44;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089d44;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089d44u;
    wp::call(c, c.ctr);
L_01089d44:
R_01089d44:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr701_bases[5] + 0x2ebd0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x198u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2ebd0u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1089d64u;
    wp::call(c, c.ctr);
R_01089d64:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[6] = 0x1u;
    c.lr = 0x1089d78u;
    f_80043490(c);
R_01089d78:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089da8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089da8u;
    wp::call(c, c.ctr);
L_01089da8:
R_01089da8:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089dc8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089dc8u;
    wp::call(c, c.ctr);
L_01089dc8:
R_01089dc8:
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

void f_mr701_01089df0(wp::Cpu& c) {
    WP_ENTER(0x1089df0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089e10u: goto R_01089e10;
        case 0x1089e2cu: goto R_01089e2c;
        case 0x1089e40u: goto R_01089e40;
        case 0x1089e54u: goto R_01089e54;
        case 0x1089e68u: goto R_01089e68;
        case 0x1089e7cu: goto R_01089e7c;
        case 0x1089ea0u: goto R_01089ea0;
        case 0x1089eb8u: goto R_01089eb8;
        case 0x1089ed4u: goto R_01089ed4;
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
    c.lr = 0x1089e10u;
    f_mr701_01084300(c);
R_01089e10:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089e2cu;
    wp::call(c, c.ctr);
R_01089e2c:
    c.r[31] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1089e40u;
    f_80071fe0(c);
R_01089e40:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01089e5c;
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1089e54u;
    f_80071fe0(c);
R_01089e54:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
    goto L_01089e80;
L_01089e5c:
    c.r[31] = ((((g_mr701_bases[4] + 0x2f54u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f54u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1089e68u;
    f_80071fe0(c);
R_01089e68:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01089e80;
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f54u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1089e7cu;
    f_80071fe0(c);
R_01089e7c:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
L_01089e80:
    ea = c.r[29] + 0x194u;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089ed4;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089ea0u;
    wp::call(c, c.ctr);
R_01089ea0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089eb8u;
    wp::call(c, c.ctr);
R_01089eb8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089ed4u;
    wp::call(c, c.ctr);
L_01089ed4:
R_01089ed4:
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

void f_mr701_01089ef0(wp::Cpu& c) {
    WP_ENTER(0x1089ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089f04u: goto R_01089f04;
        case 0x1089f24u: goto R_01089f24;
        case 0x1089f4cu: goto R_01089f4c;
        case 0x1089f90u: goto R_01089f90;
        case 0x1089fa8u: goto R_01089fa8;
        case 0x1089fbcu: goto R_01089fbc;
        case 0x1089fc8u: goto R_01089fc8;
        case 0x1089fd0u: goto R_01089fd0;
        case 0x1089ffcu: goto R_01089ffc;
        case 0x108a044u: goto R_0108a044;
        case 0x108a090u: goto R_0108a090;
        case 0x108a0a4u: goto R_0108a0a4;
        case 0x108a0bcu: goto R_0108a0bc;
        case 0x108a0d8u: goto R_0108a0d8;
        case 0x108a0e8u: goto R_0108a0e8;
        case 0x108a0f4u: goto R_0108a0f4;
        case 0x108a104u: goto R_0108a104;
        case 0x108a108u: goto R_0108a108;
        case 0x108a110u: goto R_0108a110;
        case 0x108a13cu: goto R_0108a13c;
        case 0x108a148u: goto R_0108a148;
        case 0x108a154u: goto R_0108a154;
        case 0x108a164u: goto R_0108a164;
        case 0x108a168u: goto R_0108a168;
        case 0x108a170u: goto R_0108a170;
        case 0x108a1a0u: goto R_0108a1a0;
        case 0x108a1c8u: goto R_0108a1c8;
        case 0x108a1d4u: goto R_0108a1d4;
        case 0x108a1e4u: goto R_0108a1e4;
        case 0x108a1e8u: goto R_0108a1e8;
        case 0x108a1f0u: goto R_0108a1f0;
        case 0x108a260u: goto R_0108a260;
        case 0x108a294u: goto R_0108a294;
        case 0x108a2b0u: goto R_0108a2b0;
        case 0x108a2d8u: goto R_0108a2d8;
        case 0x108a2f4u: goto R_0108a2f4;
        case 0x108a314u: goto R_0108a314;
        case 0x108a33cu: goto R_0108a33c;
        case 0x108a378u: goto R_0108a378;
        case 0x108a3a0u: goto R_0108a3a0;
        case 0x108a3e0u: goto R_0108a3e0;
        case 0x108a3fcu: goto R_0108a3fc;
        case 0x108a450u: goto R_0108a450;
        case 0x108a458u: goto R_0108a458;
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
    c.lr = 0x1089f04u;
    f_801c83ac(c);
R_01089f04:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    ea = c.r[12] + 0xa0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1089f24u;
    wp::call(c, c.ctr);
R_01089f24:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01089f4c;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089f4c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089f4cu;
    wp::call(c, c.ctr);
L_01089f4c:
R_01089f4c:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089fd0;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089f70;
    ea = c.r[28] + 0x186u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01089f7c;
L_01089f70:
    ea = c.r[28] + 0x187u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089f94;
L_01089f7c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089f90u;
    wp::call(c, c.ctr);
R_01089f90:
    goto L_01089fa8;
L_01089f94:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089fa8u;
    wp::call(c, c.ctr);
L_01089fa8:
R_01089fa8:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089fbcu;
    wp::call(c, c.ctr);
R_01089fbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089fd0;
    c.lr = 0x1089fc8u;
    f_8004a110(c);
R_01089fc8:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x1089fd0u;
    f_8004a100(c);
L_01089fd0:
R_01089fd0:
    ea = c.r[28] + 0x140u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a450;
    ea = c.r[28] + 0x150u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108a054;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089ffcu;
    wp::call(c, c.ctr);
R_01089ffc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a450;
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108a01c;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[0]);
L_0108a01c:
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108a044;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a044u;
    wp::call(c, c.ctr);
L_0108a044:
R_0108a044:
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_0108a054;
    goto L_0108a450;
L_0108a054:
    ea = c.r[28] + 0x16au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a33c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a33c;
    ea = c.r[28] + 0x16cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108a084;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    goto L_0108a450;
L_0108a084:
    c.r[30] = 0x0u;
    c.r[29] = 0x1u;
    c.lr = 0x108a090u;
    f_8000e2a0(c);
R_0108a090:
    c.r[25] = c.r[3] | c.r[3];
    c.r[24] = 0x0u;
    c.r[26] = 0x1u;
L_0108a09c:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a0a4u;
    f_8000fc20(c);
R_0108a0a4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = wp::slw(c.r[26], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a0bcu;
    wp::call(c, c.ctr);
R_0108a0bc:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[0] & c.r[27];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a11c;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a0e0;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a0d8u;
    f_8000fc40(c);
R_0108a0d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a11c;
L_0108a0e0:
    c.r[29] = 0x0u;
    c.lr = 0x108a0e8u;
    f_8000dd70(c);
R_0108a0e8:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a0f4u;
    f_8000fc20(c);
R_0108a0f4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0108a11c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a104u;
    f_8000fc20(c);
R_0108a104:
    c.lr = 0x108a108u;
    f_800699d0(c);
R_0108a108:
    c.r[4] = 0xffffffffu;
    c.lr = 0x108a110u;
    f_80066cd0(c);
R_0108a110:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a11c;
    c.r[30] = 0x1u;
L_0108a11c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a09c;
    }
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a188;
    c.r[24] = 0x0u;
L_0108a134:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a13cu;
    f_8000fc40(c);
R_0108a13c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a17c;
    c.lr = 0x108a148u;
    f_8000dd70(c);
R_0108a148:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a154u;
    f_8000fc20(c);
R_0108a154:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0108a17c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a164u;
    f_8000fc20(c);
R_0108a164:
    c.lr = 0x108a168u;
    f_800699d0(c);
R_0108a168:
    c.r[4] = 0xffffffffu;
    c.lr = 0x108a170u;
    f_80066cd0(c);
R_0108a170:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a17c;
    c.r[30] = 0x1u;
L_0108a17c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a134;
    }
L_0108a188:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a208;
    c.r[24] = 0x1u;
    c.r[25] = 0x0u;
L_0108a198:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108a1a0u;
    f_8000fc40(c);
R_0108a1a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a1ac;
    c.r[24] = 0x0u;
L_0108a1ac:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a198;
    }
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a208;
    c.r[24] = 0x0u;
L_0108a1c4:
    c.lr = 0x108a1c8u;
    f_8000dd70(c);
R_0108a1c8:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a1d4u;
    f_8000fc20(c);
R_0108a1d4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0108a1fc;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108a1e4u;
    f_8000fc20(c);
R_0108a1e4:
    c.lr = 0x108a1e8u;
    f_800699d0(c);
R_0108a1e8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x108a1f0u;
    f_80066cd0(c);
R_0108a1f0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a1fc;
    c.r[30] = 0x1u;
L_0108a1fc:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a1c4;
    }
L_0108a208:
    ea = c.r[28] + 0x15eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a238;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a238;
    ea = c.r[28] + 0x160u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0108a238;
    c.r[30] = 0x1u;
L_0108a238:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a33c;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a33c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a260u;
    wp::call(c, c.ctr);
R_0108a260:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a2b0;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a2b0;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a2b0;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a294u;
    wp::call(c, c.ctr);
R_0108a294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a2b0;
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[31] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x108a2b0u;
    f_80018e30(c);
L_0108a2b0:
R_0108a2b0:
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
    c.lr = 0x108a2d8u;
    wp::call(c, c.ctr);
R_0108a2d8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x180u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a2f4u;
    wp::call(c, c.ctr);
R_0108a2f4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108a318;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x17cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a314u;
    wp::call(c, c.ctr);
R_0108a314:
    goto L_0108a324;
L_0108a318:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_0108a324:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a33cu;
    wp::call(c, c.ctr);
L_0108a33c:
R_0108a33c:
    ea = c.r[28] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a3ac;
    ea = c.r[28] + 0x15du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a3ac;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a3ac;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a378u;
    wp::call(c, c.ctr);
R_0108a378:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a3ac;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a3ac;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a3a0u;
    wp::call(c, c.ctr);
R_0108a3a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a3ac;
    c.r[30] = 0x1u;
L_0108a3ac:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a450;
    ea = c.r[31] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108a430;
    c.r[24] = 0x0u;
    c.r[29] = 0x1u;
L_0108a3cc:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a3e0u;
    wp::call(c, c.ctr);
R_0108a3e0:
    c.r[3] = c.r[3] & 0xffffu;
    c.r[0] = wp::slw(c.r[29], c.r[24]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_0108a424;
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.lr = 0x108a3fcu;
    f_8000ffd0(c);
R_0108a3fc:
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
    goto L_0108a430;
L_0108a424:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a3cc;
    }
L_0108a430:
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
    c.lr = 0x108a450u;
    wp::call(c, c.ctr);
L_0108a450:
R_0108a450:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x108a458u;
    f_801c83f8(c);
R_0108a458:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr701_0108a470(wp::Cpu& c) {
    WP_ENTER(0x108a470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr701_0108a480(wp::Cpu& c) {
    WP_ENTER(0x108a480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr701_bases[4] + 0x2f0cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2f0cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x0u;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_0108a4a8;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a4a8;
    c.r[4] = 0x1u;
L_0108a4a8:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr701_0108a4b0(wp::Cpu& c) {
    WP_ENTER(0x108a4b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x154u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr701_0108a4c0(wp::Cpu& c) {
    WP_ENTER(0x108a4c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a4f8u: goto R_0108a4f8;
        case 0x108a510u: goto R_0108a510;
        case 0x108a518u: goto R_0108a518;
        case 0x108a544u: goto R_0108a544;
        case 0x108a55cu: goto R_0108a55c;
        case 0x108a564u: goto R_0108a564;
        case 0x108a590u: goto R_0108a590;
        case 0x108a5a8u: goto R_0108a5a8;
        case 0x108a5b0u: goto R_0108a5b0;
        case 0x108a5dcu: goto R_0108a5dc;
        case 0x108a5f4u: goto R_0108a5f4;
        case 0x108a5fcu: goto R_0108a5fc;
        case 0x108a60cu: goto R_0108a60c;
        case 0x108a624u: goto R_0108a624;
        case 0x108a63cu: goto R_0108a63c;
        case 0x108a654u: goto R_0108a654;
        case 0x108a66cu: goto R_0108a66c;
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
    if (wp::cr_get(c, 2)) goto L_0108a518;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a4f8u;
    wp::call(c, c.ctr);
R_0108a4f8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a510u;
    wp::call(c, c.ctr);
R_0108a510:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108a518u;
    f_80019f20(c);
L_0108a518:
R_0108a518:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a658;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a564;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a544u;
    wp::call(c, c.ctr);
R_0108a544:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a55cu;
    wp::call(c, c.ctr);
R_0108a55c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108a564u;
    f_80019f20(c);
L_0108a564:
R_0108a564:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a640;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a5b0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a590u;
    wp::call(c, c.ctr);
R_0108a590:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a5a8u;
    wp::call(c, c.ctr);
R_0108a5a8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108a5b0u;
    f_80019f20(c);
L_0108a5b0:
R_0108a5b0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a628;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a5fc;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a5dcu;
    wp::call(c, c.ctr);
R_0108a5dc:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a5f4u;
    wp::call(c, c.ctr);
R_0108a5f4:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108a5fcu;
    f_80019f20(c);
L_0108a5fc:
R_0108a5fc:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a610;
    c.lr = 0x108a60cu;
    f_mr701_0108a4c0(c);
R_0108a60c:
    goto L_0108a66c;
L_0108a610:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a624u;
    wp::call(c, c.ctr);
R_0108a624:
    goto L_0108a66c;
L_0108a628:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a63cu;
    wp::call(c, c.ctr);
R_0108a63c:
    goto L_0108a66c;
L_0108a640:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a654u;
    wp::call(c, c.ctr);
R_0108a654:
    goto L_0108a66c;
L_0108a658:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a66cu;
    wp::call(c, c.ctr);
L_0108a66c:
R_0108a66c:
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

void f_mr701_0108a690(wp::Cpu& c) {
    WP_ENTER(0x108a690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a6d8u: goto R_0108a6d8;
        case 0x108a708u: goto R_0108a708;
        case 0x108a710u: goto R_0108a710;
        case 0x108a72cu: goto R_0108a72c;
        case 0x108a734u: goto R_0108a734;
        case 0x108a754u: goto R_0108a754;
        case 0x108a75cu: goto R_0108a75c;
        case 0x108a780u: goto R_0108a780;
        case 0x108a7a4u: goto R_0108a7a4;
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
    c.r[31] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
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
    c.lr = 0x108a6d8u;
    wp::call(c, c.ctr);
R_0108a6d8:
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a6f0;
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108a714;
L_0108a6f0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a708u;
    wp::call(c, c.ctr);
R_0108a708:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108a710u;
    f_80043120(c);
R_0108a710:
    goto L_0108a734;
L_0108a714:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a72cu;
    wp::call(c, c.ctr);
R_0108a72c:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108a734u;
    f_80043120(c);
L_0108a734:
R_0108a734:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a75c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a754u;
    wp::call(c, c.ctr);
R_0108a754:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108a75cu;
    f_80043060(c);
L_0108a75c:
R_0108a75c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a780;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a780u;
    wp::call(c, c.ctr);
L_0108a780:
R_0108a780:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a7a4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a7a4u;
    wp::call(c, c.ctr);
L_0108a7a4:
R_0108a7a4:
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

void f_mr701_0108a7d0(wp::Cpu& c) {
    WP_ENTER(0x108a7d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr701_0108a7e0(wp::Cpu& c) {
    WP_ENTER(0x108a7e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a870u: goto R_0108a870;
        case 0x108a894u: goto R_0108a894;
        case 0x108a8d0u: goto R_0108a8d0;
        case 0x108a8e4u: goto R_0108a8e4;
        case 0x108a908u: goto R_0108a908;
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
    if (wp::cr_get(c, 2)) goto L_0108a908;
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a898;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a898;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a848;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108a850;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108a874;
    goto L_0108a89c;
L_0108a848:
    c.r[31] = 0x1u;
    goto L_0108a89c;
L_0108a850:
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
    c.lr = 0x108a870u;
    wp::call(c, c.ctr);
R_0108a870:
    goto L_0108a89c;
L_0108a874:
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
    c.lr = 0x108a894u;
    wp::call(c, c.ctr);
R_0108a894:
    goto L_0108a89c;
L_0108a898:
    c.r[31] = 0x1u;
L_0108a89c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a908;
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a908;
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
    c.lr = 0x108a8d0u;
    wp::call(c, c.ctr);
R_0108a8d0:
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a8e4u;
    wp::call(c, c.ctr);
R_0108a8e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a908;
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a908u;
    wp::call(c, c.ctr);
L_0108a908:
R_0108a908:
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

void f_mr701_0108a930(wp::Cpu& c) {
    WP_ENTER(0x108a930u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a944;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_0108a944:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a9c4;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a9c4;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a97c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108a99c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108a9b0;
    return;
L_0108a97c:
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
L_0108a99c:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_0108a9b0:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_0108a9c4:
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

void f_mr701_0108a9f0(wp::Cpu& c) {
    WP_ENTER(0x108a9f0u);
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
    if (!wp::cr_get(c, 2)) goto L_0108aa18;
    return;
L_0108aa18:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aa98;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aa98;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aa50;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108aa70;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108aa84;
    return;
L_0108aa50:
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
L_0108aa70:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_0108aa84:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_0108aa98:
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

void f_mr701_0108aac0(wp::Cpu& c) {
    WP_ENTER(0x108aac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108aafcu: goto R_0108aafc;
        case 0x108ab10u: goto R_0108ab10;
        case 0x108ab98u: goto R_0108ab98;
        case 0x108abb4u: goto R_0108abb4;
        case 0x108abd0u: goto R_0108abd0;
        case 0x108abdcu: goto R_0108abdc;
        case 0x108abe8u: goto R_0108abe8;
        case 0x108abf0u: goto R_0108abf0;
        case 0x108ac18u: goto R_0108ac18;
        case 0x108ac88u: goto R_0108ac88;
        case 0x108acb8u: goto R_0108acb8;
        case 0x108acc4u: goto R_0108acc4;
        case 0x108acd0u: goto R_0108acd0;
        case 0x108acdcu: goto R_0108acdc;
        case 0x108ace8u: goto R_0108ace8;
        case 0x108acfcu: goto R_0108acfc;
        case 0x108ad08u: goto R_0108ad08;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr701_bases[5] + 0x2ed88u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[4] | c.r[4];
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr701_bases[5] + 0x2ed88u) & 0xFFFFu);
    c.lr = 0x108aafcu;
    f_mr701_0103f0e0(c);
R_0108aafc:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[29] + 0x2bcu;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x108ab10u;
    f_80063370(c);
R_0108ab10:
    c.r[3] = ((((g_mr701_bases[5] + 0x2f1a0u) + 0x8000u) >> 16) << 16);
    c.r[6] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2f1a0u) & 0xFFFFu);
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
    c.lr = 0x108ab98u;
    f_80053d20(c);
R_0108ab98:
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
    c.lr = 0x108abb4u;
    f_80053df0(c);
R_0108abb4:
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
    c.lr = 0x108abd0u;
    f_mr701_01035d90(c);
R_0108abd0:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1000u;
    c.lr = 0x108abdcu;
    f_80052170(c);
R_0108abdc:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0xcu;
    c.lr = 0x108abe8u;
    f_80052190(c);
R_0108abe8:
    c.r[3] = 0x18u;
    c.lr = 0x108abf0u;
    f_801c79a4(c);
R_0108abf0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108ac5c;
    c.r[5] = ((((g_mr701_bases[5] + 0x2f948u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0xaae4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2f948u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0xaae4u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x108ac18u;
    f_8003b350(c);
R_0108ac18:
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mr701_bases[5] + 0x2f95cu) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2f95cu) & 0xFFFFu);
    c.r[4] = ((((g_mr701_bases[5] + 0x2f188u) + 0x8000u) >> 16) << 16);
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f188u) & 0xFFFFu);
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
L_0108ac5c:
    ea = c.r[29] + 0x2d4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ac88;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x2d4u;
    wp::wr32(ea, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0108ac88;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108ac88u;
    wp::call(c, c.ctr);
L_0108ac88:
R_0108ac88:
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
    c.lr = 0x108acb8u;
    wp::call(c, c.ctr);
R_0108acb8:
    ea = c.r[29] + 0x2d4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108acc4u;
    f_mr701_01035690(c);
R_0108acc4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x108acd0u;
    f_mr701_01035810(c);
R_0108acd0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x108acdcu;
    f_mr701_01035830(c);
R_0108acdc:
    ea = c.r[31] + 0x6cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108ace8u;
    f_mr701_010357f0(c);
R_0108ace8:
    ea = c.r[29] + 0x2ecu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] + 0x54u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x108acfcu;
    f_80054e60(c);
R_0108acfc:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x108ad08u;
    f_80056040(c);
R_0108ad08:
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

void f_mr701_0108ad30(wp::Cpu& c) {
    WP_ENTER(0x108ad30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ad68u: goto R_0108ad68;
        case 0x108ad78u: goto R_0108ad78;
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
    if (wp::cr_get(c, 2)) goto L_0108ad78;
    c.r[4] = ((((g_mr701_bases[5] + 0x2f95cu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f95cu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108ad68u;
    f_8003b480(c);
R_0108ad68:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108ad78;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108ad78u;
    f_801c7a8c(c);
L_0108ad78:
R_0108ad78:
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

void f_mr701_0108ada0(wp::Cpu& c) {
    WP_ENTER(0x108ada0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ade0u: goto R_0108ade0;
        case 0x108adf0u: goto R_0108adf0;
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
    if (wp::cr_get(c, 2)) goto L_0108adf0;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0108ade0;
    c.r[4] = ((((g_mr701_bases[5] + 0x2f95cu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f95cu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x108ade0u;
    f_8003b480(c);
L_0108ade0:
R_0108ade0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108adf0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108adf0u;
    f_801c7a8c(c);
L_0108adf0:
R_0108adf0:
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

void f_mr701_0108ae10(wp::Cpu& c) {
    WP_ENTER(0x108ae10u);
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

void f_mr701_0108ae30(wp::Cpu& c) {
    WP_ENTER(0x108ae30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ae74u: goto R_0108ae74;
        case 0x108ae84u: goto R_0108ae84;
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
    if (wp::cr_get(c, 2)) goto L_0108ae84;
    if (wp::cr_get(c, 2)) goto L_0108ae74;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0108ae74;
    c.r[4] = ((((g_mr701_bases[5] + 0x2f95cu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f95cu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x108ae74u;
    f_8003b480(c);
L_0108ae74:
R_0108ae74:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108ae84;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108ae84u;
    f_801c7a8c(c);
L_0108ae84:
R_0108ae84:
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

void f_mr701_0108aea0(wp::Cpu& c) {
    WP_ENTER(0x108aea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108aef0u: goto R_0108aef0;
        case 0x108af18u: goto R_0108af18;
        case 0x108af24u: goto R_0108af24;
        case 0x108af30u: goto R_0108af30;
        case 0x108af40u: goto R_0108af40;
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
    if (wp::cr_get(c, 2)) goto L_0108af40;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0108aef0;
    if (wp::cr_get(c, 2)) goto L_0108aef0;
    if (wp::cr_get(c, 2)) goto L_0108aef0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aef0;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108aef0u;
    f_801c7a8c(c);
L_0108aef0:
R_0108aef0:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108af18;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108af18;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108af18u;
    wp::call(c, c.ctr);
L_0108af18:
R_0108af18:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x108af24u;
    f_80063bb0(c);
R_0108af24:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x108af30u;
    f_mr701_0103f610(c);
R_0108af30:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108af40;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108af40u;
    f_801c7a8c(c);
L_0108af40:
R_0108af40:
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

void f_mr701_0108af60(wp::Cpu& c) {
    WP_ENTER(0x108af60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108af74u: goto R_0108af74;
        case 0x108af94u: goto R_0108af94;
        case 0x108b02cu: goto R_0108b02c;
        case 0x108b074u: goto R_0108b074;
        case 0x108b0d0u: goto R_0108b0d0;
        case 0x108b164u: goto R_0108b164;
        case 0x108b1acu: goto R_0108b1ac;
        case 0x108b208u: goto R_0108b208;
        case 0x108b24cu: goto R_0108b24c;
        case 0x108b284u: goto R_0108b284;
        case 0x108b320u: goto R_0108b320;
        case 0x108b364u: goto R_0108b364;
        case 0x108b3c4u: goto R_0108b3c4;
        case 0x108b408u: goto R_0108b408;
        case 0x108b464u: goto R_0108b464;
        case 0x108b480u: goto R_0108b480;
        case 0x108b488u: goto R_0108b488;
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
    c.lr = 0x108af74u;
    f_801c83ac(c);
R_0108af74:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x108af94u;
    wp::call(c, c.ctr);
R_0108af94:
    c.r[4] = ((((g_mr701_bases[5] + 0x2edb0u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2edb0u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108afdc;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108afdc;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108afdc;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b0d0;
L_0108afdc:
    c.r[3] = ((((g_mr701_bases[5] + 0x2edb0u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2edb0u) & 0xFFFFu);
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
    c.lr = 0x108b02cu;
    wp::call(c, c.ctr);
R_0108b02c:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b074;
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
    c.lr = 0x108b074u;
    wp::call(c, c.ctr);
L_0108b074:
R_0108b074:
    c.r[3] = ((((g_mr701_bases[5] + 0x2edb0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2edb0u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b0d0;
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
    c.lr = 0x108b0d0u;
    wp::call(c, c.ctr);
L_0108b0d0:
R_0108b0d0:
    c.r[4] = ((((g_mr701_bases[5] + 0x2ee10u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2ee10u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b110;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b110;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b110;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b284;
L_0108b110:
    c.r[3] = ((((g_mr701_bases[5] + 0x2ee10u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2ee10u) & 0xFFFFu);
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
    c.lr = 0x108b164u;
    wp::call(c, c.ctr);
R_0108b164:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b1ac;
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
    c.lr = 0x108b1acu;
    wp::call(c, c.ctr);
L_0108b1ac:
R_0108b1ac:
    c.r[3] = ((((g_mr701_bases[5] + 0x2ee10u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2ee10u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b208;
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
    c.lr = 0x108b208u;
    wp::call(c, c.ctr);
L_0108b208:
R_0108b208:
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
    c.lr = 0x108b24cu;
    wp::call(c, c.ctr);
R_0108b24c:
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
    c.lr = 0x108b284u;
    wp::call(c, c.ctr);
L_0108b284:
R_0108b284:
    c.r[4] = ((((g_mr701_bases[5] + 0x2ee70u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2ee70u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b2cc;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b2cc;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b2cc;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b408;
L_0108b2cc:
    c.r[4] = ((((g_mr701_bases[5] + 0x2ee70u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2ee70u) & 0xFFFFu);
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
    c.lr = 0x108b320u;
    wp::call(c, c.ctr);
R_0108b320:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b364;
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
    c.lr = 0x108b364u;
    wp::call(c, c.ctr);
L_0108b364:
R_0108b364:
    c.r[3] = ((((g_mr701_bases[5] + 0x2ee70u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2ee70u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b3c4;
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
    c.lr = 0x108b3c4u;
    wp::call(c, c.ctr);
L_0108b3c4:
R_0108b3c4:
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
    c.lr = 0x108b408u;
    wp::call(c, c.ctr);
L_0108b408:
R_0108b408:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b464;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108b464;
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
    c.lr = 0x108b464u;
    wp::call(c, c.ctr);
L_0108b464:
R_0108b464:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108b480u;
    wp::call(c, c.ctr);
R_0108b480:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x108b488u;
    f_801c83f8(c);
R_0108b488:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mr701_0108b4a0(wp::Cpu& c) {
    WP_ENTER(0x108b4a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b55cu: goto R_0108b55c;
        case 0x108b560u: goto R_0108b560;
        case 0x108b5c0u: goto R_0108b5c0;
        case 0x108b5c4u: goto R_0108b5c4;
        case 0x108b684u: goto R_0108b684;
        case 0x108b688u: goto R_0108b688;
        case 0x108b690u: goto R_0108b690;
        case 0x108b6b8u: goto R_0108b6b8;
        case 0x108b6bcu: goto R_0108b6bc;
        case 0x108b814u: goto R_0108b814;
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
    if (!wp::cr_get(c, 0)) goto L_0108b52c;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0108b51c;
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
L_0108b51c:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_0108b814;
L_0108b52c:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0108b560;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e924u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e924u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108b55cu;
    f_801cee24(c);
R_0108b55c:
    c.lr = 0x108b560u;
    f_801d3940(c);
L_0108b560:
R_0108b560:
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
    if (!wp::cr_get(c, 1)) goto L_0108b5c4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e924u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e924u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108b5c0u;
    f_801cee24(c);
R_0108b5c0:
    c.lr = 0x108b5c4u;
    f_801d3940(c);
L_0108b5c4:
R_0108b5c4:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108b614;
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
    if (!wp::cr_get(c, 0)) goto L_0108b608;
    c.r[3] = c.r[1] + 0x10u;
L_0108b608:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0108b658;
L_0108b614:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108b650;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0108b644;
    c.r[3] = c.r[1] + 0x10u;
L_0108b644:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0108b658;
L_0108b650:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_0108b658:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0108b688;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2e924u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2e924u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108b684u;
    f_801cee24(c);
R_0108b684:
    c.lr = 0x108b688u;
    f_801d3940(c);
L_0108b688:
R_0108b688:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x108b690u;
    f_801c79a4(c);
R_0108b690:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0108b6bc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2f9f0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f9f0u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108b6b8u;
    f_801cee24(c);
R_0108b6b8:
    c.lr = 0x108b6bcu;
    f_801d3940(c);
L_0108b6bc:
R_0108b6bc:
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
    if (wp::cr_get(c, 2)) goto L_0108b71c;
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
L_0108b71c:
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
    if (!wp::cr_get(c, 1)) goto L_0108b7c8;
    c.r[0] = c.r[0] | 0x0u;
L_0108b768:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_0108b7ac;
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
L_0108b7ac:
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
    goto L_0108b768;
    }
L_0108b7c8:
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
    if (wp::cr_get(c, 2)) goto L_0108b814;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b814;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x108b814u;
    f_801c7a8c(c);
L_0108b814:
R_0108b814:
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

void f_mr701_0108b840(wp::Cpu& c) {
    WP_ENTER(0x108b840u);
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

void f_mr701_0108b860(wp::Cpu& c) {
    WP_ENTER(0x108b860u);
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
    if (wp::cr_get(c, 2)) goto L_0108bb54;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_0108bb54;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_0108baf4;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_0108b904;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_0108b8f8;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108b8f8;
    c.r[9] = 0x0u;
L_0108b8f8:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b904;
    c.r[7] = 0x1u;
L_0108b904:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108baf4;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_0108baf4;
L_0108b928:
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
    goto L_0108b928;
    }
L_0108baf4:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_0108bb54;
L_0108bb10:
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
    goto L_0108bb10;
    }
L_0108bb54:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr701_0108bb70(wp::Cpu& c) {
    WP_ENTER(0x108bb70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr701_0108bb80(wp::Cpu& c) {
    WP_ENTER(0x108bb80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mr701_0108bb90(wp::Cpu& c) {
    WP_ENTER(0x108bb90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108bc90u: goto R_0108bc90;
        case 0x108bcc0u: goto R_0108bcc0;
        case 0x108bcdcu: goto R_0108bcdc;
        case 0x108bcf8u: goto R_0108bcf8;
        case 0x108bd38u: goto R_0108bd38;
        case 0x108bd40u: goto R_0108bd40;
        case 0x108bd4cu: goto R_0108bd4c;
        case 0x108bd50u: goto R_0108bd50;
        case 0x108bdccu: goto R_0108bdcc;
        case 0x108bddcu: goto R_0108bddc;
        case 0x108bdf8u: goto R_0108bdf8;
        case 0x108be0cu: goto R_0108be0c;
        case 0x108be54u: goto R_0108be54;
        case 0x108be88u: goto R_0108be88;
        case 0x108be9cu: goto R_0108be9c;
        case 0x108beacu: goto R_0108beac;
        case 0x108bec0u: goto R_0108bec0;
        case 0x108bee0u: goto R_0108bee0;
        case 0x108bf10u: goto R_0108bf10;
        case 0x108bf40u: goto R_0108bf40;
        case 0x108bf60u: goto R_0108bf60;
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
    c.r[31] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108bc24;
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
    if (!wp::cr_get(c, 1)) goto L_0108bc18;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_0108bc18:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_0108bc74;
L_0108bc24:
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
    if (!wp::cr_get(c, 0)) goto L_0108bc74;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_0108bc74:
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
    c.lr = 0x108bc90u;
    f_mr701_01035d90(c);
R_0108bc90:
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
    if (!wp::cr_get(c, 1)) goto L_0108bf14;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0108bd58;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x108bcc0u;
    f_80053d40(c);
R_0108bcc0:
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
    c.lr = 0x108bcdcu;
    f_8006b460(c);
R_0108bcdc:
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
    c.lr = 0x108bcf8u;
    f_8006b460(c);
R_0108bcf8:
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
    c.lr = 0x108bd38u;
    wp::call(c, c.ctr);
R_0108bd38:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108bd40u;
    f_80071fe0(c);
R_0108bd40:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x108bd4cu;
    f_80071fe0(c);
R_0108bd4c:
    c.lr = 0x108bd50u;
    f_8006b590(c);
R_0108bd50:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_0108bd58:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108bee0;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_0108bee0;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108bd84;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_0108bd84:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108bdb8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108bdc4;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_0108bdfc;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_0108bea0;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_0108bec4;
    goto L_0108bee0;
L_0108bdb8:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_0108bee0;
L_0108bdc4:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x108bdccu;
    f_80055bb0(c);
R_0108bdcc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108bee0;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x108bddcu;
    f_80055d80(c);
R_0108bddc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108bee0;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108bdf8u;
    wp::call(c, c.ctr);
R_0108bdf8:
    goto L_0108bee0;
L_0108bdfc:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108be0c;
    c.lr = 0x108be0cu;
    f_80019fa0(c);
L_0108be0c:
R_0108be0c:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108be60;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0108be60;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_0108be38;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_0108be3c;
L_0108be38:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_0108be3c:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x108be54u;
    f_80055290(c);
R_0108be54:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_0108be60:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108be88;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108be88u;
    wp::call(c, c.ctr);
L_0108be88:
R_0108be88:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108be9cu;
    wp::call(c, c.ctr);
R_0108be9c:
    goto L_0108bee0;
L_0108bea0:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108beacu;
    f_80019f20(c);
R_0108beac:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108bec0u;
    wp::call(c, c.ctr);
R_0108bec0:
    goto L_0108bee0;
L_0108bec4:
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
    c.lr = 0x108bee0u;
    wp::call(c, c.ctr);
L_0108bee0:
R_0108bee0:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108bef4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_0108bef4:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x108bf10u;
    f_mr701_01035830(c);
R_0108bf10:
    goto L_0108bf64;
L_0108bf14:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_0108bf64;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108bf64;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x108bf40u;
    f_80055290(c);
R_0108bf40:
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
    c.lr = 0x108bf60u;
    wp::call(c, c.ctr);
R_0108bf60:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_0108bf64:
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

void f_mr701_0108bf90(wp::Cpu& c) {
    WP_ENTER(0x108bf90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108bfb4u: goto R_0108bfb4;
        case 0x108bfdcu: goto R_0108bfdc;
        case 0x108bfecu: goto R_0108bfec;
        case 0x108c004u: goto R_0108c004;
        case 0x108c018u: goto R_0108c018;
        case 0x108c034u: goto R_0108c034;
        case 0x108c03cu: goto R_0108c03c;
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
    c.lr = 0x108bfb4u;
    f_8001b910(c);
R_0108bfb4:
    c.r[3] = ((((g_mr701_bases[6] + 0x4facu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2f280u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[6] + 0x4facu) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f280u) & 0xFFFFu);
    c.r[0] = c.r[4] + 0x14u;
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x1u;
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108bfdcu;
    f_8001c510(c);
R_0108bfdc:
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108bfecu;
    f_8001c520(c);
R_0108bfec:
    c.r[31] = ((((g_mr701_bases[4] + 0x2f0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f0cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x108c004u;
    f_8001e440(c);
R_0108c004:
    ea = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2f0cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x108c018u;
    f_8001eb90(c);
R_0108c018:
    c.r[3] = ((((g_mr701_bases[5] + 0x2eed0u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2eed0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.lr = 0x108c034u;
    f_8001fb40(c);
R_0108c034:
    c.r[3] = 0x1000u;
    c.lr = 0x108c03cu;
    f_8004a120(c);
R_0108c03c:
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

void f_mr701_0108c060(wp::Cpu& c) {
    WP_ENTER(0x108c060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c074u: goto R_0108c074;
        case 0x108c09cu: goto R_0108c09c;
        case 0x108c0d8u: goto R_0108c0d8;
        case 0x108c120u: goto R_0108c120;
        case 0x108c13cu: goto R_0108c13c;
        case 0x108c1a0u: goto R_0108c1a0;
        case 0x108c1bcu: goto R_0108c1bc;
        case 0x108c1ecu: goto R_0108c1ec;
        case 0x108c208u: goto R_0108c208;
        case 0x108c21cu: goto R_0108c21c;
        case 0x108c23cu: goto R_0108c23c;
        case 0x108c254u: goto R_0108c254;
        case 0x108c260u: goto R_0108c260;
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
    c.lr = 0x108c074u;
    f_801c83b4(c);
R_0108c074:
    c.r[28] = ((((g_mr701_bases[5] + 0x2e890u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[5] | c.r[5];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr701_bases[5] + 0x2e890u) & 0xFFFFu);
    c.r[26] = c.r[4] | c.r[4];
    c.r[7] = c.r[6] | c.r[6];
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] + 0x644u;
    c.r[4] = c.r[28] + 0x658u;
    c.lr = 0x108c09cu;
    f_8003f8f0(c);
R_0108c09c:
    c.r[4] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x10000u;
    c.r[29] = 0x0u;
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
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
    c.lr = 0x108c0d8u;
    f_80069af0(c);
R_0108c0d8:
    c.r[3] = ((((g_mr701_bases[5] + 0x2ef40u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2ef40u) & 0xFFFFu);
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
    c.lr = 0x108c120u;
    wp::call(c, c.ctr);
R_0108c120:
    ea = c.r[31] + 0x2d8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] + 0x684u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c13cu;
    wp::call(c, c.ctr);
R_0108c13c:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x2e6u;
    c.r[4] = wp::rd16(ea);
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    ea = c.r[31] + 0x2dcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[29] = 0xffffffffu;
    if (!wp::cr_get(c, 2)) goto L_0108c15c;
    c.r[29] = 0x0u;
L_0108c15c:
    c.r[0] = 0x1u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108c170;
    c.r[29] = 0x1u;
L_0108c170:
    c.r[0] = 0x2u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108c184;
    c.r[29] = 0x2u;
L_0108c184:
    c.r[0] = 0x3u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108c198;
    c.r[29] = 0x3u;
L_0108c198:
    c.r[3] = 0x350u;
    c.lr = 0x108c1a0u;
    f_801c79a4(c);
R_0108c1a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c1bc;
    c.r[0] = c.r[27] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x108c1bcu;
    f_mr701_01045eb0(c);
L_0108c1bc:
R_0108c1bc:
    ea = c.r[31] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108c1ec;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x2ecu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108c1ec;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c1ecu;
    wp::call(c, c.ctr);
L_0108c1ec:
R_0108c1ec:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x6a0u;
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x2ecu;
    c.r[28] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c208u;
    wp::call(c, c.ctr);
R_0108c208:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = 0x1u;
    c.lr = 0x108c21cu;
    f_80043490(c);
R_0108c21c:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108c23c;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x314u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c23cu;
    wp::call(c, c.ctr);
L_0108c23c:
R_0108c23c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c254u;
    wp::call(c, c.ctr);
R_0108c254:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108c260u;
    f_801c8400(c);
R_0108c260:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_0108c270(wp::Cpu& c) {
    WP_ENTER(0x108c270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c2bcu: goto R_0108c2bc;
        case 0x108c2c8u: goto R_0108c2c8;
        case 0x108c300u: goto R_0108c300;
        case 0x108c33cu: goto R_0108c33c;
        case 0x108c348u: goto R_0108c348;
        case 0x108c358u: goto R_0108c358;
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
    if (wp::cr_get(c, 2)) goto L_0108c358;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108c2bc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c2bc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c2bcu;
    wp::call(c, c.ctr);
L_0108c2bc:
R_0108c2bc:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x108c2c8u;
    f_80069c40(c);
R_0108c2c8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c348;
    c.r[3] = ((((g_mr701_bases[5] + 0x2f750u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2f750u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108c300;
L_0108c2e0:
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
    c.lr = 0x108c300u;
    wp::call(c, c.ctr);
L_0108c300:
R_0108c300:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108c2e0;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0108c33c;
    if (wp::cr_get(c, 2)) goto L_0108c33c;
    if (wp::cr_get(c, 2)) goto L_0108c33c;
    if (wp::cr_get(c, 2)) goto L_0108c33c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c33c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108c33cu;
    f_801c7a8c(c);
L_0108c33c:
R_0108c33c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x108c348u;
    f_8003fb90(c);
L_0108c348:
R_0108c348:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108c358;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108c358u;
    f_801c7a8c(c);
L_0108c358:
R_0108c358:
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

void f_mr701_0108c380(wp::Cpu& c) {
    WP_ENTER(0x108c380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c3acu: goto R_0108c3ac;
        case 0x108c3b8u: goto R_0108c3b8;
        case 0x108c3c4u: goto R_0108c3c4;
        case 0x108c3d0u: goto R_0108c3d0;
        case 0x108c3e8u: goto R_0108c3e8;
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
    if (wp::cr_get(c, 2)) goto L_0108c3bc;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x108c3acu;
    f_80069e30(c);
R_0108c3ac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x108c3b8u;
    f_800403b0(c);
R_0108c3b8:
    goto L_0108c3d0;
L_0108c3bc:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x108c3c4u;
    f_80069e40(c);
R_0108c3c4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x108c3d0u;
    f_800403a0(c);
L_0108c3d0:
R_0108c3d0:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c3e8u;
    wp::call(c, c.ctr);
R_0108c3e8:
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

void f_mr701_0108c400(wp::Cpu& c) {
    WP_ENTER(0x108c400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c420u: goto R_0108c420;
        case 0x108c440u: goto R_0108c440;
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
    c.lr = 0x108c420u;
    f_800402c0(c);
R_0108c420:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c440;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c440u;
    wp::call(c, c.ctr);
L_0108c440:
R_0108c440:
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

void f_mr701_0108c460(wp::Cpu& c) {
    WP_ENTER(0x108c460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c4b0u: goto R_0108c4b0;
        case 0x108c4ccu: goto R_0108c4cc;
        case 0x108c50cu: goto R_0108c50c;
        case 0x108c524u: goto R_0108c524;
        case 0x108c52cu: goto R_0108c52c;
        case 0x108c544u: goto R_0108c544;
        case 0x108c54cu: goto R_0108c54c;
        case 0x108c578u: goto R_0108c578;
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
    c.r[31] = ((((g_mr701_bases[4] + 0x2ed8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x2ed8u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0108c578;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0108c4b4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108c4b0u;
    f_80071fe0(c);
R_0108c4b0:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_0108c4b4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c4ccu;
    wp::call(c, c.ctr);
R_0108c4cc:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c4e4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_0108c4ec;
L_0108c4e4:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_0108c4ec:
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
    c.lr = 0x108c50cu;
    wp::call(c, c.ctr);
R_0108c50c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c524u;
    wp::call(c, c.ctr);
R_0108c524:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108c52cu;
    f_80043060(c);
R_0108c52c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c544u;
    wp::call(c, c.ctr);
R_0108c544:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108c54cu;
    f_80043120(c);
R_0108c54c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108c578;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c578;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c578u;
    wp::call(c, c.ctr);
L_0108c578:
R_0108c578:
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

void f_mr701_0108c5a0(wp::Cpu& c) {
    WP_ENTER(0x108c5a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mr701_0108c5b0(wp::Cpu& c) {
    WP_ENTER(0x108c5b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr701_0108c5c0(wp::Cpu& c) {
    WP_ENTER(0x108c5c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr701_0108c5d0(wp::Cpu& c) {
    WP_ENTER(0x108c5d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c5f8u: goto R_0108c5f8;
        case 0x108c600u: goto R_0108c600;
        case 0x108c614u: goto R_0108c614;
        case 0x108c624u: goto R_0108c624;
        case 0x108c638u: goto R_0108c638;
        case 0x108c658u: goto R_0108c658;
        case 0x108c660u: goto R_0108c660;
        case 0x108c674u: goto R_0108c674;
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
    c.lr = 0x108c5f8u;
    wp::call(c, c.ctr);
R_0108c5f8:
    goto L_0108c600;
L_0108c5fc:
    c.lr = 0x108c600u;
    f_8006a940(c);
L_0108c600:
R_0108c600:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c614u;
    wp::call(c, c.ctr);
R_0108c614:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108c5fc;
    }
    goto L_0108c624;
L_0108c620:
    c.lr = 0x108c624u;
    f_8006a940(c);
L_0108c624:
R_0108c624:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c638u;
    wp::call(c, c.ctr);
R_0108c638:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108c620;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c658u;
    wp::call(c, c.ctr);
R_0108c658:
    goto L_0108c660;
L_0108c65c:
    c.lr = 0x108c660u;
    f_8006a940(c);
L_0108c660:
R_0108c660:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c674u;
    wp::call(c, c.ctr);
R_0108c674:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108c65c;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_0108c690(wp::Cpu& c) {
    WP_ENTER(0x108c690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c6a4u: goto R_0108c6a4;
        case 0x108c6c4u: goto R_0108c6c4;
        case 0x108c714u: goto R_0108c714;
        case 0x108c738u: goto R_0108c738;
        case 0x108c744u: goto R_0108c744;
        case 0x108c758u: goto R_0108c758;
        case 0x108c778u: goto R_0108c778;
        case 0x108c788u: goto R_0108c788;
        case 0x108c794u: goto R_0108c794;
        case 0x108c7a4u: goto R_0108c7a4;
        case 0x108c7a8u: goto R_0108c7a8;
        case 0x108c7b0u: goto R_0108c7b0;
        case 0x108c7dcu: goto R_0108c7dc;
        case 0x108c7e8u: goto R_0108c7e8;
        case 0x108c7f4u: goto R_0108c7f4;
        case 0x108c804u: goto R_0108c804;
        case 0x108c808u: goto R_0108c808;
        case 0x108c810u: goto R_0108c810;
        case 0x108c840u: goto R_0108c840;
        case 0x108c868u: goto R_0108c868;
        case 0x108c874u: goto R_0108c874;
        case 0x108c884u: goto R_0108c884;
        case 0x108c888u: goto R_0108c888;
        case 0x108c890u: goto R_0108c890;
        case 0x108c8ccu: goto R_0108c8cc;
        case 0x108c8e8u: goto R_0108c8e8;
        case 0x108c8f8u: goto R_0108c8f8;
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
    c.lr = 0x108c6a4u;
    f_801c83b0(c);
R_0108c6a4:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108c6d8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c6c4u;
    wp::call(c, c.ctr);
R_0108c6c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c8f0;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_0108c8f0;
L_0108c6d8:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c8f0;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108c8f0;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108c8f0;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c714u;
    wp::call(c, c.ctr);
R_0108c714:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108c738;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c738u;
    wp::call(c, c.ctr);
L_0108c738:
R_0108c738:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x108c744u;
    f_8000e2a0(c);
R_0108c744:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_0108c750:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c758u;
    f_8000fc20(c);
R_0108c758:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108c7bc;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108c780;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c778u;
    f_8000fc40(c);
R_0108c778:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108c7bc;
L_0108c780:
    c.r[26] = 0x0u;
    c.lr = 0x108c788u;
    f_8000dd70(c);
R_0108c788:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c794u;
    f_8000fc20(c);
R_0108c794:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108c7bc;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c7a4u;
    f_8000fc20(c);
R_0108c7a4:
    c.lr = 0x108c7a8u;
    f_800699d0(c);
R_0108c7a8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x108c7b0u;
    f_80066cd0(c);
R_0108c7b0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108c7bc;
    c.r[27] = 0x1u;
L_0108c7bc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108c750;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c828;
    c.r[25] = 0x0u;
L_0108c7d4:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c7dcu;
    f_8000fc40(c);
R_0108c7dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108c81c;
    c.lr = 0x108c7e8u;
    f_8000dd70(c);
R_0108c7e8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c7f4u;
    f_8000fc20(c);
R_0108c7f4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108c81c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c804u;
    f_8000fc20(c);
R_0108c804:
    c.lr = 0x108c808u;
    f_800699d0(c);
R_0108c808:
    c.r[4] = 0xffffffffu;
    c.lr = 0x108c810u;
    f_80066cd0(c);
R_0108c810:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108c81c;
    c.r[27] = 0x1u;
L_0108c81c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108c7d4;
    }
L_0108c828:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c8a8;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_0108c838:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x108c840u;
    f_8000fc40(c);
R_0108c840:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108c84c;
    c.r[25] = 0x0u;
L_0108c84c:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108c838;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c8a8;
    c.r[25] = 0x0u;
L_0108c864:
    c.lr = 0x108c868u;
    f_8000dd70(c);
R_0108c868:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c874u;
    f_8000fc20(c);
R_0108c874:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108c89c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108c884u;
    f_8000fc20(c);
R_0108c884:
    c.lr = 0x108c888u;
    f_800699d0(c);
R_0108c888:
    c.r[4] = 0xffffffffu;
    c.lr = 0x108c890u;
    f_80066cd0(c);
R_0108c890:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108c89c;
    c.r[27] = 0x1u;
L_0108c89c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108c864;
    }
L_0108c8a8:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108c8f0;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c8ccu;
    wp::call(c, c.ctr);
R_0108c8cc:
    c.r[3] = ((((g_mr701_bases[4] + 0x2f34u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[4] + 0x2f0cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x2f34u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x2f0cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x108c8e8u;
    f_80018e30(c);
R_0108c8e8:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_0108c8f0:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x108c8f8u;
    f_801c83fc(c);
R_0108c8f8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr701_0108c910(wp::Cpu& c) {
    WP_ENTER(0x108c910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c938u: goto R_0108c938;
        case 0x108c93cu: goto R_0108c93c;
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
L_0108c924:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108c938u;
    wp::call(c, c.ctr);
R_0108c938:
    c.lr = 0x108c93cu;
    f_8006a940(c);
R_0108c93c:
    WP_POLL(c);
    goto L_0108c924;
}

void f_mr701_0108c940(wp::Cpu& c) {
    WP_ENTER(0x108c940u);
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

void f_mr701_0108c960(wp::Cpu& c) {
    WP_ENTER(0x108c960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c984u: goto R_0108c984;
        case 0x108c9a8u: goto R_0108c9a8;
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
    c.lr = 0x108c984u;
    f_80010060(c);
R_0108c984:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr701_bases[5] + 0x2fa64u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fa64u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x108c9a8u;
    wp::call(c, c.ctr);
R_0108c9a8:
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

void f_mr701_0108c9c0(wp::Cpu& c) {
    WP_ENTER(0x108c9c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108c9d4u: goto R_0108c9d4;
        case 0x108c9e8u: goto R_0108c9e8;
        case 0x108c9fcu: goto R_0108c9fc;
        case 0x108ca24u: goto R_0108ca24;
        case 0x108ca34u: goto R_0108ca34;
        case 0x108ca58u: goto R_0108ca58;
        case 0x108cab8u: goto R_0108cab8;
        case 0x108cb38u: goto R_0108cb38;
        case 0x108cba0u: goto R_0108cba0;
        case 0x108cbd8u: goto R_0108cbd8;
        case 0x108cbecu: goto R_0108cbec;
        case 0x108cbfcu: goto R_0108cbfc;
        case 0x108cc20u: goto R_0108cc20;
        case 0x108cc28u: goto R_0108cc28;
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
    c.lr = 0x108c9d4u;
    f_801c83b4(c);
R_0108c9d4:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x108c9e8u;
    f_8006c450(c);
R_0108c9e8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_0108cbf0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x108c9fcu;
    f_8006c460(c);
R_0108c9fc:
    c.r[27] = ((((g_mr701_bases[5] + 0x2e898u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr701_bases[5] + 0x2e898u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108ca24u;
    f_801c7860(c);
R_0108ca24:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x108ca34u;
    f_mr701_01023710(c);
R_0108ca34:
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
    c.lr = 0x108ca58u;
    f_mr701_010238d0(c);
R_0108ca58:
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
    if (!wp::cr_get(c, 2)) goto L_0108ca94;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0108ca98;
L_0108ca94:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0108ca98:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x108cab8u;
    f_mr701_010238d0(c);
R_0108cab8:
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
    if (!wp::cr_get(c, 2)) goto L_0108cb14;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0108cb18;
L_0108cb14:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0108cb18:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x108cb38u;
    f_mr701_010238d0(c);
R_0108cb38:
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
    if (!wp::cr_get(c, 2)) goto L_0108cb7c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0108cb80;
L_0108cb7c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0108cb80:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x108cba0u;
    f_mr701_010238d0(c);
R_0108cba0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr701_bases[5] + 0x2fa70u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fa70u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_0108cbc0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_0108cbc4;
L_0108cbc0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_0108cbc4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108cbd8u;
    wp::call(c, c.ctr);
R_0108cbd8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108cc20;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108cbecu;
    f_801c7a8c(c);
R_0108cbec:
    goto L_0108cc20;
L_0108cbf0:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x108cbfcu;
    f_8006c4e0(c);
R_0108cbfc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr701_bases[5] + 0x2fa70u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fa70u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x108cc20u;
    wp::call(c, c.ctr);
L_0108cc20:
R_0108cc20:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x108cc28u;
    f_801c8400(c);
R_0108cc28:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_0108cc40(wp::Cpu& c) {
    WP_ENTER(0x108cc40u);
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

void f_mr701_0108cc60(wp::Cpu& c) {
    WP_ENTER(0x108cc60u);
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

void f_mr701_0108cc80(wp::Cpu& c) {
    WP_ENTER(0x108cc80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ccacu: goto R_0108ccac;
        case 0x108ccc4u: goto R_0108ccc4;
        case 0x108ccd4u: goto R_0108ccd4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr701_bases[5] + 0x2fa4cu) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr701_bases[5] + 0x2fa4cu) & 0xFFFFu);
    c.lr = 0x108ccacu;
    f_mr701_01084300(c);
R_0108ccac:
    c.r[5] = ((((g_mr701_bases[5] + 0x2e8c8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2e8c8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108ccc4u;
    f_801d34c4(c);
R_0108ccc4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x108ccd4u;
    f_mr701_01087650(c);
R_0108ccd4:
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

void f_mr701_0108ccf0(wp::Cpu& c) {
    WP_ENTER(0x108ccf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108cd28u: goto R_0108cd28;
        case 0x108cd4cu: goto R_0108cd4c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mr701_bases[5] + 0x2e890u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr701_bases[5] + 0x2e890u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108cd28u;
    f_801d3590(c);
R_0108cd28:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr701_bases[5] + 0x2fa58u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fa58u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x108cd4cu;
    wp::call(c, c.ctr);
R_0108cd4c:
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

void f_mr701_0108cd70(wp::Cpu& c) {
    WP_ENTER(0x108cd70u);
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

void f_mr701_0108cd90(wp::Cpu& c) {
    WP_ENTER(0x108cd90u);
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

void f_mr701_0108cdb0(wp::Cpu& c) {
    WP_ENTER(0x108cdb0u);
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

void f_mr701_0108cdd0(wp::Cpu& c) {
    WP_ENTER(0x108cdd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108cdf0u: goto R_0108cdf0;
        case 0x108cdf8u: goto R_0108cdf8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[5] + 0x2fa34u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mr701_bases[5] + 0x2fa34u) & 0xFFFFu);
    c.lr = 0x108cdf0u;
    f_mr701_01084300(c);
R_0108cdf0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108cdf8u;
    f_mr701_01086750(c);
R_0108cdf8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_0108ce10(wp::Cpu& c) {
    WP_ENTER(0x108ce10u);
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

void f_mr701_0108ce30(wp::Cpu& c) {
    WP_ENTER(0x108ce30u);
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

void f_mr701_0108ce50(wp::Cpu& c) {
    WP_ENTER(0x108ce50u);
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

void f_mr701_0108ce70(wp::Cpu& c) {
    WP_ENTER(0x108ce70u);
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

void f_mr701_0108ce90(wp::Cpu& c) {
    WP_ENTER(0x108ce90u);
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

void f_mr701_0108ceb0(wp::Cpu& c) {
    WP_ENTER(0x108ceb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr701_bases[4] + 0x3078u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x3078u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_0108cee0;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108cee0;
    c.r[4] = 0x1u;
L_0108cee0:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr701_0108cef0(wp::Cpu& c) {
    WP_ENTER(0x108cef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108cf28u: goto R_0108cf28;
        case 0x108cf40u: goto R_0108cf40;
        case 0x108cf48u: goto R_0108cf48;
        case 0x108cf74u: goto R_0108cf74;
        case 0x108cf8cu: goto R_0108cf8c;
        case 0x108cf94u: goto R_0108cf94;
        case 0x108cfc0u: goto R_0108cfc0;
        case 0x108cfd8u: goto R_0108cfd8;
        case 0x108cfe0u: goto R_0108cfe0;
        case 0x108d00cu: goto R_0108d00c;
        case 0x108d024u: goto R_0108d024;
        case 0x108d02cu: goto R_0108d02c;
        case 0x108d03cu: goto R_0108d03c;
        case 0x108d054u: goto R_0108d054;
        case 0x108d06cu: goto R_0108d06c;
        case 0x108d084u: goto R_0108d084;
        case 0x108d09cu: goto R_0108d09c;
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
    if (wp::cr_get(c, 2)) goto L_0108cf48;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108cf28u;
    wp::call(c, c.ctr);
R_0108cf28:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108cf40u;
    wp::call(c, c.ctr);
R_0108cf40:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108cf48u;
    f_80019f20(c);
L_0108cf48:
R_0108cf48:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108d088;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108cf94;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108cf74u;
    wp::call(c, c.ctr);
R_0108cf74:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108cf8cu;
    wp::call(c, c.ctr);
R_0108cf8c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108cf94u;
    f_80019f20(c);
L_0108cf94:
R_0108cf94:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108d070;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108cfe0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108cfc0u;
    wp::call(c, c.ctr);
R_0108cfc0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108cfd8u;
    wp::call(c, c.ctr);
R_0108cfd8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108cfe0u;
    f_80019f20(c);
L_0108cfe0:
R_0108cfe0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108d058;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108d02c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108d00cu;
    wp::call(c, c.ctr);
R_0108d00c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108d024u;
    wp::call(c, c.ctr);
R_0108d024:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108d02cu;
    f_80019f20(c);
L_0108d02c:
R_0108d02c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108d040;
    c.lr = 0x108d03cu;
    f_mr701_0108a4c0(c);
R_0108d03c:
    goto L_0108d09c;
L_0108d040:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108d054u;
    wp::call(c, c.ctr);
R_0108d054:
    goto L_0108d09c;
L_0108d058:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108d06cu;
    wp::call(c, c.ctr);
R_0108d06c:
    goto L_0108d09c;
L_0108d070:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108d084u;
    wp::call(c, c.ctr);
R_0108d084:
    goto L_0108d09c;
L_0108d088:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108d09cu;
    wp::call(c, c.ctr);
L_0108d09c:
R_0108d09c:
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

void f_mr701_0108d0c0(wp::Cpu& c) {
    WP_ENTER(0x108d0c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr701_bases[5] + 0x2fae0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fae0u) & 0xFFFFu);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_0108d0e0(wp::Cpu& c) {
    WP_ENTER(0x108d0e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108d0f0u: goto R_0108d0f0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108d0f0u;
    f_mr701_01084300(c);
R_0108d0f0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_0108d110(wp::Cpu& c) {
    WP_ENTER(0x108d110u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr701_bases[5] + 0x2fad8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fad8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_0108d140(wp::Cpu& c) {
    WP_ENTER(0x108d140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr701_bases[5] + 0x2fac0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fac0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_0108d170(wp::Cpu& c) {
    WP_ENTER(0x108d170u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr701_bases[5] + 0x2faa8u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x258u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr701_bases[5] + 0x2faa8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_0108d190(wp::Cpu& c) {
    WP_ENTER(0x108d190u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr701_bases[5] + 0x2fab0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fab0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_0108d1c0(wp::Cpu& c) {
    WP_ENTER(0x108d1c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr701_bases[5] + 0x2faa0u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr701_bases[5] + 0x2faa0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr701_0108d1e0(wp::Cpu& c) {
    WP_ENTER(0x108d1e0u);
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

void f_mr701_0108d200(wp::Cpu& c) {
    WP_ENTER(0x108d200u);
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

void f_mr701_0108d210(wp::Cpu& c) {
    WP_ENTER(0x108d210u);
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

void f_mr701_0108d220(wp::Cpu& c) {
    WP_ENTER(0x108d220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x160u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x164u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr701_0108d230(wp::Cpu& c) {
    WP_ENTER(0x108d230u);
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

void f_mr701_0108d250(wp::Cpu& c) {
    WP_ENTER(0x108d250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108d294u: goto R_0108d294;
        case 0x108d2a4u: goto R_0108d2a4;
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
    if (wp::cr_get(c, 2)) goto L_0108d2a4;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108d288;
    c.r[3] = ((((g_mr701_bases[6] + 0x4facu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[6] + 0x4facu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_0108d288:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x108d294u;
    f_8001bfe0(c);
R_0108d294:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108d2a4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108d2a4u;
    f_801c7a8c(c);
L_0108d2a4:
R_0108d2a4:
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

void f_mr701_0108d2c0(wp::Cpu& c) {
    WP_ENTER(0x108d2c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr701_01089ef0(c);
    return;
}

void f_mr701_0108d2d0(wp::Cpu& c) {
    WP_ENTER(0x108d2d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr701_01088140(c);
    return;
}

void f_mr701_0108d2e0(wp::Cpu& c) {
    WP_ENTER(0x108d2e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mr701_0108d2f0(wp::Cpu& c) {
    WP_ENTER(0x108d2f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mr701_0108d250(c);
    return;
}

void f_mr701_0108d300(wp::Cpu& c) {
    WP_ENTER(0x108d300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mr701_0108aea0(c);
    return;
}

void f_mr701_0108d310(wp::Cpu& c) {
    WP_ENTER(0x108d310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mr701_0108aea0(c);
    return;
}

void f_mr701_0108d320(wp::Cpu& c) {
    WP_ENTER(0x108d320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mr701_0108aea0(c);
    return;
}

void f_mr701_0108d330(wp::Cpu& c) {
    WP_ENTER(0x108d330u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr701_0108bb90(c);
    return;
}

void f_mr701_0108d340(wp::Cpu& c) {
    WP_ENTER(0x108d340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr701_0108aea0(c);
    return;
}

void f_mr701_0108d350(wp::Cpu& c) {
    WP_ENTER(0x108d350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr701_0108c910(c);
    return;
}

void f_mr701_0108d360(wp::Cpu& c) {
    WP_ENTER(0x108d360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr701_0108c270(c);
    return;
}

void f_mr701_0108d370(wp::Cpu& c) {
    WP_ENTER(0x108d370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108d390u: goto R_0108d390;
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
    c.lr = 0x108d390u;
    f_8011bd40(c);
R_0108d390:
    c.r[3] = ((((g_mr701_bases[4] + 0x3080u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2fb78u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x3080u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fb78u) & 0xFFFFu);
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

void f_mr701_0108d3d0(wp::Cpu& c) {
    WP_ENTER(0x108d3d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108d3fcu: goto R_0108d3fc;
        case 0x108d40cu: goto R_0108d40c;
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
    if (wp::cr_get(c, 2)) goto L_0108d40c;
    c.r[4] = 0x0u;
    c.lr = 0x108d3fcu;
    f_8011bd50(c);
R_0108d3fc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108d40c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108d40cu;
    f_801c7a8c(c);
L_0108d40c:
R_0108d40c:
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

void f_mr701_0108d430(wp::Cpu& c) {
    WP_ENTER(0x108d430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108d464u: goto R_0108d464;
        case 0x108d53cu: goto R_0108d53c;
        case 0x108d6bcu: goto R_0108d6bc;
        case 0x108d6d0u: goto R_0108d6d0;
        case 0x108d730u: goto R_0108d730;
        case 0x108d73cu: goto R_0108d73c;
        case 0x108d764u: goto R_0108d764;
        case 0x108d77cu: goto R_0108d77c;
        case 0x108d79cu: goto R_0108d79c;
        case 0x108d7a8u: goto R_0108d7a8;
        case 0x108d7d0u: goto R_0108d7d0;
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
    c.lr = 0x108d464u;
    f_801c83ac(c);
R_0108d464:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mr701_bases[4] + 0x3080u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x3080u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_0108d484;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_0108d550;
    goto L_0108d7a4;
L_0108d484:
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
    if (wp::cr_get(c, 2)) goto L_0108d500;
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
L_0108d500:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108d53c;
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
    c.lr = 0x108d53cu;
    f_8011eeb0(c);
L_0108d53c:
R_0108d53c:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_0108d7a8;
L_0108d550:
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
    if (!wp::cr_get(c, 2)) goto L_0108d57c;
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
L_0108d57c:
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
    c.lr = 0x108d6bcu;
    f_801225e0(c);
R_0108d6bc:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x108d6d0u;
    f_801225e0(c);
R_0108d6d0:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_0108d710;
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
L_0108d710:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_0108d728;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_0108d728:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x108d730u;
    f_8011eaa0(c);
R_0108d730:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108d73cu;
    f_8011ea40(c);
R_0108d73c:
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
    c.lr = 0x108d764u;
    f_80122d80(c);
R_0108d764:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x108d77cu;
    f_80122d80(c);
R_0108d77c:
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
    c.lr = 0x108d79cu;
    f_80121cf0(c);
R_0108d79c:
    c.r[3] = 0x2u;
    goto L_0108d7a8;
L_0108d7a4:
    c.lr = 0x108d7a8u;
    f_8011bd90(c);
L_0108d7a8:
R_0108d7a8:
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
    c.lr = 0x108d7d0u;
    f_801c83f8(c);
R_0108d7d0:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mr701_0108d7e0(wp::Cpu& c) {
    WP_ENTER(0x108d7e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108d7fcu: goto R_0108d7fc;
        case 0x108d980u: goto R_0108d980;
        case 0x108d9d4u: goto R_0108d9d4;
        case 0x108d9f8u: goto R_0108d9f8;
        case 0x108da04u: goto R_0108da04;
        case 0x108da14u: goto R_0108da14;
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
    c.lr = 0x108d7fcu;
    f_801c83b0(c);
R_0108d7fc:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_0108d818;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_0108d82c;
    goto L_0108da00;
L_0108d818:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_0108da04;
L_0108d82c:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mr701_bases[4] + 0x308cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mr701_bases[4] + 0x3090u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mr701_bases[4] + 0x308cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mr701_bases[4] + 0x3090u) & 0xFFFFu);
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
    c.lr = 0x108d980u;
    f_801225e0(c);
R_0108d980:
    ea = c.r[26] + wp::sign_extend16((g_mr701_bases[4] + 0x3090u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_0108d990;
    goto L_0108d994;
L_0108d990:
    c.f[2] = c.f[1];
L_0108d994:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108d9a4;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_0108d9ac;
L_0108d9a4:
    c.r[3] = ((((g_mr701_bases[4] + 0x3090u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x3090u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_0108d9ac:
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
    c.lr = 0x108d9d4u;
    f_8011e9e0(c);
R_0108d9d4:
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
    c.lr = 0x108d9f8u;
    f_80121cf0(c);
R_0108d9f8:
    c.r[3] = 0x2u;
    goto L_0108da04;
L_0108da00:
    c.lr = 0x108da04u;
    f_8011bec0(c);
L_0108da04:
R_0108da04:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x108da14u;
    f_801c83fc(c);
R_0108da14:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr701_0108da30(wp::Cpu& c) {
    WP_ENTER(0x108da30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108da44u: goto R_0108da44;
        case 0x108da74u: goto R_0108da74;
        case 0x108db8cu: goto R_0108db8c;
        case 0x108dc14u: goto R_0108dc14;
        case 0x108dc20u: goto R_0108dc20;
        case 0x108dc2cu: goto R_0108dc2c;
        case 0x108dd44u: goto R_0108dd44;
        case 0x108de8cu: goto R_0108de8c;
        case 0x108dea8u: goto R_0108dea8;
        case 0x108deb0u: goto R_0108deb0;
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
    c.lr = 0x108da44u;
    f_801c83b4(c);
R_0108da44:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr701_bases[4] + 0x3080u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x3080u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_0108da6c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108dc24;
    goto L_0108dea8;
L_0108da6c:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x108da74u;
    f_80132a30(c);
R_0108da74:
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
    if (!wp::cr_get(c, 2)) goto L_0108db8c;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x108db8cu;
    f_8014b090(c);
L_0108db8c:
R_0108db8c:
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
    c.lr = 0x108dc14u;
    f_8012be60(c);
R_0108dc14:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x108dc20u;
    f_80132ab0(c);
R_0108dc20:
    goto L_0108dea8;
L_0108dc24:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x108dc2cu;
    f_80132a30(c);
R_0108dc2c:
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
    if (!wp::cr_get(c, 2)) goto L_0108dd44;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x108dd44u;
    f_8014b090(c);
L_0108dd44:
R_0108dd44:
    c.r[5] = ((((g_mr701_bases[6] + 0x4fb0u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[6] + 0x4fb0u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108ddb0;
    c.r[4] = ((((g_mr701_bases[6] + 0x4fb8u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr701_bases[6] + 0x4fb8u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[6] + 0x4fb8u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[6] + 0x4fb0u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_0108ddb0:
    c.r[26] = ((((g_mr701_bases[6] + 0x4fb8u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr701_bases[6] + 0x4fb8u) & 0xFFFFu);
L_0108ddbc:
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
    c.lr = 0x108de8cu;
    f_8012be60(c);
R_0108de8c:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108ddbc;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x108dea8u;
    f_80132ab0(c);
L_0108dea8:
R_0108dea8:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x108deb0u;
    f_801c8400(c);
R_0108deb0:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mr701_0108dec0(wp::Cpu& c) {
    WP_ENTER(0x108dec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mr701_0108ded0(wp::Cpu& c) {
    WP_ENTER(0x108ded0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr701_0108dee0(wp::Cpu& c) {
    WP_ENTER(0x108dee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108def8u: goto R_0108def8;
        case 0x108df00u: goto R_0108df00;
        case 0x108df08u: goto R_0108df08;
        case 0x108df44u: goto R_0108df44;
        case 0x108df50u: goto R_0108df50;
        case 0x108df60u: goto R_0108df60;
        case 0x108df6cu: goto R_0108df6c;
        case 0x108df78u: goto R_0108df78;
        case 0x108df88u: goto R_0108df88;
        case 0x108df94u: goto R_0108df94;
        case 0x108dfa0u: goto R_0108dfa0;
        case 0x108dfb0u: goto R_0108dfb0;
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
    c.lr = 0x108def8u;
    f_80034ac0(c);
R_0108def8:
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x108df00u;
    f_80034ac0(c);
R_0108df00:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x108df08u;
    f_80034ac0(c);
R_0108df08:
    c.r[4] = ((((g_mr701_bases[4] + 0x30b8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr701_bases[4] + 0x30bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x30b8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x30bcu) & 0xFFFFu);
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
    c.lr = 0x108df44u;
    f_80034c10(c);
R_0108df44:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x108df50u;
    f_80034df0(c);
R_0108df50:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x108df60u;
    f_80034e10(c);
R_0108df60:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x39u;
    c.lr = 0x108df6cu;
    f_80034c10(c);
R_0108df6c:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x0u;
    c.lr = 0x108df78u;
    f_80034df0(c);
R_0108df78:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x108df88u;
    f_80034e10(c);
R_0108df88:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x4u;
    c.lr = 0x108df94u;
    f_80034c10(c);
R_0108df94:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x1u;
    c.lr = 0x108dfa0u;
    f_80034df0(c);
R_0108dfa0:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x108dfb0u;
    f_80034e10(c);
R_0108dfb0:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_0108dfd0(wp::Cpu& c) {
    WP_ENTER(0x108dfd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108dff8u: goto R_0108dff8;
        case 0x108e004u: goto R_0108e004;
        case 0x108e010u: goto R_0108e010;
        case 0x108e03cu: goto R_0108e03c;
        case 0x108e054u: goto R_0108e054;
        case 0x108e064u: goto R_0108e064;
        case 0x108e070u: goto R_0108e070;
        case 0x108e078u: goto R_0108e078;
        case 0x108e080u: goto R_0108e080;
        case 0x108e0a0u: goto R_0108e0a0;
        case 0x108e0c0u: goto R_0108e0c0;
        case 0x108e0c8u: goto R_0108e0c8;
        case 0x108e0d0u: goto R_0108e0d0;
        case 0x108e0e4u: goto R_0108e0e4;
        case 0x108e0fcu: goto R_0108e0fc;
        case 0x108e118u: goto R_0108e118;
        case 0x108e130u: goto R_0108e130;
        case 0x108e14cu: goto R_0108e14c;
        case 0x108e154u: goto R_0108e154;
        case 0x108e15cu: goto R_0108e15c;
        case 0x108e164u: goto R_0108e164;
        case 0x108e16cu: goto R_0108e16c;
        case 0x108e17cu: goto R_0108e17c;
        case 0x108e194u: goto R_0108e194;
        case 0x108e1a8u: goto R_0108e1a8;
        case 0x108e1acu: goto R_0108e1ac;
        case 0x108e1b8u: goto R_0108e1b8;
        case 0x108e1d0u: goto R_0108e1d0;
        case 0x108e1e0u: goto R_0108e1e0;
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
    c.lr = 0x108dff8u;
    f_800e9850(c);
R_0108dff8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x14u;
    c.lr = 0x108e004u;
    f_800e9070(c);
R_0108e004:
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    c.r[3] = c.r[1] + 0x20u;
    c.lr = 0x108e010u;
    f_8014b090(c);
R_0108e010:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = ((((g_mr701_bases[4] + 0x30c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x30c0u) & 0xFFFFu);
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
    c.lr = 0x108e03cu;
    f_8014b8a0(c);
R_0108e03c:
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
    c.lr = 0x108e054u;
    f_8014b820(c);
R_0108e054:
    c.r[4] = c.r[1] + 0x20u;
    c.r[3] = c.r[1] + 0x50u;
    c.r[5] = c.r[4] | c.r[4];
    c.lr = 0x108e064u;
    f_8014b100(c);
R_0108e064:
    c.r[3] = c.r[1] + 0x20u;
    c.r[4] = 0x0u;
    c.lr = 0x108e070u;
    f_80154d30(c);
R_0108e070:
    c.r[3] = 0x0u;
    c.lr = 0x108e078u;
    f_80154e50(c);
R_0108e078:
    c.r[3] = 0x1u;
    c.lr = 0x108e080u;
    f_80151a30(c);
R_0108e080:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x108e0a0u;
    f_80151a60(c);
R_0108e0a0:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x108e0c0u;
    f_80151a60(c);
R_0108e0c0:
    c.r[3] = 0x0u;
    c.lr = 0x108e0c8u;
    f_8014f9d0(c);
R_0108e0c8:
    c.r[3] = 0x1u;
    c.lr = 0x108e0d0u;
    f_80153920(c);
R_0108e0d0:
    c.r[3] = 0x0u;
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x108e0e4u;
    f_801537c0(c);
R_0108e0e4:
    c.r[3] = 0x0u;
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0xfu;
    c.lr = 0x108e0fcu;
    f_80153320(c);
R_0108e0fc:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e118u;
    f_801533a0(c);
R_0108e118:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x108e130u;
    f_80153360(c);
R_0108e130:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e14cu;
    f_80153400(c);
R_0108e14c:
    c.r[3] = 0x2u;
    c.lr = 0x108e154u;
    f_80150850(c);
R_0108e154:
    c.r[3] = 0x0u;
    c.lr = 0x108e15cu;
    f_80153e40(c);
R_0108e15c:
    c.r[3] = 0x0u;
    c.lr = 0x108e164u;
    f_80153e90(c);
R_0108e164:
    c.r[3] = 0x1u;
    c.lr = 0x108e16cu;
    f_80153f20(c);
R_0108e16c:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x108e17cu;
    f_80153ee0(c);
R_0108e17c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x108e194u;
    f_801536f0(c);
R_0108e194:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x5u;
    c.lr = 0x108e1a8u;
    f_80153df0(c);
R_0108e1a8:
    c.lr = 0x108e1acu;
    f_8014f020(c);
R_0108e1ac:
    c.r[3] = 0x9u;
    c.r[4] = 0x1u;
    c.lr = 0x108e1b8u;
    f_8014e770(c);
R_0108e1b8:
    c.r[3] = 0x0u;
    c.r[4] = 0x9u;
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    c.r[7] = 0x0u;
    c.lr = 0x108e1d0u;
    f_8014f060(c);
R_0108e1d0:
    c.r[3] = 0x80u;
    c.r[4] = 0x0u;
    c.r[5] = 0x4u;
    c.lr = 0x108e1e0u;
    f_80150560(c);
R_0108e1e0:
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

void f_mr701_0108e240(wp::Cpu& c) {
    WP_ENTER(0x108e240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108e294u: goto R_0108e294;
        case 0x108e2b4u: goto R_0108e2b4;
        case 0x108e2d0u: goto R_0108e2d0;
        case 0x108e2ecu: goto R_0108e2ec;
        case 0x108e2fcu: goto R_0108e2fc;
        case 0x108e318u: goto R_0108e318;
        case 0x108e3a0u: goto R_0108e3a0;
        case 0x108e3acu: goto R_0108e3ac;
        case 0x108e3c0u: goto R_0108e3c0;
        case 0x108e3d0u: goto R_0108e3d0;
        case 0x108e3ecu: goto R_0108e3ec;
        case 0x108e444u: goto R_0108e444;
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
    c.lr = 0x108e294u;
    f_801c83b4(c);
R_0108e294:
    wp::compare_signed(c, 0, c.r[4], 0x1u);
    c.r[29] = ((((g_mr701_bases[4] + 0x30b8u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr701_bases[4] + 0x30b8u) & 0xFFFFu);
    if (wp::cr_get(c, 1)) goto L_0108e2f0;
    c.r[3] = 0x2u;
    c.lr = 0x108e2b4u;
    f_8014f9d0(c);
R_0108e2b4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x108e2d0u;
    f_8014f780(c);
R_0108e2d0:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x108e2ecu;
    f_8014f780(c);
R_0108e2ec:
    goto L_0108e3fc;
L_0108e2f0:
    c.r[0] = c.r[4] + 0x1u;
    c.r[3] = c.r[0] & 0xffu;
    c.lr = 0x108e2fcu;
    f_8014f9d0(c);
R_0108e2fc:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x108e318u;
    f_8014f780(c);
R_0108e318:
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
    c.r[28] = ((((g_mr701_bases[4] + 0x30c8u) + 0x8000u) >> 16) << 16);
    c.f[2] = wp::round_single(c.f[3] / c.f[1]);
    c.ps1[2] = c.f[2];
    c.r[4] = (((0x802f5684u + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5684u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr701_bases[4] + 0x30c8u) & 0xFFFFu);
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
    goto L_0108e3f4;
L_0108e368:
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
    c.lr = 0x108e3a0u;
    f_80126360(c);
R_0108e3a0:
    c.f[24] = wp::round_single(c.f[27] * wp::force25(c.f[1]));
    c.ps1[24] = c.f[24];
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[25]));
    c.ps1[1] = c.f[1];
    c.lr = 0x108e3acu;
    f_801263e0(c);
R_0108e3ac:
    c.f[2] = wp::round_single(c.f[26] * wp::force25(c.f[1]));
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.f[1] = c.f[24];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x108e3c0u;
    f_8014b7e0(c);
R_0108e3c0:
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = 0x1u;
    c.lr = 0x108e3d0u;
    f_80154e70(c);
R_0108e3d0:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[28] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x108e3ecu;
    f_8014f780(c);
R_0108e3ec:
    c.r[28] = c.r[28] + 0x8u;
    c.r[27] = c.r[27] + 0x1u;
L_0108e3f4:
    wp::compare_signed(c, 0, c.r[27], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108e368;
    }
L_0108e3fc:
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
    c.lr = 0x108e444u;
    f_801c8400(c);
R_0108e444:
    ea = c.r[1] + 0xe4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xe0u;
    return;
}

void f_mr701_0108e460(wp::Cpu& c) {
    WP_ENTER(0x108e460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108e474u: goto R_0108e474;
        case 0x108e4a0u: goto R_0108e4a0;
        case 0x108e4bcu: goto R_0108e4bc;
        case 0x108e4d4u: goto R_0108e4d4;
        case 0x108e4f0u: goto R_0108e4f0;
        case 0x108e4fcu: goto R_0108e4fc;
        case 0x108e510u: goto R_0108e510;
        case 0x108e528u: goto R_0108e528;
        case 0x108e544u: goto R_0108e544;
        case 0x108e55cu: goto R_0108e55c;
        case 0x108e574u: goto R_0108e574;
        case 0x108e590u: goto R_0108e590;
        case 0x108e5acu: goto R_0108e5ac;
        case 0x108e5c4u: goto R_0108e5c4;
        case 0x108e5e0u: goto R_0108e5e0;
        case 0x108e5f8u: goto R_0108e5f8;
        case 0x108e614u: goto R_0108e614;
        case 0x108e630u: goto R_0108e630;
        case 0x108e64cu: goto R_0108e64c;
        case 0x108e660u: goto R_0108e660;
        case 0x108e684u: goto R_0108e684;
        case 0x108e6a0u: goto R_0108e6a0;
        case 0x108e6b8u: goto R_0108e6b8;
        case 0x108e6d4u: goto R_0108e6d4;
        case 0x108e6fcu: goto R_0108e6fc;
        case 0x108e710u: goto R_0108e710;
        case 0x108e728u: goto R_0108e728;
        case 0x108e744u: goto R_0108e744;
        case 0x108e75cu: goto R_0108e75c;
        case 0x108e778u: goto R_0108e778;
        case 0x108e780u: goto R_0108e780;
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
    c.lr = 0x108e474u;
    f_801c83b4(c);
R_0108e474:
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
    c.lr = 0x108e4a0u;
    f_80153920(c);
R_0108e4a0:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108e548;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0xffu;
    c.lr = 0x108e4bcu;
    f_801537c0(c);
R_0108e4bc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x108e4d4u;
    f_80153360(c);
R_0108e4d4:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e4f0u;
    f_80153400(c);
R_0108e4f0:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.lr = 0x108e4fcu;
    f_801535e0(c);
R_0108e4fc:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x108e510u;
    f_801537c0(c);
R_0108e510:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x6u;
    c.r[6] = 0x0u;
    c.r[7] = 0x7u;
    c.lr = 0x108e528u;
    f_80153360(c);
R_0108e528:
    c.r[3] = 0x1u;
    c.r[4] = 0xfu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e544u;
    f_80153400(c);
R_0108e544:
    goto L_0108e590;
L_0108e548:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x108e55cu;
    f_801537c0(c);
R_0108e55c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x108e574u;
    f_80153360(c);
R_0108e574:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e590u;
    f_80153400(c);
L_0108e590:
R_0108e590:
    wp::compare_signed(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 1)) goto L_0108e618;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x108e5acu;
    f_801537c0(c);
R_0108e5ac:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x8u;
    c.lr = 0x108e5c4u;
    f_80153320(c);
R_0108e5c4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e5e0u;
    f_801533a0(c);
R_0108e5e0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x108e5f8u;
    f_80153360(c);
R_0108e5f8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e614u;
    f_80153400(c);
R_0108e614:
    goto L_0108e6e8;
L_0108e618:
    c.r[5] = ((((g_mr701_bases[4] + 0x3118u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x3118u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108e630u;
    f_80153530(c);
R_0108e630:
    c.r[31] = ((((g_mr701_bases[4] + 0x3120u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x3120u) & 0xFFFFu);
    goto L_0108e6e0;
L_0108e640:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x108e64cu;
    f_80153590(c);
R_0108e64c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] + 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x108e660u;
    f_801537c0(c);
R_0108e660:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0108e674;
    c.r[4] = 0xfu;
L_0108e674:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x108e684u;
    f_80153320(c);
R_0108e684:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e6a0u;
    f_801533a0(c);
R_0108e6a0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x108e6b8u;
    f_80153360(c);
R_0108e6b8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e6d4u;
    f_80153400(c);
R_0108e6d4:
    c.r[28] = c.r[28] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_0108e6e0:
    wp::compare_signed(c, 0, c.r[29], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108e640;
    }
L_0108e6e8:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108e778;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x108e6fcu;
    f_801535e0(c);
R_0108e6fc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x108e710u;
    f_801537c0(c);
R_0108e710:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x1u;
    c.lr = 0x108e728u;
    f_80153320(c);
R_0108e728:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e744u;
    f_801533a0(c);
R_0108e744:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x6u;
    c.lr = 0x108e75cu;
    f_80153360(c);
R_0108e75c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x108e778u;
    f_80153400(c);
L_0108e778:
R_0108e778:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x108e780u;
    f_801c8400(c);
R_0108e780:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr701_0108e790(wp::Cpu& c) {
    WP_ENTER(0x108e790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108e7c4u: goto R_0108e7c4;
        case 0x108e7ccu: goto R_0108e7cc;
        case 0x108e7d4u: goto R_0108e7d4;
        case 0x108e7dcu: goto R_0108e7dc;
        case 0x108e7ecu: goto R_0108e7ec;
        case 0x108e804u: goto R_0108e804;
        case 0x108e818u: goto R_0108e818;
        case 0x108e81cu: goto R_0108e81c;
        case 0x108e828u: goto R_0108e828;
        case 0x108e838u: goto R_0108e838;
        case 0x108e83cu: goto R_0108e83c;
        case 0x108e840u: goto R_0108e840;
        case 0x108e864u: goto R_0108e864;
        case 0x108e8acu: goto R_0108e8ac;
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
    c.lr = 0x108e7c4u;
    f_80150850(c);
R_0108e7c4:
    c.r[3] = 0x1u;
    c.lr = 0x108e7ccu;
    f_80153e40(c);
R_0108e7cc:
    c.r[3] = 0x0u;
    c.lr = 0x108e7d4u;
    f_80153e90(c);
R_0108e7d4:
    c.r[3] = 0x1u;
    c.lr = 0x108e7dcu;
    f_80153f20(c);
R_0108e7dc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x108e7ecu;
    f_80153ee0(c);
R_0108e7ec:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.r[7] = 0xffu;
    c.lr = 0x108e804u;
    f_801536f0(c);
R_0108e804:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x5u;
    c.r[6] = 0x5u;
    c.lr = 0x108e818u;
    f_80153df0(c);
R_0108e818:
    c.lr = 0x108e81cu;
    f_8014f020(c);
R_0108e81c:
    c.r[3] = ((((g_mr701_bases[4] + 0x3140u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x3140u) & 0xFFFFu);
    c.lr = 0x108e828u;
    f_8014e9e0(c);
R_0108e828:
    c.r[4] = ((((g_mr701_bases[4] + 0x3158u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x3158u) & 0xFFFFu);
    c.lr = 0x108e838u;
    f_8014f200(c);
R_0108e838:
    c.lr = 0x108e83cu;
    f_8004aa80(c);
R_0108e83c:
    c.lr = 0x108e840u;
    f_800ee3c0(c);
R_0108e840:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x108e864u;
    f_800e95b0(c);
R_0108e864:
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
    c.lr = 0x108e8acu;
    f_80150560(c);
R_0108e8ac:
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

void f_mr701_0108e930(wp::Cpu& c) {
    WP_ENTER(0x108e930u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108e96cu: goto R_0108e96c;
        case 0x108e980u: goto R_0108e980;
        case 0x108e98cu: goto R_0108e98c;
        case 0x108e99cu: goto R_0108e99c;
        case 0x108e9a8u: goto R_0108e9a8;
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
    c.lr = 0x108e96cu;
    f_8003d6b0(c);
R_0108e96c:
    c.r[4] = ((((g_mr701_bases[5] + 0x2fb98u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fb98u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x108e980u;
    f_801c79a4(c);
R_0108e980:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108e98c;
    c.lr = 0x108e98cu;
    f_mr701_0108dee0(c);
L_0108e98c:
R_0108e98c:
    ea = c.r[29] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x108e99cu;
    f_80052170(c);
R_0108e99c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108e9a8u;
    f_80052190(c);
R_0108e9a8:
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

void f_mr701_0108e9d0(wp::Cpu& c) {
    WP_ENTER(0x108e9d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ea18u: goto R_0108ea18;
        case 0x108ea24u: goto R_0108ea24;
        case 0x108ea30u: goto R_0108ea30;
        case 0x108ea38u: goto R_0108ea38;
        case 0x108ea4cu: goto R_0108ea4c;
        case 0x108ea5cu: goto R_0108ea5c;
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
    if (wp::cr_get(c, 2)) goto L_0108ea5c;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ea38;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ea38;
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x108ea18u;
    f_80034b10(c);
R_0108ea18:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x108ea24u;
    f_80034b10(c);
R_0108ea24:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x108ea30u;
    f_80034b10(c);
R_0108ea30:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108ea38u;
    f_801c7a8c(c);
L_0108ea38:
R_0108ea38:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ea4c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108ea4cu;
    f_80051600(c);
L_0108ea4c:
R_0108ea4c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108ea5c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108ea5cu;
    f_801c7a8c(c);
L_0108ea5c:
R_0108ea5c:
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

void f_mr701_0108ea80(wp::Cpu& c) {
    WP_ENTER(0x108ea80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr701_0108ea90(wp::Cpu& c) {
    WP_ENTER(0x108ea90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr701_0108eaa0(wp::Cpu& c) {
    WP_ENTER(0x108eaa0u);
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

void f_mr701_0108eac0(wp::Cpu& c) {
    WP_ENTER(0x108eac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr701_0108ead0(wp::Cpu& c) {
    WP_ENTER(0x108ead0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108eaf4u: goto R_0108eaf4;
        case 0x108eaf8u: goto R_0108eaf8;
        case 0x108eb14u: goto R_0108eb14;
        case 0x108eb3cu: goto R_0108eb3c;
        case 0x108eb48u: goto R_0108eb48;
        case 0x108eb50u: goto R_0108eb50;
        case 0x108eb5cu: goto R_0108eb5c;
        case 0x108eb64u: goto R_0108eb64;
        case 0x108eb6cu: goto R_0108eb6c;
        case 0x108eb8cu: goto R_0108eb8c;
        case 0x108ebacu: goto R_0108ebac;
        case 0x108ebb4u: goto R_0108ebb4;
        case 0x108ebc0u: goto R_0108ebc0;
        case 0x108ebd4u: goto R_0108ebd4;
        case 0x108ebe0u: goto R_0108ebe0;
        case 0x108ebe8u: goto R_0108ebe8;
        case 0x108ebf4u: goto R_0108ebf4;
        case 0x108ec00u: goto R_0108ec00;
        case 0x108ec10u: goto R_0108ec10;
        case 0x108ec14u: goto R_0108ec14;
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
    if (!wp::cr_get(c, 1)) goto L_0108ec14;
    c.lr = 0x108eaf4u;
    f_8004aa80(c);
R_0108eaf4:
    c.lr = 0x108eaf8u;
    f_800ee3c0(c);
R_0108eaf8:
    ea = c.r[31] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108eb14;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[31] + 0x1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108eb14u;
    f_mr701_0108dfd0(c);
L_0108eb14:
R_0108eb14:
    c.r[3] = ((((g_mr701_bases[4] + 0x30bcu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[4] + 0x30c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x30bcu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x30c0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[3] = c.f[1];
    c.f[4] = c.f[2];
    c.f[5] = c.f[1];
    c.f[6] = c.f[2];
    c.lr = 0x108eb3cu;
    f_8014c050(c);
R_0108eb3c:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x108eb48u;
    f_80154c30(c);
R_0108eb48:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x108eb50u;
    f_8014b090(c);
R_0108eb50:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x108eb5cu;
    f_80154d30(c);
R_0108eb5c:
    c.r[3] = 0x0u;
    c.lr = 0x108eb64u;
    f_80154e50(c);
R_0108eb64:
    c.r[3] = 0x0u;
    c.lr = 0x108eb6cu;
    f_80151a30(c);
R_0108eb6c:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x108eb8cu;
    f_80151a60(c);
R_0108eb8c:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x108ebacu;
    f_80151a60(c);
R_0108ebac:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108ebb4u;
    f_80034f00(c);
R_0108ebb4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x108ebc0u;
    f_80034f20(c);
R_0108ebc0:
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108ebe0;
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x108ebd4u;
    f_80034f00(c);
R_0108ebd4:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x1u;
    c.lr = 0x108ebe0u;
    f_80034f20(c);
L_0108ebe0:
R_0108ebe0:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x108ebe8u;
    f_80034f00(c);
R_0108ebe8:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x108ebf4u;
    f_80034f20(c);
R_0108ebf4:
    ea = c.r[31] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108ec00u;
    f_mr701_0108e240(c);
R_0108ec00:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[5] = wp::rd8(ea);
    c.lr = 0x108ec10u;
    f_mr701_0108e460(c);
R_0108ec10:
    c.lr = 0x108ec14u;
    f_mr701_0108e790(c);
L_0108ec14:
R_0108ec14:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr701_0108ec30(wp::Cpu& c) {
    WP_ENTER(0x108ec30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ec50u: goto R_0108ec50;
        case 0x108ec74u: goto R_0108ec74;
        case 0x108ecacu: goto R_0108ecac;
        case 0x108ecc0u: goto R_0108ecc0;
        case 0x108ecd4u: goto R_0108ecd4;
        case 0x108ece4u: goto R_0108ece4;
        case 0x108ecf0u: goto R_0108ecf0;
        case 0x108ed20u: goto R_0108ed20;
        case 0x108ed40u: goto R_0108ed40;
        case 0x108ed48u: goto R_0108ed48;
        case 0x108ed50u: goto R_0108ed50;
        case 0x108ed58u: goto R_0108ed58;
        case 0x108ed5cu: goto R_0108ed5c;
        case 0x108ed64u: goto R_0108ed64;
        case 0x108ed70u: goto R_0108ed70;
        case 0x108eda0u: goto R_0108eda0;
        case 0x108eda8u: goto R_0108eda8;
        case 0x108edacu: goto R_0108edac;
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
    c.lr = 0x108ec50u;
    f_80069af0(c);
R_0108ec50:
    c.r[3] = ((((g_mr701_bases[6] + 0x34u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr701_bases[5] + 0x2fbd0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[6] + 0x34u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fbd0u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x108ec74u;
    f_801c79a4(c);
R_0108ec74:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ec90;
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
L_0108ec90:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x108ecacu;
    f_801c79a4(c);
R_0108ecac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108ed24;
    c.r[29] = 0x0u;
    c.lr = 0x108ecc0u;
    f_8000dd70(c);
R_0108ecc0:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0108ece0;
    c.r[3] = 0xffffffffu;
    c.lr = 0x108ecd4u;
    f_8000e240(c);
R_0108ecd4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108ece0;
    c.r[29] = 0x1u;
L_0108ece0:
    c.lr = 0x108ece4u;
    f_8000dd70(c);
R_0108ece4:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108ecf0u;
    f_80007570(c);
R_0108ecf0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_0108ed10;
    c.r[4] = c.r[1] + 0xcu;
L_0108ed10:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x108ed20u;
    f_mr701_0103ead0(c);
R_0108ed20:
    c.r[30] = c.r[3] | c.r[3];
L_0108ed24:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ed40;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x108ed40u;
    f_mr701_0103eca0(c);
L_0108ed40:
R_0108ed40:
    c.r[3] = 0x0u;
    c.lr = 0x108ed48u;
    f_8006a800(c);
R_0108ed48:
    c.r[3] = 0x0u;
    c.lr = 0x108ed50u;
    f_80065040(c);
R_0108ed50:
    c.r[3] = 0x0u;
    c.lr = 0x108ed58u;
    f_8006c8b0(c);
R_0108ed58:
    c.lr = 0x108ed5cu;
    f_80066250(c);
R_0108ed5c:
    c.r[3] = 0x128u;
    c.lr = 0x108ed64u;
    f_801c79a4(c);
R_0108ed64:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ed70;
    c.lr = 0x108ed70u;
    f_mr701_0108bf90(c);
L_0108ed70:
R_0108ed70:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108eda0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108eda0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108eda0u;
    wp::call(c, c.ctr);
L_0108eda0:
R_0108eda0:
    c.r[3] = 0x1u;
    c.lr = 0x108eda8u;
    f_8001b020(c);
R_0108eda8:
    c.lr = 0x108edacu;
    f_8000dd30(c);
R_0108edac:
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

void f_mr701_0108ede0(wp::Cpu& c) {
    WP_ENTER(0x108ede0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ee1cu: goto R_0108ee1c;
        case 0x108ee48u: goto R_0108ee48;
        case 0x108ee4cu: goto R_0108ee4c;
        case 0x108ee5cu: goto R_0108ee5c;
        case 0x108ee60u: goto R_0108ee60;
        case 0x108ee64u: goto R_0108ee64;
        case 0x108ee90u: goto R_0108ee90;
        case 0x108eea4u: goto R_0108eea4;
        case 0x108eeccu: goto R_0108eecc;
        case 0x108eef4u: goto R_0108eef4;
        case 0x108ef1cu: goto R_0108ef1c;
        case 0x108ef24u: goto R_0108ef24;
        case 0x108ef28u: goto R_0108ef28;
        case 0x108ef2cu: goto R_0108ef2c;
        case 0x108ef34u: goto R_0108ef34;
        case 0x108ef38u: goto R_0108ef38;
        case 0x108ef3cu: goto R_0108ef3c;
        case 0x108ef64u: goto R_0108ef64;
        case 0x108ef78u: goto R_0108ef78;
        case 0x108efa0u: goto R_0108efa0;
        case 0x108efc8u: goto R_0108efc8;
        case 0x108eff0u: goto R_0108eff0;
        case 0x108eff8u: goto R_0108eff8;
        case 0x108f020u: goto R_0108f020;
        case 0x108f040u: goto R_0108f040;
        case 0x108f050u: goto R_0108f050;
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
    if (wp::cr_get(c, 2)) goto L_0108f050;
    c.r[4] = ((((g_mr701_bases[5] + 0x2fbd0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fbd0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x108ee1cu;
    f_mr701_0103ed40(c);
R_0108ee1c:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ee48;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108ee48;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108ee48u;
    wp::call(c, c.ctr);
L_0108ee48:
R_0108ee48:
    c.lr = 0x108ee4cu;
    f_8001aac0(c);
R_0108ee4c:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108ee5c;
    c.lr = 0x108ee5cu;
    f_8001b0c0(c);
L_0108ee5c:
R_0108ee5c:
    c.lr = 0x108ee60u;
    f_8004abf0(c);
R_0108ee60:
    c.lr = 0x108ee64u;
    f_80066250(c);
R_0108ee64:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ef24;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108ef24;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ee90;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x108ee90u;
    f_mr701_01039d00(c);
L_0108ee90:
R_0108ee90:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108eea4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x108eea4u;
    f_mr701_0103eca0(c);
L_0108eea4:
R_0108eea4:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108eecc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108eecc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108eeccu;
    wp::call(c, c.ctr);
L_0108eecc:
R_0108eecc:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108eef4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108eef4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108eef4u;
    wp::call(c, c.ctr);
L_0108eef4:
R_0108eef4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ef1c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ef1c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108ef1cu;
    wp::call(c, c.ctr);
L_0108ef1c:
R_0108ef1c:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108ef24u;
    f_801c7a8c(c);
L_0108ef24:
R_0108ef24:
    c.lr = 0x108ef28u;
    f_80041c20(c);
R_0108ef28:
    c.lr = 0x108ef2cu;
    f_8002d270(c);
R_0108ef2c:
    c.r[3] = 0x0u;
    c.lr = 0x108ef34u;
    f_80076130(c);
R_0108ef34:
    c.lr = 0x108ef38u;
    f_800656f0(c);
R_0108ef38:
    c.lr = 0x108ef3cu;
    f_80011270(c);
R_0108ef3c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108eff8;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108eff8;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ef64;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x108ef64u;
    f_mr701_01039d00(c);
L_0108ef64:
R_0108ef64:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ef78;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x108ef78u;
    f_mr701_0103eca0(c);
L_0108ef78:
R_0108ef78:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108efa0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108efa0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108efa0u;
    wp::call(c, c.ctr);
L_0108efa0:
R_0108efa0:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108efc8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108efc8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108efc8u;
    wp::call(c, c.ctr);
L_0108efc8:
R_0108efc8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108eff0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108eff0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108eff0u;
    wp::call(c, c.ctr);
L_0108eff0:
R_0108eff0:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108eff8u;
    f_801c7a8c(c);
L_0108eff8:
R_0108eff8:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108f020;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f020;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f020u;
    wp::call(c, c.ctr);
L_0108f020:
R_0108f020:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f034;
    c.r[3] = ((((g_mr701_bases[6] + 0x34u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr701_bases[6] + 0x34u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_0108f034:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x108f040u;
    f_80069c40(c);
R_0108f040:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108f050;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108f050u;
    f_801c7a8c(c);
L_0108f050:
R_0108f050:
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

void f_mr701_0108f070(wp::Cpu& c) {
    WP_ENTER(0x108f070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108f09cu: goto R_0108f09c;
        case 0x108f0a4u: goto R_0108f0a4;
        case 0x108f0bcu: goto R_0108f0bc;
        case 0x108f0f0u: goto R_0108f0f0;
        case 0x108f110u: goto R_0108f110;
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
    if (!wp::cr_get(c, 2)) goto L_0108f110;
    c.r[3] = 0x0u;
    c.lr = 0x108f09cu;
    f_mr701_0103ed20(c);
R_0108f09c:
    c.r[3] = 0x1a8u;
    c.lr = 0x108f0a4u;
    f_801c79a4(c);
R_0108f0a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f0bc;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x108f0bcu;
    f_mr701_01047f70(c);
L_0108f0bc:
R_0108f0bc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f0f0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108f0f0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f0f0u;
    wp::call(c, c.ctr);
L_0108f0f0:
R_0108f0f0:
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
    c.lr = 0x108f110u;
    wp::call(c, c.ctr);
L_0108f110:
R_0108f110:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_0108f130(wp::Cpu& c) {
    WP_ENTER(0x108f130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr701_0108f140(wp::Cpu& c) {
    WP_ENTER(0x108f140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr701_0108f150(wp::Cpu& c) {
    WP_ENTER(0x108f150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108f19cu: goto R_0108f19c;
        case 0x108f1a0u: goto R_0108f1a0;
        case 0x108f1b0u: goto R_0108f1b0;
        case 0x108f1d8u: goto R_0108f1d8;
        case 0x108f1e0u: goto R_0108f1e0;
        case 0x108f1f4u: goto R_0108f1f4;
        case 0x108f21cu: goto R_0108f21c;
        case 0x108f224u: goto R_0108f224;
        case 0x108f22cu: goto R_0108f22c;
        case 0x108f240u: goto R_0108f240;
        case 0x108f25cu: goto R_0108f25c;
        case 0x108f264u: goto R_0108f264;
        case 0x108f278u: goto R_0108f278;
        case 0x108f294u: goto R_0108f294;
        case 0x108f2a8u: goto R_0108f2a8;
        case 0x108f2b0u: goto R_0108f2b0;
        case 0x108f2bcu: goto R_0108f2bc;
        case 0x108f2d4u: goto R_0108f2d4;
        case 0x108f2d8u: goto R_0108f2d8;
        case 0x108f2e0u: goto R_0108f2e0;
        case 0x108f2ecu: goto R_0108f2ec;
        case 0x108f2f4u: goto R_0108f2f4;
        case 0x108f2f8u: goto R_0108f2f8;
        case 0x108f300u: goto R_0108f300;
        case 0x108f30cu: goto R_0108f30c;
        case 0x108f31cu: goto R_0108f31c;
        case 0x108f324u: goto R_0108f324;
        case 0x108f340u: goto R_0108f340;
        case 0x108f344u: goto R_0108f344;
        case 0x108f354u: goto R_0108f354;
        case 0x108f35cu: goto R_0108f35c;
        case 0x108f36cu: goto R_0108f36c;
        case 0x108f388u: goto R_0108f388;
        case 0x108f3b4u: goto R_0108f3b4;
        case 0x108f3d0u: goto R_0108f3d0;
        case 0x108f404u: goto R_0108f404;
        case 0x108f410u: goto R_0108f410;
        case 0x108f430u: goto R_0108f430;
        case 0x108f464u: goto R_0108f464;
        case 0x108f470u: goto R_0108f470;
        case 0x108f48cu: goto R_0108f48c;
        case 0x108f4c0u: goto R_0108f4c0;
        case 0x108f4dcu: goto R_0108f4dc;
        case 0x108f4f4u: goto R_0108f4f4;
        case 0x108f504u: goto R_0108f504;
        case 0x108f524u: goto R_0108f524;
        case 0x108f558u: goto R_0108f558;
        case 0x108f570u: goto R_0108f570;
        case 0x108f59cu: goto R_0108f59c;
        case 0x108f5d0u: goto R_0108f5d0;
        case 0x108f5d4u: goto R_0108f5d4;
        case 0x108f5ecu: goto R_0108f5ec;
        case 0x108f624u: goto R_0108f624;
        case 0x108f62cu: goto R_0108f62c;
        case 0x108f638u: goto R_0108f638;
        case 0x108f658u: goto R_0108f658;
        case 0x108f664u: goto R_0108f664;
        case 0x108f670u: goto R_0108f670;
        case 0x108f67cu: goto R_0108f67c;
        case 0x108f694u: goto R_0108f694;
        case 0x108f6d0u: goto R_0108f6d0;
        case 0x108f6d4u: goto R_0108f6d4;
        case 0x108f6d8u: goto R_0108f6d8;
        case 0x108f6ecu: goto R_0108f6ec;
        case 0x108f720u: goto R_0108f720;
        case 0x108f724u: goto R_0108f724;
        case 0x108f730u: goto R_0108f730;
        case 0x108f740u: goto R_0108f740;
        case 0x108f748u: goto R_0108f748;
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
    goto L_0108f1a0;
L_0108f17c:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108f19c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f19cu;
    wp::call(c, c.ctr);
L_0108f19c:
R_0108f19c:
    c.lr = 0x108f1a0u;
    f_8006a940(c);
L_0108f1a0:
R_0108f1a0:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108f17c;
    }
    c.lr = 0x108f1b0u;
    f_800760f0(c);
R_0108f1b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108f17c;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f1d8;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x108f1d8u;
    f_mr701_0103eca0(c);
L_0108f1d8:
R_0108f1d8:
    c.r[3] = 0x1u;
    c.lr = 0x108f1e0u;
    f_80076130(c);
R_0108f1e0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f1f4u;
    wp::call(c, c.ctr);
R_0108f1f4:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108f27c;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108f21cu;
    f_800104d0(c);
R_0108f21c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x108f224u;
    f_8000a7f0(c);
R_0108f224:
    c.r[3] = 0xffffffffu;
    c.lr = 0x108f22cu;
    f_8000e240(c);
R_0108f22c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108f26c;
    c.r[30] = 0x0u;
    goto L_0108f260;
L_0108f23c:
    c.lr = 0x108f240u;
    f_8000dd70(c);
R_0108f240:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x108f25cu;
    f_8000fc60(c);
R_0108f25c:
    c.r[30] = c.r[30] + 0x1u;
L_0108f260:
    c.lr = 0x108f264u;
    f_80007570(c);
R_0108f264:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108f23c;
    }
L_0108f26c:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x108f278u;
    f_800293c0(c);
R_0108f278:
    goto L_0108f740;
L_0108f27c:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f2c0;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108f294u;
    f_8000e070(c);
R_0108f294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_0108f2a4;
    c.r[3] = 0x6u;
L_0108f2a4:
    c.lr = 0x108f2a8u;
    f_8000e080(c);
R_0108f2a8:
    c.r[3] = 0x1u;
    c.lr = 0x108f2b0u;
    f_80029330(c);
R_0108f2b0:
    c.r[3] = ((((g_mr701_bases[5] + 0x2fbc0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[5] + 0x2fbc0u) & 0xFFFFu);
    c.lr = 0x108f2bcu;
    f_80029270(c);
R_0108f2bc:
    goto L_0108f740;
L_0108f2c0:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f304;
    c.r[29] = ((((g_mr701_bases[4] + 0x3188u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr701_bases[4] + 0x3188u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108f2d4u;
    f_80071fe0(c);
R_0108f2d4:
    c.lr = 0x108f2d8u;
    f_8001a890(c);
R_0108f2d8:
    c.r[3] = 0x0u;
    c.lr = 0x108f2e0u;
    f_80076130(c);
R_0108f2e0:
    ea = c.r[29] + wp::sign_extend16((g_mr701_bases[4] + 0x3188u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x108f2ecu;
    f_80075f20(c);
R_0108f2ec:
    c.r[3] = 0x1u;
    c.lr = 0x108f2f4u;
    f_80076130(c);
R_0108f2f4:
    c.lr = 0x108f2f8u;
    f_80076100(c);
R_0108f2f8:
    c.r[3] = 0x1u;
    c.lr = 0x108f300u;
    f_80029330(c);
R_0108f300:
    goto L_0108f740;
L_0108f304:
    c.r[3] = 0xffffffffu;
    c.lr = 0x108f30cu;
    f_80007f20(c);
R_0108f30c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x108f31cu;
    f_mr701_0108f770(c);
R_0108f31c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x108f324u;
    f_80041f70(c);
R_0108f324:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f340;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x108f340u;
    f_800402c0(c);
L_0108f340:
R_0108f340:
    c.lr = 0x108f344u;
    f_80076140(c);
R_0108f344:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f374;
    c.r[3] = 0x0u;
    c.lr = 0x108f354u;
    f_8004a100(c);
R_0108f354:
    c.r[3] = 0x1u;
    c.lr = 0x108f35cu;
    f_80072020(c);
R_0108f35c:
    c.r[4] = ((((g_mr701_bases[4] + 0x318cu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x318cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108f36cu;
    f_80075ed0(c);
R_0108f36c:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_0108f374:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f570;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x108f388u;
    f_80007530(c);
R_0108f388:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0108f3ac;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_0108f408;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_0108f468;
    goto L_0108f4dc;
L_0108f3ac:
    c.r[3] = 0x1acu;
    c.lr = 0x108f3b4u;
    f_801c79a4(c);
R_0108f3b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f3d0;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x108f3d0u;
    f_mr701_010584a0(c);
L_0108f3d0:
R_0108f3d0:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f4dc;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108f4dc;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f404u;
    wp::call(c, c.ctr);
R_0108f404:
    goto L_0108f4dc;
L_0108f408:
    c.r[3] = 0x1acu;
    c.lr = 0x108f410u;
    f_801c79a4(c);
R_0108f410:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f430;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x108f430u;
    f_mr701_010594e0(c);
L_0108f430:
R_0108f430:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f4dc;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108f4dc;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f464u;
    wp::call(c, c.ctr);
R_0108f464:
    goto L_0108f4dc;
L_0108f468:
    c.r[3] = 0x1bcu;
    c.lr = 0x108f470u;
    f_801c79a4(c);
R_0108f470:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f48c;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x108f48cu;
    f_mr701_0105a0e0(c);
L_0108f48c:
R_0108f48c:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f4c0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108f4c0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f4c0u;
    wp::call(c, c.ctr);
L_0108f4c0:
R_0108f4c0:
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
    c.lr = 0x108f4dcu;
    wp::call(c, c.ctr);
L_0108f4dc:
R_0108f4dc:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f558;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108f4f4u;
    f_mr701_0108f9b0(c);
R_0108f4f4:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_0108f558;
    c.r[3] = 0x1acu;
    c.lr = 0x108f504u;
    f_801c79a4(c);
R_0108f504:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f524;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x108f524u;
    f_mr701_010594e0(c);
L_0108f524:
R_0108f524:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f558;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108f558;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f558u;
    wp::call(c, c.ctr);
L_0108f558:
R_0108f558:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f570;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108f570u;
    f_mr701_0108f9b0(c);
L_0108f570:
R_0108f570:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f624;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f59cu;
    wp::call(c, c.ctr);
R_0108f59c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0108f5d4;
L_0108f5a4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108f5d0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f5d0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f5d0u;
    wp::call(c, c.ctr);
L_0108f5d0:
R_0108f5d0:
    c.lr = 0x108f5d4u;
    f_8006a940(c);
L_0108f5d4:
R_0108f5d4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f5ecu;
    wp::call(c, c.ctr);
R_0108f5ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108f5a4;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f624;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f624;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f624u;
    wp::call(c, c.ctr);
L_0108f624:
R_0108f624:
    c.r[3] = 0x4u;
    c.lr = 0x108f62cu;
    f_801c79a4(c);
R_0108f62c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f638;
    c.lr = 0x108f638u;
    f_mr701_01039c60(c);
L_0108f638:
R_0108f638:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f658;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x108f658u;
    f_mr701_01039d00(c);
L_0108f658:
R_0108f658:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108f664u;
    f_mr701_01039da0(c);
R_0108f664:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108f670u;
    f_mr701_01039d90(c);
R_0108f670:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108f67cu;
    f_mr701_01039d80(c);
R_0108f67c:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108f6e0;
    c.r[3] = 0x1u;
    c.lr = 0x108f694u;
    f_mr701_01038720(c);
R_0108f694:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108f6e0;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0108f6d4;
L_0108f6a4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108f6d0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f6d0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f6d0u;
    wp::call(c, c.ctr);
L_0108f6d0:
R_0108f6d0:
    c.lr = 0x108f6d4u;
    f_8006a940(c);
L_0108f6d4:
R_0108f6d4:
    c.lr = 0x108f6d8u;
    f_8006b760(c);
R_0108f6d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108f6a4;
    }
L_0108f6e0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108f6ecu;
    f_mr701_01039db0(c);
R_0108f6ec:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0108f724;
L_0108f6f4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108f720;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f720;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108f720u;
    wp::call(c, c.ctr);
L_0108f720:
R_0108f720:
    c.lr = 0x108f724u;
    f_8006a940(c);
L_0108f724:
R_0108f724:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108f730u;
    f_mr701_01039dd0(c);
R_0108f730:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108f6f4;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108f740u;
    f_mr701_0108fc00(c);
L_0108f740:
R_0108f740:
    c.r[3] = 0xffffffffu;
    c.lr = 0x108f748u;
    f_8006a8f0(c);
R_0108f748:
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

void f_mr701_0108f770(wp::Cpu& c) {
    WP_ENTER(0x108f770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108f784u: goto R_0108f784;
        case 0x108f794u: goto R_0108f794;
        case 0x108f7a0u: goto R_0108f7a0;
        case 0x108f7bcu: goto R_0108f7bc;
        case 0x108f7c4u: goto R_0108f7c4;
        case 0x108f7ccu: goto R_0108f7cc;
        case 0x108f830u: goto R_0108f830;
        case 0x108f84cu: goto R_0108f84c;
        case 0x108f868u: goto R_0108f868;
        case 0x108f8a0u: goto R_0108f8a0;
        case 0x108f8bcu: goto R_0108f8bc;
        case 0x108f8d8u: goto R_0108f8d8;
        case 0x108f8f4u: goto R_0108f8f4;
        case 0x108f90cu: goto R_0108f90c;
        case 0x108f944u: goto R_0108f944;
        case 0x108f960u: goto R_0108f960;
        case 0x108f97cu: goto R_0108f97c;
        case 0x108f998u: goto R_0108f998;
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
    c.lr = 0x108f784u;
    f_801c83b8(c);
R_0108f784:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x108f794u;
    f_8000fc40(c);
R_0108f794:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x108f7a0u;
    f_8000fc40(c);
R_0108f7a0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f7b8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108f7b8;
    c.r[3] = 0x0u;
    goto L_0108f990;
L_0108f7b8:
    c.lr = 0x108f7bcu;
    f_80007530(c);
R_0108f7bc:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x108f7c4u;
    f_800075a0(c);
R_0108f7c4:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x108f7ccu;
    f_8000dd00(c);
R_0108f7cc:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f800;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_0108f870;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_0108f8e0;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_0108f914;
    goto L_0108f984;
L_0108f800:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f81c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108f838;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108f854;
    goto L_0108f98c;
L_0108f81c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f830u;
    f_8000b780(c);
R_0108f830:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f838:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f84cu;
    f_8000b780(c);
R_0108f84c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f854:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f868u;
    f_8000b780(c);
R_0108f868:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f870:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f88c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108f8a8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108f8c4;
    goto L_0108f98c;
L_0108f88c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f8a0u;
    f_8000b780(c);
R_0108f8a0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f8a8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f8bcu;
    f_8000b780(c);
R_0108f8bc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f8c4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f8d8u;
    f_8000b780(c);
R_0108f8d8:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f8e0:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f8f4u;
    f_8000b780(c);
R_0108f8f4:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f90cu;
    f_8000b780(c);
R_0108f90c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f914:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108f930;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108f94c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108f968;
    goto L_0108f98c;
L_0108f930:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f944u;
    f_8000b780(c);
R_0108f944:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f94c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f960u;
    f_8000b780(c);
R_0108f960:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f968:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x108f97cu;
    f_8000b780(c);
R_0108f97c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0108f98c;
L_0108f984:
    c.r[3] = 0x0u;
    goto L_0108f990;
L_0108f98c:
    c.r[3] = 0x1u;
L_0108f990:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x108f998u;
    f_801c8404(c);
R_0108f998:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_0108f9b0(wp::Cpu& c) {
    WP_ENTER(0x108f9b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108f9c4u: goto R_0108f9c4;
        case 0x108f9e8u: goto R_0108f9e8;
        case 0x108fa20u: goto R_0108fa20;
        case 0x108fa24u: goto R_0108fa24;
        case 0x108fa3cu: goto R_0108fa3c;
        case 0x108fa74u: goto R_0108fa74;
        case 0x108fa8cu: goto R_0108fa8c;
        case 0x108fa90u: goto R_0108fa90;
        case 0x108fa98u: goto R_0108fa98;
        case 0x108fae4u: goto R_0108fae4;
        case 0x108fae8u: goto R_0108fae8;
        case 0x108fb24u: goto R_0108fb24;
        case 0x108fb44u: goto R_0108fb44;
        case 0x108fb7cu: goto R_0108fb7c;
        case 0x108fb80u: goto R_0108fb80;
        case 0x108fb98u: goto R_0108fb98;
        case 0x108fbdcu: goto R_0108fbdc;
        case 0x108fbe4u: goto R_0108fbe4;
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
    c.lr = 0x108f9c4u;
    f_801c83b8(c);
R_0108f9c4:
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
    c.lr = 0x108f9e8u;
    wp::call(c, c.ctr);
R_0108f9e8:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0108fa24;
L_0108f9f4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108fa20;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fa20;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fa20u;
    wp::call(c, c.ctr);
L_0108fa20:
R_0108fa20:
    c.lr = 0x108fa24u;
    f_8006a940(c);
L_0108fa24:
R_0108fa24:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fa3cu;
    wp::call(c, c.ctr);
R_0108fa3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fa50;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108f9f4;
    }
L_0108fa50:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0108fae8;
L_0108fa64:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_0108fa6c:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x108fa74u;
    f_8000fc40(c);
R_0108fa74:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fa84;
    c.r[0] = 0x0u;
    goto L_0108faa4;
L_0108fa84:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x108fa8cu;
    f_8000fc20(c);
R_0108fa8c:
    c.lr = 0x108fa90u;
    f_800699d0(c);
R_0108fa90:
    c.r[4] = 0x800u;
    c.lr = 0x108fa98u;
    f_80066cd0(c);
R_0108fa98:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_0108faa4:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108fa6c;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108fae4;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fae4;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fae4u;
    wp::call(c, c.ctr);
L_0108fae4:
R_0108fae4:
    c.lr = 0x108fae8u;
    f_8006a940(c);
L_0108fae8:
R_0108fae8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108fb0c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108fb0c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108fa64;
    }
L_0108fb0c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fb24u;
    wp::call(c, c.ctr);
R_0108fb24:
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
    c.lr = 0x108fb44u;
    wp::call(c, c.ctr);
R_0108fb44:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0108fb80;
L_0108fb50:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108fb7c;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fb7c;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fb7cu;
    wp::call(c, c.ctr);
L_0108fb7c:
R_0108fb7c:
    c.lr = 0x108fb80u;
    f_8006a940(c);
L_0108fb80:
R_0108fb80:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fb98u;
    wp::call(c, c.ctr);
R_0108fb98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fbac;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108fb50;
    }
L_0108fbac:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fbdc;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108fbdc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fbdcu;
    wp::call(c, c.ctr);
L_0108fbdc:
R_0108fbdc:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x108fbe4u;
    f_801c8404(c);
R_0108fbe4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr701_0108fc00(wp::Cpu& c) {
    WP_ENTER(0x108fc00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108fc14u: goto R_0108fc14;
        case 0x108fc2cu: goto R_0108fc2c;
        case 0x108fc38u: goto R_0108fc38;
        case 0x108fc48u: goto R_0108fc48;
        case 0x108fc54u: goto R_0108fc54;
        case 0x108fc64u: goto R_0108fc64;
        case 0x108fc7cu: goto R_0108fc7c;
        case 0x108fc98u: goto R_0108fc98;
        case 0x108fcb4u: goto R_0108fcb4;
        case 0x108fce4u: goto R_0108fce4;
        case 0x108fd1cu: goto R_0108fd1c;
        case 0x108fd20u: goto R_0108fd20;
        case 0x108fdb0u: goto R_0108fdb0;
        case 0x108fddcu: goto R_0108fddc;
        case 0x108fde4u: goto R_0108fde4;
        case 0x108fdf0u: goto R_0108fdf0;
        case 0x108fdf8u: goto R_0108fdf8;
        case 0x108fdfcu: goto R_0108fdfc;
        case 0x108fe04u: goto R_0108fe04;
        case 0x108fe18u: goto R_0108fe18;
        case 0x108fe34u: goto R_0108fe34;
        case 0x108fe3cu: goto R_0108fe3c;
        case 0x108fe50u: goto R_0108fe50;
        case 0x108fe5cu: goto R_0108fe5c;
        case 0x108fe64u: goto R_0108fe64;
        case 0x108fe70u: goto R_0108fe70;
        case 0x108fe78u: goto R_0108fe78;
        case 0x108fe7cu: goto R_0108fe7c;
        case 0x108fe80u: goto R_0108fe80;
        case 0x108fe94u: goto R_0108fe94;
        case 0x108fe9cu: goto R_0108fe9c;
        case 0x108fea8u: goto R_0108fea8;
        case 0x108feacu: goto R_0108feac;
        case 0x108feb4u: goto R_0108feb4;
        case 0x108fec0u: goto R_0108fec0;
        case 0x108fec8u: goto R_0108fec8;
        case 0x108feccu: goto R_0108fecc;
        case 0x108fed4u: goto R_0108fed4;
        case 0x108fedcu: goto R_0108fedc;
        case 0x108fee8u: goto R_0108fee8;
        case 0x108feecu: goto R_0108feec;
        case 0x108fef4u: goto R_0108fef4;
        case 0x108ff00u: goto R_0108ff00;
        case 0x108ff08u: goto R_0108ff08;
        case 0x108ff0cu: goto R_0108ff0c;
        case 0x108ff14u: goto R_0108ff14;
        case 0x108ff1cu: goto R_0108ff1c;
        case 0x108ff24u: goto R_0108ff24;
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
    c.lr = 0x108fc14u;
    f_801c83b4(c);
R_0108fc14:
    c.r[27] = ((((g_mr701_bases[4] + 0x3188u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr701_bases[4] + 0x3188u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x108fc2cu;
    f_800699d0(c);
R_0108fc2c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x108fc38u;
    f_80066e70(c);
R_0108fc38:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x108fc48u;
    f_80066db0(c);
R_0108fc48:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x108fc54u;
    f_801c79a4(c);
R_0108fc54:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108fcb8;
    c.lr = 0x108fc64u;
    f_80007530(c);
R_0108fc64:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0108fc78;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_0108fc90;
L_0108fc78:
    c.lr = 0x108fc7cu;
    f_8000dc30(c);
R_0108fc7c:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_0108fc94;
L_0108fc90:
    c.r[26] = 0x0u;
L_0108fc94:
    c.lr = 0x108fc98u;
    f_8000e070(c);
R_0108fc98:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x108fcb4u;
    f_mr701_01070420(c);
R_0108fcb4:
    c.r[29] = c.r[3] | c.r[3];
L_0108fcb8:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108fce4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_0108fce4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fce4u;
    wp::call(c, c.ctr);
L_0108fce4:
R_0108fce4:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0108fd20;
L_0108fcf0:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108fd1c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fd1c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fd1cu;
    wp::call(c, c.ctr);
L_0108fd1c:
R_0108fd1c:
    c.lr = 0x108fd20u;
    f_8006a940(c);
L_0108fd20:
R_0108fd20:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_0108fd40;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108fcf0;
    }
L_0108fd40:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fd68;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108fd70;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108fd78;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_0108fd80;
    goto L_0108fd84;
L_0108fd68:
    c.r[31] = 0x0u;
    goto L_0108fd84;
L_0108fd70:
    c.r[31] = 0x1u;
    goto L_0108fd84;
L_0108fd78:
    c.r[31] = 0x2u;
    goto L_0108fd84;
L_0108fd80:
    c.r[31] = 0x3u;
L_0108fd84:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fdb0;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108fdb0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108fdb0u;
    wp::call(c, c.ctr);
L_0108fdb0:
R_0108fdb0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108fdd4;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0108fe54;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0108fea0;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_0108fee0;
    goto L_0108ff1c;
L_0108fdd4:
    c.r[3] = 0x5u;
    c.lr = 0x108fddcu;
    f_8001a890(c);
R_0108fddc:
    c.r[3] = 0x0u;
    c.lr = 0x108fde4u;
    f_80076130(c);
R_0108fde4:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x108fdf0u;
    f_80075f20(c);
R_0108fdf0:
    c.r[3] = 0x1u;
    c.lr = 0x108fdf8u;
    f_80076130(c);
R_0108fdf8:
    c.lr = 0x108fdfcu;
    f_80076100(c);
R_0108fdfc:
    c.r[3] = 0xffffffffu;
    c.lr = 0x108fe04u;
    f_8000e240(c);
R_0108fe04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108fe44;
    c.r[26] = 0x0u;
    goto L_0108fe38;
L_0108fe14:
    c.lr = 0x108fe18u;
    f_8000dd70(c);
R_0108fe18:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x108fe34u;
    f_8000fc60(c);
R_0108fe34:
    c.r[26] = c.r[26] + 0x1u;
L_0108fe38:
    c.lr = 0x108fe3cu;
    f_80007570(c);
R_0108fe3c:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108fe14;
    }
L_0108fe44:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x108fe50u;
    f_800293c0(c);
R_0108fe50:
    goto L_0108ff1c;
L_0108fe54:
    c.r[3] = 0x5u;
    c.lr = 0x108fe5cu;
    f_8001a890(c);
R_0108fe5c:
    c.r[3] = 0x0u;
    c.lr = 0x108fe64u;
    f_80076130(c);
R_0108fe64:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x108fe70u;
    f_80075f20(c);
R_0108fe70:
    c.r[3] = 0x1u;
    c.lr = 0x108fe78u;
    f_80076130(c);
R_0108fe78:
    c.lr = 0x108fe7cu;
    f_80076100(c);
R_0108fe7c:
    c.lr = 0x108fe80u;
    f_8000e070(c);
R_0108fe80:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_0108fe90;
    c.r[3] = 0x6u;
L_0108fe90:
    c.lr = 0x108fe94u;
    f_8000e080(c);
R_0108fe94:
    c.r[3] = 0x1u;
    c.lr = 0x108fe9cu;
    f_80029330(c);
R_0108fe9c:
    goto L_0108ff1c;
L_0108fea0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108fea8u;
    f_80071fe0(c);
R_0108fea8:
    c.lr = 0x108feacu;
    f_8001a890(c);
R_0108feac:
    c.r[3] = 0x0u;
    c.lr = 0x108feb4u;
    f_80076130(c);
R_0108feb4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x108fec0u;
    f_80075f20(c);
R_0108fec0:
    c.r[3] = 0x1u;
    c.lr = 0x108fec8u;
    f_80076130(c);
R_0108fec8:
    c.lr = 0x108feccu;
    f_80076100(c);
R_0108fecc:
    c.r[3] = 0x4u;
    c.lr = 0x108fed4u;
    f_8000e080(c);
R_0108fed4:
    c.r[3] = 0x1u;
    c.lr = 0x108fedcu;
    f_80029330(c);
R_0108fedc:
    goto L_0108ff1c;
L_0108fee0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108fee8u;
    f_80071fe0(c);
R_0108fee8:
    c.lr = 0x108feecu;
    f_8001a890(c);
R_0108feec:
    c.r[3] = 0x0u;
    c.lr = 0x108fef4u;
    f_80076130(c);
R_0108fef4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x108ff00u;
    f_80075f20(c);
R_0108ff00:
    c.r[3] = 0x1u;
    c.lr = 0x108ff08u;
    f_80076130(c);
R_0108ff08:
    c.lr = 0x108ff0cu;
    f_80076100(c);
R_0108ff0c:
    c.r[3] = 0x8u;
    c.lr = 0x108ff14u;
    f_8000e080(c);
R_0108ff14:
    c.r[3] = 0x1u;
    c.lr = 0x108ff1cu;
    f_80029330(c);
L_0108ff1c:
R_0108ff1c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x108ff24u;
    f_801c8400(c);
R_0108ff24:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr701_0108ff40(wp::Cpu& c) {
    WP_ENTER(0x108ff40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ff78u: goto R_0108ff78;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr701_bases[5] + 0x2fbe8u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr701_bases[6] + 0x54u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fbe8u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[6] + 0x54u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    c.lr = 0x108ff78u;
    f_80030b40(c);
R_0108ff78:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr701_0108ff90(wp::Cpu& c) {
    WP_ENTER(0x108ff90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ffc0u: goto R_0108ffc0;
        case 0x108ffc8u: goto R_0108ffc8;
        case 0x108fff4u: goto R_0108fff4;
        case 0x1090000u: goto R_01090000;
        case 0x1090024u: goto R_01090024;
        case 0x109004cu: goto R_0109004c;
        case 0x1090064u: goto R_01090064;
        case 0x1090080u: goto R_01090080;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr701_bases[4] + 0x31c0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr701_bases[4] + 0x31c0u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108ffc0u;
    f_80153530(c);
R_0108ffc0:
    c.r[3] = 0x6u;
    c.lr = 0x108ffc8u;
    f_80153920(c);
R_0108ffc8:
    c.r[31] = ((((g_mr701_bases[4] + 0x31c8u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr701_bases[4] + 0x31c8u) & 0xFFFFu);
L_0108ffd4:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x108fff4u;
    f_801537c0(c);
R_0108fff4:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1090000u;
    f_80153590(c);
R_01090000:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_01090014;
    c.r[4] = 0xfu;
L_01090014:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x1090024u;
    f_80153320(c);
R_01090024:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_01090040;
    c.r[6] = 0x3u;
L_01090040:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x109004cu;
    f_801533a0(c);
R_0109004c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x1090064u;
    f_80153360(c);
R_01090064:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1090080u;
    f_80153400(c);
R_01090080:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108ffd4;
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

void f_mr701_010900b0(wp::Cpu& c) {
    WP_ENTER(0x10900b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10900e4u: goto R_010900e4;
        case 0x10900ecu: goto R_010900ec;
        case 0x10900f4u: goto R_010900f4;
        case 0x10900fcu: goto R_010900fc;
        case 0x109010cu: goto R_0109010c;
        case 0x1090124u: goto R_01090124;
        case 0x1090138u: goto R_01090138;
        case 0x109013cu: goto R_0109013c;
        case 0x1090148u: goto R_01090148;
        case 0x1090158u: goto R_01090158;
        case 0x109015cu: goto R_0109015c;
        case 0x1090160u: goto R_01090160;
        case 0x1090184u: goto R_01090184;
        case 0x10901ccu: goto R_010901cc;
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
    c.lr = 0x10900e4u;
    f_80150850(c);
R_010900e4:
    c.r[3] = 0x1u;
    c.lr = 0x10900ecu;
    f_80153e40(c);
R_010900ec:
    c.r[3] = 0x0u;
    c.lr = 0x10900f4u;
    f_80153e90(c);
R_010900f4:
    c.r[3] = 0x1u;
    c.lr = 0x10900fcu;
    f_80153f20(c);
R_010900fc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x109010cu;
    f_80153ee0(c);
R_0109010c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x1090124u;
    f_801536f0(c);
R_01090124:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x1090138u;
    f_80153df0(c);
R_01090138:
    c.lr = 0x109013cu;
    f_8014f020(c);
R_0109013c:
    c.r[3] = ((((g_mr701_bases[4] + 0x31e8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr701_bases[4] + 0x31e8u) & 0xFFFFu);
    c.lr = 0x1090148u;
    f_8014e9e0(c);
R_01090148:
    c.r[4] = ((((g_mr701_bases[4] + 0x3200u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[4] + 0x3200u) & 0xFFFFu);
    c.lr = 0x1090158u;
    f_8014f200(c);
R_01090158:
    c.lr = 0x109015cu;
    f_8004aa80(c);
R_0109015c:
    c.lr = 0x1090160u;
    f_800ee3c0(c);
R_01090160:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1090184u;
    f_800e95b0(c);
R_01090184:
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
    c.lr = 0x10901ccu;
    f_80150560(c);
R_010901cc:
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

void f_mr701_01090250(wp::Cpu& c) {
    WP_ENTER(0x1090250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1090290u: goto R_01090290;
        case 0x10902a4u: goto R_010902a4;
        case 0x10902b4u: goto R_010902b4;
        case 0x10902c4u: goto R_010902c4;
        case 0x10902d0u: goto R_010902d0;
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
    c.lr = 0x1090290u;
    f_8003d6b0(c);
R_01090290:
    c.r[4] = ((((g_mr701_bases[5] + 0x2fbf8u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr701_bases[5] + 0x2fbf8u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10902a4u;
    f_801c79a4(c);
R_010902a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010902b4;
    c.lr = 0x10902b4u;
    f_80034ac0(c);
L_010902b4:
R_010902b4:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10902c4u;
    f_80052170(c);
R_010902c4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10902d0u;
    f_80052190(c);
R_010902d0:
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

void f_mr701_01090300(wp::Cpu& c) {
    WP_ENTER(0x1090300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1090348u: goto R_01090348;
        case 0x1090350u: goto R_01090350;
        case 0x1090364u: goto R_01090364;
        case 0x1090374u: goto R_01090374;
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
    if (wp::cr_get(c, 2)) goto L_01090374;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01090350;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01090350;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x1090348u;
    f_80034b10(c);
R_01090348:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1090350u;
    f_801c7a8c(c);
L_01090350:
R_01090350:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01090364;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1090364u;
    f_80051600(c);
L_01090364:
R_01090364:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01090374;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1090374u;
    f_801c7a8c(c);
L_01090374:
R_01090374:
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

void f_mr701_010903a0(wp::Cpu& c) {
    WP_ENTER(0x10903a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10903e4u: goto R_010903e4;
        case 0x1090410u: goto R_01090410;
        case 0x109041cu: goto R_0109041c;
        case 0x1090424u: goto R_01090424;
        case 0x1090430u: goto R_01090430;
        case 0x1090438u: goto R_01090438;
        case 0x1090440u: goto R_01090440;
        case 0x1090460u: goto R_01090460;
        case 0x1090480u: goto R_01090480;
        case 0x1090488u: goto R_01090488;
        case 0x1090494u: goto R_01090494;
        case 0x10904c4u: goto R_010904c4;
        case 0x10904e0u: goto R_010904e0;
        case 0x1090528u: goto R_01090528;
        case 0x1090544u: goto R_01090544;
        case 0x109055cu: goto R_0109055c;
        case 0x1090578u: goto R_01090578;
        case 0x1090588u: goto R_01090588;
        case 0x109058cu: goto R_0109058c;
        case 0x10905c4u: goto R_010905c4;
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
    c.lr = 0x10903e4u;
    f_801c83b8(c);
R_010903e4:
    c.r[29] = ((((g_mr701_bases[4] + 0x31a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr701_bases[4] + 0x31a0u) & 0xFFFFu);
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
    c.lr = 0x1090410u;
    f_8014c050(c);
R_01090410:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x109041cu;
    f_80154c30(c);
R_0109041c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1090424u;
    f_8014b090(c);
R_01090424:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1090430u;
    f_80154d30(c);
R_01090430:
    c.r[3] = 0x0u;
    c.lr = 0x1090438u;
    f_80154e50(c);
R_01090438:
    c.r[3] = 0x0u;
    c.lr = 0x1090440u;
    f_80151a30(c);
R_01090440:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1090460u;
    f_80151a60(c);
R_01090460:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1090480u;
    f_80151a60(c);
R_01090480:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1090488u;
    f_80034f00(c);
R_01090488:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1090494u;
    f_80034f20(c);
R_01090494:
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
    c.lr = 0x10904c4u;
    f_8014f9d0(c);
R_010904c4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x10904e0u;
    f_8014f780(c);
R_010904e0:
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
L_010904fc:
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
    c.lr = 0x1090528u;
    f_80126450(c);
R_01090528:
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
    c.lr = 0x1090544u;
    f_8014b7e0(c);
R_01090544:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x109055cu;
    f_80154e70(c);
R_0109055c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1090578u;
    f_8014f780(c);
R_01090578:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010904fc;
    }
    c.lr = 0x1090588u;
    f_mr701_0108ff90(c);
R_01090588:
    c.lr = 0x109058cu;
    f_mr701_010900b0(c);
R_0109058c:
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
    c.lr = 0x10905c4u;
    f_801c8404(c);
R_010905c4:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

