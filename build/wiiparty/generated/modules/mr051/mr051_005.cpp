#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr051_bases[17];
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
void f_800195d0(wp::Cpu& c);
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
void f_80047ac0(wp::Cpu& c);
void f_80047ad0(wp::Cpu& c);
void f_80048ec0(wp::Cpu& c);
void f_80048f30(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004a110(wp::Cpu& c);
void f_8004a120(wp::Cpu& c);
void f_8004aa80(wp::Cpu& c);
void f_8004abf0(wp::Cpu& c);
void f_800508f0(wp::Cpu& c);
void f_80051600(wp::Cpu& c);
void f_80052170(wp::Cpu& c);
void f_80052190(wp::Cpu& c);
void f_80052250(wp::Cpu& c);
void f_80053060(wp::Cpu& c);
void f_80053d20(wp::Cpu& c);
void f_80053d40(wp::Cpu& c);
void f_80053df0(wp::Cpu& c);
void f_80053e70(wp::Cpu& c);
void f_80054e60(wp::Cpu& c);
void f_80055290(wp::Cpu& c);
void f_80055bb0(wp::Cpu& c);
void f_80055d80(wp::Cpu& c);
void f_80055d90(wp::Cpu& c);
void f_80055f10(wp::Cpu& c);
void f_80056040(wp::Cpu& c);
void f_80058490(wp::Cpu& c);
void f_8005a6f0(wp::Cpu& c);
void f_800609f0(wp::Cpu& c);
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
void f_8006b500(wp::Cpu& c);
void f_8006b590(wp::Cpu& c);
void f_8006b760(wp::Cpu& c);
void f_8006c450(wp::Cpu& c);
void f_8006c460(wp::Cpu& c);
void f_8006c4e0(wp::Cpu& c);
void f_8006c8b0(wp::Cpu& c);
void f_8006cf60(wp::Cpu& c);
void f_8006dbd0(wp::Cpu& c);
void f_8006dfe0(wp::Cpu& c);
void f_80071fe0(wp::Cpu& c);
void f_80072020(wp::Cpu& c);
void f_80075ed0(wp::Cpu& c);
void f_80075f20(wp::Cpu& c);
void f_800760f0(wp::Cpu& c);
void f_80076100(wp::Cpu& c);
void f_80076130(wp::Cpu& c);
void f_80076140(wp::Cpu& c);
void f_8009db20(wp::Cpu& c);
void f_800cd2d0(wp::Cpu& c);
void f_800cf050(wp::Cpu& c);
void f_800cfc70(wp::Cpu& c);
void f_800e95b0(wp::Cpu& c);
void f_800ee3c0(wp::Cpu& c);
void f_800f1d70(wp::Cpu& c);
void f_800f2190(wp::Cpu& c);
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
void f_8014b7e0(wp::Cpu& c);
void f_8014c050(wp::Cpu& c);
void f_8014c0f0(wp::Cpu& c);
void f_8014c120(wp::Cpu& c);
void f_8014c150(wp::Cpu& c);
void f_8014c170(wp::Cpu& c);
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
void f_801c8068(wp::Cpu& c);
void f_801c8160(wp::Cpu& c);
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
void f_mr051_01000000(wp::Cpu& c);
void f_mr051_01016cc0(wp::Cpu& c);
void f_mr051_01016e80(wp::Cpu& c);
void f_mr051_01020b30(wp::Cpu& c);
void f_mr051_01020c40(wp::Cpu& c);
void f_mr051_01020c60(wp::Cpu& c);
void f_mr051_01020c80(wp::Cpu& c);
void f_mr051_010211e0(wp::Cpu& c);
void f_mr051_010212b0(wp::Cpu& c);
void f_mr051_01023b70(wp::Cpu& c);
void f_mr051_010250b0(wp::Cpu& c);
void f_mr051_01025150(wp::Cpu& c);
void f_mr051_010251d0(wp::Cpu& c);
void f_mr051_010251e0(wp::Cpu& c);
void f_mr051_010251f0(wp::Cpu& c);
void f_mr051_01025200(wp::Cpu& c);
void f_mr051_01025220(wp::Cpu& c);
void f_mr051_01029f20(wp::Cpu& c);
void f_mr051_0102a0f0(wp::Cpu& c);
void f_mr051_0102a170(wp::Cpu& c);
void f_mr051_0102a180(wp::Cpu& c);
void f_mr051_0102a1d0(wp::Cpu& c);
void f_mr051_0102a700(wp::Cpu& c);
void f_mr051_01031060(wp::Cpu& c);
void f_mr051_01033120(wp::Cpu& c);
void f_mr051_01043d20(wp::Cpu& c);
void f_mr051_01044d60(wp::Cpu& c);
void f_mr051_01045960(wp::Cpu& c);
void f_mr051_0105bca0(wp::Cpu& c);
void f_mr051_01060090(wp::Cpu& c);
void f_mr051_01068710(wp::Cpu& c);
void f_mr051_01068780(wp::Cpu& c);
void f_mr051_01068ba0(wp::Cpu& c);
void f_mr051_01068d50(wp::Cpu& c);
void f_mr051_010695b0(wp::Cpu& c);
void f_mr051_010697f0(wp::Cpu& c);
void f_mr051_01069830(wp::Cpu& c);
void f_mr051_01069870(wp::Cpu& c);
void f_mr051_01069910(wp::Cpu& c);
void f_mr051_01069a80(wp::Cpu& c);
void f_mr051_01069e60(wp::Cpu& c);
void f_mr051_01069e70(wp::Cpu& c);
void f_mr051_01069f10(wp::Cpu& c);
void f_mr051_0106a040(wp::Cpu& c);
void f_mr051_0106a420(wp::Cpu& c);
void f_mr051_0106a540(wp::Cpu& c);
void f_mr051_0106adf0(wp::Cpu& c);
void f_mr051_0106ae60(wp::Cpu& c);
void f_mr051_0106ae70(wp::Cpu& c);
void f_mr051_0106aea0(wp::Cpu& c);
void f_mr051_0106aef0(wp::Cpu& c);
void f_mr051_0106b230(wp::Cpu& c);
void f_mr051_0106b250(wp::Cpu& c);
void f_mr051_0106b260(wp::Cpu& c);
void f_mr051_0106b280(wp::Cpu& c);
void f_mr051_0106b290(wp::Cpu& c);
void f_mr051_0106b2a0(wp::Cpu& c);
void f_mr051_0106b2b0(wp::Cpu& c);
void f_mr051_0106b310(wp::Cpu& c);
void f_mr051_0106b360(wp::Cpu& c);
void f_mr051_0106b390(wp::Cpu& c);
void f_mr051_0106b410(wp::Cpu& c);
void f_mr051_0106b420(wp::Cpu& c);
void f_mr051_0106b430(wp::Cpu& c);
void f_mr051_0106b440(wp::Cpu& c);
void f_mr051_0106b450(wp::Cpu& c);
void f_mr051_0106b460(wp::Cpu& c);
void f_mr051_0106b470(wp::Cpu& c);
void f_mr051_0106b480(wp::Cpu& c);
void f_mr051_0106b490(wp::Cpu& c);
void f_mr051_0106b4a0(wp::Cpu& c);
void f_mr051_0106b4b0(wp::Cpu& c);
void f_mr051_0106b4c0(wp::Cpu& c);
void f_mr051_0106b4d0(wp::Cpu& c);
void f_mr051_0106b4e0(wp::Cpu& c);
void f_mr051_0106b4f0(wp::Cpu& c);
void f_mr051_0106b630(wp::Cpu& c);
void f_mr051_0106b750(wp::Cpu& c);
void f_mr051_0106b8e0(wp::Cpu& c);
void f_mr051_0106b950(wp::Cpu& c);
void f_mr051_0106b960(wp::Cpu& c);
void f_mr051_0106ba10(wp::Cpu& c);
void f_mr051_0106bac0(wp::Cpu& c);
void f_mr051_0106bb70(wp::Cpu& c);
void f_mr051_0106bd40(wp::Cpu& c);
void f_mr051_0106bed0(wp::Cpu& c);
void f_mr051_0106c060(wp::Cpu& c);
void f_mr051_0106c7f0(wp::Cpu& c);
void f_mr051_0106cf40(wp::Cpu& c);
void f_mr051_0106d7f0(wp::Cpu& c);
void f_mr051_0106e060(wp::Cpu& c);
void f_mr051_0106e070(wp::Cpu& c);
void f_mr051_0106e080(wp::Cpu& c);
void f_mr051_0106e090(wp::Cpu& c);
void f_mr051_0106e0a0(wp::Cpu& c);
void f_mr051_0106e190(wp::Cpu& c);
void f_mr051_0106e1f0(wp::Cpu& c);
void f_mr051_0106e2d0(wp::Cpu& c);
void f_mr051_0106e390(wp::Cpu& c);
void f_mr051_0106e470(wp::Cpu& c);
void f_mr051_0106e4f0(wp::Cpu& c);
void f_mr051_0106e860(wp::Cpu& c);
void f_mr051_0106e990(wp::Cpu& c);
void f_mr051_0106ea40(wp::Cpu& c);
void f_mr051_0106eae0(wp::Cpu& c);
void f_mr051_0106ebf0(wp::Cpu& c);
void f_mr051_0106ec40(wp::Cpu& c);
void f_mr051_0106ec90(wp::Cpu& c);
void f_mr051_0106ece0(wp::Cpu& c);
void f_mr051_0106efd0(wp::Cpu& c);
void f_mr051_0106f060(wp::Cpu& c);
void f_mr051_0106f0b0(wp::Cpu& c);
void f_mr051_0106f100(wp::Cpu& c);
void f_mr051_0106f1d0(wp::Cpu& c);
void f_mr051_0106f3c0(wp::Cpu& c);
void f_mr051_0106f400(wp::Cpu& c);
void f_mr051_0106f460(wp::Cpu& c);
void f_mr051_0106f4d0(wp::Cpu& c);
void f_mr051_0106f740(wp::Cpu& c);
void f_mr051_0106f7a0(wp::Cpu& c);
void f_mr051_0106f9b0(wp::Cpu& c);
void f_mr051_0106f9c0(wp::Cpu& c);
void f_mr051_0106f9f0(wp::Cpu& c);
void f_mr051_0106fbc0(wp::Cpu& c);
void f_mr051_0106fbe0(wp::Cpu& c);
void f_mr051_0106fc50(wp::Cpu& c);
void f_mr051_0106fcc0(wp::Cpu& c);
void f_mr051_0106fd30(wp::Cpu& c);
void f_mr051_0106fdb0(wp::Cpu& c);
void f_mr051_0106fe20(wp::Cpu& c);
void f_mr051_010700a0(wp::Cpu& c);
void f_mr051_01070180(wp::Cpu& c);
void f_mr051_01070280(wp::Cpu& c);
void f_mr051_01070360(wp::Cpu& c);
void f_mr051_01070440(wp::Cpu& c);
void f_mr051_01070520(wp::Cpu& c);
void f_mr051_01070600(wp::Cpu& c);
void f_mr051_01070d30(wp::Cpu& c);
void f_mr051_01070d40(wp::Cpu& c);
void f_mr051_01070d50(wp::Cpu& c);
void f_mr051_01070e70(wp::Cpu& c);
void f_mr051_01070eb0(wp::Cpu& c);
void f_mr051_01070ed0(wp::Cpu& c);
void f_mr051_01070f60(wp::Cpu& c);
void f_mr051_01071050(wp::Cpu& c);
void f_mr051_01071140(wp::Cpu& c);
void f_mr051_01071280(wp::Cpu& c);
void f_mr051_010713c0(wp::Cpu& c);
void f_mr051_010714c0(wp::Cpu& c);
void f_mr051_01071500(wp::Cpu& c);
void f_mr051_010716f0(wp::Cpu& c);
void f_mr051_01071770(wp::Cpu& c);
void f_mr051_010717f0(wp::Cpu& c);
void f_mr051_01071870(wp::Cpu& c);
void f_mr051_01071b60(wp::Cpu& c);
void f_mr051_01071d00(wp::Cpu& c);
void f_mr051_01071ea0(wp::Cpu& c);
void f_mr051_01071fb0(wp::Cpu& c);
void f_mr051_010720b0(wp::Cpu& c);
void f_mr051_010721e0(wp::Cpu& c);
void f_mr051_010722e0(wp::Cpu& c);
void f_mr051_010722f0(wp::Cpu& c);
void f_mr051_010723f0(wp::Cpu& c);
void f_mr051_01072400(wp::Cpu& c);
void f_mr051_01072450(wp::Cpu& c);
void f_mr051_010725f0(wp::Cpu& c);
void f_mr051_01072710(wp::Cpu& c);
void f_mr051_010727a0(wp::Cpu& c);
void f_mr051_010728e0(wp::Cpu& c);
void f_mr051_010729f0(wp::Cpu& c);
void f_mr051_01072a50(wp::Cpu& c);
void f_mr051_01072ca0(wp::Cpu& c);
void f_mr051_01073950(wp::Cpu& c);
void f_mr051_01073ce0(wp::Cpu& c);
void f_mr051_01073d10(wp::Cpu& c);
void f_mr051_01073de0(wp::Cpu& c);
void f_mr051_01074030(wp::Cpu& c);
void f_mr051_01074440(wp::Cpu& c);
void f_mr051_010745e0(wp::Cpu& c);
void f_mr051_010745f0(wp::Cpu& c);
void f_mr051_01074600(wp::Cpu& c);
void f_mr051_01074690(wp::Cpu& c);
void f_mr051_01074760(wp::Cpu& c);
void f_mr051_010747f0(wp::Cpu& c);
void f_mr051_01074800(wp::Cpu& c);
void f_mr051_01074850(wp::Cpu& c);
void f_mr051_01074a10(wp::Cpu& c);
void f_mr051_01074bd0(wp::Cpu& c);
void f_mr051_01074c50(wp::Cpu& c);
void f_mr051_01074cc0(wp::Cpu& c);
void f_mr051_01075080(wp::Cpu& c);
void f_mr051_01075170(wp::Cpu& c);
void f_mr051_01075250(wp::Cpu& c);
void f_mr051_01075320(wp::Cpu& c);
void f_mr051_01075410(wp::Cpu& c);
void f_mr051_010754f0(wp::Cpu& c);
void f_mr051_010757d0(wp::Cpu& c);
void f_mr051_010758a0(wp::Cpu& c);
void f_mr051_01075b70(wp::Cpu& c);
void f_mr051_01075c50(wp::Cpu& c);
void f_mr051_01075c70(wp::Cpu& c);
void f_mr051_01075d90(wp::Cpu& c);
void f_mr051_01075e20(wp::Cpu& c);
void f_mr051_01075ea0(wp::Cpu& c);
void f_mr051_01075fc0(wp::Cpu& c);
void f_mr051_010760c0(wp::Cpu& c);
void f_mr051_01076640(wp::Cpu& c);
void f_mr051_01076650(wp::Cpu& c);
void f_mr051_01076680(wp::Cpu& c);
void f_mr051_01076850(wp::Cpu& c);
void f_mr051_01076990(wp::Cpu& c);
void f_mr051_010769a0(wp::Cpu& c);
void f_mr051_01076af0(wp::Cpu& c);
void f_mr051_01076bb0(wp::Cpu& c);
void f_mr051_01076c80(wp::Cpu& c);
void f_mr051_01076ef0(wp::Cpu& c);
void f_mr051_01076f60(wp::Cpu& c);
void f_mr051_01076fd0(wp::Cpu& c);
void f_mr051_01076ff0(wp::Cpu& c);
void f_mr051_01077060(wp::Cpu& c);
void f_mr051_01077120(wp::Cpu& c);
void f_mr051_01077660(wp::Cpu& c);
void f_mr051_01077a00(wp::Cpu& c);
void f_mr051_01077a20(wp::Cpu& c);
void f_mr051_01077d30(wp::Cpu& c);
void f_mr051_01077d40(wp::Cpu& c);
void f_mr051_01077d50(wp::Cpu& c);
void f_mr051_01078150(wp::Cpu& c);
void f_mr051_01078220(wp::Cpu& c);
void f_mr051_01078430(wp::Cpu& c);
void f_mr051_01078540(wp::Cpu& c);
void f_mr051_010785c0(wp::Cpu& c);
void f_mr051_01078620(wp::Cpu& c);
void f_mr051_01078760(wp::Cpu& c);
void f_mr051_01078770(wp::Cpu& c);
void f_mr051_01078780(wp::Cpu& c);
void f_mr051_01078790(wp::Cpu& c);
void f_mr051_01078850(wp::Cpu& c);
void f_mr051_01078ad0(wp::Cpu& c);
void f_mr051_01078b00(wp::Cpu& c);
void f_mr051_01078b20(wp::Cpu& c);
void f_mr051_01078b80(wp::Cpu& c);
void f_mr051_01078e00(wp::Cpu& c);
void f_mr051_01078e20(wp::Cpu& c);
void f_mr051_01078e40(wp::Cpu& c);
void f_mr051_01078eb0(wp::Cpu& c);
void f_mr051_01078f30(wp::Cpu& c);
void f_mr051_01078f50(wp::Cpu& c);
void f_mr051_01078f70(wp::Cpu& c);
void f_mr051_01078f90(wp::Cpu& c);
void f_mr051_01078fd0(wp::Cpu& c);
void f_mr051_01078ff0(wp::Cpu& c);
void f_mr051_01079010(wp::Cpu& c);
void f_mr051_01079030(wp::Cpu& c);
void f_mr051_01079050(wp::Cpu& c);
void f_mr051_01079070(wp::Cpu& c);
void f_mr051_010790b0(wp::Cpu& c);
void f_mr051_01079120(wp::Cpu& c);
void f_mr051_01079130(wp::Cpu& c);
void f_mr051_01079140(wp::Cpu& c);
void f_mr051_01079150(wp::Cpu& c);
void f_mr051_01079160(wp::Cpu& c);
void f_mr051_01079170(wp::Cpu& c);
void f_mr051_01079180(wp::Cpu& c);
void f_mr051_01079190(wp::Cpu& c);
void f_mr051_010791a0(wp::Cpu& c);
void f_mr051_010791b0(wp::Cpu& c);
void f_mr051_010791c0(wp::Cpu& c);
void f_mr051_010791d0(wp::Cpu& c);
void f_mr051_01079230(wp::Cpu& c);
void f_mr051_01079290(wp::Cpu& c);
void f_mr051_01079640(wp::Cpu& c);
void f_mr051_01079890(wp::Cpu& c);
void f_mr051_01079d20(wp::Cpu& c);
void f_mr051_01079d30(wp::Cpu& c);
void f_mr051_01079d40(wp::Cpu& c);
void f_mr051_01079ef0(wp::Cpu& c);
void f_mr051_0107a180(wp::Cpu& c);
void f_mr051_0107a240(wp::Cpu& c);
void f_mr051_0107a250(wp::Cpu& c);
void f_mr051_0107a260(wp::Cpu& c);
void f_mr051_0107a880(wp::Cpu& c);
void f_mr051_0107aac0(wp::Cpu& c);
void f_mr051_0107ad10(wp::Cpu& c);
void f_mr051_0107b050(wp::Cpu& c);
void f_mr051_0107b0a0(wp::Cpu& c);
void f_mr051_0107b0b0(wp::Cpu& c);
void f_mr051_0107b1d0(wp::Cpu& c);
void f_mr051_0107b370(wp::Cpu& c);
void f_mr051_0107b420(wp::Cpu& c);
void f_mr051_0107b4c0(wp::Cpu& c);

void f_mr051_010697f0(wp::Cpu& c) {
    WP_ENTER(0x10697f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010697fc;
    ea = c.r[3] + 0x170u;
    c.r[4] = wp::rd32(ea);
L_010697fc:
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01069810;
    c.r[3] = 0x1u;
    return;
L_01069810:
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

void f_mr051_01069830(wp::Cpu& c) {
    WP_ENTER(0x1069830u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0106983c;
    ea = c.r[3] + 0x170u;
    c.r[4] = wp::rd32(ea);
L_0106983c:
    ea = c.r[3] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01069850;
    c.r[3] = 0x1u;
    return;
L_01069850:
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

void f_mr051_01069870(wp::Cpu& c) {
    WP_ENTER(0x1069870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10698d4u: goto R_010698d4;
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
    if (wp::cr_get(c, 2)) goto L_01069894;
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010698f0;
L_01069894:
    ea = c.r[3] + 0x163u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010698f0;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[8] = ((((g_mr051_bases[4] + 0x1e98u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x158u;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mr051_bases[4] + 0x1e9cu) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    ea = c.r[31] + 0x160u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[4] + 0x1e98u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[7] + wp::sign_extend16((g_mr051_bases[4] + 0x1e9cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10698d4u;
    wp::call(c, c.ctr);
R_010698d4:
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
L_010698f0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01069910(wp::Cpu& c) {
    WP_ENTER(0x1069910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1069964u: goto R_01069964;
        case 0x10699a0u: goto R_010699a0;
        case 0x10699d8u: goto R_010699d8;
        case 0x10699f4u: goto R_010699f4;
        case 0x1069a3cu: goto R_01069a3c;
        case 0x1069a54u: goto R_01069a54;
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
    if (wp::cr_get(c, 2)) goto L_010699a4;
    ea = c.r[3] + 0x161u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069a60;
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01069a60;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] + 0xffffffffu;
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1069964u;
    wp::call(c, c.ctr);
R_01069964:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069a60;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr051_bases[4] + 0x1e98u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[7] = ((((g_mr051_bases[4] + 0x1e9cu) + 0x8000u) >> 16) << 16);
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr051_bases[4] + 0x1e98u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[7] + wp::sign_extend16((g_mr051_bases[4] + 0x1e9cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10699a0u;
    wp::call(c, c.ctr);
R_010699a0:
    goto L_01069a60;
L_010699a4:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01069a60;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010699e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10699d8u;
    wp::call(c, c.ctr);
R_010699d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069a60;
L_010699e0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10699f4u;
    wp::call(c, c.ctr);
R_010699f4:
    ea = c.r[31] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[31] + 0x15cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01069a58;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mr051_bases[4] + 0x1e98u) + 0x8000u) >> 16) << 16);
    c.r[6] = ((((g_mr051_bases[4] + 0x1e9cu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x1e98u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr051_bases[4] + 0x1e9cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x1069a3cu;
    wp::call(c, c.ctr);
R_01069a3c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1069a54u;
    wp::call(c, c.ctr);
R_01069a54:
    goto L_01069a60;
L_01069a58:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x162u;
    wp::wr8(ea, c.r[0]);
L_01069a60:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01069a80(wp::Cpu& c) {
    WP_ENTER(0x1069a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1069a9cu: goto R_01069a9c;
        case 0x1069ac8u: goto R_01069ac8;
        case 0x1069adcu: goto R_01069adc;
        case 0x1069b18u: goto R_01069b18;
        case 0x1069b4cu: goto R_01069b4c;
        case 0x1069b58u: goto R_01069b58;
        case 0x1069b68u: goto R_01069b68;
        case 0x1069b80u: goto R_01069b80;
        case 0x1069b9cu: goto R_01069b9c;
        case 0x1069bd0u: goto R_01069bd0;
        case 0x1069be4u: goto R_01069be4;
        case 0x1069c04u: goto R_01069c04;
        case 0x1069c10u: goto R_01069c10;
        case 0x1069c34u: goto R_01069c34;
        case 0x1069c40u: goto R_01069c40;
        case 0x1069c48u: goto R_01069c48;
        case 0x1069c50u: goto R_01069c50;
        case 0x1069c5cu: goto R_01069c5c;
        case 0x1069c68u: goto R_01069c68;
        case 0x1069c80u: goto R_01069c80;
        case 0x1069ca0u: goto R_01069ca0;
        case 0x1069cc0u: goto R_01069cc0;
        case 0x1069cd8u: goto R_01069cd8;
        case 0x1069cf0u: goto R_01069cf0;
        case 0x1069d10u: goto R_01069d10;
        case 0x1069d1cu: goto R_01069d1c;
        case 0x1069d38u: goto R_01069d38;
        case 0x1069d58u: goto R_01069d58;
        case 0x1069d70u: goto R_01069d70;
        case 0x1069d88u: goto R_01069d88;
        case 0x1069da8u: goto R_01069da8;
        case 0x1069db4u: goto R_01069db4;
        case 0x1069dc0u: goto R_01069dc0;
        case 0x1069de0u: goto R_01069de0;
        case 0x1069df8u: goto R_01069df8;
        case 0x1069e10u: goto R_01069e10;
        case 0x1069e30u: goto R_01069e30;
        case 0x1069e3cu: goto R_01069e3c;
        case 0x1069e50u: goto R_01069e50;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffec0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x144u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x130u;
    ea = c.r[1] + 0x130u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x138u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x1069a9cu;
    f_801c83ac(c);
R_01069a9c:
    c.r[31] = ((((g_mr051_bases[5] + 0x23460u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[6] | c.r[6];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[5] + 0x23460u) & 0xFFFFu);
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[4] = c.r[31] + 0x2f38u;
    c.r[5] = c.r[31] + 0x2f08u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x1069ac8u;
    f_800508f0(c);
R_01069ac8:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[28] + 0x144u;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x1069adcu;
    f_80063370(c);
R_01069adc:
    c.r[3] = ((((g_mr051_bases[5] + 0x2652cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x2652cu) & 0xFFFFu);
    c.r[4] = ((((g_mr051_bases[1] + 0x69e60u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[3] + 0x20u;
    c.r[5] = ((((g_mr051_bases[1] + 0x1ce0u) + 0x8000u) >> 16) << 16);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] + 0x15cu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[1] + 0x69e60u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[1] + 0x1ce0u) & 0xFFFFu);
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[6]);
    c.r[6] = 0x4u;
    c.r[7] = 0x2u;
    ea = c.r[28] + 0x158u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1069b18u;
    f_801c8068(c);
R_01069b18:
    c.r[4] = 0xffffffffu;
    c.r[3] = ((((g_mr051_bases[6] + 0x4d08u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[6] + 0x4d08u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[24] | c.r[24];
    ea = c.r[28] + 0x180u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[5] | c.r[5];
    c.r[7] = c.r[1] + 0x2cu;
    ea = c.r[28] + 0x188u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[30] | c.r[30];
    c.r[8] = 0xfu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1069b4cu;
    f_8006dbd0(c);
R_01069b4c:
    ea = c.r[28] + 0x158u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1069b58u;
    f_8005a6f0(c);
R_01069b58:
    ea = c.r[28] + 0x158u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0x2f58u;
    c.r[5] = 0x0u;
    c.lr = 0x1069b68u;
    f_800609f0(c);
R_01069b68:
    c.r[26] = ((((g_mr051_bases[5] + 0x26390u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr051_bases[5] + 0x26390u) & 0xFFFFu);
    c.r[25] = 0x0u;
L_01069b78:
    c.r[3] = 0x144u;
    c.lr = 0x1069b80u;
    f_801c79a4(c);
R_01069b80:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069b9c;
    c.r[4] = c.r[31] + 0x2f38u;
    c.r[6] = c.r[31] + 0x2f60u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x1069b9cu;
    f_800508f0(c);
L_01069b9c:
R_01069b9c:
    c.r[4] = c.r[28] + c.r[25];
    ea = c.r[4] + 0x15cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01069bd0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x15cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01069bd0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1069bd0u;
    wp::call(c, c.ctr);
L_01069bd0:
R_01069bd0:
    c.r[3] = c.r[28] + c.r[25];
    ea = c.r[26] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1069be4u;
    f_80058490(c);
R_01069be4:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x4u;
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[25] = c.r[25] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01069b78;
    }
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1000u;
    c.lr = 0x1069c04u;
    f_80052170(c);
R_01069c04:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xcu;
    c.lr = 0x1069c10u;
    f_80052190(c);
R_01069c10:
    c.r[3] = c.r[30] + 0xffffffffu;
    c.r[0] = wp::sub_carry(c, c.r[30], 0x1u);
    c.r[0] = ~(c.r[3] | c.r[0]);
    c.r[5] = 0x1u;
    c.r[4] = wp::sraw(c, c.r[0], 31);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x2u;
    c.r[6] = 0x0u;
    c.lr = 0x1069c34u;
    f_80054e60(c);
R_01069c34:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    c.lr = 0x1069c40u;
    f_80056040(c);
R_01069c40:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1069c48u;
    f_80055f10(c);
R_01069c48:
    c.f[31] = c.f[1];
    c.lr = 0x1069c50u;
    f_8006b460(c);
R_01069c50:
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[31]));
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1069c5cu;
    f_80055d90(c);
R_01069c5c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xccu;
    c.lr = 0x1069c68u;
    f_8006c4e0(c);
R_01069c68:
    ea = c.r[1] + 0x100u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = ((((g_mr051_bases[4] + 0x22a8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x22a8u) & 0xFFFFu);
    c.r[0] = wp::rotl(c.r[0], 16) & 0x3cu;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1069c80u;
    f_8009db20(c);
R_01069c80:
    ea = c.r[1] + 0x104u;
    c.r[30] = wp::rd32(ea);
    c.r[29] = c.r[3] | c.r[3];
    c.r[27] = c.r[31] + 0x2f6cu;
    c.r[24] = 0x0u;
    c.r[25] = 0x0u;
L_01069c94:
    c.r[3] = c.r[28] + c.r[25];
    ea = c.r[3] + 0x15cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1069ca0u;
    f_8005a6f0(c);
R_01069ca0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01069d1c;
    ea = c.r[3] + 0xe8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x20u;
    c.lr = 0x1069cc0u;
    f_800cd2d0(c);
R_01069cc0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069d1c;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x1069cd8u;
    f_800f2190(c);
R_01069cd8:
    ea = c.r[1] + 0x98u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069d1c;
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0x0u;
    c.lr = 0x1069cf0u;
    f_800f1d70(c);
R_01069cf0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01069d1c;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x24u;
    c.r[5] = c.r[1] + 0x28u;
    c.r[4] = 0x1u;
    c.lr = 0x1069d10u;
    f_800cfc70(c);
R_01069d10:
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = 0x0u;
    c.lr = 0x1069d1cu;
    f_800cf050(c);
L_01069d1c:
R_01069d1c:
    c.r[24] = c.r[24] + 0x1u;
    c.r[25] = c.r[25] + 0x4u;
    wp::compare_signed(c, 0, c.r[24], 0x2u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01069c94;
    }
    c.r[3] = c.r[28] | c.r[28];
    c.r[26] = c.r[31] + 0x2f6cu;
    c.lr = 0x1069d38u;
    f_8005a6f0(c);
R_01069d38:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01069db4;
    ea = c.r[3] + 0xe8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x14u;
    c.lr = 0x1069d58u;
    f_800cd2d0(c);
R_01069d58:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069db4;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[27] | c.r[27];
    c.r[3] = c.r[1] + 0x64u;
    c.lr = 0x1069d70u;
    f_800f2190(c);
R_01069d70:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069db4;
    c.r[3] = c.r[1] + 0x64u;
    c.r[4] = 0x0u;
    c.lr = 0x1069d88u;
    f_800f1d70(c);
R_01069d88:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01069db4;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[5] = c.r[1] + 0x1cu;
    c.r[4] = 0x1u;
    c.lr = 0x1069da8u;
    f_800cfc70(c);
R_01069da8:
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x0u;
    c.lr = 0x1069db4u;
    f_800cf050(c);
L_01069db4:
R_01069db4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[26] = c.r[31] + 0x2f74u;
    c.lr = 0x1069dc0u;
    f_8005a6f0(c);
R_01069dc0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01069e3c;
    ea = c.r[3] + 0xe8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x1069de0u;
    f_800cd2d0(c);
R_01069de0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069e3c;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[27] | c.r[27];
    c.r[3] = c.r[1] + 0x30u;
    c.lr = 0x1069df8u;
    f_800f2190(c);
R_01069df8:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01069e3c;
    c.r[3] = c.r[1] + 0x30u;
    c.r[4] = 0x0u;
    c.lr = 0x1069e10u;
    f_800f1d70(c);
R_01069e10:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01069e3c;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[29]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.lr = 0x1069e30u;
    f_800cfc70(c);
R_01069e30:
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = 0x0u;
    c.lr = 0x1069e3cu;
    f_800cf050(c);
L_01069e3c:
R_01069e3c:
    ea = c.r[1] + 0x138u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x130u;
    c.f[31] = wp::rdf64(ea);
    c.r[11] = c.r[1] + 0x130u;
    c.lr = 0x1069e50u;
    f_801c83f8(c);
R_01069e50:
    ea = c.r[1] + 0x144u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x140u;
    return;
}

void f_mr051_01069e60(wp::Cpu& c) {
    WP_ENTER(0x1069e60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr051_01069e70(wp::Cpu& c) {
    WP_ENTER(0x1069e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1069eb0u: goto R_01069eb0;
        case 0x1069ec8u: goto R_01069ec8;
        case 0x1069ed4u: goto R_01069ed4;
        case 0x1069ee0u: goto R_01069ee0;
        case 0x1069ef0u: goto R_01069ef0;
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
    if (wp::cr_get(c, 2)) goto L_01069ef0;
    c.r[4] = ((((g_mr051_bases[5] + 0x2652cu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2652cu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x20u;
    ea = c.r[3] + 0x144u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x158u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1069eb0u;
    f_8006dfe0(c);
R_01069eb0:
    c.r[4] = ((((g_mr051_bases[1] + 0x1ce0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] + 0x15cu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[1] + 0x1ce0u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.r[6] = 0x2u;
    c.lr = 0x1069ec8u;
    f_801c8160(c);
R_01069ec8:
    c.r[3] = c.r[30] + 0x144u;
    c.r[4] = 0x0u;
    c.lr = 0x1069ed4u;
    f_80063bb0(c);
R_01069ed4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1069ee0u;
    f_80051600(c);
R_01069ee0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01069ef0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1069ef0u;
    f_801c7a8c(c);
L_01069ef0:
R_01069ef0:
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

void f_mr051_01069f10(wp::Cpu& c) {
    WP_ENTER(0x1069f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1069fb4u: goto R_01069fb4;
        case 0x1069fc4u: goto R_01069fc4;
        case 0x1069fd4u: goto R_01069fd4;
        case 0x1069fe0u: goto R_01069fe0;
        case 0x1069fecu: goto R_01069fec;
        case 0x106a020u: goto R_0106a020;
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
    if (!wp::cr_get(c, 1)) goto L_01069f54;
    ea = c.r[3] + 0x184u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x184u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[5]);
    if (wp::cr_get(c, 0)) goto L_0106a020;
    c.r[0] = 0xffffffffu;
    ea = c.r[3] + 0x188u;
    wp::wr32(ea, c.r[0]);
L_01069f54:
    ea = c.r[3] + 0x180u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106a020;
    ea = c.r[3] + 0x17cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = 0x43300000u;
    c.r[5] = ((((g_mr051_bases[4] + 0x1eb0u) + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[0] ^ 0x80000000u;
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x17cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[4] ^ 0x80000000u;
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x1eb0u) & 0xFFFFu);
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
    c.lr = 0x1069fb4u;
    f_8014c120(c);
R_01069fb4:
    c.f[1] = c.f[31];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[3] | c.r[3];
    c.lr = 0x1069fc4u;
    f_8014c150(c);
R_01069fc4:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[31] + 0x164u;
    c.r[5] = c.r[3] | c.r[3];
    c.lr = 0x1069fd4u;
    f_8014c0f0(c);
R_01069fd4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x1069fe0u;
    f_80052250(c);
R_01069fe0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x1069fecu;
    f_80053d20(c);
R_01069fec:
    c.r[3] = ((((g_mr051_bases[4] + 0x1e98u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x1e98u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_0106a020;
    ea = c.r[31] + 0x18cu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = 0xffffffffu;
    ea = c.r[31] + 0x180u;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a020;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x106a020u;
    f_80052250(c);
L_0106a020:
R_0106a020:
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

void f_mr051_0106a040(wp::Cpu& c) {
    WP_ENTER(0x106a040u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106a058u: goto R_0106a058;
        case 0x106a080u: goto R_0106a080;
        case 0x106a0f4u: goto R_0106a0f4;
        case 0x106a0f8u: goto R_0106a0f8;
        case 0x106a130u: goto R_0106a130;
        case 0x106a15cu: goto R_0106a15c;
        case 0x106a16cu: goto R_0106a16c;
        case 0x106a178u: goto R_0106a178;
        case 0x106a1c4u: goto R_0106a1c4;
        case 0x106a1c8u: goto R_0106a1c8;
        case 0x106a214u: goto R_0106a214;
        case 0x106a218u: goto R_0106a218;
        case 0x106a2b8u: goto R_0106a2b8;
        case 0x106a2bcu: goto R_0106a2bc;
        case 0x106a2c4u: goto R_0106a2c4;
        case 0x106a2e4u: goto R_0106a2e4;
        case 0x106a2e8u: goto R_0106a2e8;
        case 0x106a35cu: goto R_0106a35c;
        case 0x106a36cu: goto R_0106a36c;
        case 0x106a3c4u: goto R_0106a3c4;
        case 0x106a400u: goto R_0106a400;
        case 0x106a410u: goto R_0106a410;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x88u;
    ea = c.r[1] + 0x88u;
    wp::wrf64(ea, c.f[31]);
    c.lr = 0x106a058u;
    f_801c8384(c);
R_0106a058:
    c.f[31] = c.f[1];
    c.r[27] = c.r[5] | c.r[5];
    c.r[5] = 0x10000u;
    c.r[26] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + 0xffff8000u;
    c.r[25] = c.r[3] | c.r[3];
    c.r[14] = c.r[6] | c.r[6];
    c.r[28] = c.r[7] | c.r[7];
    c.r[5] = 0x0u;
    c.lr = 0x106a080u;
    f_80063370(c);
R_0106a080:
    c.r[3] = ((((g_mr051_bases[5] + 0x264f8u) + 0x8000u) >> 16) << 16);
    c.r[19] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x264f8u) & 0xFFFFu);
    c.r[8] = 0x1u;
    c.r[6] = c.r[3] + 0x10u;
    c.r[0] = 0xffffffffu;
    ea = c.r[25] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x14u;
    c.r[4] = 0x14u;
    c.r[5] = 0x0u;
    ea = c.r[25] + 0x14u;
    wp::wr32(ea, c.r[6]);
    c.r[6] = 0x4u;
    c.r[7] = 0x2u;
    ea = c.r[25] + 0x18u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x1cu;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x20u;
    wp::wr32(ea, c.r[14]);
    ea = c.r[25] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[25] + 0x28u;
    wp::wr8(ea, c.r[19]);
    ea = c.r[25] + 0x29u;
    wp::wr8(ea, c.r[26]);
    ea = c.r[25] + 0x2au;
    wp::wr8(ea, c.r[19]);
    ea = c.r[25] + 0x2bu;
    wp::wr8(ea, c.r[8]);
    ea = c.r[25] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[25] + 0x30u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x34u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x38u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x3cu;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x40u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x44u;
    wp::wr32(ea, c.r[19]);
    c.lr = 0x106a0f4u;
    f_8006cf60(c);
R_0106a0f4:
    c.lr = 0x106a0f8u;
    f_mr051_01073de0(c);
R_0106a0f8:
    c.r[4] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[18] = c.r[1] + 0x20u;
    c.r[29] = 0x0u;
    c.r[21] = c.r[4] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[31] = 0x0u;
    c.r[23] = 0xcccd0000u;
    c.r[14] = ((((g_mr051_bases[5] + 0x2347cu) + 0x8000u) >> 16) << 16);
    c.r[20] = 0x40000000u;
    c.r[22] = 0x15550000u;
    c.r[24] = 0x2aab0000u;
    goto L_0106a3cc;
L_0106a128:
    c.r[3] = 0x190u;
    c.lr = 0x106a130u;
    f_801c79a4(c);
R_0106a130:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[15] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0106a160;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    c.r[5] = 0x3u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_0106a154;
    c.r[5] = 0x1u;
L_0106a154:
    c.r[6] = c.r[27] | c.r[27];
    c.lr = 0x106a15cu;
    f_mr051_01069a80(c);
R_0106a15c:
    c.r[15] = c.r[3] | c.r[3];
L_0106a160:
    c.r[3] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x106a16cu;
    f_80052250(c);
R_0106a16c:
    c.r[3] = c.r[15] | c.r[15];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x106a178u;
    f_80053060(c);
R_0106a178:
    ea = c.r[25] + 0x34u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[25] + 0x38u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0106a1a4;
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[25] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[25] + 0x34u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[3] + 0xfffffffcu;
    wp::wr32(ea, c.r[15]);
    goto L_0106a3c4;
L_0106a1a4:
    c.r[0] = c.r[20] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0106a1c8;
    c.r[4] = c.r[14] + wp::sign_extend16((g_mr051_bases[5] + 0x2347cu) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106a1c4u;
    f_801cee24(c);
R_0106a1c4:
    c.lr = 0x106a1c8u;
    f_801d3940(c);
L_0106a1c8:
R_0106a1c8:
    c.r[3] = c.r[25] + 0x38u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[19]);
    c.r[0] = c.r[20] + 0xffffffffu;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x34u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[25] + 0x38u;
    c.r[16] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[3] = c.r[3] - c.r[16];
    c.r[0] = c.r[0] - c.r[16];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0106a218;
    c.r[4] = c.r[14] + wp::sign_extend16((g_mr051_bases[5] + 0x2347cu) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106a214u;
    f_801cee24(c);
R_0106a214:
    c.lr = 0x106a218u;
    f_801d3940(c);
L_0106a218:
R_0106a218:
    c.r[0] = c.r[22] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[16], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106a260;
    c.r[4] = c.r[16] + 0x1u;
    c.r[5] = c.r[23] + 0xffffcccdu;
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
    if (!wp::cr_get(c, 0)) goto L_0106a254;
    c.r[3] = c.r[1] + 0x8u;
L_0106a254:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[16] = c.r[16] + c.r[0];
    goto L_0106a29c;
L_0106a260:
    c.r[0] = c.r[24] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[16], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106a298;
    c.r[3] = c.r[16] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0106a28c;
    c.r[3] = c.r[1] + 0x8u;
L_0106a28c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[16] = c.r[16] + c.r[0];
    goto L_0106a29c;
L_0106a298:
    c.r[16] = c.r[20] + 0xffffffffu;
L_0106a29c:
    c.r[0] = c.r[20] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[16], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106a2bc;
    c.r[4] = c.r[14] + wp::sign_extend16((g_mr051_bases[5] + 0x2347cu) & 0xFFFFu);
    c.r[3] = c.r[21] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106a2b8u;
    f_801cee24(c);
R_0106a2b8:
    c.lr = 0x106a2bcu;
    f_801d3940(c);
L_0106a2bc:
R_0106a2bc:
    c.r[3] = wp::rotl(c.r[16], 2) & 0xfffffffcu;
    c.lr = 0x106a2c4u;
    f_801c79a4(c);
R_0106a2c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[17] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106a2e8;
    c.r[4] = ((((g_mr051_bases[5] + 0xac4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[21] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0xac4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106a2e4u;
    f_801cee24(c);
R_0106a2e4:
    c.lr = 0x106a2e8u;
    f_801d3940(c);
L_0106a2e8:
R_0106a2e8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[17]);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[16]);
    ea = c.r[25] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[17] + c.r[0];
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[15]);
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[25] + 0x34u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[25] + 0x30u;
    c.r[15] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[15] + c.r[4];
    c.r[5] = c.r[5] - c.r[15];
    c.r[4] = c.r[15] | c.r[15];
    c.r[5] = wp::sraw(c, c.r[5], 2);
    c.r[17] = wp::add_extended(c, c.r[5], 0);
    c.r[0] = c.r[0] - c.r[17];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.r[16] = wp::rotl(c.r[17], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[16] | c.r[16];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x106a35cu;
    f_800043c4(c);
R_0106a35c:
    c.r[3] = c.r[15] | c.r[15];
    c.r[5] = c.r[16] | c.r[16];
    c.r[4] = 0x0u;
    c.lr = 0x106a36cu;
    f_80004714(c);
R_0106a36c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    c.r[0] = c.r[0] + c.r[17];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[25] + 0x34u;
    wp::wr32(ea, c.r[19]);
    ea = c.r[25] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[25] + 0x38u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[25] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[25] + 0x30u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[25] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[19]);
    if (wp::cr_get(c, 2)) goto L_0106a3c4;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a3c4;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[19]);
    c.lr = 0x106a3c4u;
    f_801c7a8c(c);
L_0106a3c4:
R_0106a3c4:
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_0106a3cc:
    wp::compare_unsigned(c, 0, c.r[29], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106a128;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106a400;
    if (wp::cr_get(c, 2)) goto L_0106a400;
    if (wp::cr_get(c, 2)) goto L_0106a400;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a400;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106a400u;
    f_801c7a8c(c);
L_0106a400:
R_0106a400:
    ea = c.r[1] + 0x88u;
    c.f[31] = wp::rdf64(ea);
    c.r[11] = c.r[1] + 0x88u;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x106a410u;
    f_801c83d0(c);
R_0106a410:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr051_0106a420(wp::Cpu& c) {
    WP_ENTER(0x106a420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106a484u: goto R_0106a484;
        case 0x106a4d4u: goto R_0106a4d4;
        case 0x106a504u: goto R_0106a504;
        case 0x106a510u: goto R_0106a510;
        case 0x106a520u: goto R_0106a520;
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
    if (wp::cr_get(c, 2)) goto L_0106a520;
    c.r[4] = ((((g_mr051_bases[5] + 0x264f8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x30u;
    c.r[31] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x264f8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x10u;
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_0106a488;
L_0106a464:
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a484;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106a484u;
    wp::call(c, c.ctr);
L_0106a484:
R_0106a484:
    c.r[31] = c.r[31] + 0x4u;
L_0106a488:
    ea = c.r[29] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[29] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106a464;
    }
    c.r[4] = wp::add_carry(c, c.r[29], 0x3cu, 0);
    wp::record(c, c.r[4]);
    c.r[0] = c.r[5] - c.r[5];
    ea = c.r[29] + 0x34u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106a4d4;
    if (wp::cr_get(c, 2)) goto L_0106a4d4;
    if (wp::cr_get(c, 2)) goto L_0106a4d4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a4d4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106a4d4u;
    f_801c7a8c(c);
L_0106a4d4:
R_0106a4d4:
    c.r[4] = wp::add_carry(c, c.r[29], 0x30u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106a504;
    if (wp::cr_get(c, 2)) goto L_0106a504;
    if (wp::cr_get(c, 2)) goto L_0106a504;
    if (wp::cr_get(c, 2)) goto L_0106a504;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a504;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106a504u;
    f_801c7a8c(c);
L_0106a504:
R_0106a504:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x106a510u;
    f_80063bb0(c);
R_0106a510:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106a520;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x106a520u;
    f_801c7a8c(c);
L_0106a520:
R_0106a520:
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

void f_mr051_0106a540(wp::Cpu& c) {
    WP_ENTER(0x106a540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106a5bcu: goto R_0106a5bc;
        case 0x106a75cu: goto R_0106a75c;
        case 0x106a76cu: goto R_0106a76c;
        case 0x106a77cu: goto R_0106a77c;
        case 0x106a788u: goto R_0106a788;
        case 0x106a794u: goto R_0106a794;
        case 0x106a7a0u: goto R_0106a7a0;
        case 0x106a7acu: goto R_0106a7ac;
        case 0x106a7b8u: goto R_0106a7b8;
        case 0x106a7c4u: goto R_0106a7c4;
        case 0x106a7d0u: goto R_0106a7d0;
        case 0x106a7dcu: goto R_0106a7dc;
        case 0x106a7e8u: goto R_0106a7e8;
        case 0x106a7f4u: goto R_0106a7f4;
        case 0x106a800u: goto R_0106a800;
        case 0x106a80cu: goto R_0106a80c;
        case 0x106a818u: goto R_0106a818;
        case 0x106a824u: goto R_0106a824;
        case 0x106a830u: goto R_0106a830;
        case 0x106a83cu: goto R_0106a83c;
        case 0x106a848u: goto R_0106a848;
        case 0x106a858u: goto R_0106a858;
        case 0x106a860u: goto R_0106a860;
        case 0x106a8c8u: goto R_0106a8c8;
        case 0x106a8e8u: goto R_0106a8e8;
        case 0x106a908u: goto R_0106a908;
        case 0x106a99cu: goto R_0106a99c;
        case 0x106a9b0u: goto R_0106a9b0;
        case 0x106aa10u: goto R_0106aa10;
        case 0x106aa14u: goto R_0106aa14;
        case 0x106aa20u: goto R_0106aa20;
        case 0x106aae8u: goto R_0106aae8;
        case 0x106ab10u: goto R_0106ab10;
        case 0x106ab2cu: goto R_0106ab2c;
        case 0x106ab88u: goto R_0106ab88;
        case 0x106ac00u: goto R_0106ac00;
        case 0x106ac14u: goto R_0106ac14;
        case 0x106ac74u: goto R_0106ac74;
        case 0x106ac78u: goto R_0106ac78;
        case 0x106ac84u: goto R_0106ac84;
        case 0x106ad40u: goto R_0106ad40;
        case 0x106add8u: goto R_0106add8;
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
    c.lr = 0x106a5bcu;
    f_801c83a0(c);
R_0106a5bc:
    c.r[5] = ((((g_mr051_bases[6] + 0x4d0cu) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_mr051_bases[4] + 0x16b0u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[6] + 0x4d0cu) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[23] = c.r[3] | c.r[3];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr051_bases[4] + 0x16b0u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106a744;
    c.r[4] = ((((g_mr051_bases[6] + 0x4d10u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xd34u;
    c.f[19] = wp::rdf32(ea);
    c.ps1[19] = c.f[19];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr051_bases[6] + 0x4d10u) & 0xFFFFu);
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
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[6] + 0x4d10u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[6] + 0x4d0cu) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_0106a744:
    c.r[22] = ((((g_mr051_bases[6] + 0x4e50u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mr051_bases[6] + 0x4e50u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106a854;
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a75cu;
    f_80071fe0(c);
R_0106a75c:
    c.r[21] = ((((g_mr051_bases[6] + 0x4e00u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[21] + wp::sign_extend16((g_mr051_bases[6] + 0x4e00u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    c.lr = 0x106a76cu;
    f_80071fe0(c);
R_0106a76c:
    c.r[21] = c.r[21] + wp::sign_extend16((g_mr051_bases[6] + 0x4e00u) & 0xFFFFu);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[21] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.lr = 0x106a77cu;
    f_80071fe0(c);
R_0106a77c:
    ea = c.r[21] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a788u;
    f_80071fe0(c);
R_0106a788:
    ea = c.r[21] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a794u;
    f_80071fe0(c);
R_0106a794:
    ea = c.r[21] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7a0u;
    f_80071fe0(c);
R_0106a7a0:
    ea = c.r[21] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7acu;
    f_80071fe0(c);
R_0106a7ac:
    ea = c.r[21] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7b8u;
    f_80071fe0(c);
R_0106a7b8:
    ea = c.r[21] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7c4u;
    f_80071fe0(c);
R_0106a7c4:
    ea = c.r[21] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7d0u;
    f_80071fe0(c);
R_0106a7d0:
    ea = c.r[21] + 0x24u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7dcu;
    f_80071fe0(c);
R_0106a7dc:
    ea = c.r[21] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7e8u;
    f_80071fe0(c);
R_0106a7e8:
    ea = c.r[21] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a7f4u;
    f_80071fe0(c);
R_0106a7f4:
    ea = c.r[21] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x7ecu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a800u;
    f_80071fe0(c);
R_0106a800:
    ea = c.r[21] + 0x34u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a80cu;
    f_80071fe0(c);
R_0106a80c:
    ea = c.r[21] + 0x38u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a818u;
    f_80071fe0(c);
R_0106a818:
    ea = c.r[21] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a824u;
    f_80071fe0(c);
R_0106a824:
    ea = c.r[21] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a830u;
    f_80071fe0(c);
R_0106a830:
    ea = c.r[21] + 0x44u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a83cu;
    f_80071fe0(c);
R_0106a83c:
    ea = c.r[21] + 0x48u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106a848u;
    f_80071fe0(c);
R_0106a848:
    c.r[0] = 0x1u;
    ea = c.r[21] + 0x4cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[22] + wp::sign_extend16((g_mr051_bases[6] + 0x4e50u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_0106a854:
    c.lr = 0x106a858u;
    f_8004a110(c);
R_0106a858:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x106a860u;
    f_8004a100(c);
R_0106a860:
    ea = c.r[23] + 0x18u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a890;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0106a940;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0106ab48;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_0106aba0;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_0106ad38;
    goto L_0106ad68;
L_0106a890:
    c.r[21] = ((((g_mr051_bases[6] + 0x4d10u) + 0x8000u) >> 16) << 16);
    c.r[24] = ((((g_mr051_bases[4] + 0x2330u) + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mr051_bases[4] + 0x2380u) + 0x8000u) >> 16) << 16);
    ea = c.r[30] + 0x7ecu;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[21] = c.r[21] + wp::sign_extend16((g_mr051_bases[6] + 0x4d10u) & 0xFFFFu);
    c.r[24] = c.r[24] + wp::sign_extend16((g_mr051_bases[4] + 0x2330u) & 0xFFFFu);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr051_bases[4] + 0x2380u) & 0xFFFFu);
    c.r[26] = 0x0u;
    c.r[22] = 0x0u;
    goto L_0106a91c;
L_0106a8b8:
    ea = c.r[23] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[21] | c.r[21];
    ea = c.r[3] + c.r[22];
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106a8c8u;
    f_80053d20(c);
R_0106a8c8:
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
    c.lr = 0x106a8e8u;
    f_80053df0(c);
R_0106a8e8:
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
    c.lr = 0x106a908u;
    f_80053e70(c);
R_0106a908:
    c.r[21] = c.r[21] + 0xcu;
    c.r[22] = c.r[22] + 0x4u;
    c.r[24] = c.r[24] + 0x4u;
    c.r[25] = c.r[25] + 0x4u;
    c.r[26] = c.r[26] + 0x1u;
L_0106a91c:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106a8b8;
    }
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0106ad68;
L_0106a940:
    c.r[3] = (((0x802f5ed8u + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mr051_bases[6] + 0x4d10u) + 0x8000u) >> 16) << 16);
    c.r[26] = ((((g_mr051_bases[4] + 0x22e0u) + 0x8000u) >> 16) << 16);
    c.r[27] = ((((g_mr051_bases[4] + 0x23d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5ed8u & 0xFFFFu);
    c.r[29] = wp::rd8(ea);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr051_bases[6] + 0x4d10u) & 0xFFFFu);
    ea = c.r[30] + 0xda4u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr051_bases[4] + 0x22e0u) & 0xFFFFu);
    ea = c.r[30] + 0xda8u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr051_bases[4] + 0x23d0u) & 0xFFFFu);
    c.r[31] = 0x0u;
    c.r[28] = 0x0u;
    c.r[21] = 0x0u;
    goto L_0106aab0;
L_0106a978:
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
    c.lr = 0x106a99cu;
    f_80047ad0(c);
R_0106a99c:
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
    c.lr = 0x106a9b0u;
    f_80047ac0(c);
R_0106a9b0:
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
    if (wp::cr_get(c, 2)) goto L_0106aa08;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106a9f4;
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
    goto L_0106aa08;
L_0106a9f4:
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
L_0106aa08:
    ea = c.r[30] + 0xdacu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106aa10u;
    f_80071fe0(c);
R_0106aa10:
    c.lr = 0x106aa14u;
    f_8006b500(c);
R_0106aa14:
    ea = c.r[30] + 0xdb0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[22] = c.r[3] | c.r[3];
    c.lr = 0x106aa20u;
    f_80071fe0(c);
R_0106aa20:
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
L_0106aab0:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106a978;
    }
    ea = c.r[23] + 0x2bu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ab30;
    ea = c.r[23] + 0x29u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106aaf0;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x345u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x106aae8u;
    f_80018e30(c);
R_0106aae8:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    goto L_0106ab30;
L_0106aaf0:
    ea = c.r[23] + 0x2au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ab18;
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x344u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x106ab10u;
    f_80018e30(c);
R_0106ab10:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    goto L_0106ab30;
L_0106ab18:
    ea = c.r[30] + 0x7e8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x343u;
    ea = c.r[30] + 0x7ecu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x106ab2cu;
    f_80018e30(c);
R_0106ab2c:
    ea = c.r[23] + 0x2cu;
    wp::wr32(ea, c.r[3]);
L_0106ab30:
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0106ad68;
L_0106ab48:
    ea = c.r[23] + 0x28u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ab74;
    ea = c.r[23] + 0x20u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ad68;
    ea = c.r[23] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 0)) goto L_0106ad68;
L_0106ab74:
    ea = c.r[23] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ab88;
    c.r[4] = 0x5u;
    c.lr = 0x106ab88u;
    f_800195d0(c);
L_0106ab88:
R_0106ab88:
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0106ad68;
L_0106aba0:
    c.r[3] = (((0x802f5ed8u + 0x8000u) >> 16) << 16);
    c.r[29] = ((((g_mr051_bases[6] + 0x4d10u) + 0x8000u) >> 16) << 16);
    c.r[28] = ((((g_mr051_bases[4] + 0x22e0u) + 0x8000u) >> 16) << 16);
    c.r[27] = ((((g_mr051_bases[4] + 0x23d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5ed8u & 0xFFFFu);
    c.r[25] = wp::rd8(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr051_bases[6] + 0x4d10u) & 0xFFFFu);
    ea = c.r[30] + 0xda4u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr051_bases[4] + 0x22e0u) & 0xFFFFu);
    ea = c.r[30] + 0xda8u;
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr051_bases[4] + 0x23d0u) & 0xFFFFu);
    c.r[24] = 0x0u;
    c.r[26] = 0x0u;
    c.r[21] = 0x0u;
    c.r[22] = 0x1u;
    goto L_0106ad14;
L_0106abdc:
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
    c.lr = 0x106ac00u;
    f_80047ad0(c);
R_0106ac00:
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
    c.lr = 0x106ac14u;
    f_80047ac0(c);
R_0106ac14:
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
    if (wp::cr_get(c, 2)) goto L_0106ac6c;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106ac58;
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
    goto L_0106ac6c;
L_0106ac58:
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
L_0106ac6c:
    ea = c.r[30] + 0xda0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106ac74u;
    f_80071fe0(c);
R_0106ac74:
    c.lr = 0x106ac78u;
    f_8006b500(c);
R_0106ac78:
    ea = c.r[30] + 0xd9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x106ac84u;
    f_80071fe0(c);
R_0106ac84:
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
L_0106ad14:
    ea = c.r[23] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106abdc;
    }
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0106ad68;
L_0106ad38:
    ea = c.r[30] + 0xdb4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106ad40u;
    f_80071fe0(c);
R_0106ad40:
    ea = c.r[23] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_0106ad68;
    ea = c.r[23] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[23] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[23] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0106ad68:
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
    c.lr = 0x106add8u;
    f_801c83ec(c);
R_0106add8:
    ea = c.r[1] + 0x184u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x180u;
    return;
}

void f_mr051_0106adf0(wp::Cpu& c) {
    WP_ENTER(0x106adf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106ae20u: goto R_0106ae20;
        case 0x106ae2cu: goto R_0106ae2c;
        case 0x106ae3cu: goto R_0106ae3c;
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
    if (wp::cr_get(c, 2)) goto L_0106ae3c;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x144u;
    c.lr = 0x106ae20u;
    f_80063bb0(c);
R_0106ae20:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x106ae2cu;
    f_80051600(c);
R_0106ae2c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106ae3c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106ae3cu;
    f_801c7a8c(c);
L_0106ae3c:
R_0106ae3c:
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

void f_mr051_0106ae60(wp::Cpu& c) {
    WP_ENTER(0x106ae60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x15cu;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr051_0106ae70(wp::Cpu& c) {
    WP_ENTER(0x106ae70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = ((((g_mr051_bases[6] + 0x4e54u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[6] + 0x4e54u) & 0xFFFFu);
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

void f_mr051_0106aea0(wp::Cpu& c) {
    WP_ENTER(0x106aea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106aed4u: goto R_0106aed4;
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
    c.lr = 0x106aed4u;
    f_mr051_01060090(c);
R_0106aed4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_0106aef0(wp::Cpu& c) {
    WP_ENTER(0x106aef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106af08u: goto R_0106af08;
        case 0x106af24u: goto R_0106af24;
        case 0x106af48u: goto R_0106af48;
        case 0x106afc0u: goto R_0106afc0;
        case 0x106afc4u: goto R_0106afc4;
        case 0x106b028u: goto R_0106b028;
        case 0x106b02cu: goto R_0106b02c;
        case 0x106b0ecu: goto R_0106b0ec;
        case 0x106b0f0u: goto R_0106b0f0;
        case 0x106b0f8u: goto R_0106b0f8;
        case 0x106b120u: goto R_0106b120;
        case 0x106b124u: goto R_0106b124;
        case 0x106b198u: goto R_0106b198;
        case 0x106b1a8u: goto R_0106b1a8;
        case 0x106b204u: goto R_0106b204;
        case 0x106b214u: goto R_0106b214;
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
    c.lr = 0x106af08u;
    f_801c83b8(c);
R_0106af08:
    c.f[31] = c.f[1];
    c.r[31] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[27] = c.r[6] | c.r[6];
    c.r[3] = 0x48u;
    c.lr = 0x106af24u;
    f_801c79a4(c);
R_0106af24:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0106af4c;
    c.f[1] = c.f[31];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[28] | c.r[28];
    c.r[7] = c.r[27] | c.r[27];
    c.lr = 0x106af48u;
    f_mr051_0106a040(c);
R_0106af48:
    c.r[30] = c.r[3] | c.r[3];
L_0106af4c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[29] = c.r[30] | c.r[30];
    if (wp::cr_get(c, 2)) goto L_0106af5c;
    c.r[29] = c.r[30] + 0x14u;
L_0106af5c:
    c.r[3] = ((((g_mr051_bases[6] + 0x4e54u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[6] + 0x4e54u) & 0xFFFFu);
    c.r[28] = wp::rd32(ea);
    ea = c.r[28] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x1d0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_0106af90;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x1ccu;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    goto L_0106b204;
L_0106af90:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0106afc4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x2347cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2347cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106afc0u;
    f_801cee24(c);
R_0106afc0:
    c.lr = 0x106afc4u;
    f_801d3940(c);
L_0106afc4:
R_0106afc4:
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
    if (!wp::cr_get(c, 1)) goto L_0106b02c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x2347cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2347cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106b028u;
    f_801cee24(c);
R_0106b028:
    c.lr = 0x106b02cu;
    f_801d3940(c);
L_0106b02c:
R_0106b02c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106b07c;
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
    if (!wp::cr_get(c, 0)) goto L_0106b070;
    c.r[3] = c.r[1] + 0x10u;
L_0106b070:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106b0c0;
L_0106b07c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106b0b8;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0106b0ac;
    c.r[3] = c.r[1] + 0x10u;
L_0106b0ac:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106b0c0;
L_0106b0b8:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0106b0c0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106b0f0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x2347cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2347cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106b0ecu;
    f_801cee24(c);
R_0106b0ec:
    c.lr = 0x106b0f0u;
    f_801d3940(c);
L_0106b0f0:
R_0106b0f0:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x106b0f8u;
    f_801c79a4(c);
R_0106b0f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106b124;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0xac4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0xac4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106b120u;
    f_801cee24(c);
R_0106b120:
    c.lr = 0x106b124u;
    f_801d3940(c);
L_0106b124:
R_0106b124:
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
    c.lr = 0x106b198u;
    f_800043c4(c);
R_0106b198:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x106b1a8u;
    f_80004714(c);
R_0106b1a8:
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
    if (wp::cr_get(c, 2)) goto L_0106b204;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106b204;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x106b204u;
    f_801c7a8c(c);
L_0106b204:
R_0106b204:
    ea = c.r[1] + 0x48u;
    c.f[31] = wp::rdf64(ea);
    c.r[11] = c.r[1] + 0x48u;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106b214u;
    f_801c8404(c);
R_0106b214:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr051_0106b230(wp::Cpu& c) {
    WP_ENTER(0x106b230u);
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

void f_mr051_0106b250(wp::Cpu& c) {
    WP_ENTER(0x106b250u);
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

void f_mr051_0106b260(wp::Cpu& c) {
    WP_ENTER(0x106b260u);
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

void f_mr051_0106b280(wp::Cpu& c) {
    WP_ENTER(0x106b280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = wp::cntlzw(c.r[4]);
    c.r[0] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[3] + 0x2bu;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mr051_0106b290(wp::Cpu& c) {
    WP_ENTER(0x106b290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2au;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr051_0106b2a0(wp::Cpu& c) {
    WP_ENTER(0x106b2a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x28u;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_mr051_0106b2b0(wp::Cpu& c) {
    WP_ENTER(0x106b2b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106b2c4;
    c.r[3] = 0x0u;
    return;
L_0106b2c4:
    ea = c.r[3] + 0x158u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_0106b2e0;
    c.r[3] = 0x0u;
    return;
L_0106b2e0:
    ea = c.r[3] + 0x162u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106b2f4;
    c.r[3] = 0x0u;
    return;
L_0106b2f4:
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

void f_mr051_0106b310(wp::Cpu& c) {
    WP_ENTER(0x106b310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x160u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106b324;
    c.r[3] = 0x0u;
    return;
L_0106b324:
    ea = c.r[3] + 0x158u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x15cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106b340;
    c.r[3] = 0x0u;
    return;
L_0106b340:
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

void f_mr051_0106b360(wp::Cpu& c) {
    WP_ENTER(0x106b360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = ((((g_mr051_bases[6] + 0x4cf4u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[6] + wp::sign_extend16((g_mr051_bases[6] + 0x4cf4u) & 0xFFFFu);
    c.r[4] = ((((g_mr051_bases[1] + 0x6b390u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr051_bases[6] + 0x4ce8u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + wp::sign_extend16((g_mr051_bases[6] + 0x4cf4u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[1] + 0x6b390u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[6] + 0x4ce8u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    f_mr051_01000000(c);
    return;
}

void f_mr051_0106b390(wp::Cpu& c) {
    WP_ENTER(0x106b390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106b3e0u: goto R_0106b3e0;
        case 0x106b3f0u: goto R_0106b3f0;
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
    if (wp::cr_get(c, 2)) goto L_0106b3f0;
    if (wp::cr_get(c, 2)) goto L_0106b3e0;
    if (wp::cr_get(c, 2)) goto L_0106b3e0;
    if (wp::cr_get(c, 2)) goto L_0106b3e0;
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106b3e0;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] | c.r[4];
    c.lr = 0x106b3e0u;
    f_801c7a8c(c);
L_0106b3e0:
R_0106b3e0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106b3f0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106b3f0u;
    f_801c7a8c(c);
L_0106b3f0:
R_0106b3f0:
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

void f_mr051_0106b410(wp::Cpu& c) {
    WP_ENTER(0x106b410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_01068780(c);
    return;
}

void f_mr051_0106b420(wp::Cpu& c) {
    WP_ENTER(0x106b420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_01068710(c);
    return;
}

void f_mr051_0106b430(wp::Cpu& c) {
    WP_ENTER(0x106b430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_01068d50(c);
    return;
}

void f_mr051_0106b440(wp::Cpu& c) {
    WP_ENTER(0x106b440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_01068ba0(c);
    return;
}

void f_mr051_0106b450(wp::Cpu& c) {
    WP_ENTER(0x106b450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_01069910(c);
    return;
}

void f_mr051_0106b460(wp::Cpu& c) {
    WP_ENTER(0x106b460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_010695b0(c);
    return;
}

void f_mr051_0106b470(wp::Cpu& c) {
    WP_ENTER(0x106b470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_01069f10(c);
    return;
}

void f_mr051_0106b480(wp::Cpu& c) {
    WP_ENTER(0x106b480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_01069e70(c);
    return;
}

void f_mr051_0106b490(wp::Cpu& c) {
    WP_ENTER(0x106b490u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mr051_0106b250(c);
    return;
}

void f_mr051_0106b4a0(wp::Cpu& c) {
    WP_ENTER(0x106b4a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffecu;
    f_mr051_0106a420(c);
    return;
}

void f_mr051_0106b4b0(wp::Cpu& c) {
    WP_ENTER(0x106b4b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_0106ae60(c);
    return;
}

void f_mr051_0106b4c0(wp::Cpu& c) {
    WP_ENTER(0x106b4c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffebcu;
    f_mr051_0106adf0(c);
    return;
}

void f_mr051_0106b4d0(wp::Cpu& c) {
    WP_ENTER(0x106b4d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mr051_0106b230(c);
    return;
}

void f_mr051_0106b4e0(wp::Cpu& c) {
    WP_ENTER(0x106b4e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffea8u;
    f_mr051_0106adf0(c);
    return;
}

void f_mr051_0106b4f0(wp::Cpu& c) {
    WP_ENTER(0x106b4f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106b538u: goto R_0106b538;
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
    if (wp::cr_get(c, 1)) goto L_0106b52c;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_0106b60c;
L_0106b52c:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106b538u;
    f_80071fe0(c);
R_0106b538:
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
    if (wp::cr_get(c, 1)) goto L_0106b5f4;
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
    goto L_0106b60c;
L_0106b5f4:
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
L_0106b60c:
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

void f_mr051_0106b630(wp::Cpu& c) {
    WP_ENTER(0x106b630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106b678u: goto R_0106b678;
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
    if (wp::cr_get(c, 1)) goto L_0106b66c;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_0106b72c;
L_0106b66c:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106b678u;
    f_80071fe0(c);
R_0106b678:
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
    if (wp::cr_get(c, 1)) goto L_0106b718;
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
    goto L_0106b72c;
L_0106b718:
    c.r[0] = 0x9u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_0106b72c:
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

void f_mr051_0106b750(wp::Cpu& c) {
    WP_ENTER(0x106b750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106b7a0u: goto R_0106b7a0;
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
    if (wp::cr_get(c, 1)) goto L_0106b794;
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
    goto L_0106b8bc;
L_0106b794:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106b7a0u;
    f_80071fe0(c);
R_0106b7a0:
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
    if (wp::cr_get(c, 1)) goto L_0106b89c;
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
    goto L_0106b8bc;
L_0106b89c:
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
L_0106b8bc:
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

void f_mr051_0106b8e0(wp::Cpu& c) {
    WP_ENTER(0x106b8e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106b928u: goto R_0106b928;
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
    if (wp::cr_get(c, 1)) goto L_0106b930;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106b930;
    c.r[5] = ((((g_mr051_bases[4] + 0x24c0u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x24c0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106b928u;
    f_80018e30(c);
R_0106b928:
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0106b930:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_0106b950(wp::Cpu& c) {
    WP_ENTER(0x106b950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[4]);
    f_800402c0(c);
    return;
}

void f_mr051_0106b960(wp::Cpu& c) {
    WP_ENTER(0x106b960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106b97cu: goto R_0106b97c;
        case 0x106b990u: goto R_0106b990;
        case 0x106b9d0u: goto R_0106b9d0;
        case 0x106b9f4u: goto R_0106b9f4;
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
    c.lr = 0x106b97cu;
    f_801c83b4(c);
R_0106b97c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x106b990u;
    f_mr051_0106b4f0(c);
R_0106b990:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_0106b9a8:
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
    ea = c.r[30] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106b9d0u;
    f_80040980(c);
R_0106b9d0:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106b9a8;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106b9f4u;
    f_801c8400(c);
R_0106b9f4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr051_0106ba10(wp::Cpu& c) {
    WP_ENTER(0x106ba10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106ba2cu: goto R_0106ba2c;
        case 0x106ba40u: goto R_0106ba40;
        case 0x106ba80u: goto R_0106ba80;
        case 0x106baa4u: goto R_0106baa4;
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
    c.lr = 0x106ba2cu;
    f_801c83b4(c);
R_0106ba2c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x106ba40u;
    f_mr051_0106b630(c);
R_0106ba40:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_0106ba58:
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
    ea = c.r[30] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106ba80u;
    f_80040980(c);
R_0106ba80:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x4u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106ba58;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106baa4u;
    f_801c8400(c);
R_0106baa4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr051_0106bac0(wp::Cpu& c) {
    WP_ENTER(0x106bac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106badcu: goto R_0106badc;
        case 0x106baf0u: goto R_0106baf0;
        case 0x106bb30u: goto R_0106bb30;
        case 0x106bb54u: goto R_0106bb54;
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
    c.lr = 0x106badcu;
    f_801c83b4(c);
R_0106badc:
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x106baf0u;
    f_mr051_0106b750(c);
R_0106baf0:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x8u;
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[28] = 0x0u;
    c.r[30] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x43300000u;
L_0106bb08:
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
    ea = c.r[30] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106bb30u;
    f_80040980(c);
R_0106bb30:
    c.r[28] = c.r[28] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    c.r[29] = c.r[29] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106bb08;
    }
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106bb54u;
    f_801c8400(c);
R_0106bb54:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr051_0106bb70(wp::Cpu& c) {
    WP_ENTER(0x106bb70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106bb8cu: goto R_0106bb8c;
        case 0x106bbf8u: goto R_0106bbf8;
        case 0x106bc50u: goto R_0106bc50;
        case 0x106bc70u: goto R_0106bc70;
        case 0x106bc9cu: goto R_0106bc9c;
        case 0x106bcbcu: goto R_0106bcbc;
        case 0x106bcf8u: goto R_0106bcf8;
        case 0x106bd20u: goto R_0106bd20;
        case 0x106bd30u: goto R_0106bd30;
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
    c.lr = 0x106bb8cu;
    f_801c839c(c);
R_0106bb8c:
    c.r[22] = ((((g_mr051_bases[4] + 0x24d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[22] + wp::sign_extend16((g_mr051_bases[4] + 0x24d0u) & 0xFFFFu);
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
    c.lr = 0x106bbf8u;
    f_mr051_0106b4f0(c);
R_0106bbf8:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    c.r[30] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    c.r[30] = c.r[30] + c.r[0];
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0106bc28:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bc40;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0106bc44;
L_0106bc40:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_0106bc44:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x106bc50u;
    f_801c7860(c);
R_0106bc50:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x106bc70u;
    f_mr051_01016e80(c);
R_0106bc70:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bc8c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0106bc90;
L_0106bc8c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_0106bc90:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x106bc9cu;
    f_801c7860(c);
R_0106bc9c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x106bcbcu;
    f_mr051_01016e80(c);
R_0106bcbc:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bcd4;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0106bcd8;
L_0106bcd4:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_0106bcd8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106bcf8u;
    f_80040980(c);
R_0106bcf8:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106bc28;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106bd20;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106bd20u;
    f_801c7a8c(c);
L_0106bd20:
R_0106bd20:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106bd30u;
    f_801c83e8(c);
R_0106bd30:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_0106bd40(wp::Cpu& c) {
    WP_ENTER(0x106bd40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106bd5cu: goto R_0106bd5c;
        case 0x106bd84u: goto R_0106bd84;
        case 0x106bde0u: goto R_0106bde0;
        case 0x106be00u: goto R_0106be00;
        case 0x106be2cu: goto R_0106be2c;
        case 0x106be4cu: goto R_0106be4c;
        case 0x106be88u: goto R_0106be88;
        case 0x106beb0u: goto R_0106beb0;
        case 0x106bec0u: goto R_0106bec0;
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
    c.lr = 0x106bd5cu;
    f_801c839c(c);
R_0106bd5c:
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
    c.lr = 0x106bd84u;
    f_mr051_0106b4f0(c);
R_0106bd84:
    c.r[4] = ((((g_mr051_bases[5] + 0x26d90u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 4) & 0xfffffff0u;
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d90u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x18u;
    c.r[28] = c.r[1] + 0x29u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0106bdb8:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bdd0;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0106bdd4;
L_0106bdd0:
    ea = c.r[1] + 0x2cu;
    c.r[21] = wp::rd32(ea);
L_0106bdd4:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x106bde0u;
    f_801c7860(c);
R_0106bde0:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x106be00u;
    f_mr051_01016e80(c);
R_0106be00:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106be1c;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0106be20;
L_0106be1c:
    ea = c.r[1] + 0x2cu;
    c.r[20] = wp::rd32(ea);
L_0106be20:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x106be2cu;
    f_801c7860(c);
R_0106be2c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x28u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x106be4cu;
    f_mr051_01016e80(c);
R_0106be4c:
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106be64;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0106be68;
L_0106be64:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
L_0106be68:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106be88u;
    f_80040980(c);
R_0106be88:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106bdb8;
    }
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106beb0;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106beb0u;
    f_801c7a8c(c);
L_0106beb0:
R_0106beb0:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106bec0u;
    f_801c83e8(c);
R_0106bec0:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr051_0106bed0(wp::Cpu& c) {
    WP_ENTER(0x106bed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106beecu: goto R_0106beec;
        case 0x106bf14u: goto R_0106bf14;
        case 0x106bf70u: goto R_0106bf70;
        case 0x106bf90u: goto R_0106bf90;
        case 0x106bfbcu: goto R_0106bfbc;
        case 0x106bfdcu: goto R_0106bfdc;
        case 0x106c018u: goto R_0106c018;
        case 0x106c040u: goto R_0106c040;
        case 0x106c050u: goto R_0106c050;
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
    c.lr = 0x106beecu;
    f_801c839c(c);
R_0106beec:
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
    c.lr = 0x106bf14u;
    f_mr051_0106b750(c);
R_0106bf14:
    c.r[0] = c.r[20] * 0x18u;
    c.r[4] = ((((g_mr051_bases[5] + 0x26db0u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd8(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26db0u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[22] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = c.r[4] + c.r[0];
    c.r[29] = c.r[1] + 0x28u;
    c.r[28] = c.r[1] + 0x19u;
    c.r[27] = 0x0u;
    c.r[23] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x43300000u;
L_0106bf48:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bf60;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[21] = c.r[0] & 0x7fu;
    goto L_0106bf64;
L_0106bf60:
    ea = c.r[1] + 0x1cu;
    c.r[21] = wp::rd32(ea);
L_0106bf64:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x106bf70u;
    f_801c7860(c);
R_0106bf70:
    c.r[0] = c.r[3] | c.r[3];
    c.r[5] = c.r[21] | c.r[21];
    c.r[6] = c.r[26] | c.r[26];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[26] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x106bf90u;
    f_mr051_01016e80(c);
R_0106bf90:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bfac;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[20] = c.r[0] & 0x7fu;
    goto L_0106bfb0;
L_0106bfac:
    ea = c.r[1] + 0x1cu;
    c.r[20] = wp::rd32(ea);
L_0106bfb0:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[22]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x106bfbcu;
    f_801c7860(c);
R_0106bfbc:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[20] | c.r[20];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x106bfdcu;
    f_mr051_01016e80(c);
R_0106bfdc:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bff4;
    c.r[4] = c.r[28] | c.r[28];
    goto L_0106bff8;
L_0106bff4:
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
L_0106bff8:
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[24]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[23] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106c018u;
    f_80040980(c);
R_0106c018:
    c.r[27] = c.r[27] + 0x1u;
    c.r[29] = c.r[29] + 0x4u;
    wp::compare_unsigned(c, 0, c.r[27], 0x4u);
    c.r[30] = c.r[30] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106bf48;
    }
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106c040;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106c040u;
    f_801c7a8c(c);
L_0106c040:
R_0106c040:
    c.r[11] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106c050u;
    f_801c83e8(c);
R_0106c050:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr051_0106c060(wp::Cpu& c) {
    WP_ENTER(0x106c060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c07cu: goto R_0106c07c;
        case 0x106c130u: goto R_0106c130;
        case 0x106c134u: goto R_0106c134;
        case 0x106c174u: goto R_0106c174;
        case 0x106c1e4u: goto R_0106c1e4;
        case 0x106c1e8u: goto R_0106c1e8;
        case 0x106c2a8u: goto R_0106c2a8;
        case 0x106c2acu: goto R_0106c2ac;
        case 0x106c2b4u: goto R_0106c2b4;
        case 0x106c2dcu: goto R_0106c2dc;
        case 0x106c2e0u: goto R_0106c2e0;
        case 0x106c310u: goto R_0106c310;
        case 0x106c360u: goto R_0106c360;
        case 0x106c370u: goto R_0106c370;
        case 0x106c3bcu: goto R_0106c3bc;
        case 0x106c738u: goto R_0106c738;
        case 0x106c774u: goto R_0106c774;
        case 0x106c784u: goto R_0106c784;
        case 0x106c7c4u: goto R_0106c7c4;
        case 0x106c7d4u: goto R_0106c7d4;
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
    c.lr = 0x106c07cu;
    f_801c83a0(c);
R_0106c07c:
    c.r[9] = ((((g_mr051_bases[4] + 0x2470u) + 0x8000u) >> 16) << 16);
    c.r[10] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[10]);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr051_bases[4] + 0x2470u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_0106c0bc;
    c.r[6] = c.r[0] | c.r[0];
L_0106c0bc:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[29] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0106c3c0;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[30] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[30], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0106c0f0;
    c.r[0] = c.r[6] - c.r[30];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106c15c;
L_0106c0f0:
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
    if (!wp::cr_get(c, 1)) goto L_0106c134;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106c130u;
    f_801cee24(c);
R_0106c130:
    c.lr = 0x106c134u;
    f_801d3940(c);
L_0106c134:
R_0106c134:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c148;
    goto L_0106c184;
L_0106c148:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c184;
    goto L_0106c184;
L_0106c15c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x106c174u;
    f_80004714(c);
R_0106c174:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0106c3d0;
L_0106c184:
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
    if (!wp::cr_get(c, 1)) goto L_0106c1e8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106c1e4u;
    f_801cee24(c);
R_0106c1e4:
    c.lr = 0x106c1e8u;
    f_801d3940(c);
L_0106c1e8:
R_0106c1e8:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c238;
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
    if (!wp::cr_get(c, 0)) goto L_0106c22c;
    c.r[3] = c.r[1] + 0x8u;
L_0106c22c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106c27c;
L_0106c238:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c274;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0106c268;
    c.r[3] = c.r[1] + 0x8u;
L_0106c268:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106c27c;
L_0106c274:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0106c27c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106c2ac;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106c2a8u;
    f_801cee24(c);
R_0106c2a8:
    c.lr = 0x106c2acu;
    f_801d3940(c);
L_0106c2ac:
R_0106c2ac:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x106c2b4u;
    f_801c79a4(c);
R_0106c2b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106c2e0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0xac4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0xac4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106c2dcu;
    f_801cee24(c);
R_0106c2dc:
    c.lr = 0x106c2e0u;
    f_801d3940(c);
L_0106c2e0:
R_0106c2e0:
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
    c.lr = 0x106c310u;
    f_80004714(c);
R_0106c310:
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
    c.lr = 0x106c360u;
    f_800043c4(c);
R_0106c360:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[23] | c.r[23];
    c.r[4] = 0x0u;
    c.lr = 0x106c370u;
    f_80004714(c);
R_0106c370:
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
    if (wp::cr_get(c, 2)) goto L_0106c3d0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c3d0;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x106c3bcu;
    f_801c7a8c(c);
R_0106c3bc:
    goto L_0106c3d0;
L_0106c3c0:
    if (!wp::cr_get(c, 0)) goto L_0106c3d0;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0106c3d0:
    wp::compare_unsigned(c, 1, c.r[26], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0106c674;
    wp::compare_unsigned(c, 0, c.r[26], 0x8u);
    c.r[6] = c.r[26] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0106c61c;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0106c408;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c408;
    c.r[7] = 0x1u;
L_0106c408:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c41c;
    wp::compare_unsigned(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106c41c;
    c.r[5] = 0x1u;
L_0106c41c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c434;
    c.r[0] = c.r[26] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0106c434;
    c.r[4] = 0x1u;
L_0106c434:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c61c;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106c61c;
L_0106c458:
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
    goto L_0106c458;
    }
L_0106c61c:
    c.r[0] = c.r[26] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[26]);
    if (wp::cr_get(c, 1)) goto L_0106c674;
L_0106c638:
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
    goto L_0106c638;
    }
L_0106c674:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106c680;
    c.r[27] = c.r[28] | c.r[28];
L_0106c680:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c6c8;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106c6b8;
L_0106c6a0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106c6b8;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0106c6a0;
    }
L_0106c6b8:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_0106c6cc;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_0106c6cc;
L_0106c6c8:
    c.r[23] = 0x0u;
L_0106c6cc:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[31] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[30] = 0x0u;
    c.r[29] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    goto L_0106c790;
L_0106c6e8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    ea = c.r[25] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0106c73c;
    c.r[0] = c.r[31] + c.r[23];
    wp::compare_unsigned(c, 0, c.r[0], c.r[26]);
    if (!wp::cr_get(c, 0)) goto L_0106c774;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[4] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[29] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
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
    c.lr = 0x106c738u;
    f_80040980(c);
R_0106c738:
    goto L_0106c774;
L_0106c73c:
    wp::compare_unsigned(c, 0, c.r[23], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_0106c774;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[27]);
    c.r[4] = c.r[22] | c.r[22];
    ea = c.r[5] + c.r[30];
    c.r[0] = wp::rd32(ea);
    c.r[21] = 0x1u;
    ea = c.r[29] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106c774u;
    f_80040980(c);
L_0106c774:
R_0106c774:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[22] | c.r[22];
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x106c784u;
    f_800403f0(c);
R_0106c784:
    c.r[25] = c.r[25] + 0x4u;
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_0106c790:
    wp::compare_unsigned(c, 0, c.r[31], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106c6e8;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106c7c4;
    if (wp::cr_get(c, 2)) goto L_0106c7c4;
    if (wp::cr_get(c, 2)) goto L_0106c7c4;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c7c4;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106c7c4u;
    f_801c7a8c(c);
L_0106c7c4:
R_0106c7c4:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106c7d4u;
    f_801c83ec(c);
R_0106c7d4:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr051_0106c7f0(wp::Cpu& c) {
    WP_ENTER(0x106c7f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c80cu: goto R_0106c80c;
        case 0x106c8e0u: goto R_0106c8e0;
        case 0x106c8e4u: goto R_0106c8e4;
        case 0x106c924u: goto R_0106c924;
        case 0x106c994u: goto R_0106c994;
        case 0x106c998u: goto R_0106c998;
        case 0x106ca58u: goto R_0106ca58;
        case 0x106ca5cu: goto R_0106ca5c;
        case 0x106ca64u: goto R_0106ca64;
        case 0x106ca8cu: goto R_0106ca8c;
        case 0x106ca90u: goto R_0106ca90;
        case 0x106cac0u: goto R_0106cac0;
        case 0x106cb10u: goto R_0106cb10;
        case 0x106cb20u: goto R_0106cb20;
        case 0x106cb6cu: goto R_0106cb6c;
        case 0x106ced0u: goto R_0106ced0;
        case 0x106cee0u: goto R_0106cee0;
        case 0x106cf20u: goto R_0106cf20;
        case 0x106cf30u: goto R_0106cf30;
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
    c.lr = 0x106c80cu;
    f_801c83a4(c);
R_0106c80c:
    c.r[8] = ((((g_mr051_bases[4] + 0x2498u) + 0x8000u) >> 16) << 16);
    c.r[9] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[28] = c.r[5] + c.r[6];
    c.r[8] = c.r[8] + wp::sign_extend16((g_mr051_bases[4] + 0x2498u) & 0xFFFFu);
    c.r[6] = ((((g_mr051_bases[4] + 0x2470u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[28], 2) & 0xfffffffcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr051_bases[4] + 0x2470u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_0106c86c;
    c.r[4] = c.r[0] | c.r[0];
L_0106c86c:
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[5]);
    c.r[30] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0106cb70;
    ea = c.r[1] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[28] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[29], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0106c8a0;
    c.r[0] = c.r[6] - c.r[29];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106c90c;
L_0106c8a0:
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
    if (!wp::cr_get(c, 1)) goto L_0106c8e4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106c8e0u;
    f_801cee24(c);
R_0106c8e0:
    c.lr = 0x106c8e4u;
    f_801d3940(c);
L_0106c8e4:
R_0106c8e4:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c8f8;
    goto L_0106c934;
L_0106c8f8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c934;
    goto L_0106c934;
L_0106c90c:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[29], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x106c924u;
    f_80004714(c);
R_0106c924:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[29];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    goto L_0106cb80;
L_0106c934:
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
    if (!wp::cr_get(c, 1)) goto L_0106c998;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106c994u;
    f_801cee24(c);
R_0106c994:
    c.lr = 0x106c998u;
    f_801d3940(c);
L_0106c998:
R_0106c998:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c9e8;
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
    if (!wp::cr_get(c, 0)) goto L_0106c9dc;
    c.r[3] = c.r[1] + 0x10u;
L_0106c9dc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106ca2c;
L_0106c9e8:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106ca24;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0106ca18;
    c.r[3] = c.r[1] + 0x10u;
L_0106ca18:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106ca2c;
L_0106ca24:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0106ca2c:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106ca5c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106ca58u;
    f_801cee24(c);
R_0106ca58:
    c.lr = 0x106ca5cu;
    f_801d3940(c);
L_0106ca5c:
R_0106ca5c:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x106ca64u;
    f_801c79a4(c);
R_0106ca64:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106ca90;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0xac4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0xac4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106ca8cu;
    f_801cee24(c);
R_0106ca8c:
    c.lr = 0x106ca90u;
    f_801d3940(c);
L_0106ca90:
R_0106ca90:
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
    c.lr = 0x106cac0u;
    f_80004714(c);
R_0106cac0:
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
    c.lr = 0x106cb10u;
    f_800043c4(c);
R_0106cb10:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x106cb20u;
    f_80004714(c);
R_0106cb20:
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
    if (wp::cr_get(c, 2)) goto L_0106cb80;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106cb80;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x106cb6cu;
    f_801c7a8c(c);
R_0106cb6c:
    goto L_0106cb80;
L_0106cb70:
    if (!wp::cr_get(c, 0)) goto L_0106cb80;
    c.r[0] = c.r[5] - c.r[28];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_0106cb80:
    wp::compare_unsigned(c, 1, c.r[28], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0106ce24;
    wp::compare_unsigned(c, 0, c.r[28], 0x8u);
    c.r[6] = c.r[28] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0106cdcc;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0106cbb8;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106cbb8;
    c.r[7] = 0x1u;
L_0106cbb8:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106cbcc;
    wp::compare_unsigned(c, 0, c.r[28], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106cbcc;
    c.r[5] = 0x1u;
L_0106cbcc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106cbe4;
    c.r[0] = c.r[28] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0106cbe4;
    c.r[4] = 0x1u;
L_0106cbe4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106cdcc;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106cdcc;
L_0106cc08:
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
    goto L_0106cc08;
    }
L_0106cdcc:
    c.r[0] = c.r[28] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[28]);
    if (wp::cr_get(c, 1)) goto L_0106ce24;
L_0106cde8:
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
    goto L_0106cde8;
    }
L_0106ce24:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ce70;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106ce60;
    c.r[0] = c.r[0] | 0x0u;
L_0106ce48:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ce60;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0106ce48;
    }
L_0106ce60:
    wp::compare_unsigned(c, 0, c.r[23], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_0106ce74;
    c.r[23] = c.r[26] + 0xffffffffu;
    goto L_0106ce74;
L_0106ce70:
    c.r[23] = 0x0u;
L_0106ce74:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[29] = 0x0u;
    c.r[27] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x43300000u;
    goto L_0106ceec;
L_0106ce90:
    wp::compare_unsigned(c, 0, c.r[23], c.r[30]);
    ea = c.r[25] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_0106ced0;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[26]);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[5] + c.r[29];
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x1u;
    ea = c.r[27] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106ced0u;
    f_80040980(c);
L_0106ced0:
R_0106ced0:
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x106cee0u;
    f_800403f0(c);
R_0106cee0:
    c.r[25] = c.r[25] + 0x4u;
    c.r[29] = c.r[29] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_0106ceec:
    wp::compare_unsigned(c, 0, c.r[30], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106ce90;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x14u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106cf20;
    if (wp::cr_get(c, 2)) goto L_0106cf20;
    if (wp::cr_get(c, 2)) goto L_0106cf20;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106cf20;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106cf20u;
    f_801c7a8c(c);
L_0106cf20:
R_0106cf20:
    c.r[11] = c.r[1] + 0x70u;
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106cf30u;
    f_801c83f0(c);
R_0106cf30:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr051_0106cf40(wp::Cpu& c) {
    WP_ENTER(0x106cf40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106cf5cu: goto R_0106cf5c;
        case 0x106d014u: goto R_0106d014;
        case 0x106d018u: goto R_0106d018;
        case 0x106d058u: goto R_0106d058;
        case 0x106d0c8u: goto R_0106d0c8;
        case 0x106d0ccu: goto R_0106d0cc;
        case 0x106d18cu: goto R_0106d18c;
        case 0x106d190u: goto R_0106d190;
        case 0x106d198u: goto R_0106d198;
        case 0x106d1c0u: goto R_0106d1c0;
        case 0x106d1c4u: goto R_0106d1c4;
        case 0x106d1f4u: goto R_0106d1f4;
        case 0x106d244u: goto R_0106d244;
        case 0x106d254u: goto R_0106d254;
        case 0x106d2a0u: goto R_0106d2a0;
        case 0x106d624u: goto R_0106d624;
        case 0x106d634u: goto R_0106d634;
        case 0x106d654u: goto R_0106d654;
        case 0x106d680u: goto R_0106d680;
        case 0x106d6a0u: goto R_0106d6a0;
        case 0x106d700u: goto R_0106d700;
        case 0x106d750u: goto R_0106d750;
        case 0x106d774u: goto R_0106d774;
        case 0x106d788u: goto R_0106d788;
        case 0x106d7c8u: goto R_0106d7c8;
        case 0x106d7d8u: goto R_0106d7d8;
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
    c.lr = 0x106cf5cu;
    f_801c838c(c);
R_0106cf5c:
    c.r[10] = ((((g_mr051_bases[4] + 0x2470u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[11]);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mr051_bases[4] + 0x2470u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_0106cfa0;
    c.r[6] = c.r[0] | c.r[0];
L_0106cfa0:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    c.r[25] = c.r[6] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0106d2a4;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[24] = c.r[5] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[24], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0106cfd4;
    c.r[0] = c.r[6] - c.r[24];
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106d040;
L_0106cfd4:
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
    if (!wp::cr_get(c, 1)) goto L_0106d018;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106d014u;
    f_801cee24(c);
R_0106d014:
    c.lr = 0x106d018u;
    f_801d3940(c);
L_0106d018:
R_0106d018:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d02c;
    goto L_0106d068;
L_0106d02c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d068;
    goto L_0106d068;
L_0106d040:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x106d058u;
    f_80004714(c);
R_0106d058:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[24];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_0106d2b4;
L_0106d068:
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
    if (!wp::cr_get(c, 1)) goto L_0106d0cc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106d0c8u;
    f_801cee24(c);
R_0106d0c8:
    c.lr = 0x106d0ccu;
    f_801d3940(c);
L_0106d0cc:
R_0106d0cc:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d11c;
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
    if (!wp::cr_get(c, 0)) goto L_0106d110;
    c.r[3] = c.r[1] + 0x18u;
L_0106d110:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_0106d160;
L_0106d11c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d158;
    c.r[3] = c.r[23] + 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_0106d14c;
    c.r[3] = c.r[1] + 0x18u;
L_0106d14c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = c.r[23] + c.r[0];
    goto L_0106d160;
L_0106d158:
    c.r[3] = 0x40000000u;
    c.r[23] = c.r[3] + 0xffffffffu;
L_0106d160:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106d190;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106d18cu;
    f_801cee24(c);
R_0106d18c:
    c.lr = 0x106d190u;
    f_801d3940(c);
L_0106d190:
R_0106d190:
    c.r[3] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.lr = 0x106d198u;
    f_801c79a4(c);
R_0106d198:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106d1c4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0xac4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0xac4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106d1c0u;
    f_801cee24(c);
R_0106d1c0:
    c.lr = 0x106d1c4u;
    f_801d3940(c);
L_0106d1c4:
R_0106d1c4:
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
    c.lr = 0x106d1f4u;
    f_80004714(c);
R_0106d1f4:
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
    c.lr = 0x106d244u;
    f_800043c4(c);
R_0106d244:
    c.r[3] = c.r[18] | c.r[18];
    c.r[5] = c.r[16] | c.r[16];
    c.r[4] = 0x0u;
    c.lr = 0x106d254u;
    f_80004714(c);
R_0106d254:
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
    if (wp::cr_get(c, 2)) goto L_0106d2b4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d2b4;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x106d2a0u;
    f_801c7a8c(c);
R_0106d2a0:
    goto L_0106d2b4;
L_0106d2a4:
    if (!wp::cr_get(c, 0)) goto L_0106d2b4;
    c.r[0] = c.r[4] - c.r[5];
    c.r[0] = c.r[4] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_0106d2b4:
    wp::compare_unsigned(c, 1, c.r[30], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0106d558;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0106d500;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0106d2ec;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d2ec;
    c.r[7] = 0x1u;
L_0106d2ec:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d300;
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106d300;
    c.r[5] = 0x1u;
L_0106d300:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d318;
    c.r[0] = c.r[30] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0106d318;
    c.r[4] = 0x1u;
L_0106d318:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d500;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106d500;
L_0106d33c:
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
    goto L_0106d33c;
    }
L_0106d500:
    c.r[0] = c.r[30] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (wp::cr_get(c, 1)) goto L_0106d558;
L_0106d51c:
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
    goto L_0106d51c;
    }
L_0106d558:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106d564;
    c.r[17] = c.r[31] | c.r[31];
L_0106d564:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d5b0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[22] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106d5a0;
    c.r[0] = c.r[0] | 0x0u;
L_0106d588:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106d5a0;
    c.r[22] = c.r[22] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0106d588;
    }
L_0106d5a0:
    wp::compare_unsigned(c, 0, c.r[22], c.r[30]);
    if (wp::cr_get(c, 0)) goto L_0106d5b4;
    c.r[22] = c.r[30] + 0xffffffffu;
    goto L_0106d5b4;
L_0106d5b0:
    c.r[22] = 0x0u;
L_0106d5b4:
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0106d5c4;
    c.r[4] = wp::sub_carry(c, c.r[30], 0x8u);
L_0106d5c4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[17] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0106d79c;
    c.r[5] = ((((g_mr051_bases[5] + 0x26d38u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[19], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x26d38u) & 0xFFFFu);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0x14u;
    c.r[24] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[25] = wp::rd8(ea);
    c.r[20] = c.r[4] + c.r[0];
    c.r[18] = c.r[1] + 0x25u;
    c.r[19] = 0x0u;
    c.r[26] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x43300000u;
    c.r[23] = 0x0u;
    goto L_0106d794;
L_0106d610:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[23]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[23]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[23]);
    c.lr = 0x106d624u;
    f_801c7860(c);
R_0106d624:
    c.r[21] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[21] | c.r[21];
    c.lr = 0x106d634u;
    f_mr051_01016cc0(c);
R_0106d634:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[24]);
    c.r[6] = c.r[29] | c.r[29];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[29] + c.r[21];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x106d654u;
    f_mr051_01016e80(c);
R_0106d654:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[20] + 0x0u;
    c.r[21] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d670;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[16] = c.r[0] & 0x7fu;
    goto L_0106d674;
L_0106d670:
    ea = c.r[1] + 0x28u;
    c.r[16] = wp::rd32(ea);
L_0106d674:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[25]);
    c.r[3] = c.r[21] | c.r[21];
    c.lr = 0x106d680u;
    f_801c7860(c);
R_0106d680:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[16] | c.r[16];
    c.r[6] = c.r[21] | c.r[21];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[21] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x106d6a0u;
    f_mr051_01016e80(c);
R_0106d6a0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[21] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0106d704;
    c.r[4] = c.r[17] + c.r[22];
    wp::compare_unsigned(c, 0, c.r[4], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0106d750;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[21] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_0106d6dc;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0106d6e0;
L_0106d6dc:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0106d6e0:
    ea = c.r[6] + c.r[5];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106d700u;
    f_80040980(c);
R_0106d700:
    goto L_0106d750;
L_0106d704:
    wp::compare_unsigned(c, 0, c.r[22], c.r[17]);
    if (wp::cr_get(c, 1)) goto L_0106d750;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[21] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d72c;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0106d730;
L_0106d72c:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0106d730:
    ea = c.r[5] + c.r[19];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[26] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106d750u;
    f_80040980(c);
L_0106d750:
R_0106d750:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d768;
    c.r[4] = c.r[18] | c.r[18];
    goto L_0106d76c;
L_0106d768:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0106d76c:
    c.r[5] = c.r[21] | c.r[21];
    c.lr = 0x106d774u;
    f_800403f0(c);
R_0106d774:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106d788;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106d788u;
    f_801c7a8c(c);
L_0106d788:
R_0106d788:
    c.r[20] = c.r[20] + 0x4u;
    c.r[19] = c.r[19] + 0x4u;
    c.r[17] = c.r[17] + 0x1u;
L_0106d794:
    wp::compare_unsigned(c, 0, c.r[17], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106d610;
    }
L_0106d79c:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106d7c8;
    if (wp::cr_get(c, 2)) goto L_0106d7c8;
    if (wp::cr_get(c, 2)) goto L_0106d7c8;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d7c8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106d7c8u;
    f_801c7a8c(c);
L_0106d7c8:
R_0106d7c8:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106d7d8u;
    f_801c83d8(c);
R_0106d7d8:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr051_0106d7f0(wp::Cpu& c) {
    WP_ENTER(0x106d7f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d80cu: goto R_0106d80c;
        case 0x106d8e8u: goto R_0106d8e8;
        case 0x106d8ecu: goto R_0106d8ec;
        case 0x106d92cu: goto R_0106d92c;
        case 0x106d99cu: goto R_0106d99c;
        case 0x106d9a0u: goto R_0106d9a0;
        case 0x106da60u: goto R_0106da60;
        case 0x106da64u: goto R_0106da64;
        case 0x106da6cu: goto R_0106da6c;
        case 0x106da94u: goto R_0106da94;
        case 0x106da98u: goto R_0106da98;
        case 0x106dac8u: goto R_0106dac8;
        case 0x106db18u: goto R_0106db18;
        case 0x106db28u: goto R_0106db28;
        case 0x106db74u: goto R_0106db74;
        case 0x106def0u: goto R_0106def0;
        case 0x106df00u: goto R_0106df00;
        case 0x106df20u: goto R_0106df20;
        case 0x106df4cu: goto R_0106df4c;
        case 0x106df6cu: goto R_0106df6c;
        case 0x106dfbcu: goto R_0106dfbc;
        case 0x106dfe0u: goto R_0106dfe0;
        case 0x106dff4u: goto R_0106dff4;
        case 0x106e034u: goto R_0106e034;
        case 0x106e044u: goto R_0106e044;
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
    c.lr = 0x106d80cu;
    f_801c8390(c);
R_0106d80c:
    c.r[10] = ((((g_mr051_bases[4] + 0x2498u) + 0x8000u) >> 16) << 16);
    c.r[11] = 0x0u;
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[9] = ((((g_mr051_bases[4] + 0x2470u) + 0x8000u) >> 16) << 16);
    c.r[10] = c.r[10] + wp::sign_extend16((g_mr051_bases[4] + 0x2498u) & 0xFFFFu);
    c.r[31] = c.r[5] + c.r[6];
    ea = c.r[10] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr051_bases[4] + 0x2470u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_0106d874;
    c.r[4] = c.r[0] | c.r[0];
L_0106d874:
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[5]);
    c.r[25] = c.r[4] & c.r[0];
    if (!wp::cr_get(c, 1)) goto L_0106db78;
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[26] = c.r[31] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[26], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_0106d8a8;
    c.r[0] = c.r[6] - c.r[26];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106d914;
L_0106d8a8:
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
    if (!wp::cr_get(c, 1)) goto L_0106d8ec;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106d8e8u;
    f_801cee24(c);
R_0106d8e8:
    c.lr = 0x106d8ecu;
    f_801d3940(c);
L_0106d8ec:
R_0106d8ec:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d900;
    goto L_0106d93c;
L_0106d900:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d93c;
    goto L_0106d93c;
L_0106d914:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = wp::rotl(c.r[26], 2) & 0xfffffffcu;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x106d92cu;
    f_80004714(c);
R_0106d92c:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[26];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_0106db88;
L_0106d93c:
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
    if (!wp::cr_get(c, 1)) goto L_0106d9a0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106d99cu;
    f_801cee24(c);
R_0106d99c:
    c.lr = 0x106d9a0u;
    f_801d3940(c);
L_0106d9a0:
R_0106d9a0:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106d9f0;
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
    if (!wp::cr_get(c, 0)) goto L_0106d9e4;
    c.r[3] = c.r[1] + 0x20u;
L_0106d9e4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_0106da34;
L_0106d9f0:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106da2c;
    c.r[3] = c.r[24] + 0x1u;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x1cu;
    if (!wp::cr_get(c, 0)) goto L_0106da20;
    c.r[3] = c.r[1] + 0x20u;
L_0106da20:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = c.r[24] + c.r[0];
    goto L_0106da34;
L_0106da2c:
    c.r[3] = 0x40000000u;
    c.r[24] = c.r[3] + 0xffffffffu;
L_0106da34:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106da64;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106da60u;
    f_801cee24(c);
R_0106da60:
    c.lr = 0x106da64u;
    f_801d3940(c);
L_0106da64:
R_0106da64:
    c.r[3] = wp::rotl(c.r[24], 2) & 0xfffffffcu;
    c.lr = 0x106da6cu;
    f_801c79a4(c);
R_0106da6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[19] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106da98;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0xac4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0xac4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106da94u;
    f_801cee24(c);
R_0106da94:
    c.lr = 0x106da98u;
    f_801d3940(c);
L_0106da98:
R_0106da98:
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
    c.lr = 0x106dac8u;
    f_80004714(c);
R_0106dac8:
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
    c.lr = 0x106db18u;
    f_800043c4(c);
R_0106db18:
    c.r[3] = c.r[19] | c.r[19];
    c.r[5] = c.r[17] | c.r[17];
    c.r[4] = 0x0u;
    c.lr = 0x106db28u;
    f_80004714(c);
R_0106db28:
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
    if (wp::cr_get(c, 2)) goto L_0106db88;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106db88;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x106db74u;
    f_801c7a8c(c);
R_0106db74:
    goto L_0106db88;
L_0106db78:
    if (!wp::cr_get(c, 0)) goto L_0106db88;
    c.r[0] = c.r[5] - c.r[31];
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
L_0106db88:
    wp::compare_unsigned(c, 1, c.r[31], 0x1u);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 4)) goto L_0106de2c;
    wp::compare_unsigned(c, 0, c.r[31], 0x8u);
    c.r[6] = c.r[31] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0106ddd4;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0106dbc0;
    c.r[0] = 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106dbc0;
    c.r[7] = 0x1u;
L_0106dbc0:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106dbd4;
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106dbd4;
    c.r[5] = 0x1u;
L_0106dbd4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106dbec;
    c.r[0] = c.r[31] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_0106dbec;
    c.r[4] = 0x1u;
L_0106dbec:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ddd4;
    c.r[4] = c.r[6] + 0x7u;
    c.r[5] = 0x66660000u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[0] = c.r[5] + 0x6667u;
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[6], 0x1u);
    if (wp::cr_get(c, 0)) goto L_0106ddd4;
L_0106dc10:
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
    goto L_0106dc10;
    }
L_0106ddd4:
    c.r[0] = c.r[31] + 0x1u;
    c.r[4] = 0x66660000u;
    c.r[0] = c.r[0] - c.r[3];
    c.r[8] = c.r[4] + 0x6667u;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[31]);
    if (wp::cr_get(c, 1)) goto L_0106de2c;
L_0106ddf0:
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
    goto L_0106ddf0;
    }
L_0106de2c:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106de78;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[23] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106de68;
    c.r[0] = c.r[0] | 0x0u;
L_0106de50:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106de68;
    c.r[23] = c.r[23] + 0x1u;
    c.r[3] = c.r[3] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0106de50;
    }
L_0106de68:
    wp::compare_unsigned(c, 0, c.r[23], c.r[22]);
    if (wp::cr_get(c, 0)) goto L_0106de7c;
    c.r[23] = c.r[22] + 0xffffffffu;
    goto L_0106de7c;
L_0106de78:
    c.r[23] = 0x0u;
L_0106de7c:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0106de90;
    c.r[0] = c.r[22] - c.r[21];
    c.r[4] = wp::sub_carry(c, c.r[0], 0x8u);
L_0106de90:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[18] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0106e008;
    c.r[5] = ((((g_mr051_bases[5] + 0x26d38u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr051_bases[4] + 0x24c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[20], 5) & 0xffffffe0u;
    c.r[4] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x26d38u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    c.r[25] = wp::rd8(ea);
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0xcu;
    c.r[26] = wp::rd8(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c8u) & 0xFFFFu);
    c.f[31] = wp::rdf64(ea);
    c.r[21] = c.r[4] + c.r[0];
    c.r[19] = c.r[1] + 0x25u;
    c.r[20] = 0x0u;
    c.r[24] = 0x0u;
    c.r[27] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[28] = 0x43300000u;
    goto L_0106e000;
L_0106dedc:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[24]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[24]);
    c.lr = 0x106def0u;
    f_801c7860(c);
R_0106def0:
    c.r[22] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[22] | c.r[22];
    c.lr = 0x106df00u;
    f_mr051_01016cc0(c);
R_0106df00:
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[25]);
    c.r[6] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[30] + c.r[22];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x106df20u;
    f_mr051_01016e80(c);
R_0106df20:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[21] + 0x0u;
    c.r[22] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106df3c;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[17] = c.r[0] & 0x7fu;
    goto L_0106df40;
L_0106df3c:
    ea = c.r[1] + 0x28u;
    c.r[17] = wp::rd32(ea);
L_0106df40:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[26]);
    c.r[3] = c.r[22] | c.r[22];
    c.lr = 0x106df4cu;
    f_801c7860(c);
R_0106df4c:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[17] | c.r[17];
    c.r[6] = c.r[22] | c.r[22];
    c.r[3] = c.r[1] + 0x24u;
    c.r[7] = c.r[22] + c.r[0];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x106df6cu;
    f_mr051_01016e80(c);
R_0106df6c:
    wp::compare_unsigned(c, 0, c.r[23], c.r[18]);
    c.r[22] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_0106dfbc;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[22] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106df98;
    c.r[4] = c.r[19] | c.r[19];
    goto L_0106df9c;
L_0106df98:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0106df9c:
    ea = c.r[5] + c.r[20];
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[28]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[27] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = wp::round_single(c.f[0] - c.f[31]);
    c.ps1[2] = c.f[2];
    c.lr = 0x106dfbcu;
    f_80040980(c);
L_0106dfbc:
R_0106dfbc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106dfd4;
    c.r[4] = c.r[19] | c.r[19];
    goto L_0106dfd8;
L_0106dfd4:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
L_0106dfd8:
    c.r[5] = c.r[22] | c.r[22];
    c.lr = 0x106dfe0u;
    f_800403f0(c);
R_0106dfe0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106dff4;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106dff4u;
    f_801c7a8c(c);
L_0106dff4:
R_0106dff4:
    c.r[21] = c.r[21] + 0x4u;
    c.r[20] = c.r[20] + 0x4u;
    c.r[18] = c.r[18] + 0x1u;
L_0106e000:
    wp::compare_unsigned(c, 0, c.r[18], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106dedc;
    }
L_0106e008:
    c.r[0] = wp::add_carry(c, c.r[1], 0x30u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106e034;
    if (wp::cr_get(c, 2)) goto L_0106e034;
    if (wp::cr_get(c, 2)) goto L_0106e034;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e034;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106e034u;
    f_801c7a8c(c);
L_0106e034:
R_0106e034:
    c.r[11] = c.r[1] + 0xa0u;
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x106e044u;
    f_801c83dc(c);
R_0106e044:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr051_0106e060(wp::Cpu& c) {
    WP_ENTER(0x106e060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr051_0106f1d0(c);
    return;
}

void f_mr051_0106e070(wp::Cpu& c) {
    WP_ENTER(0x106e070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr051_01070d50(c);
    return;
}

void f_mr051_0106e080(wp::Cpu& c) {
    WP_ENTER(0x106e080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr051_01070e70(c);
    return;
}

void f_mr051_0106e090(wp::Cpu& c) {
    WP_ENTER(0x106e090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr051_01071140(c);
    return;
}

void f_mr051_0106e0a0(wp::Cpu& c) {
    WP_ENTER(0x106e0a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e0e0u: goto R_0106e0e0;
        case 0x106e104u: goto R_0106e104;
        case 0x106e14cu: goto R_0106e14c;
        case 0x106e168u: goto R_0106e168;
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
    c.r[5] = ((((g_mr051_bases[5] + 0x26d8cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[7] | c.r[7];
    c.r[7] = c.r[8] | c.r[8];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x26d8cu) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[8] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x106e0e0u;
    f_mr051_0106f0b0(c);
R_0106e0e0:
    c.r[4] = ((((g_mr051_bases[5] + 0x27050u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27050u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e104u;
    wp::call(c, c.ctr);
R_0106e104:
    c.r[3] = ((((g_mr051_bases[5] + 0x26df0u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x26df0u) & 0xFFFFu);
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
    c.lr = 0x106e14cu;
    f_800402c0(c);
R_0106e14c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e168u;
    wp::call(c, c.ctr);
R_0106e168:
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

void f_mr051_0106e190(wp::Cpu& c) {
    WP_ENTER(0x106e190u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e1bcu: goto R_0106e1bc;
        case 0x106e1ccu: goto R_0106e1cc;
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
    if (wp::cr_get(c, 2)) goto L_0106e1cc;
    c.r[4] = 0x0u;
    c.lr = 0x106e1bcu;
    f_mr051_0106f100(c);
R_0106e1bc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106e1cc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106e1ccu;
    f_801c7a8c(c);
L_0106e1cc:
R_0106e1cc:
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

void f_mr051_0106e1f0(wp::Cpu& c) {
    WP_ENTER(0x106e1f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e224u: goto R_0106e224;
        case 0x106e248u: goto R_0106e248;
        case 0x106e290u: goto R_0106e290;
        case 0x106e2a8u: goto R_0106e2a8;
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
    c.r[5] = ((((g_mr051_bases[5] + 0x26d8cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x26d8cu) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x106e224u;
    f_mr051_0106f0b0(c);
R_0106e224:
    c.r[4] = ((((g_mr051_bases[5] + 0x27050u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27050u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e248u;
    wp::call(c, c.ctr);
R_0106e248:
    c.r[3] = ((((g_mr051_bases[5] + 0x26df0u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x26df0u) & 0xFFFFu);
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
    c.lr = 0x106e290u;
    f_800402c0(c);
R_0106e290:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e2a8u;
    wp::call(c, c.ctr);
R_0106e2a8:
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

void f_mr051_0106e2d0(wp::Cpu& c) {
    WP_ENTER(0x106e2d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e300u: goto R_0106e300;
        case 0x106e324u: goto R_0106e324;
        case 0x106e36cu: goto R_0106e36c;
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
    c.r[5] = ((((g_mr051_bases[5] + 0x26d8cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x26d8cu) & 0xFFFFu);
    c.lr = 0x106e300u;
    f_mr051_0106f0b0(c);
R_0106e300:
    c.r[4] = ((((g_mr051_bases[5] + 0x27050u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27050u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x0u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e324u;
    wp::call(c, c.ctr);
R_0106e324:
    c.r[3] = ((((g_mr051_bases[5] + 0x26df0u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x26df0u) & 0xFFFFu);
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
    c.lr = 0x106e36cu;
    f_800402c0(c);
R_0106e36c:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_0106e390(wp::Cpu& c) {
    WP_ENTER(0x106e390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e3f8u: goto R_0106e3f8;
        case 0x106e424u: goto R_0106e424;
        case 0x106e438u: goto R_0106e438;
        case 0x106e448u: goto R_0106e448;
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
    if (wp::cr_get(c, 2)) goto L_0106e448;
    ea = c.r[3] + 0x130u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr051_bases[5] + 0x26df0u) + 0x8000u) >> 16) << 16);
    c.r[5] = wp::add_carry(c, c.r[3], 0x138u, 0);
    wp::record(c, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26df0u) & 0xFFFFu);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x130u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106e3f8;
    if (wp::cr_get(c, 2)) goto L_0106e3f8;
    if (wp::cr_get(c, 2)) goto L_0106e3f8;
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e3f8;
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106e3f8u;
    f_801c7a8c(c);
L_0106e3f8:
R_0106e3f8:
    c.r[4] = wp::add_carry(c, c.r[30], 0x12cu, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106e424;
    if (wp::cr_get(c, 2)) goto L_0106e424;
    if (wp::cr_get(c, 2)) goto L_0106e424;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e424;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106e424u;
    f_801c7a8c(c);
L_0106e424:
R_0106e424:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e438;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x106e438u;
    f_mr051_0106f100(c);
L_0106e438:
R_0106e438:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106e448;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106e448u;
    f_801c7a8c(c);
L_0106e448:
R_0106e448:
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

void f_mr051_0106e470(wp::Cpu& c) {
    WP_ENTER(0x106e470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e4b8u: goto R_0106e4b8;
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
    goto L_0106e4c0;
L_0106e4a0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e4b8u;
    wp::call(c, c.ctr);
R_0106e4b8:
    c.r[31] = c.r[31] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_0106e4c0:
    wp::compare_signed(c, 0, c.r[30], c.r[29]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106e4a0;
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

void f_mr051_0106e4f0(wp::Cpu& c) {
    WP_ENTER(0x106e4f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e504u: goto R_0106e504;
        case 0x106e518u: goto R_0106e518;
        case 0x106e534u: goto R_0106e534;
        case 0x106e540u: goto R_0106e540;
        case 0x106e54cu: goto R_0106e54c;
        case 0x106e55cu: goto R_0106e55c;
        case 0x106e57cu: goto R_0106e57c;
        case 0x106e5dcu: goto R_0106e5dc;
        case 0x106e5e0u: goto R_0106e5e0;
        case 0x106e640u: goto R_0106e640;
        case 0x106e644u: goto R_0106e644;
        case 0x106e704u: goto R_0106e704;
        case 0x106e708u: goto R_0106e708;
        case 0x106e710u: goto R_0106e710;
        case 0x106e738u: goto R_0106e738;
        case 0x106e73cu: goto R_0106e73c;
        case 0x106e830u: goto R_0106e830;
        case 0x106e848u: goto R_0106e848;
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
    c.lr = 0x106e504u;
    f_801c83b8(c);
R_0106e504:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e518u;
    wp::call(c, c.ctr);
R_0106e518:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x106e534u;
    wp::call(c, c.ctr);
R_0106e534:
    c.r[29] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x106e540u;
    f_80043180(c);
R_0106e540:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x106e54cu;
    f_800431a0(c);
R_0106e54c:
    c.r[4] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106e55cu;
    f_80043060(c);
R_0106e55c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x60u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x106e57cu;
    wp::call(c, c.ctr);
R_0106e57c:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x134u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_0106e5ac;
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
    goto L_0106e830;
L_0106e5ac:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0106e5e0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106e5dcu;
    f_801cee24(c);
R_0106e5dc:
    c.lr = 0x106e5e0u;
    f_801d3940(c);
L_0106e5e0:
R_0106e5e0:
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
    if (!wp::cr_get(c, 1)) goto L_0106e644;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106e640u;
    f_801cee24(c);
R_0106e640:
    c.lr = 0x106e644u;
    f_801d3940(c);
L_0106e644:
R_0106e644:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106e694;
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
    if (!wp::cr_get(c, 0)) goto L_0106e688;
    c.r[3] = c.r[1] + 0x10u;
L_0106e688:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106e6d8;
L_0106e694:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106e6d0;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0106e6c4;
    c.r[3] = c.r[1] + 0x10u;
L_0106e6c4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106e6d8;
L_0106e6d0:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0106e6d8:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106e708;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106e704u;
    f_801cee24(c);
R_0106e704:
    c.lr = 0x106e708u;
    f_801d3940(c);
L_0106e708:
R_0106e708:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x106e710u;
    f_801c79a4(c);
R_0106e710:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106e73c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27284u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27284u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106e738u;
    f_801cee24(c);
R_0106e738:
    c.lr = 0x106e73cu;
    f_801d3940(c);
L_0106e73c:
R_0106e73c:
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
    if (!wp::cr_get(c, 1)) goto L_0106e7e0;
L_0106e7a8:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_0106e7c4;
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0106e7c4:
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
    goto L_0106e7a8;
    }
L_0106e7e0:
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
    if (wp::cr_get(c, 2)) goto L_0106e830;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e830;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x106e830u;
    f_801c7a8c(c);
L_0106e830:
R_0106e830:
    ea = c.r[28] + 0x130u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x124u;
    wp::wr32(ea, c.r[3]);
    c.r[11] = c.r[1] + 0x40u;
    ea = c.r[28] + 0x121u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x106e848u;
    f_801c8404(c);
R_0106e848:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr051_0106e860(wp::Cpu& c) {
    WP_ENTER(0x106e860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e87cu: goto R_0106e87c;
        case 0x106e8acu: goto R_0106e8ac;
        case 0x106e8ccu: goto R_0106e8cc;
        case 0x106e8ecu: goto R_0106e8ec;
        case 0x106e910u: goto R_0106e910;
        case 0x106e91cu: goto R_0106e91c;
        case 0x106e928u: goto R_0106e928;
        case 0x106e934u: goto R_0106e934;
        case 0x106e94cu: goto R_0106e94c;
        case 0x106e964u: goto R_0106e964;
        case 0x106e974u: goto R_0106e974;
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
    c.lr = 0x106e87cu;
    f_801c83b8(c);
R_0106e87c:
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    c.f[30] = c.f[1];
    c.f[31] = c.f[2];
    c.r[27] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[6] | c.r[6];
    if (!wp::cr_get(c, 2)) goto L_0106e8b0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x106e8acu;
    f_800402c0(c);
R_0106e8ac:
    goto L_0106e964;
L_0106e8b0:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e8d0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e8ccu;
    wp::call(c, c.ctr);
R_0106e8cc:
    goto L_0106e8f4;
L_0106e8d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106e8ecu;
    wp::call(c, c.ctr);
R_0106e8ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e964;
L_0106e8f4:
    ea = c.r[27] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = wp::rotl(c.r[28], 3) & 0xfffffff8u;
    c.f[1] = c.f[31];
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106e910u;
    f_80043060(c);
R_0106e910:
    c.f[1] = c.f[30];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106e91cu;
    f_80043120(c);
R_0106e91c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x106e928u;
    f_800431a0(c);
R_0106e928:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x106e934u;
    f_80043180(c);
R_0106e934:
    ea = c.r[27] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106e94cu;
    f_80042650(c);
R_0106e94c:
    c.r[0] = 0x1u;
    ea = c.r[27] + 0x128u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x106e964u;
    f_800402c0(c);
L_0106e964:
R_0106e964:
    c.r[11] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x28u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    c.f[30] = wp::rdf64(ea);
    c.lr = 0x106e974u;
    f_801c8404(c);
R_0106e974:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr051_0106e990(wp::Cpu& c) {
    WP_ENTER(0x106e990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e9f0u: goto R_0106e9f0;
        case 0x106ea08u: goto R_0106ea08;
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
    if (wp::cr_get(c, 0)) goto L_0106e9bc;
    c.r[31] = c.r[4] | c.r[4];
    goto L_0106e9c0;
L_0106e9bc:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_0106e9c0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ea1c;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e9d8;
    goto L_0106ea1c;
L_0106e9d8:
    ea = c.r[3] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106e9f0u;
    f_80043180(c);
R_0106e9f0:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[30];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106ea08u;
    f_80042650(c);
R_0106ea08:
    ea = c.r[29] + 0x128u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106ea1c;
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_0106ea1c:
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

void f_mr051_0106ea40(wp::Cpu& c) {
    WP_ENTER(0x106ea40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106ea88u: goto R_0106ea88;
        case 0x106eaa0u: goto R_0106eaa0;
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
    if (wp::cr_get(c, 2)) goto L_0106eabc;
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
    goto L_0106eaa8;
L_0106ea74:
    ea = c.r[29] + 0x12cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106ea88u;
    f_80043180(c);
R_0106ea88:
    ea = c.r[29] + 0x12cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    ea = c.r[4] + c.r[31];
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106eaa0u;
    f_80042650(c);
R_0106eaa0:
    c.r[31] = c.r[31] + 0x8u;
    c.r[30] = c.r[30] + 0x1u;
L_0106eaa8:
    ea = c.r[29] + 0x124u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106ea74;
    }
    c.r[0] = 0xffffffffu;
    ea = c.r[29] + 0x128u;
    wp::wr32(ea, c.r[0]);
L_0106eabc:
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

void f_mr051_0106eae0(wp::Cpu& c) {
    WP_ENTER(0x106eae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106eaf4u: goto R_0106eaf4;
        case 0x106eb44u: goto R_0106eb44;
        case 0x106eb64u: goto R_0106eb64;
        case 0x106eb8cu: goto R_0106eb8c;
        case 0x106ebb0u: goto R_0106ebb0;
        case 0x106ebd4u: goto R_0106ebd4;
        case 0x106ebe0u: goto R_0106ebe0;
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
    c.lr = 0x106eaf4u;
    f_801c83b8(c);
R_0106eaf4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 0)) goto L_0106eb10;
    c.r[31] = c.r[4] | c.r[4];
    goto L_0106eb14;
L_0106eb10:
    ea = c.r[3] + 0x128u;
    c.r[31] = wp::rd32(ea);
L_0106eb14:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106eb28;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106eb30;
L_0106eb28:
    c.r[3] = 0x1u;
    goto L_0106ebd8;
L_0106eb30:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x1f8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106eb44u;
    wp::call(c, c.ctr);
R_0106eb44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106eb6c;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106eb64u;
    wp::call(c, c.ctr);
R_0106eb64:
    c.r[3] = 0x1u;
    goto L_0106ebd8;
L_0106eb6c:
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
    c.lr = 0x106eb8cu;
    wp::call(c, c.ctr);
R_0106eb8c:
    wp::compare_unsigned(c, 0, c.r[3], 0x1u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106ebd4;
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106ebb0u;
    wp::call(c, c.ctr);
R_0106ebb0:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ebd4;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ebd4;
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x120u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x106ebd4u;
    f_800402c0(c);
L_0106ebd4:
R_0106ebd4:
    c.r[3] = c.r[30] | c.r[30];
L_0106ebd8:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x106ebe0u;
    f_801c8404(c);
R_0106ebe0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_0106ebf0(wp::Cpu& c) {
    WP_ENTER(0x106ebf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ebfc;
    goto L_0106ec00;
L_0106ebfc:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_0106ec00:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ec14;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ec20;
L_0106ec14:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_0106ec20:
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

void f_mr051_0106ec40(wp::Cpu& c) {
    WP_ENTER(0x106ec40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ec4c;
    goto L_0106ec50;
L_0106ec4c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_0106ec50:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ec64;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ec70;
L_0106ec64:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_0106ec70:
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

void f_mr051_0106ec90(wp::Cpu& c) {
    WP_ENTER(0x106ec90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ec9c;
    goto L_0106eca0;
L_0106ec9c:
    ea = c.r[3] + 0x128u;
    c.r[4] = wp::rd32(ea);
L_0106eca0:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106ecb4;
    ea = c.r[3] + 0x121u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ecc0;
L_0106ecb4:
    c.r[3] = ((((g_mr051_bases[4] + 0x24c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x24c4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
L_0106ecc0:
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

void f_mr051_0106ece0(wp::Cpu& c) {
    WP_ENTER(0x106ece0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106ecf4u: goto R_0106ecf4;
        case 0x106ed64u: goto R_0106ed64;
        case 0x106ed68u: goto R_0106ed68;
        case 0x106edc8u: goto R_0106edc8;
        case 0x106edccu: goto R_0106edcc;
        case 0x106ee8cu: goto R_0106ee8c;
        case 0x106ee90u: goto R_0106ee90;
        case 0x106ee98u: goto R_0106ee98;
        case 0x106eec0u: goto R_0106eec0;
        case 0x106eec4u: goto R_0106eec4;
        case 0x106efb8u: goto R_0106efb8;
        case 0x106efc0u: goto R_0106efc0;
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
    c.lr = 0x106ecf4u;
    f_801c83b8(c);
R_0106ecf4:
    ea = c.r[3] + 0x13cu;
    c.r[7] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x140u;
    c.r[6] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    wp::compare_unsigned(c, 0, c.r[7], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_0106ed34;
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
    goto L_0106efb8;
L_0106ed34:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[6];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_0106ed68;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106ed64u;
    f_801cee24(c);
R_0106ed64:
    c.lr = 0x106ed68u;
    f_801d3940(c);
L_0106ed68:
R_0106ed68:
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
    if (!wp::cr_get(c, 1)) goto L_0106edcc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106edc8u;
    f_801cee24(c);
R_0106edc8:
    c.lr = 0x106edccu;
    f_801d3940(c);
L_0106edcc:
R_0106edcc:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106ee1c;
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
    if (!wp::cr_get(c, 0)) goto L_0106ee10;
    c.r[3] = c.r[1] + 0x10u;
L_0106ee10:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106ee60;
L_0106ee1c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106ee58;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_0106ee4c;
    c.r[3] = c.r[1] + 0x10u;
L_0106ee4c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_0106ee60;
L_0106ee58:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_0106ee60:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_0106ee90;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x26d78u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26d78u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106ee8cu;
    f_801cee24(c);
R_0106ee8c:
    c.lr = 0x106ee90u;
    f_801d3940(c);
L_0106ee90:
R_0106ee90:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x106ee98u;
    f_801c79a4(c);
R_0106ee98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0106eec4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x272a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x272a0u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106eec0u;
    f_801cee24(c);
R_0106eec0:
    c.lr = 0x106eec4u;
    f_801d3940(c);
L_0106eec4:
R_0106eec4:
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
    if (!wp::cr_get(c, 1)) goto L_0106ef68;
L_0106ef30:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_0106ef4c;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0106ef4c:
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
    goto L_0106ef30;
    }
L_0106ef68:
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
    if (wp::cr_get(c, 2)) goto L_0106efb8;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106efb8;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x106efb8u;
    f_801c7a8c(c);
L_0106efb8:
R_0106efb8:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x106efc0u;
    f_801c8404(c);
R_0106efc0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr051_0106efd0(wp::Cpu& c) {
    WP_ENTER(0x106efd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f02cu: goto R_0106f02c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr051_bases[5] + 0x26de0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x26de0u) & 0xFFFFu);
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
    goto L_0106f034;
L_0106f020:
    c.r[3] = c.r[30] | c.r[30];
    c.r[12] = c.r[1] + 0x14u;
    c.lr = 0x106f02cu;
    f_801c8244(c);
R_0106f02c:
    c.r[0] = c.r[0] | 0x0u;
    c.r[30] = c.r[30] + 0x8u;
L_0106f034:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106f020;
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

void f_mr051_0106f060(wp::Cpu& c) {
    WP_ENTER(0x106f060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f078u: goto R_0106f078;
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
    c.lr = 0x106f078u;
    f_8003f8f0(c);
R_0106f078:
    c.r[3] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
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

void f_mr051_0106f0b0(wp::Cpu& c) {
    WP_ENTER(0x106f0b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f0c8u: goto R_0106f0c8;
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
    c.lr = 0x106f0c8u;
    f_8003f640(c);
R_0106f0c8:
    c.r[3] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
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

void f_mr051_0106f100(wp::Cpu& c) {
    WP_ENTER(0x106f100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f154u: goto R_0106f154;
        case 0x106f190u: goto R_0106f190;
        case 0x106f19cu: goto R_0106f19c;
        case 0x106f1acu: goto R_0106f1ac;
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
    if (wp::cr_get(c, 2)) goto L_0106f1ac;
    c.r[4] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_0106f154;
L_0106f134:
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
    c.lr = 0x106f154u;
    wp::call(c, c.ctr);
L_0106f154:
R_0106f154:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106f134;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106f190;
    if (wp::cr_get(c, 2)) goto L_0106f190;
    if (wp::cr_get(c, 2)) goto L_0106f190;
    if (wp::cr_get(c, 2)) goto L_0106f190;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f190;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106f190u;
    f_801c7a8c(c);
L_0106f190:
R_0106f190:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x106f19cu;
    f_8003fb90(c);
R_0106f19c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106f1ac;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106f1acu;
    f_801c7a8c(c);
L_0106f1ac:
R_0106f1ac:
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

void f_mr051_0106f1d0(wp::Cpu& c) {
    WP_ENTER(0x106f1d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f214u: goto R_0106f214;
        case 0x106f230u: goto R_0106f230;
        case 0x106f238u: goto R_0106f238;
        case 0x106f260u: goto R_0106f260;
        case 0x106f2b8u: goto R_0106f2b8;
        case 0x106f2d4u: goto R_0106f2d4;
        case 0x106f300u: goto R_0106f300;
        case 0x106f32cu: goto R_0106f32c;
        case 0x106f354u: goto R_0106f354;
        case 0x106f370u: goto R_0106f370;
        case 0x106f394u: goto R_0106f394;
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
    c.r[30] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
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
    c.lr = 0x106f214u;
    f_8003cc90(c);
R_0106f214:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f230u;
    wp::call(c, c.ctr);
R_0106f230:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106f238u;
    f_8003d2d0(c);
R_0106f238:
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
    c.lr = 0x106f260u;
    wp::call(c, c.ctr);
R_0106f260:
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
    c.lr = 0x106f2b8u;
    wp::call(c, c.ctr);
R_0106f2b8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f2d4u;
    wp::call(c, c.ctr);
R_0106f2d4:
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
    c.lr = 0x106f300u;
    wp::call(c, c.ctr);
R_0106f300:
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
    c.lr = 0x106f32cu;
    wp::call(c, c.ctr);
R_0106f32c:
    ea = c.r[31] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f394;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f354u;
    wp::call(c, c.ctr);
R_0106f354:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f370u;
    wp::call(c, c.ctr);
R_0106f370:
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
    c.lr = 0x106f394u;
    wp::call(c, c.ctr);
L_0106f394:
R_0106f394:
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

void f_mr051_0106f3c0(wp::Cpu& c) {
    WP_ENTER(0x106f3c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f3d8u: goto R_0106f3d8;
        case 0x106f3e0u: goto R_0106f3e0;
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
    c.lr = 0x106f3d8u;
    f_mr051_01070600(c);
R_0106f3d8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x106f3e0u;
    f_mr051_01072a50(c);
R_0106f3e0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_0106f400(wp::Cpu& c) {
    WP_ENTER(0x106f400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f424u: goto R_0106f424;
        case 0x106f440u: goto R_0106f440;
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
    c.lr = 0x106f424u;
    f_80010060(c);
R_0106f424:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f440u;
    wp::call(c, c.ctr);
R_0106f440:
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

void f_mr051_0106f460(wp::Cpu& c) {
    WP_ENTER(0x106f460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f498u: goto R_0106f498;
        case 0x106f4b4u: goto R_0106f4b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = ((((g_mr051_bases[5] + 0x272c0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr051_bases[5] + 0x272c0u) & 0xFFFFu);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106f498u;
    f_801d3590(c);
R_0106f498:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f4b4u;
    wp::call(c, c.ctr);
R_0106f4b4:
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

void f_mr051_0106f4d0(wp::Cpu& c) {
    WP_ENTER(0x106f4d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f4e4u: goto R_0106f4e4;
        case 0x106f4f8u: goto R_0106f4f8;
        case 0x106f50cu: goto R_0106f50c;
        case 0x106f534u: goto R_0106f534;
        case 0x106f544u: goto R_0106f544;
        case 0x106f568u: goto R_0106f568;
        case 0x106f5c8u: goto R_0106f5c8;
        case 0x106f648u: goto R_0106f648;
        case 0x106f6b0u: goto R_0106f6b0;
        case 0x106f6e0u: goto R_0106f6e0;
        case 0x106f6f4u: goto R_0106f6f4;
        case 0x106f704u: goto R_0106f704;
        case 0x106f720u: goto R_0106f720;
        case 0x106f728u: goto R_0106f728;
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
    c.lr = 0x106f4e4u;
    f_801c83b4(c);
R_0106f4e4:
    c.r[26] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x106f4f8u;
    f_8006c450(c);
R_0106f4f8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_0106f6f8;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x106f50cu;
    f_8006c460(c);
R_0106f50c:
    c.r[28] = ((((g_mr051_bases[5] + 0x272c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr051_bases[5] + 0x272c8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106f534u;
    f_801c7860(c);
R_0106f534:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x106f544u;
    f_mr051_01016cc0(c);
R_0106f544:
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
    c.lr = 0x106f568u;
    f_mr051_01016e80(c);
R_0106f568:
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
    if (!wp::cr_get(c, 2)) goto L_0106f5a4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0106f5a8;
L_0106f5a4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0106f5a8:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x106f5c8u;
    f_mr051_01016e80(c);
R_0106f5c8:
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
    if (!wp::cr_get(c, 2)) goto L_0106f624;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0106f628;
L_0106f624:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0106f628:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x106f648u;
    f_mr051_01016e80(c);
R_0106f648:
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
    if (!wp::cr_get(c, 2)) goto L_0106f68c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0106f690;
L_0106f68c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0106f690:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x106f6b0u;
    f_mr051_01016e80(c);
R_0106f6b0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106f6cc;
    c.r[5] = c.r[1] + 0x35u;
    goto L_0106f6d0;
L_0106f6cc:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_0106f6d0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f6e0u;
    wp::call(c, c.ctr);
R_0106f6e0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106f720;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x106f6f4u;
    f_801c7a8c(c);
R_0106f6f4:
    goto L_0106f720;
L_0106f6f8:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x106f704u;
    f_8006c4e0(c);
R_0106f704:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f720u;
    wp::call(c, c.ctr);
L_0106f720:
R_0106f720:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x106f728u;
    f_801c8400(c);
R_0106f728:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_0106f740(wp::Cpu& c) {
    WP_ENTER(0x106f740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f764u: goto R_0106f764;
        case 0x106f780u: goto R_0106f780;
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
    c.lr = 0x106f764u;
    f_8003cc90(c);
R_0106f764:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f780u;
    wp::call(c, c.ctr);
R_0106f780:
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

void f_mr051_0106f7a0(wp::Cpu& c) {
    WP_ENTER(0x106f7a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f7d4u: goto R_0106f7d4;
        case 0x106f7fcu: goto R_0106f7fc;
        case 0x106f824u: goto R_0106f824;
        case 0x106f840u: goto R_0106f840;
        case 0x106f85cu: goto R_0106f85c;
        case 0x106f87cu: goto R_0106f87c;
        case 0x106f8a4u: goto R_0106f8a4;
        case 0x106f8c0u: goto R_0106f8c0;
        case 0x106f8e8u: goto R_0106f8e8;
        case 0x106f948u: goto R_0106f948;
        case 0x106f988u: goto R_0106f988;
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
    c.lr = 0x106f7d4u;
    wp::call(c, c.ctr);
R_0106f7d4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr051_bases[4] + 0x2514u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr051_bases[4] + 0x2518u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr051_bases[4] + 0x2514u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x2518u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x106f7fcu;
    wp::call(c, c.ctr);
R_0106f7fc:
    c.r[5] = ((((g_mr051_bases[4] + 0x2508u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x2508u) & 0xFFFFu);
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
    c.lr = 0x106f824u;
    wp::call(c, c.ctr);
R_0106f824:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f840u;
    wp::call(c, c.ctr);
R_0106f840:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f85cu;
    wp::call(c, c.ctr);
R_0106f85c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x106f87cu;
    wp::call(c, c.ctr);
R_0106f87c:
    c.r[5] = ((((g_mr051_bases[4] + 0x250cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x250cu) & 0xFFFFu);
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
    c.lr = 0x106f8a4u;
    wp::call(c, c.ctr);
R_0106f8a4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f8c0u;
    wp::call(c, c.ctr);
R_0106f8c0:
    c.r[5] = ((((g_mr051_bases[4] + 0x2510u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x2510u) & 0xFFFFu);
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
    c.lr = 0x106f8e8u;
    wp::call(c, c.ctr);
R_0106f8e8:
    c.r[3] = ((((g_mr051_bases[5] + 0x272d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x272d0u) & 0xFFFFu);
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
    goto L_0106f930;
L_0106f92c:
    c.r[28] = c.r[28] + 0x4u;
L_0106f930:
    wp::compare_unsigned(c, 0, c.r[28], c.r[29]);
    if (wp::cr_get(c, 2)) goto L_0106f954;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106f948u;
    f_801c8244(c);
R_0106f948:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106f92c;
    }
L_0106f954:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106f974;
    c.r[3] = 0x0u;
    goto L_0106f978;
L_0106f974:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0106f978:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f988;
    c.r[4] = 0x1u;
    c.lr = 0x106f988u;
    f_mr051_01072ca0(c);
L_0106f988:
R_0106f988:
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

void f_mr051_0106f9b0(wp::Cpu& c) {
    WP_ENTER(0x106f9b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr051_0106f9c0(wp::Cpu& c) {
    WP_ENTER(0x106f9c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f9d0u: goto R_0106f9d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106f9d0u;
    f_mr051_01070600(c);
R_0106f9d0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_0106f9f0(wp::Cpu& c) {
    WP_ENTER(0x106f9f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fa04u: goto R_0106fa04;
        case 0x106fa6cu: goto R_0106fa6c;
        case 0x106fabcu: goto R_0106fabc;
        case 0x106fac4u: goto R_0106fac4;
        case 0x106fadcu: goto R_0106fadc;
        case 0x106fae4u: goto R_0106fae4;
        case 0x106fb44u: goto R_0106fb44;
        case 0x106fb88u: goto R_0106fb88;
        case 0x106fba0u: goto R_0106fba0;
        case 0x106fba8u: goto R_0106fba8;
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
    c.lr = 0x106fa04u;
    f_801c83b8(c);
R_0106fa04:
    c.r[5] = ((((g_mr051_bases[5] + 0x272dcu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x272dcu) & 0xFFFFu);
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
    goto L_0106fa54;
L_0106fa50:
    c.r[31] = c.r[31] + 0x4u;
L_0106fa54:
    wp::compare_unsigned(c, 0, c.r[31], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0106fa78;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106fa6cu;
    f_801c8244(c);
R_0106fa6c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106fa50;
    }
L_0106fa78:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106fa98;
    c.r[31] = 0x0u;
    goto L_0106fa9c;
L_0106fa98:
    ea = c.r[31] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0106fa9c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fba0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fabcu;
    wp::call(c, c.ctr);
R_0106fabc:
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106fac4u;
    f_801290d0(c);
R_0106fac4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fadcu;
    wp::call(c, c.ctr);
R_0106fadc:
    ea = c.r[31] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106fae4u;
    f_801290d0(c);
R_0106fae4:
    c.r[3] = ((((g_mr051_bases[5] + 0x272e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x272e8u) & 0xFFFFu);
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
    goto L_0106fb2c;
L_0106fb28:
    c.r[27] = c.r[27] + 0x4u;
L_0106fb2c:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0106fb50;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106fb44u;
    f_801c8244(c);
R_0106fb44:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106fb28;
    }
L_0106fb50:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106fb94;
    c.r[0] = c.r[0] - c.r[27];
    c.r[3] = c.r[27] | c.r[27];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[4] = c.r[27] + 0x4u;
    c.r[5] = wp::add_extended(c, c.r[0], 0);
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.lr = 0x106fb88u;
    f_801cc76c(c);
R_0106fb88:
    ea = c.r[29] + 0x118u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x118u;
    wp::wr32(ea, c.r[0]);
L_0106fb94:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x106fba0u;
    f_mr051_010728e0(c);
L_0106fba0:
R_0106fba0:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x106fba8u;
    f_801c8404(c);
R_0106fba8:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr051_0106fbc0(wp::Cpu& c) {
    WP_ENTER(0x106fbc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = ((((g_mr051_bases[5] + 0x272f4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x272f4u) & 0xFFFFu);
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr051_0106fbe0(wp::Cpu& c) {
    WP_ENTER(0x106fbe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fc1cu: goto R_0106fc1c;
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
    goto L_0106fc20;
L_0106fc00:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x15cu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xcu;
    c.ctr = c.r[12];
    c.lr = 0x106fc1cu;
    wp::call(c, c.ctr);
R_0106fc1c:
    c.r[31] = c.r[31] + 0x4u;
L_0106fc20:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106fc00;
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

void f_mr051_0106fc50(wp::Cpu& c) {
    WP_ENTER(0x106fc50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fc7cu: goto R_0106fc7c;
        case 0x106fc9cu: goto R_0106fc9c;
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
    c.lr = 0x106fc7cu;
    f_8003cc90(c);
R_0106fc7c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x106fc9cu;
    wp::call(c, c.ctr);
R_0106fc9c:
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

void f_mr051_0106fcc0(wp::Cpu& c) {
    WP_ENTER(0x106fcc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fce4u: goto R_0106fce4;
        case 0x106fcfcu: goto R_0106fcfc;
        case 0x106fd0cu: goto R_0106fd0c;
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
    c.lr = 0x106fce4u;
    f_mr051_01070600(c);
R_0106fce4:
    c.r[5] = ((((g_mr051_bases[5] + 0x272f8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x272f8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106fcfcu;
    f_801d34c4(c);
R_0106fcfc:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x106fd0cu;
    f_mr051_01073950(c);
R_0106fd0c:
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

void f_mr051_0106fd30(wp::Cpu& c) {
    WP_ENTER(0x106fd30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fd74u: goto R_0106fd74;
        case 0x106fd94u: goto R_0106fd94;
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
    c.r[5] = ((((g_mr051_bases[5] + 0x272c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    c.r[6] = c.r[0] | c.r[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x272c0u) & 0xFFFFu);
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106fd74u;
    f_801d3590(c);
R_0106fd74:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x106fd94u;
    wp::call(c, c.ctr);
R_0106fd94:
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

void f_mr051_0106fdb0(wp::Cpu& c) {
    WP_ENTER(0x106fdb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fddcu: goto R_0106fddc;
        case 0x106fdfcu: goto R_0106fdfc;
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
    c.lr = 0x106fddcu;
    f_80010060(c);
R_0106fddc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x106fdfcu;
    wp::call(c, c.ctr);
R_0106fdfc:
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

void f_mr051_0106fe20(wp::Cpu& c) {
    WP_ENTER(0x106fe20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fe34u: goto R_0106fe34;
        case 0x106fe4cu: goto R_0106fe4c;
        case 0x106fe60u: goto R_0106fe60;
        case 0x106fe88u: goto R_0106fe88;
        case 0x106fe98u: goto R_0106fe98;
        case 0x106febcu: goto R_0106febc;
        case 0x106ff1cu: goto R_0106ff1c;
        case 0x106ff9cu: goto R_0106ff9c;
        case 0x1070004u: goto R_01070004;
        case 0x1070038u: goto R_01070038;
        case 0x107004cu: goto R_0107004c;
        case 0x107005cu: goto R_0107005c;
        case 0x107007cu: goto R_0107007c;
        case 0x1070084u: goto R_01070084;
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
    c.lr = 0x106fe34u;
    f_801c83b0(c);
R_0106fe34:
    c.r[25] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x106fe4cu;
    f_8006c450(c);
R_0106fe4c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01070050;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x106fe60u;
    f_8006c460(c);
R_0106fe60:
    c.r[27] = ((((g_mr051_bases[5] + 0x272c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr051_bases[5] + 0x272c8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106fe88u;
    f_801c7860(c);
R_0106fe88:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x106fe98u;
    f_mr051_01016cc0(c);
R_0106fe98:
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
    c.lr = 0x106febcu;
    f_mr051_01016e80(c);
R_0106febc:
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
    if (!wp::cr_get(c, 2)) goto L_0106fef8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0106fefc;
L_0106fef8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0106fefc:
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[5] = 0x0u;
    c.lr = 0x106ff1cu;
    f_mr051_01016e80(c);
R_0106ff1c:
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
    if (!wp::cr_get(c, 2)) goto L_0106ff78;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0106ff7c;
L_0106ff78:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0106ff7c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x18u;
    c.r[5] = 0x0u;
    c.lr = 0x106ff9cu;
    f_mr051_01016e80(c);
R_0106ff9c:
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
    if (!wp::cr_get(c, 2)) goto L_0106ffe0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0106ffe4;
L_0106ffe0:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0106ffe4:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[5] = 0x0u;
    c.lr = 0x1070004u;
    f_mr051_01016e80(c);
R_01070004:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070020;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01070024;
L_01070020:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01070024:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070038u;
    wp::call(c, c.ctr);
R_01070038:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107007c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107004cu;
    f_801c7a8c(c);
R_0107004c:
    goto L_0107007c;
L_01070050:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x107005cu;
    f_8006c4e0(c);
R_0107005c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x107007cu;
    wp::call(c, c.ctr);
L_0107007c:
R_0107007c:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1070084u;
    f_801c83fc(c);
R_01070084:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_010700a0(wp::Cpu& c) {
    WP_ENTER(0x10700a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107011cu: goto R_0107011c;
        case 0x1070164u: goto R_01070164;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x27300u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27300u) & 0xFFFFu);
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
    goto L_01070104;
L_01070100:
    c.r[30] = c.r[30] + 0x4u;
L_01070104:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01070128;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x107011cu;
    f_801c8244(c);
R_0107011c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070100;
    }
L_01070128:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070148;
    c.r[3] = 0x0u;
    goto L_0107014c;
L_01070148:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0107014c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070164;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x0u;
    c.lr = 0x1070164u;
    f_mr051_01072ca0(c);
L_01070164:
R_01070164:
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

void f_mr051_01070180(wp::Cpu& c) {
    WP_ENTER(0x1070180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10701fcu: goto R_010701fc;
        case 0x107025cu: goto R_0107025c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x2730cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x2730cu) & 0xFFFFu);
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
    goto L_010701e4;
L_010701e0:
    c.r[30] = c.r[30] + 0x4u;
L_010701e4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01070208;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10701fcu;
    f_801c8244(c);
R_010701fc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010701e0;
    }
L_01070208:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070228;
    c.r[3] = 0x0u;
    goto L_0107022c;
L_01070228:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0107022c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107025c;
    ea = c.r[3] + 0xa8u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xacu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01070254;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0xa8u;
    wp::wr32(ea, c.r[0]);
L_01070254:
    c.r[4] = 0x0u;
    c.lr = 0x107025cu;
    f_mr051_01072ca0(c);
L_0107025c:
R_0107025c:
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

void f_mr051_01070280(wp::Cpu& c) {
    WP_ENTER(0x1070280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10702fcu: goto R_010702fc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x27318u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27318u) & 0xFFFFu);
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
    goto L_010702e4;
L_010702e0:
    c.r[30] = c.r[30] + 0x4u;
L_010702e4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01070308;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10702fcu;
    f_801c8244(c);
R_010702fc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010702e0;
    }
L_01070308:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070328;
    c.r[3] = 0x0u;
    goto L_0107032c;
L_01070328:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0107032c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107033c;
    c.r[3] = 0x0u;
    goto L_01070340;
L_0107033c:
    ea = c.r[3] + 0xa8u;
    c.r[3] = wp::rd32(ea);
L_01070340:
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

void f_mr051_01070360(wp::Cpu& c) {
    WP_ENTER(0x1070360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10703dcu: goto R_010703dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x27324u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27324u) & 0xFFFFu);
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
    goto L_010703c4;
L_010703c0:
    c.r[30] = c.r[30] + 0x4u;
L_010703c4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010703e8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10703dcu;
    f_801c8244(c);
R_010703dc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010703c0;
    }
L_010703e8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070408;
    c.r[3] = 0x0u;
    goto L_0107040c;
L_01070408:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0107040c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107041c;
    c.r[3] = 0x0u;
    goto L_01070420;
L_0107041c:
    ea = c.r[3] + 0xacu;
    c.r[3] = wp::rd32(ea);
L_01070420:
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

void f_mr051_01070440(wp::Cpu& c) {
    WP_ENTER(0x1070440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10704bcu: goto R_010704bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x27330u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27330u) & 0xFFFFu);
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
    goto L_010704a4;
L_010704a0:
    c.r[30] = c.r[30] + 0x4u;
L_010704a4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010704c8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10704bcu;
    f_801c8244(c);
R_010704bc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010704a0;
    }
L_010704c8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010704e8;
    c.r[3] = 0x0u;
    goto L_010704ec;
L_010704e8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010704ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010704fc;
    c.r[3] = 0x0u;
    goto L_01070500;
L_010704fc:
    ea = c.r[3] + 0xbcu;
    c.r[3] = wp::rd8(ea);
L_01070500:
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

void f_mr051_01070520(wp::Cpu& c) {
    WP_ENTER(0x1070520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107059cu: goto R_0107059c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x2733cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x2733cu) & 0xFFFFu);
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
    goto L_01070584;
L_01070580:
    c.r[30] = c.r[30] + 0x4u;
L_01070584:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010705a8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x107059cu;
    f_801c8244(c);
R_0107059c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070580;
    }
L_010705a8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010705c8;
    c.r[3] = 0x0u;
    goto L_010705cc;
L_010705c8:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010705cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010705dc;
    c.r[3] = 0x0u;
    goto L_010705e0;
L_010705dc:
    ea = c.r[3] + 0xbdu;
    c.r[3] = wp::rd8(ea);
L_010705e0:
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

void f_mr051_01070600(wp::Cpu& c) {
    WP_ENTER(0x1070600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070614u: goto R_01070614;
        case 0x107067cu: goto R_0107067c;
        case 0x10706d0u: goto R_010706d0;
        case 0x10706d8u: goto R_010706d8;
        case 0x10706f0u: goto R_010706f0;
        case 0x107070cu: goto R_0107070c;
        case 0x1070724u: goto R_01070724;
        case 0x1070738u: goto R_01070738;
        case 0x1070740u: goto R_01070740;
        case 0x1070750u: goto R_01070750;
        case 0x1070768u: goto R_01070768;
        case 0x1070778u: goto R_01070778;
        case 0x1070788u: goto R_01070788;
        case 0x1070798u: goto R_01070798;
        case 0x10707b0u: goto R_010707b0;
        case 0x10707c0u: goto R_010707c0;
        case 0x1070878u: goto R_01070878;
        case 0x1070890u: goto R_01070890;
        case 0x10708bcu: goto R_010708bc;
        case 0x10708d4u: goto R_010708d4;
        case 0x1070a4cu: goto R_01070a4c;
        case 0x1070a58u: goto R_01070a58;
        case 0x1070ab4u: goto R_01070ab4;
        case 0x1070ab8u: goto R_01070ab8;
        case 0x1070b18u: goto R_01070b18;
        case 0x1070b1cu: goto R_01070b1c;
        case 0x1070bdcu: goto R_01070bdc;
        case 0x1070be0u: goto R_01070be0;
        case 0x1070be8u: goto R_01070be8;
        case 0x1070c10u: goto R_01070c10;
        case 0x1070c14u: goto R_01070c14;
        case 0x1070c88u: goto R_01070c88;
        case 0x1070c98u: goto R_01070c98;
        case 0x1070cf4u: goto R_01070cf4;
        case 0x1070d10u: goto R_01070d10;
        case 0x1070d1cu: goto R_01070d1c;
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
    c.lr = 0x1070614u;
    f_801c83b4(c);
R_01070614:
    c.r[5] = ((((g_mr051_bases[5] + 0x27348u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27348u) & 0xFFFFu);
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
    goto L_01070664;
L_01070660:
    c.r[27] = c.r[27] + 0x4u;
L_01070664:
    wp::compare_unsigned(c, 0, c.r[27], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01070688;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x107067cu;
    f_801c8244(c);
R_0107067c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070660;
    }
L_01070688:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010706a8;
    c.r[3] = 0x0u;
    goto L_010706ac;
L_010706a8:
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010706ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010706b8;
    goto L_01070d14;
L_010706b8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10706d0u;
    wp::call(c, c.ctr);
R_010706d0:
    c.r[3] = 0xf0u;
    c.lr = 0x10706d8u;
    f_801c79a4(c);
R_010706d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010706f4;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.lr = 0x10706f0u;
    f_mr051_010727a0(c);
R_010706f0:
    c.r[30] = c.r[3] | c.r[3];
L_010706f4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107070cu;
    wp::call(c, c.ctr);
R_0107070c:
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
    c.lr = 0x1070724u;
    f_80042130(c);
R_01070724:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x70u;
    ea = c.r[12] + 0x4cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070738u;
    wp::call(c, c.ctr);
R_01070738:
    c.r[3] = 0x104u;
    c.lr = 0x1070740u;
    f_801c79a4(c);
R_01070740:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107077c;
    c.lr = 0x1070750u;
    f_80042130(c);
R_01070750:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070768u;
    wp::call(c, c.ctr);
R_01070768:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x1070778u;
    f_8012b8d0(c);
R_01070778:
    c.r[27] = c.r[3] | c.r[3];
L_0107077c:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = 0x10cu;
    c.lr = 0x1070788u;
    f_801c79a4(c);
R_01070788:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010707e0;
    c.lr = 0x1070798u;
    f_80042130(c);
R_01070798:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x74780000u;
    c.r[4] = c.r[4] + 0x7431u;
    ea = c.r[12] + 0x50u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10707b0u;
    wp::call(c, c.ctr);
R_010707b0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x10707c0u;
    f_8012b8d0(c);
R_010707c0:
    c.r[4] = ((((g_mr051_bases[5] + 0x28518u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr051_bases[4] + 0x2520u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28518u) & 0xFFFFu);
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x2520u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x0u;
    ea = c.r[27] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[27] + 0x108u;
    wp::wr32(ea, c.r[0]);
L_010707e0:
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[27]);
    c.r[3] = ((((g_mr051_bases[4] + 0x2524u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x2524u) & 0xFFFFu);
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
    c.lr = 0x1070878u;
    wp::call(c, c.ctr);
R_01070878:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x40u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070890u;
    wp::call(c, c.ctr);
R_01070890:
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
    c.lr = 0x10708bcu;
    wp::call(c, c.ctr);
R_010708bc:
    ea = c.r[30] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0xd0u;
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10708d4u;
    wp::call(c, c.ctr);
R_010708d4:
    c.r[4] = ((((g_mr051_bases[4] + 0x251cu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x55550000u;
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x251cu) & 0xFFFFu);
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
    c.lr = 0x1070a4cu;
    f_80129080(c);
R_01070a4c:
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1070a58u;
    f_80129080(c);
R_01070a58:
    ea = c.r[28] + 0x118u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x11cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_01070a84;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x118u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[30]);
    goto L_01070cf4;
L_01070a84:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01070ab8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27354u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27354u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1070ab4u;
    f_801cee24(c);
R_01070ab4:
    c.lr = 0x1070ab8u;
    f_801d3940(c);
L_01070ab8:
R_01070ab8:
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
    if (!wp::cr_get(c, 1)) goto L_01070b1c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27354u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27354u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1070b18u;
    f_801cee24(c);
R_01070b18:
    c.lr = 0x1070b1cu;
    f_801d3940(c);
L_01070b1c:
R_01070b1c:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01070b6c;
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
    if (!wp::cr_get(c, 0)) goto L_01070b60;
    c.r[3] = c.r[1] + 0x8u;
L_01070b60:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01070bb0;
L_01070b6c:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01070ba8;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01070b9c;
    c.r[3] = c.r[1] + 0x8u;
L_01070b9c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01070bb0;
L_01070ba8:
    c.r[3] = 0x40000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_01070bb0:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01070be0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27354u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27354u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1070bdcu;
    f_801cee24(c);
R_01070bdc:
    c.lr = 0x1070be0u;
    f_801d3940(c);
L_01070be0:
R_01070be0:
    c.r[3] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.lr = 0x1070be8u;
    f_801c79a4(c);
R_01070be8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01070c14;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0xac4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0xac4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1070c10u;
    f_801cee24(c);
R_01070c10:
    c.lr = 0x1070c14u;
    f_801d3940(c);
L_01070c14:
R_01070c14:
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
    c.lr = 0x1070c88u;
    f_800043c4(c);
R_01070c88:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.lr = 0x1070c98u;
    f_80004714(c);
R_01070c98:
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
    if (wp::cr_get(c, 2)) goto L_01070cf4;
    ea = c.r[1] + 0x80u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070cf4;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1070cf4u;
    f_801c7a8c(c);
L_01070cf4:
R_01070cf4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x19cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070d10u;
    wp::call(c, c.ctr);
R_01070d10:
    c.r[3] = c.r[30] | c.r[30];
L_01070d14:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x1070d1cu;
    f_801c8400(c);
R_01070d1c:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_mr051_01070d30(wp::Cpu& c) {
    WP_ENTER(0x1070d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr051_01070d40(wp::Cpu& c) {
    WP_ENTER(0x1070d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr051_01070d50(wp::Cpu& c) {
    WP_ENTER(0x1070d50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070dd4u: goto R_01070dd4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr051_bases[5] + 0x27374u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x27374u) & 0xFFFFu);
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
    goto L_01070dbc;
L_01070db8:
    c.r[30] = c.r[30] + 0x4u;
L_01070dbc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01070de0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1070dd4u;
    f_801c8244(c);
R_01070dd4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070db8;
    }
L_01070de0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070e00;
    c.r[3] = 0x0u;
    goto L_01070e04;
L_01070e00:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01070e04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070e44;
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
L_01070e44:
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

void f_mr051_01070e70(wp::Cpu& c) {
    WP_ENTER(0x1070e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070e98u: goto R_01070e98;
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
    c.lr = 0x1070e98u;
    wp::call(c, c.ctr);
R_01070e98:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01070eb0(wp::Cpu& c) {
    WP_ENTER(0x1070eb0u);
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

void f_mr051_01070ed0(wp::Cpu& c) {
    WP_ENTER(0x1070ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[8] = ((((g_mr051_bases[6] + 0x4e58u) + 0x8000u) >> 16) << 16);
    c.r[9] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[6] + 0x4e58u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070f40;
    c.r[7] = ((((g_mr051_bases[6] + 0x4e60u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x38u;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    c.r[6] = c.r[7] + wp::sign_extend16((g_mr051_bases[6] + 0x4e60u) & 0xFFFFu);
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
    ea = c.r[7] + wp::sign_extend16((g_mr051_bases[6] + 0x4e60u) & 0xFFFFu);
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
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[6] + 0x4e58u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01070f40:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr051_bases[6] + 0x4e60u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[12] + 0x190u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr051_bases[6] + 0x4e60u) & 0xFFFFu);
    c.r[5] = c.r[6] + c.r[0];
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr051_01070f60(wp::Cpu& c) {
    WP_ENTER(0x1070f60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070fe4u: goto R_01070fe4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x27380u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27380u) & 0xFFFFu);
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
    goto L_01070fcc;
L_01070fc8:
    c.r[30] = c.r[30] + 0x4u;
L_01070fcc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01070ff0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1070fe4u;
    f_801c8244(c);
R_01070fe4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070fc8;
    }
L_01070ff0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071010;
    c.r[4] = 0x0u;
    goto L_01071014;
L_01071010:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_01071014:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071030;
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
L_01071030:
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

void f_mr051_01071050(wp::Cpu& c) {
    WP_ENTER(0x1071050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10710d4u: goto R_010710d4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x2738cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x2738cu) & 0xFFFFu);
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
    goto L_010710bc;
L_010710b8:
    c.r[30] = c.r[30] + 0x4u;
L_010710bc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010710e0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10710d4u;
    f_801c8244(c);
R_010710d4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010710b8;
    }
L_010710e0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071100;
    c.r[4] = 0x0u;
    goto L_01071104;
L_01071100:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_01071104:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071120;
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
L_01071120:
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

void f_mr051_01071140(wp::Cpu& c) {
    WP_ENTER(0x1071140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10711c4u: goto R_010711c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr051_bases[5] + 0x27398u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x27398u) & 0xFFFFu);
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
    goto L_010711ac;
L_010711a8:
    c.r[29] = c.r[29] + 0x4u;
L_010711ac:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010711d0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10711c4u;
    f_801c8244(c);
R_010711c4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010711a8;
    }
L_010711d0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010711f0;
    c.r[5] = 0x0u;
    goto L_010711f4;
L_010711f0:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010711f4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071254;
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
L_01071254:
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

void f_mr051_01071280(wp::Cpu& c) {
    WP_ENTER(0x1071280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071304u: goto R_01071304;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr051_bases[5] + 0x273a4u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x273a4u) & 0xFFFFu);
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
    goto L_010712ec;
L_010712e8:
    c.r[29] = c.r[29] + 0x4u;
L_010712ec:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01071310;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1071304u;
    f_801c8244(c);
R_01071304:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010712e8;
    }
L_01071310:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071330;
    c.r[6] = 0x0u;
    goto L_01071334;
L_01071330:
    ea = c.r[29] + 0x0u;
    c.r[6] = wp::rd32(ea);
L_01071334:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107139c;
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
L_0107139c:
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

void f_mr051_010713c0(wp::Cpu& c) {
    WP_ENTER(0x10713c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071400u: goto R_01071400;
        case 0x107141cu: goto R_0107141c;
        case 0x1071434u: goto R_01071434;
        case 0x1071458u: goto R_01071458;
        case 0x107147cu: goto R_0107147c;
        case 0x107149cu: goto R_0107149c;
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
    if (!wp::cr_get(c, 0)) goto L_01071404;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071400u;
    wp::call(c, c.ctr);
R_01071400:
    goto L_01071434;
L_01071404:
    if (!wp::cr_get(c, 2)) goto L_01071420;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107141cu;
    wp::call(c, c.ctr);
R_0107141c:
    goto L_01071434;
L_01071420:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071434u;
    wp::call(c, c.ctr);
L_01071434:
R_01071434:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0107145c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071458u;
    wp::call(c, c.ctr);
R_01071458:
    goto L_0107149c;
L_0107145c:
    if (!wp::cr_get(c, 2)) goto L_01071480;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107147cu;
    wp::call(c, c.ctr);
R_0107147c:
    goto L_0107149c;
L_01071480:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107149cu;
    wp::call(c, c.ctr);
L_0107149c:
R_0107149c:
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

void f_mr051_010714c0(wp::Cpu& c) {
    WP_ENTER(0x10714c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10714f0u: goto R_010714f0;
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
    c.lr = 0x10714f0u;
    wp::call(c, c.ctr);
R_010714f0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01071500(wp::Cpu& c) {
    WP_ENTER(0x1071500u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071514u: goto R_01071514;
        case 0x1071580u: goto R_01071580;
        case 0x10716dcu: goto R_010716dc;
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
    c.lr = 0x1071514u;
    f_801c83b8(c);
R_01071514:
    c.r[9] = ((((g_mr051_bases[5] + 0x273b0u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mr051_bases[5] + 0x273b0u) & 0xFFFFu);
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
    goto L_01071568;
L_01071564:
    c.r[29] = c.r[29] + 0x4u;
L_01071568:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0107158c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1071580u;
    f_801c8244(c);
R_01071580:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01071564;
    }
L_0107158c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010715ac;
    c.r[5] = 0x0u;
    goto L_010715b0;
L_010715ac:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_010715b0:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010716d4;
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
    if (wp::cr_get(c, 0)) goto L_01071684;
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_01071684;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_01071684;
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
    goto L_010716d4;
L_01071684:
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
L_010716d4:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x10716dcu;
    f_801c8404(c);
R_010716dc:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr051_010716f0(wp::Cpu& c) {
    WP_ENTER(0x10716f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071730u: goto R_01071730;
        case 0x1071754u: goto R_01071754;
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
    c.lr = 0x1071730u;
    wp::call(c, c.ctr);
R_01071730:
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
    c.lr = 0x1071754u;
    wp::call(c, c.ctr);
R_01071754:
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

void f_mr051_01071770(wp::Cpu& c) {
    WP_ENTER(0x1071770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10717a4u: goto R_010717a4;
        case 0x10717c8u: goto R_010717c8;
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
    c.lr = 0x10717a4u;
    wp::call(c, c.ctr);
R_010717a4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010717c8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10717c8u;
    wp::call(c, c.ctr);
L_010717c8:
R_010717c8:
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

void f_mr051_010717f0(wp::Cpu& c) {
    WP_ENTER(0x10717f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071824u: goto R_01071824;
        case 0x107184cu: goto R_0107184c;
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
    c.lr = 0x1071824u;
    wp::call(c, c.ctr);
R_01071824:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr051_bases[4] + 0x2514u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr051_bases[4] + 0x2518u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mr051_bases[4] + 0x2514u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x2518u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x107184cu;
    wp::call(c, c.ctr);
R_0107184c:
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

void f_mr051_01071870(wp::Cpu& c) {
    WP_ENTER(0x1071870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107189cu: goto R_0107189c;
        case 0x1071908u: goto R_01071908;
        case 0x1071990u: goto R_01071990;
        case 0x10719f8u: goto R_010719f8;
        case 0x1071a9cu: goto R_01071a9c;
        case 0x1071ae0u: goto R_01071ae0;
        case 0x1071b20u: goto R_01071b20;
        case 0x1071b4cu: goto R_01071b4c;
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
    c.lr = 0x107189cu;
    f_801c83b8(c);
R_0107189c:
    c.r[8] = ((((g_mr051_bases[5] + 0x273bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x273bcu) & 0xFFFFu);
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
    goto L_010718f0;
L_010718ec:
    c.r[27] = c.r[27] + 0x4u;
L_010718f0:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01071914;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1071908u;
    f_801c8244(c);
R_01071908:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010718ec;
    }
L_01071914:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071934;
    c.r[28] = 0x0u;
    goto L_01071938;
L_01071934:
    ea = c.r[27] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_01071938:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[27] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0107194c;
    c.r[3] = 0x0u;
    goto L_01071b2c;
L_0107194c:
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
    c.lr = 0x1071990u;
    wp::call(c, c.ctr);
R_01071990:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[1] + 0x18u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x1cu;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    if (!wp::cr_get(c, 2)) goto L_010719fc;
    c.r[3] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_010719d0;
    c.f[2] = wp::round_single(c.f[0] / c.f[5]);
    c.ps1[2] = c.f[2];
L_010719d0:
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
    c.lr = 0x10719f8u;
    wp::call(c, c.ctr);
R_010719f8:
    goto L_01071a9c;
L_010719fc:
    c.r[3] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_01071a2c;
    goto L_01071a30;
L_01071a2c:
    c.f[3] = c.f[2];
L_01071a30:
    c.r[3] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[0], c.f[2]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_01071a48;
    goto L_01071a4c;
L_01071a48:
    c.f[2] = c.f[0];
L_01071a4c:
    wp::compare_float(c, 0, c.f[2], c.f[3]);
    if (!wp::cr_get(c, 1)) goto L_01071a58;
    c.f[2] = c.f[3];
L_01071a58:
    c.r[3] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (wp::cr_get(c, 0)) goto L_01071a70;
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01071a74;
L_01071a70:
    c.r[27] = 0x1u;
L_01071a74:
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
    c.lr = 0x1071a9cu;
    wp::call(c, c.ctr);
L_01071a9c:
R_01071a9c:
    c.r[4] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr051_bases[4] + 0x2550u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[1] + 0x28u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x2550u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
L_01071ab0:
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
    c.lr = 0x1071ae0u;
    wp::call(c, c.ctr);
R_01071ae0:
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[30]);
    c.r[0] = wp::mfcr(c);
    c.r[0] = wp::rotl(c.r[0], 2) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01071b28;
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
    c.lr = 0x1071b20u;
    wp::call(c, c.ctr);
R_01071b20:
    c.r[27] = 0x1u;
    WP_POLL(c);
    goto L_01071ab0;
L_01071b28:
    c.r[3] = c.r[27] | c.r[27];
L_01071b2c:
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
    c.lr = 0x1071b4cu;
    f_801c8404(c);
R_01071b4c:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_01071b60(wp::Cpu& c) {
    WP_ENTER(0x1071b60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071b74u: goto R_01071b74;
        case 0x1071be4u: goto R_01071be4;
        case 0x1071cf0u: goto R_01071cf0;
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
    c.lr = 0x1071b74u;
    f_801c83b4(c);
R_01071b74:
    c.r[10] = ((((g_mr051_bases[5] + 0x273c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[10] + wp::sign_extend16((g_mr051_bases[5] + 0x273c8u) & 0xFFFFu);
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
    goto L_01071bcc;
L_01071bc8:
    c.r[27] = c.r[27] + 0x4u;
L_01071bcc:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01071bf0;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1071be4u;
    f_801c8244(c);
R_01071be4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01071bc8;
    }
L_01071bf0:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071c10;
    c.r[5] = 0x0u;
    goto L_01071c14;
L_01071c10:
    ea = c.r[27] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_01071c14:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01071ce8;
    ea = c.r[5] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01071c3c;
    goto L_01071ce8;
L_01071c3c:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_01071cc4;
L_01071c58:
    wp::compare_unsigned(c, 0, c.r[0], 0xbu);
    if (!wp::cr_get(c, 2)) goto L_01071c68;
    c.r[7] = c.r[7] + 0x3u;
    goto L_01071cc4;
L_01071c68:
    wp::compare_unsigned(c, 0, c.r[0], 0xcu);
    if (!wp::cr_get(c, 2)) goto L_01071c90;
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
    goto L_01071cc0;
L_01071c90:
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_01071cbc;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01071cb4;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_01071cb4:
    c.r[8] = 0x0u;
    goto L_01071cc0;
L_01071cbc:
    c.r[8] = c.r[8] + 0x1u;
L_01071cc0:
    c.r[7] = c.r[7] + 0x1u;
L_01071cc4:
    ea = c.r[5] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[6];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01071c58;
    }
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01071ce8;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_01071ce8:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1071cf0u;
    f_801c8400(c);
R_01071cf0:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr051_01071d00(wp::Cpu& c) {
    WP_ENTER(0x1071d00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071d14u: goto R_01071d14;
        case 0x1071d88u: goto R_01071d88;
        case 0x1071dccu: goto R_01071dcc;
        case 0x1071e38u: goto R_01071e38;
        case 0x1071e84u: goto R_01071e84;
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
    c.lr = 0x1071d14u;
    f_801c83b4(c);
R_01071d14:
    c.r[9] = ((((g_mr051_bases[5] + 0x273d4u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mr051_bases[5] + 0x273d4u) & 0xFFFFu);
    c.r[8] = wp::rd32(ea);
    c.r[9] = ea;
    c.r[27] = c.r[5] | c.r[5];
    c.r[30] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[9] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
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
    goto L_01071d70;
L_01071d6c:
    c.r[29] = c.r[29] + 0x4u;
L_01071d70:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01071d94;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1071d88u;
    f_801c8244(c);
R_01071d88:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01071d6c;
    }
L_01071d94:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071db4;
    c.r[31] = 0x0u;
    goto L_01071db8;
L_01071db4:
    ea = c.r[29] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_01071db8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071e00;
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x1071dccu;
    f_8012be00(c);
R_01071dcc:
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
    goto L_01071e7c;
L_01071e00:
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
    c.lr = 0x1071e38u;
    f_8012be00(c);
R_01071e38:
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
L_01071e7c:
    c.r[11] = c.r[1] + 0x70u;
    c.lr = 0x1071e84u;
    f_801c8400(c);
R_01071e84:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mr051_01071ea0(wp::Cpu& c) {
    WP_ENTER(0x1071ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071eb4u: goto R_01071eb4;
        case 0x1071f20u: goto R_01071f20;
        case 0x1071f68u: goto R_01071f68;
        case 0x1071f98u: goto R_01071f98;
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
    c.lr = 0x1071eb4u;
    f_801c83b8(c);
R_01071eb4:
    c.r[8] = ((((g_mr051_bases[5] + 0x273e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x273e0u) & 0xFFFFu);
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
    goto L_01071f08;
L_01071f04:
    c.r[30] = c.r[30] + 0x4u;
L_01071f08:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01071f2c;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1071f20u;
    f_801c8244(c);
R_01071f20:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01071f04;
    }
L_01071f2c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071f4c;
    c.r[31] = 0x0u;
    goto L_01071f50;
L_01071f4c:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_01071f50:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071f68u;
    wp::call(c, c.ctr);
R_01071f68:
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
    c.lr = 0x1071f98u;
    f_801c8404(c);
R_01071f98:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr051_01071fb0(wp::Cpu& c) {
    WP_ENTER(0x1071fb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072034u: goto R_01072034;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr051_bases[5] + 0x273ecu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x273ecu) & 0xFFFFu);
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
    goto L_0107201c;
L_01072018:
    c.r[30] = c.r[30] + 0x4u;
L_0107201c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01072040;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1072034u;
    f_801c8244(c);
R_01072034:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072018;
    }
L_01072040:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01072060;
    c.r[3] = 0x0u;
    goto L_01072064;
L_01072060:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01072064:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072084;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[29] & 0xffu;
    ea = c.r[4] + 0xbbu;
    c.r[3] = wp::rd8(ea);
    c.r[3] = c.r[3] & 0xfeu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0xbbu;
    wp::wr8(ea, c.r[0]);
L_01072084:
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

void f_mr051_010720b0(wp::Cpu& c) {
    WP_ENTER(0x10720b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072134u: goto R_01072134;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr051_bases[5] + 0x273f8u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x273f8u) & 0xFFFFu);
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
    goto L_0107211c;
L_01072118:
    c.r[30] = c.r[30] + 0x4u;
L_0107211c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01072140;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1072134u;
    f_801c8244(c);
R_01072134:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072118;
    }
L_01072140:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01072160;
    c.r[4] = 0x0u;
    goto L_01072164;
L_01072160:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_01072164:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010721bc;
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
L_010721bc:
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

void f_mr051_010721e0(wp::Cpu& c) {
    WP_ENTER(0x10721e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072264u: goto R_01072264;
        case 0x10722b4u: goto R_010722b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x27404u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27404u) & 0xFFFFu);
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
    goto L_0107224c;
L_01072248:
    c.r[30] = c.r[30] + 0x4u;
L_0107224c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01072270;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1072264u;
    f_801c8244(c);
R_01072264:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072248;
    }
L_01072270:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01072290;
    c.r[3] = 0x0u;
    goto L_01072294;
L_01072290:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01072294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010722b4;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.f[1] = c.f[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x84u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10722b4u;
    wp::call(c, c.ctr);
L_010722b4:
R_010722b4:
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

void f_mr051_010722e0(wp::Cpu& c) {
    WP_ENTER(0x10722e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr051_010722f0(wp::Cpu& c) {
    WP_ENTER(0x10722f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072374u: goto R_01072374;
        case 0x10723ccu: goto R_010723cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mr051_bases[5] + 0x27410u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mr051_bases[5] + 0x27410u) & 0xFFFFu);
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
    goto L_0107235c;
L_01072358:
    c.r[30] = c.r[30] + 0x4u;
L_0107235c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01072380;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1072374u;
    f_801c8244(c);
R_01072374:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072358;
    }
L_01072380:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010723a0;
    c.r[3] = 0x0u;
    goto L_010723a4;
L_010723a0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010723a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010723cc;
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
    c.lr = 0x10723ccu;
    wp::call(c, c.ctr);
L_010723cc:
R_010723cc:
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

void f_mr051_010723f0(wp::Cpu& c) {
    WP_ENTER(0x10723f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x108u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr051_01072400(wp::Cpu& c) {
    WP_ENTER(0x1072400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107243cu: goto R_0107243c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = c.r[4] ^ 0x80000000u;
    c.r[4] = ((((g_mr051_bases[4] + 0x2560u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x2560u) & 0xFFFFu);
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mr051_bases[4] + 0x255cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x255cu) & 0xFFFFu);
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
    c.lr = 0x107243cu;
    f_80071fe0(c);
R_0107243c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01072450(wp::Cpu& c) {
    WP_ENTER(0x1072450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10724ccu: goto R_010724cc;
        case 0x1072524u: goto R_01072524;
        case 0x1072548u: goto R_01072548;
        case 0x1072558u: goto R_01072558;
        case 0x107256cu: goto R_0107256c;
        case 0x107257cu: goto R_0107257c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x2741cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x2741cu) & 0xFFFFu);
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
    goto L_010724b4;
L_010724b0:
    c.r[30] = c.r[30] + 0x4u;
L_010724b4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_010724d8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10724ccu;
    f_801c8244(c);
R_010724cc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010724b0;
    }
L_010724d8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010724f8;
    c.r[31] = 0x0u;
    goto L_010724fc;
L_010724f8:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010724fc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107250c;
    c.r[3] = 0x0u;
    goto L_010725c8;
L_0107250c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x64u;
    ea = c.r[12] + 0x1e8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072524u;
    wp::call(c, c.ctr);
R_01072524:
    ea = c.r[31] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x51ec0000u;
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] * c.r[3];
    c.r[3] = c.r[4] + 0xffff851fu;
    c.r[0] = wp::mulhwu(c.r[3], c.r[0]);
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1072548u;
    f_80071fe0(c);
R_01072548:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01072560;
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1072558u;
    f_80071fe0(c);
R_01072558:
    c.r[30] = c.r[3] | c.r[3];
    goto L_01072580;
L_01072560:
    c.r[31] = ((((g_mr051_bases[4] + 0x256cu) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x256cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107256cu;
    f_80071fe0(c);
R_0107256c:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01072580;
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x256cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107257cu;
    f_80071fe0(c);
R_0107257c:
    c.r[30] = c.r[3] | c.r[3];
L_01072580:
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
    if (!wp::cr_get(c, 0)) goto L_010725b8;
    c.r[30] = c.r[0] | c.r[0];
    goto L_010725c4;
L_010725b8:
    wp::compare_signed(c, 0, c.r[30], 0x190u);
    if (!wp::cr_get(c, 1)) goto L_010725c4;
    c.r[30] = 0x190u;
L_010725c4:
    c.r[3] = c.r[30] | c.r[30];
L_010725c8:
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

void f_mr051_010725f0(wp::Cpu& c) {
    WP_ENTER(0x10725f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107266cu: goto R_0107266c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x27428u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27428u) & 0xFFFFu);
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
    goto L_01072654;
L_01072650:
    c.r[30] = c.r[30] + 0x4u;
L_01072654:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01072678;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x107266cu;
    f_801c8244(c);
R_0107266c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072650;
    }
L_01072678:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01072698;
    c.r[5] = 0x0u;
    goto L_0107269c;
L_01072698:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0107269c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010726ac;
    c.r[3] = 0x0u;
    goto L_010726f4;
L_010726ac:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[9] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = c.r[3] | c.r[3];
    goto L_010726dc;
L_010726c0:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[6] = c.r[6] + 0x2u;
    c.r[0] = c.r[8] + c.r[0];
    c.r[9] = c.r[9] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_010726dc:
    wp::compare_unsigned(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_010726f4;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[6];
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010726c0;
    }
L_010726f4:
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

void f_mr051_01072710(wp::Cpu& c) {
    WP_ENTER(0x1072710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072740u: goto R_01072740;
        case 0x107275cu: goto R_0107275c;
        case 0x1072764u: goto R_01072764;
        case 0x107277cu: goto R_0107277c;
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
    c.lr = 0x1072740u;
    wp::call(c, c.ctr);
R_01072740:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1f0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107275cu;
    wp::call(c, c.ctr);
R_0107275c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1072764u;
    f_80019f20(c);
R_01072764:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1ecu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107277cu;
    wp::call(c, c.ctr);
R_0107277c:
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

void f_mr051_010727a0(wp::Cpu& c) {
    WP_ENTER(0x10727a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10727b4u: goto R_010727b4;
        case 0x10727d4u: goto R_010727d4;
        case 0x10727e0u: goto R_010727e0;
        case 0x10727fcu: goto R_010727fc;
        case 0x10728c4u: goto R_010728c4;
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
    c.lr = 0x10727b4u;
    f_801c83b8(c);
R_010727b4:
    c.r[30] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0xd0u;
    c.lr = 0x10727d4u;
    f_mr051_010791d0(c);
R_010727d4:
    c.r[3] = c.r[27] + 0xe0u;
    c.r[4] = 0x0u;
    c.lr = 0x10727e0u;
    f_mr051_010791d0(c);
R_010727e0:
    c.r[31] = 0x0u;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + 0xcu;
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x10727fcu;
    f_801cf394(c);
R_010727fc:
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
    c.lr = 0x10728c4u;
    f_801c8404(c);
R_010728c4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_010728e0(wp::Cpu& c) {
    WP_ENTER(0x10728e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107291cu: goto R_0107291c;
        case 0x107292cu: goto R_0107292c;
        case 0x1072950u: goto R_01072950;
        case 0x1072974u: goto R_01072974;
        case 0x1072990u: goto R_01072990;
        case 0x10729acu: goto R_010729ac;
        case 0x10729b8u: goto R_010729b8;
        case 0x10729c8u: goto R_010729c8;
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
    if (wp::cr_get(c, 2)) goto L_010729c8;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107291c;
    c.lr = 0x107291cu;
    f_80048f30(c);
L_0107291c:
R_0107291c:
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107292c;
    c.lr = 0x107292cu;
    f_80048f30(c);
L_0107292c:
R_0107292c:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072950;
    if (wp::cr_get(c, 2)) goto L_01072950;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072950u;
    wp::call(c, c.ctr);
L_01072950:
R_01072950:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072974;
    if (wp::cr_get(c, 2)) goto L_01072974;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072974u;
    wp::call(c, c.ctr);
L_01072974:
R_01072974:
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
L_0107297c:
    c.r[3] = c.r[28] + c.r[31];
    ea = c.r[3] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072990;
    c.lr = 0x1072990u;
    f_80048f30(c);
L_01072990:
R_01072990:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0xau);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107297c;
    }
    c.r[3] = c.r[28] + 0xe0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10729acu;
    f_mr051_01079230(c);
R_010729ac:
    c.r[3] = c.r[28] + 0xd0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10729b8u;
    f_mr051_01079230(c);
R_010729b8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010729c8;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10729c8u;
    f_801c7a8c(c);
L_010729c8:
R_010729c8:
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

void f_mr051_010729f0(wp::Cpu& c) {
    WP_ENTER(0x10729f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072a1cu: goto R_01072a1c;
        case 0x1072a2cu: goto R_01072a2c;
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
    if (wp::cr_get(c, 2)) goto L_01072a2c;
    c.r[4] = 0x0u;
    c.lr = 0x1072a1cu;
    f_8012bbc0(c);
R_01072a1c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01072a2c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1072a2cu;
    f_801c7a8c(c);
L_01072a2c:
R_01072a2c:
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

void f_mr051_01072a50(wp::Cpu& c) {
    WP_ENTER(0x1072a50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072a88u: goto R_01072a88;
        case 0x1072ac0u: goto R_01072ac0;
        case 0x1072c74u: goto R_01072c74;
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
    if (wp::cr_get(c, 2)) goto L_01072a88;
    c.r[3] = c.r[0] | c.r[0];
    c.lr = 0x1072a88u;
    f_80048f30(c);
L_01072a88:
R_01072a88:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[31] = 0x0u;
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01072c74;
    c.r[30] = 0x0u;
    goto L_01072aa8;
L_01072aa0:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x2u;
L_01072aa8:
    ea = c.r[29] + c.r[31];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072aa0;
    }
    c.r[0] = c.r[30] + 0x1u;
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x1072ac0u;
    f_80048ec0(c);
R_01072ac0:
    wp::compare_signed(c, 1, c.r[30], 0x0u);
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 5)) goto L_01072bd8;
    wp::compare_signed(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_01072ba8;
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_01072af8;
    c.r[3] = 0x80000000u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01072af8;
    c.r[4] = 0x1u;
L_01072af8:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072ba8;
    c.r[0] = c.r[6] + 0x7u;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = 0x0u;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01072ba8;
L_01072b1c:
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
    goto L_01072b1c;
    }
L_01072ba8:
    c.r[6] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    c.r[0] = c.r[30] - c.r[5];
    c.r[4] = c.r[29] + c.r[6];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01072bd8;
L_01072bc0:
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
    goto L_01072bc0;
    }
L_01072bd8:
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
    if (!wp::cr_get(c, 1)) goto L_01072c68;
    c.r[0] = c.r[0] | 0x0u;
L_01072c10:
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[6];
    ea = c.r[6] + c.r[0];
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5bu);
    if (!wp::cr_get(c, 2)) goto L_01072c5c;
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x77u);
    if (!wp::cr_get(c, 2)) goto L_01072c5c;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5du);
    if (!wp::cr_get(c, 2)) goto L_01072c5c;
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
L_01072c5c:
    c.r[6] = c.r[6] + 0x2u;
    c.r[7] = c.r[7] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_01072c10;
    }
L_01072c68:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1072c74u;
    f_mr051_01072ca0(c);
L_01072c74:
R_01072c74:
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

void f_mr051_01072ca0(wp::Cpu& c) {
    WP_ENTER(0x1072ca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072cb4u: goto R_01072cb4;
        case 0x1072d80u: goto R_01072d80;
        case 0x1072d88u: goto R_01072d88;
        case 0x1072d98u: goto R_01072d98;
        case 0x1072db0u: goto R_01072db0;
        case 0x1072dc8u: goto R_01072dc8;
        case 0x1073914u: goto R_01073914;
        case 0x1073930u: goto R_01073930;
        case 0x1073938u: goto R_01073938;
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
    c.lr = 0x1072cb4u;
    f_801c8384(c);
R_01072cb4:
    c.r[31] = 0x0u;
    ea = c.r[3] + 0xbdu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[3] + 0xa0u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = ((((g_mr051_bases[5] + 0x272c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0xbcu;
    wp::wr8(ea, c.r[31]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = c.r[5] + 0x1u;
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xa4u;
    wp::wr32(ea, c.r[31]);
    c.r[14] = c.r[0] & 0xffffu;
    c.r[16] = c.r[16] + wp::sign_extend16((g_mr051_bases[5] + 0x272c0u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 0)) goto L_01072d6c;
    c.r[14] = 0x40u;
L_01072d6c:
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[15] = wp::rotl(c.r[14], 1) & 0x1fffeu;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072d80;
    c.lr = 0x1072d80u;
    f_80048f30(c);
L_01072d80:
R_01072d80:
    c.r[3] = c.r[15] | c.r[15];
    c.lr = 0x1072d88u;
    f_80048ec0(c);
R_01072d88:
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x1072d98u;
    f_80004714(c);
R_01072d98:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072db0u;
    wp::call(c, c.ctr);
R_01072db0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072dc8u;
    wp::call(c, c.ctr);
R_01072dc8:
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
    if (!wp::cr_get(c, 2)) goto L_01072df0;
    c.r[30] = 0x1u;
L_01072df0:
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
    goto L_010738d8;
L_01072e20:
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
    if (!wp::cr_get(c, 2)) goto L_01072f58;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[14] | c.r[14];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_01072ee4;
L_01072e70:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01072e8c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01072ee4;
L_01072e8c:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01072ebc;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01072ebc;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01072ee4;
L_01072ebc:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01072ed8;
    c.r[5] = 0x0u;
    goto L_01072ef4;
L_01072ed8:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_01072ee4:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072e70;
    }
    c.r[5] = 0x1u;
L_01072ef4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072f58;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[5] = c.r[5] + 0xffffffd0u;
    c.r[5] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[6] = c.r[28] + c.r[5];
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072f4c;
    c.r[17] = 0x0u;
    goto L_01072f3c;
    c.r[0] = c.r[0] | 0x0u;
L_01072f28:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[17] + 0x2u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[18]);
    c.r[16] = c.r[16] + 0x2u;
L_01072f3c:
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[17];
    c.r[18] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072f28;
    }
L_01072f4c:
    c.r[31] = c.r[31] + 0xffffffffu;
    c.r[21] = c.r[21] + 0x4u;
    goto L_010732c4;
L_01072f58:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073144;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[15] | c.r[15];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_01072fec;
L_01072f78:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01072f94;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01072fec;
L_01072f94:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01072fc4;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01072fc4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_01072fec;
L_01072fc4:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01072fe0;
    c.r[5] = 0x0u;
    goto L_01072ffc;
L_01072fe0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_01072fec:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072f78;
    }
    c.r[5] = 0x1u;
L_01072ffc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073144;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x6u;
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x63u);
    if (wp::cr_get(c, 2)) goto L_01073120;
    if (!wp::cr_get(c, 0)) goto L_01073060;
    wp::compare_signed(c, 0, c.r[5], 0x31u);
    if (wp::cr_get(c, 2)) goto L_01073100;
    if (!wp::cr_get(c, 0)) goto L_01073048;
    wp::compare_signed(c, 0, c.r[5], 0x2cu);
    if (wp::cr_get(c, 2)) goto L_0107313c;
    if (!wp::cr_get(c, 0)) goto L_0107303c;
    wp::compare_signed(c, 0, c.r[5], 0x2bu);
    if (!wp::cr_get(c, 0)) goto L_010730e0;
    goto L_0107313c;
L_0107303c:
    wp::compare_signed(c, 0, c.r[5], 0x2eu);
    if (!wp::cr_get(c, 0)) goto L_0107313c;
    goto L_010730f0;
L_01073048:
    wp::compare_signed(c, 0, c.r[5], 0x61u);
    if (wp::cr_get(c, 2)) goto L_010730b0;
    if (!wp::cr_get(c, 0)) goto L_010730c0;
    wp::compare_signed(c, 0, c.r[5], 0x33u);
    if (!wp::cr_get(c, 0)) goto L_0107313c;
    goto L_01073110;
L_01073060:
    wp::compare_signed(c, 0, c.r[5], 0x78u);
    if (wp::cr_get(c, 2)) goto L_010730a0;
    if (!wp::cr_get(c, 0)) goto L_01073084;
    wp::compare_signed(c, 0, c.r[5], 0x70u);
    if (wp::cr_get(c, 2)) goto L_01073090;
    if (!wp::cr_get(c, 0)) goto L_0107313c;
    wp::compare_signed(c, 0, c.r[5], 0x68u);
    if (wp::cr_get(c, 2)) goto L_010730d0;
    goto L_0107313c;
L_01073084:
    wp::compare_signed(c, 0, c.r[5], 0x7au);
    if (wp::cr_get(c, 2)) goto L_01073130;
    goto L_0107313c;
L_01073090:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe040u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_010730a0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe041u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_010730b0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe042u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_010730c0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe043u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_010730d0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe044u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_010730e0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe045u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_010730f0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe046u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_01073100:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe047u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_01073110:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe048u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_01073120:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04au;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0107313c;
L_01073130:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04bu;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
L_0107313c:
    c.r[21] = c.r[21] + 0x5u;
    goto L_010732c4;
L_01073144:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073208;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[19] = c.r[9] | c.r[9];
    c.r[6] = 0x0u;
    c.r[18] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010731dc;
    c.r[0] = c.r[0] | 0x0u;
L_01073168:
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::compare_signed(c, 0, c.r[20], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01073184;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_010731dc;
L_01073184:
    wp::compare_signed(c, 0, c.r[20], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010731b4;
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[20] = c.r[20] + 0x10000u;
    c.r[20] = c.r[20] + 0xffffffd0u;
    c.r[20] = c.r[20] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010731b4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_010731dc;
L_010731b4:
    c.r[17] = wp::sign_extend8(c.r[17]);
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], c.r[17]);
    if (wp::cr_get(c, 2)) goto L_010731d0;
    c.r[5] = 0x0u;
    goto L_010731ec;
L_010731d0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_010731dc:
    ea = c.r[19] + 0x0u;
    c.r[17] = wp::rd8(ea);
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::record(c, c.r[20]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01073168;
    }
    c.r[5] = 0x1u;
L_010731ec:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073208;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe049u;
    c.r[21] = c.r[21] + 0x5u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_010732c4;
L_01073208:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010732c4;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0107329c;
L_01073228:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01073244;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0107329c;
L_01073244:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01073274;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01073274;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0107329c;
L_01073274:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01073290;
    c.r[5] = 0x0u;
    goto L_010732ac;
L_01073290:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0107329c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01073228;
    }
    c.r[5] = 0x1u;
L_010732ac:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010732c4;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbcu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
    goto L_010738e4;
L_010732c4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073648;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[11] | c.r[11];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0107335c;
    c.r[0] = c.r[0] | 0x0u;
L_010732e8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01073304;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0107335c;
L_01073304:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01073334;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01073334;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0107335c;
L_01073334:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_01073350;
    c.r[5] = 0x0u;
    goto L_0107336c;
L_01073350:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0107335c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010732e8;
    }
    c.r[5] = 0x1u;
L_0107336c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073648;
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
    if (wp::cr_get(c, 1)) goto L_010733a8;
    goto L_010733d4;
L_010733a8:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010733bc;
    c.r[17] = c.r[6] + 0xau;
    goto L_010733d4;
L_010733bc:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010733d4:
    ea = c.r[16] + 0x8u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010733e8;
    goto L_01073414;
L_010733e8:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010733fc;
    c.r[6] = c.r[6] + 0xau;
    goto L_01073414;
L_010733fc:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_01073414:
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
    if (wp::cr_get(c, 1)) goto L_0107343c;
    goto L_01073468;
L_0107343c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01073450;
    c.r[17] = c.r[6] + 0xau;
    goto L_01073468;
L_01073450:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_01073468:
    ea = c.r[16] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0107347c;
    goto L_010734a8;
L_0107347c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01073490;
    c.r[6] = c.r[6] + 0xau;
    goto L_010734a8;
L_01073490:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_010734a8:
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
    if (wp::cr_get(c, 1)) goto L_010734d0;
    goto L_010734fc;
L_010734d0:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010734e4;
    c.r[17] = c.r[6] + 0xau;
    goto L_010734fc;
L_010734e4:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_010734fc:
    ea = c.r[16] + 0x10u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01073510;
    goto L_0107353c;
L_01073510:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01073524;
    c.r[6] = c.r[6] + 0xau;
    goto L_0107353c;
L_01073524:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0107353c:
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
    if (wp::cr_get(c, 1)) goto L_01073564;
    goto L_01073590;
L_01073564:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_01073578;
    c.r[16] = c.r[5] + 0xau;
    goto L_01073590;
L_01073578:
    c.r[16] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[16], 0);
    c.r[4] = c.r[16] + 0xau;
    c.r[5] = c.r[16] - c.r[5];
    c.r[16] = c.r[4] & c.r[5];
L_01073590:
    ea = c.r[6] + 0x14u;
    c.r[4] = wp::rd16(ea);
    c.r[5] = c.r[4] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[5], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010735a4;
    goto L_010735d0;
L_010735a4:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_010735b8;
    c.r[5] = c.r[5] + 0xau;
    goto L_010735d0;
L_010735b8:
    c.r[6] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[6], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[6], 0);
    c.r[4] = c.r[6] + 0xau;
    c.r[5] = c.r[6] - c.r[5];
    c.r[5] = c.r[4] & c.r[5];
L_010735d0:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::rotl(c.r[5], 4) & 0xfffffff0u;
    c.r[5] = c.r[16] + c.r[5];
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010735ec;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
L_010735ec:
    ea = c.r[1] + 0x9u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010735fc;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[0]);
L_010735fc:
    ea = c.r[1] + 0xau;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107360c;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_0107360c:
    ea = c.r[1] + 0xbu;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107361c;
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
L_0107361c:
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
    goto L_010738d0;
L_01073648:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010738b4;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[12] | c.r[12];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_010736dc;
L_01073668:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01073684;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010736dc;
L_01073684:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_010736b4;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_010736b4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_010736dc;
L_010736b4:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010736d0;
    c.r[5] = 0x0u;
    goto L_010736ec;
L_010736d0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_010736dc:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01073668;
    }
    c.r[5] = 0x1u;
L_010736ec:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010738b4;
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
    goto L_01073754;
L_01073728:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073738;
    c.r[16] = 0x1u;
    goto L_0107376c;
L_01073738:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x1u;
    c.r[6] = c.r[6] + 0x2u;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[20]);
    c.r[4] = c.r[4] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_01073754:
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[6];
    c.r[20] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[20], 0x5du);
    if (wp::cr_get(c, 2)) goto L_0107376c;
    wp::compare_signed(c, 0, c.r[19], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01073728;
    }
L_0107376c:
    c.r[4] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[5] + c.r[4];
    c.r[4] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073780;
    c.r[3] = c.r[3] + 0x1u;
L_01073780:
    c.r[24] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[20] = 0x0u;
    goto L_010737bc;
L_01073790:
    ea = c.r[23] + c.r[24];
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010737a4;
    c.r[16] = 0x1u;
    goto L_0107386c;
L_010737a4:
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[24] = c.r[24] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[4] + c.r[3];
    wp::wr16(ea, c.r[5]);
    c.r[3] = c.r[3] + 0x2u;
L_010737bc:
    ea = c.r[28] + 0x20u;
    c.r[23] = wp::rd32(ea);
    c.r[5] = c.r[26] | c.r[26];
    c.r[25] = 0x0u;
    c.r[4] = 0x0u;
    c.r[27] = c.r[23] + c.r[24];
    goto L_0107384c;
    c.r[0] = c.r[0] | 0x0u;
L_010737d8:
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_010737f4;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0107384c;
L_010737f4:
    wp::compare_signed(c, 0, c.r[6], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01073824;
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[6] = c.r[6] + 0x10000u;
    c.r[6] = c.r[6] + 0xffffffd0u;
    c.r[6] = c.r[6] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01073824;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0107384c;
L_01073824:
    c.r[22] = wp::sign_extend8(c.r[22]);
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], c.r[22]);
    if (wp::cr_get(c, 2)) goto L_01073840;
    c.r[4] = 0x0u;
    goto L_0107385c;
L_01073840:
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
L_0107384c:
    ea = c.r[5] + 0x0u;
    c.r[22] = wp::rd8(ea);
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010737d8;
    }
    c.r[4] = 0x1u;
L_0107385c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107386c;
    wp::compare_signed(c, 0, c.r[20], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01073790;
    }
L_0107386c:
    wp::compare_signed(c, 0, c.r[16], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107388c;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[17], 1) & 0xfffffffeu;
    c.r[3] = 0x0u;
    c.r[31] = c.r[17] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[3]);
    goto L_010738d0;
L_0107388c:
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
    goto L_010738d0;
L_010738b4:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010738d0;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbdu;
    wp::wr8(ea, c.r[0]);
    goto L_010738e4;
L_010738d0:
    c.r[21] = c.r[21] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
L_010738d8:
    ea = c.r[28] + 0xa0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[21], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01072e20;
    }
L_010738e4:
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
    c.lr = 0x1073914u;
    wp::call(c, c.ctr);
R_01073914:
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
    c.lr = 0x1073930u;
    wp::call(c, c.ctr);
R_01073930:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x1073938u;
    f_801c83d0(c);
R_01073938:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mr051_01073950(wp::Cpu& c) {
    WP_ENTER(0x1073950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073964u: goto R_01073964;
        case 0x1073988u: goto R_01073988;
        case 0x10739d0u: goto R_010739d0;
        case 0x1073cbcu: goto R_01073cbc;
        case 0x1073cc4u: goto R_01073cc4;
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
    c.lr = 0x1073964u;
    f_801c8390(c);
R_01073964:
    c.r[18] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[29] = c.r[3] | c.r[3];
    c.r[17] = c.r[3] + c.r[18];
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[17] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073988;
    c.lr = 0x1073988u;
    f_80048f30(c);
L_01073988:
R_01073988:
    c.r[4] = 0x0u;
    ea = c.r[17] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] + c.r[18];
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    ea = c.r[3] + 0x50u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01073cbc;
    c.r[3] = 0x0u;
    goto L_010739b0;
L_010739a8:
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
L_010739b0:
    ea = c.r[30] + c.r[4];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010739a8;
    }
    c.r[17] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + 0x10u;
    c.r[28] = c.r[29] + c.r[17];
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x10739d0u;
    f_80048ec0(c);
R_010739d0:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[12] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[27] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073c90;
    c.r[4] = ((((g_mr051_bases[5] + 0x2745cu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr051_bases[5] + 0x27460u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2745cu) & 0xFFFFu);
    c.r[7] = c.r[28] | c.r[28];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x27460u) & 0xFFFFu);
    c.r[3] = 0xcu;
    c.r[0] = 0x5bu;
    goto L_01073c80;
L_01073a08:
    c.r[18] = c.r[30] + c.r[8];
    c.r[9] = c.r[4] | c.r[4];
    c.r[17] = 0x0u;
    c.r[8] = 0x0u;
    goto L_01073a94;
    c.r[0] = c.r[0] | 0x0u;
L_01073a20:
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[10], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01073a3c;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_01073a94;
L_01073a3c:
    wp::compare_signed(c, 0, c.r[10], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01073a6c;
    ea = c.r[18] + c.r[8];
    c.r[10] = wp::rd16(ea);
    c.r[10] = c.r[10] + 0x10000u;
    c.r[10] = c.r[10] + 0xffffffd0u;
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[10], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01073a6c;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_01073a94;
L_01073a6c:
    c.r[10] = wp::sign_extend8(c.r[11]);
    ea = c.r[18] + c.r[8];
    c.r[11] = wp::rd16(ea);
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[11], c.r[10]);
    if (wp::cr_get(c, 2)) goto L_01073a88;
    c.r[8] = 0x0u;
    goto L_01073aa4;
L_01073a88:
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
L_01073a94:
    ea = c.r[9] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[10]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01073a20;
    }
    c.r[8] = 0x1u;
L_01073aa4:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073c6c;
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
    goto L_01073b14;
    c.r[0] = c.r[0] | 0x0u;
L_01073ae8:
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073af8;
    c.r[21] = 0x1u;
    goto L_01073b28;
L_01073af8:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[12] = c.r[12] + 0x1u;
    c.r[9] = c.r[9] + 0x2u;
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[10]);
    c.r[6] = c.r[6] + 0x2u;
    c.r[25] = c.r[25] + 0x1u;
L_01073b14:
    ea = c.r[9] + 0x0u;
    c.r[10] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[10], 0x5du);
    if (wp::cr_get(c, 2)) goto L_01073b28;
    wp::compare_signed(c, 0, c.r[25], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01073ae8;
    }
L_01073b28:
    c.r[6] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[6];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073b3c;
    c.r[27] = c.r[27] + 0x1u;
L_01073b3c:
    c.r[10] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    c.r[20] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[26] = 0x0u;
    c.r[9] = c.r[30] + c.r[10];
    goto L_01073b84;
L_01073b50:
    ea = c.r[9] + 0x0u;
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073b64;
    c.r[21] = 0x1u;
    goto L_01073c2c;
L_01073b64:
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
L_01073b84:
    c.r[18] = c.r[5] | c.r[5];
    c.r[8] = c.r[30] + c.r[10];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    goto L_01073c0c;
L_01073b98:
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[17], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_01073bb4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_01073c0c;
L_01073bb4:
    wp::compare_signed(c, 0, c.r[17], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_01073be4;
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[17] = c.r[17] + 0x10000u;
    c.r[17] = c.r[17] + 0xffffffd0u;
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_01073be4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_01073c0c;
L_01073be4:
    c.r[11] = wp::sign_extend8(c.r[11]);
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[11] = c.r[11] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], c.r[11]);
    if (wp::cr_get(c, 2)) goto L_01073c00;
    c.r[6] = 0x0u;
    goto L_01073c1c;
L_01073c00:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
L_01073c0c:
    ea = c.r[18] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[17]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01073b98;
    }
    c.r[6] = 0x1u;
L_01073c1c:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073c2c;
    wp::compare_signed(c, 0, c.r[26], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01073b50;
    }
L_01073c2c:
    wp::compare_signed(c, 0, c.r[21], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073c4c;
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[23], 1) & 0xfffffffeu;
    c.r[12] = c.r[23] | c.r[23];
    c.r[27] = c.r[22] | c.r[22];
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[0]);
    goto L_01073c78;
L_01073c4c:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[9] = c.r[26] & 0xffu;
    c.r[6] = wp::rotl(c.r[24], 1) & 0xfffffffeu;
    c.r[27] = c.r[27] + 0x3u;
    c.r[9] = (wp::rotl(c.r[25], 8) & 0xff00u) | (c.r[9] & 0xffff00ffu);
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[9]);
    c.r[12] = c.r[12] + 0xffffffffu;
    goto L_01073c78;
L_01073c6c:
    ea = c.r[7] + 0x28u;
    c.r[9] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    ea = c.r[9] + c.r[8];
    wp::wr16(ea, c.r[6]);
L_01073c78:
    c.r[27] = c.r[27] + 0x1u;
    c.r[12] = c.r[12] + 0x1u;
L_01073c80:
    c.r[8] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[8];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01073a08;
    }
L_01073c90:
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
    c.lr = 0x1073cbcu;
    f_mr051_01072ca0(c);
L_01073cbc:
R_01073cbc:
    c.r[11] = c.r[1] + 0x50u;
    c.lr = 0x1073cc4u;
    f_801c83dc(c);
R_01073cc4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr051_01073ce0(wp::Cpu& c) {
    WP_ENTER(0x1073ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073cf4u: goto R_01073cf4;
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
    c.lr = 0x1073cf4u;
    f_801cf510(c);
R_01073cf4:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01073d10(wp::Cpu& c) {
    WP_ENTER(0x1073d10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073d68u: goto R_01073d68;
        case 0x1073da4u: goto R_01073da4;
        case 0x1073db0u: goto R_01073db0;
        case 0x1073dc0u: goto R_01073dc0;
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
    if (wp::cr_get(c, 2)) goto L_01073dc0;
    if (wp::cr_get(c, 2)) goto L_01073db0;
    c.r[4] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_01073d68;
L_01073d48:
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
    c.lr = 0x1073d68u;
    wp::call(c, c.ctr);
L_01073d68:
R_01073d68:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01073d48;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01073da4;
    if (wp::cr_get(c, 2)) goto L_01073da4;
    if (wp::cr_get(c, 2)) goto L_01073da4;
    if (wp::cr_get(c, 2)) goto L_01073da4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073da4;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1073da4u;
    f_801c7a8c(c);
L_01073da4:
R_01073da4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1073db0u;
    f_8003fb90(c);
L_01073db0:
R_01073db0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01073dc0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1073dc0u;
    f_801c7a8c(c);
L_01073dc0:
R_01073dc0:
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

void f_mr051_01073de0(wp::Cpu& c) {
    WP_ENTER(0x1073de0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073e30u: goto R_01073e30;
        case 0x1073e40u: goto R_01073e40;
        case 0x1073e50u: goto R_01073e50;
        case 0x1073e88u: goto R_01073e88;
        case 0x1073e9cu: goto R_01073e9c;
        case 0x1073eb0u: goto R_01073eb0;
        case 0x1073ec4u: goto R_01073ec4;
        case 0x1073edcu: goto R_01073edc;
        case 0x1073eecu: goto R_01073eec;
        case 0x1073f00u: goto R_01073f00;
        case 0x1073f0cu: goto R_01073f0c;
        case 0x1073f1cu: goto R_01073f1c;
        case 0x1073f74u: goto R_01073f74;
        case 0x1073f84u: goto R_01073f84;
        case 0x1073f94u: goto R_01073f94;
        case 0x1073fa8u: goto R_01073fa8;
        case 0x1073fbcu: goto R_01073fbc;
        case 0x1073fe8u: goto R_01073fe8;
        case 0x1073ff0u: goto R_01073ff0;
        case 0x1073ffcu: goto R_01073ffc;
        case 0x1074004u: goto R_01074004;
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
    c.r[29] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
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
    c.lr = 0x1073e30u;
    f_8014c170(c);
R_01073e30:
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[1] + 0x7cu;
    c.lr = 0x1073e40u;
    f_800f5a50(c);
R_01073e40:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x7cu;
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x1073e50u;
    f_800f5a70(c);
R_01073e50:
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
    c.lr = 0x1073e88u;
    f_800f5aa0(c);
R_01073e88:
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
    c.lr = 0x1073e9cu;
    f_800f5ae0(c);
R_01073e9c:
    ea = c.r[29] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[1] + 0x7cu;
    ea = c.r[29] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[3] = c.f[2];
    c.lr = 0x1073eb0u;
    f_800f5b60(c);
R_01073eb0:
    ea = c.r[29] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[1] + 0x7cu;
    ea = c.r[29] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[3] = c.f[2];
    c.lr = 0x1073ec4u;
    f_800f5be0(c);
R_01073ec4:
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = c.r[0] | 0x4u;
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1073edcu;
    f_800f5a50(c);
R_01073edc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[1] + 0x38u;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x1073eecu;
    f_800f5a70(c);
R_01073eec:
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
    c.lr = 0x1073f00u;
    f_800f5c20(c);
R_01073f00:
    ea = c.r[29] + 0x98u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x1073f0cu;
    f_800f5c60(c);
R_01073f0c:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x4u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1073f1cu;
    f_8004aa80(c);
R_01073f1c:
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
    if (!wp::cr_get(c, 0)) goto L_01073f5c;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01073f5c;
    c.r[0] = c.r[29] * 0xcu;
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    goto L_01073f68;
L_01073f5c:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
L_01073f68:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x1073f74u;
    f_800f64c0(c);
R_01073f74:
    c.r[3] = c.r[1] + 0x18u;
    c.r[5] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x0u;
    c.lr = 0x1073f84u;
    f_800f6450(c);
R_01073f84:
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x1u;
    c.lr = 0x1073f94u;
    f_800f6450(c);
R_01073f94:
    c.r[30] = 0x2u;
L_01073f98:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x1073fa8u;
    f_800f6450(c);
R_01073fa8:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[30], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01073f98;
    }
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x1073fbcu;
    f_800f6400(c);
R_01073fbc:
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
    c.lr = 0x1073fe8u;
    f_800f63a0(c);
R_01073fe8:
    c.r[4] = c.r[1] + 0x7cu;
    c.lr = 0x1073ff0u;
    f_800f5a00(c);
R_01073ff0:
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x1u;
    c.lr = 0x1073ffcu;
    f_800f63a0(c);
R_01073ffc:
    c.r[4] = c.r[1] + 0x38u;
    c.lr = 0x1074004u;
    f_800f5a00(c);
R_01074004:
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

void f_mr051_01074030(wp::Cpu& c) {
    WP_ENTER(0x1074030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1074044u: goto R_01074044;
        case 0x1074088u: goto R_01074088;
        case 0x10740b8u: goto R_010740b8;
        case 0x10740f8u: goto R_010740f8;
        case 0x1074114u: goto R_01074114;
        case 0x1074150u: goto R_01074150;
        case 0x1074168u: goto R_01074168;
        case 0x107419cu: goto R_0107419c;
        case 0x10741b8u: goto R_010741b8;
        case 0x10741d8u: goto R_010741d8;
        case 0x10741f4u: goto R_010741f4;
        case 0x1074214u: goto R_01074214;
        case 0x1074230u: goto R_01074230;
        case 0x1074254u: goto R_01074254;
        case 0x1074274u: goto R_01074274;
        case 0x1074284u: goto R_01074284;
        case 0x10742a4u: goto R_010742a4;
        case 0x10742d4u: goto R_010742d4;
        case 0x10742ecu: goto R_010742ec;
        case 0x10742f4u: goto R_010742f4;
        case 0x1074314u: goto R_01074314;
        case 0x1074344u: goto R_01074344;
        case 0x107435cu: goto R_0107435c;
        case 0x1074378u: goto R_01074378;
        case 0x10743a4u: goto R_010743a4;
        case 0x10743d4u: goto R_010743d4;
        case 0x10743dcu: goto R_010743dc;
        case 0x10743e8u: goto R_010743e8;
        case 0x107441cu: goto R_0107441c;
        case 0x1074428u: goto R_01074428;
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
    c.lr = 0x1074044u;
    f_801c83a4(c);
R_01074044:
    c.r[24] = ((((g_mr051_bases[5] + 0x272c0u) + 0x8000u) >> 16) << 16);
    c.r[25] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[24] + wp::sign_extend16((g_mr051_bases[5] + 0x272c0u) & 0xFFFFu);
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
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    c.r[4] = c.r[24] + 0x1f0u;
    c.lr = 0x1074088u;
    f_8003f8f0(c);
R_01074088:
    c.r[3] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[26] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
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
    c.lr = 0x10740b8u;
    f_80063370(c);
R_010740b8:
    c.r[4] = ((((g_mr051_bases[5] + 0x27cd8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27cd8u) & 0xFFFFu);
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
    c.lr = 0x10740f8u;
    f_80071fe0(c);
R_010740f8:
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
    c.lr = 0x1074114u;
    f_80071fe0(c);
R_01074114:
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
    c.lr = 0x1074150u;
    wp::call(c, c.ctr);
R_01074150:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074168u;
    wp::call(c, c.ctr);
R_01074168:
    wp::compare_signed(c, 0, c.r[22], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074184;
    wp::compare_signed(c, 0, c.r[22], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010741c0;
    wp::compare_signed(c, 0, c.r[22], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010741fc;
    goto L_01074234;
L_01074184:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x204u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107419cu;
    wp::call(c, c.ctr);
R_0107419c:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x21cu;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10741b8u;
    wp::call(c, c.ctr);
R_010741b8:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
    goto L_01074234;
L_010741c0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x234u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10741d8u;
    wp::call(c, c.ctr);
R_010741d8:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x248u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10741f4u;
    wp::call(c, c.ctr);
R_010741f4:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
    goto L_01074234;
L_010741fc:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x260u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074214u;
    wp::call(c, c.ctr);
R_01074214:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[24] + 0x278u;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074230u;
    wp::call(c, c.ctr);
R_01074230:
    ea = c.r[28] + 0x148u;
    wp::wr32(ea, c.r[3]);
L_01074234:
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
    c.lr = 0x1074254u;
    wp::call(c, c.ctr);
R_01074254:
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
    c.lr = 0x1074274u;
    wp::call(c, c.ctr);
R_01074274:
    wp::compare_signed(c, 0, c.r[22], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01074360;
    c.r[3] = 0x19cu;
    c.lr = 0x1074284u;
    f_801c79a4(c);
R_01074284:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010742a4;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[8] = c.r[23] | c.r[23];
    c.r[7] = 0x1u;
    c.lr = 0x10742a4u;
    f_mr051_01074030(c);
L_010742a4:
R_010742a4:
    ea = c.r[28] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010742d4;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x18cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010742d4;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10742d4u;
    wp::call(c, c.ctr);
L_010742d4:
R_010742d4:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10742ecu;
    wp::call(c, c.ctr);
R_010742ec:
    c.r[3] = 0x19cu;
    c.lr = 0x10742f4u;
    f_801c79a4(c);
R_010742f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074314;
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[8] = c.r[23] | c.r[23];
    c.r[7] = 0x2u;
    c.lr = 0x1074314u;
    f_mr051_01074030(c);
L_01074314:
R_01074314:
    ea = c.r[28] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01074344;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x190u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01074344;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074344u;
    wp::call(c, c.ctr);
L_01074344:
R_01074344:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107435cu;
    wp::call(c, c.ctr);
R_0107435c:
    goto L_01074404;
L_01074360:
    wp::compare_signed(c, 0, c.r[22], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010743f4;
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010743e8;
    c.r[3] = 0x30cu;
    c.lr = 0x1074378u;
    f_801c79a4(c);
R_01074378:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010743a4;
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
    c.lr = 0x10743a4u;
    f_mr051_01076c80(c);
L_010743a4:
R_010743a4:
    ea = c.r[28] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010743d4;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x194u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010743d4;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10743d4u;
    wp::call(c, c.ctr);
L_010743d4:
R_010743d4:
    ea = c.r[28] + 0x194u;
    c.r[24] = wp::rd32(ea);
    c.lr = 0x10743dcu;
    f_mr051_01073de0(c);
R_010743dc:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10743e8u;
    f_mr051_010212b0(c);
L_010743e8:
R_010743e8:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x140u;
    wp::wr8(ea, c.r[0]);
    goto L_01074404;
L_010743f4:
    wp::compare_signed(c, 0, c.r[22], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_01074404;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x140u;
    wp::wr8(ea, c.r[0]);
L_01074404:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107441cu;
    wp::call(c, c.ctr);
R_0107441c:
    c.r[11] = c.r[1] + 0x40u;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1074428u;
    f_801c83f0(c);
R_01074428:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr051_01074440(wp::Cpu& c) {
    WP_ENTER(0x1074440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107447cu: goto R_0107447c;
        case 0x10744a4u: goto R_010744a4;
        case 0x10744ccu: goto R_010744cc;
        case 0x10744f4u: goto R_010744f4;
        case 0x107451cu: goto R_0107451c;
        case 0x1074528u: goto R_01074528;
        case 0x1074560u: goto R_01074560;
        case 0x107459cu: goto R_0107459c;
        case 0x10745a8u: goto R_010745a8;
        case 0x10745b8u: goto R_010745b8;
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
    if (wp::cr_get(c, 2)) goto L_010745b8;
    c.r[4] = ((((g_mr051_bases[5] + 0x27cd8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27cd8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x1f8u;
    ea = c.r[3] + 0x120u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107447cu;
    f_8001a010(c);
R_0107447c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x198u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010744a4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010744a4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10744a4u;
    wp::call(c, c.ctr);
L_010744a4:
R_010744a4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x194u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010744cc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010744cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10744ccu;
    wp::call(c, c.ctr);
L_010744cc:
R_010744cc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x190u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010744f4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010744f4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10744f4u;
    wp::call(c, c.ctr);
L_010744f4:
R_010744f4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x18cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107451c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107451c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107451cu;
    wp::call(c, c.ctr);
L_0107451c:
R_0107451c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1074528u;
    f_80063bb0(c);
R_01074528:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010745a8;
    c.r[3] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01074560;
L_01074540:
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
    c.lr = 0x1074560u;
    wp::call(c, c.ctr);
L_01074560:
R_01074560:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01074540;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0107459c;
    if (wp::cr_get(c, 2)) goto L_0107459c;
    if (wp::cr_get(c, 2)) goto L_0107459c;
    if (wp::cr_get(c, 2)) goto L_0107459c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107459c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107459cu;
    f_801c7a8c(c);
L_0107459c:
R_0107459c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10745a8u;
    f_8003fb90(c);
L_010745a8:
R_010745a8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010745b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10745b8u;
    f_801c7a8c(c);
L_010745b8:
R_010745b8:
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

void f_mr051_010745e0(wp::Cpu& c) {
    WP_ENTER(0x10745e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    wp::wr16(ea, c.r[4]);
    return;
}

void f_mr051_010745f0(wp::Cpu& c) {
    WP_ENTER(0x10745f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    c.r[3] = wp::rd16(ea);
    return;
}

void f_mr051_01074600(wp::Cpu& c) {
    WP_ENTER(0x1074600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1074638u: goto R_01074638;
        case 0x1074640u: goto R_01074640;
        case 0x107465cu: goto R_0107465c;
        case 0x1074678u: goto R_01074678;
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
    if (wp::cr_get(c, 2)) goto L_01074638;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074638u;
    wp::call(c, c.ctr);
L_01074638:
R_01074638:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1074640u;
    f_8000fc20(c);
R_01074640:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0x1u;
    c.r[31] = wp::slw(c.r[0], c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107465cu;
    wp::call(c, c.ctr);
R_0107465c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x1074678u;
    wp::call(c, c.ctr);
R_01074678:
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

void f_mr051_01074690(wp::Cpu& c) {
    WP_ENTER(0x1074690u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10746a4u: goto R_010746a4;
        case 0x10746ccu: goto R_010746cc;
        case 0x10746e4u: goto R_010746e4;
        case 0x1074700u: goto R_01074700;
        case 0x1074718u: goto R_01074718;
        case 0x1074734u: goto R_01074734;
        case 0x1074748u: goto R_01074748;
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
    c.lr = 0x10746a4u;
    f_801c83b4(c);
R_010746a4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_010746cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10746ccu;
    wp::call(c, c.ctr);
L_010746cc:
R_010746cc:
    c.r[29] = 0x0u;
    c.r[30] = 0x1u;
L_010746d4:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010746ec;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10746e4u;
    f_8000fc40(c);
R_010746e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01074734;
L_010746ec:
    c.r[0] = wp::slw(c.r[30], c.r[29]);
    c.r[0] = c.r[27] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01074734;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1074700u;
    f_8000fc20(c);
R_01074700:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = wp::slw(c.r[30], c.r[3]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074718u;
    wp::call(c, c.ctr);
R_01074718:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x1074734u;
    wp::call(c, c.ctr);
L_01074734:
R_01074734:
    c.r[29] = c.r[29] + 0x1u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010746d4;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1074748u;
    f_801c8400(c);
R_01074748:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_01074760(wp::Cpu& c) {
    WP_ENTER(0x1074760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1074790u: goto R_01074790;
        case 0x10747a8u: goto R_010747a8;
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
L_01074788:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1074790u;
    f_8000fc20(c);
R_01074790:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = wp::slw(c.r[31], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10747a8u;
    wp::call(c, c.ctr);
R_010747a8:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[29] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010747bc;
    c.r[3] = c.r[30] | c.r[30];
    goto L_010747cc;
L_010747bc:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01074788;
    }
    c.r[3] = 0xffffffffu;
L_010747cc:
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

void f_mr051_010747f0(wp::Cpu& c) {
    WP_ENTER(0x10747f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x169u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr051_01074800(wp::Cpu& c) {
    WP_ENTER(0x1074800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107481cu: goto R_0107481c;
        case 0x1074830u: goto R_01074830;
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
    goto L_0107481c;
L_01074818:
    c.lr = 0x107481cu;
    f_8006a940(c);
L_0107481c:
R_0107481c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074830u;
    wp::call(c, c.ctr);
R_01074830:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01074818;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01074850(wp::Cpu& c) {
    WP_ENTER(0x1074850u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107487cu: goto R_0107487c;
        case 0x1074894u: goto R_01074894;
        case 0x10748b4u: goto R_010748b4;
        case 0x10748d4u: goto R_010748d4;
        case 0x10748f8u: goto R_010748f8;
        case 0x1074910u: goto R_01074910;
        case 0x1074928u: goto R_01074928;
        case 0x1074940u: goto R_01074940;
        case 0x107496cu: goto R_0107496c;
        case 0x1074984u: goto R_01074984;
        case 0x10749a0u: goto R_010749a0;
        case 0x10749bcu: goto R_010749bc;
        case 0x10749ccu: goto R_010749cc;
        case 0x10749e4u: goto R_010749e4;
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
    if (!wp::cr_get(c, 2)) goto L_010748d8;
    c.r[4] = 0x0u;
    c.lr = 0x107487cu;
    f_800402c0(c);
R_0107487c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074894;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x1074894u;
    f_80052250(c);
L_01074894:
R_01074894:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010748b4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10748b4u;
    wp::call(c, c.ctr);
L_010748b4:
R_010748b4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010749e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10748d4u;
    wp::call(c, c.ctr);
R_010748d4:
    goto L_010749e4;
L_010748d8:
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010749c0;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010749c0;
    c.r[4] = 0x0u;
    c.lr = 0x10748f8u;
    f_800402c0(c);
R_010748f8:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074910;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x1074910u;
    f_80052250(c);
L_01074910:
R_01074910:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074928u;
    wp::call(c, c.ctr);
R_01074928:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074940u;
    wp::call(c, c.ctr);
R_01074940:
    ea = c.r[30] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074960;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01074988;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010749a4;
    goto L_010749e4;
L_01074960:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x107496cu;
    f_800402c0(c);
R_0107496c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010749e4;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x1074984u;
    f_80052250(c);
R_01074984:
    goto L_010749e4;
L_01074988:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10749a0u;
    wp::call(c, c.ctr);
R_010749a0:
    goto L_010749e4;
L_010749a4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10749bcu;
    wp::call(c, c.ctr);
R_010749bc:
    goto L_010749e4;
L_010749c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10749ccu;
    f_800402c0(c);
R_010749cc:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010749e4;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x10749e4u;
    f_80052250(c);
L_010749e4:
R_010749e4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[30] + 0x185u;
    wp::wr8(ea, c.r[31]);
    if (!wp::cr_get(c, 2)) goto L_010749f4;
    ea = c.r[30] + 0x154u;
    wp::wr8(ea, c.r[31]);
L_010749f4:
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

void f_mr051_01074a10(wp::Cpu& c) {
    WP_ENTER(0x1074a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1074a44u: goto R_01074a44;
        case 0x1074ac8u: goto R_01074ac8;
        case 0x1074af4u: goto R_01074af4;
        case 0x1074b24u: goto R_01074b24;
        case 0x1074b48u: goto R_01074b48;
        case 0x1074b54u: goto R_01074b54;
        case 0x1074b74u: goto R_01074b74;
        case 0x1074b88u: goto R_01074b88;
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
    c.lr = 0x1074a44u;
    wp::call(c, c.ctr);
R_01074a44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074a54;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074bb4;
L_01074a54:
    ea = c.r[29] + 0x154u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) goto L_01074a68;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074bb4;
L_01074a68:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01074a84;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01074a84;
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01074bb4;
L_01074a84:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x154u;
    wp::wr8(ea, c.r[30]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074a98;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_01074a98:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074aa8;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_01074aa8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074ac8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074ac8u;
    wp::call(c, c.ctr);
L_01074ac8:
R_01074ac8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074b00;
    ea = c.r[29] + 0x144u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01074b54;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074af4u;
    wp::call(c, c.ctr);
R_01074af4:
    ea = c.r[29] + 0x144u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01074b54;
L_01074b00:
    ea = c.r[29] + 0x148u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01074b30;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074b24u;
    wp::call(c, c.ctr);
R_01074b24:
    ea = c.r[29] + 0x148u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01074b48;
L_01074b30:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074b48u;
    wp::call(c, c.ctr);
L_01074b48:
R_01074b48:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1074b54u;
    f_8001a010(c);
L_01074b54:
R_01074b54:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01074b74;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074b74u;
    wp::call(c, c.ctr);
L_01074b74:
R_01074b74:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x290u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074b88u;
    wp::call(c, c.ctr);
R_01074b88:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x186u;
    wp::wr8(ea, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01074ba4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_01074ba4:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074bb4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_01074bb4:
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

void f_mr051_01074bd0(wp::Cpu& c) {
    WP_ENTER(0x1074bd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1074c10u: goto R_01074c10;
        case 0x1074c30u: goto R_01074c30;
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
    if (wp::cr_get(c, 2)) goto L_01074c10;
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074c10u;
    wp::call(c, c.ctr);
L_01074c10:
R_01074c10:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074c30;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074c30u;
    wp::call(c, c.ctr);
L_01074c30:
R_01074c30:
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

void f_mr051_01074c50(wp::Cpu& c) {
    WP_ENTER(0x1074c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1074c78u: goto R_01074c78;
        case 0x1074c7cu: goto R_01074c7c;
        case 0x1074ca0u: goto R_01074ca0;
        case 0x1074ca4u: goto R_01074ca4;
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
    if (wp::cr_get(c, 2)) goto L_01074c8c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x144u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074c78u;
    wp::call(c, c.ctr);
R_01074c78:
    c.lr = 0x1074c7cu;
    f_80043140(c);
R_01074c7c:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    goto L_01074cb0;
L_01074c8c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x148u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074ca0u;
    wp::call(c, c.ctr);
R_01074ca0:
    c.lr = 0x1074ca4u;
    f_80043140(c);
R_01074ca4:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
L_01074cb0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_01074cc0(wp::Cpu& c) {
    WP_ENTER(0x1074cc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1074cd4u: goto R_01074cd4;
        case 0x1074cfcu: goto R_01074cfc;
        case 0x1074d18u: goto R_01074d18;
        case 0x1074d20u: goto R_01074d20;
        case 0x1074d48u: goto R_01074d48;
        case 0x1074da0u: goto R_01074da0;
        case 0x1074dbcu: goto R_01074dbc;
        case 0x1074de8u: goto R_01074de8;
        case 0x1074e14u: goto R_01074e14;
        case 0x1074e3cu: goto R_01074e3c;
        case 0x1074e58u: goto R_01074e58;
        case 0x1074e7cu: goto R_01074e7c;
        case 0x1074e98u: goto R_01074e98;
        case 0x1074eb0u: goto R_01074eb0;
        case 0x1074ed8u: goto R_01074ed8;
        case 0x1074ef0u: goto R_01074ef0;
        case 0x1074f20u: goto R_01074f20;
        case 0x1074f68u: goto R_01074f68;
        case 0x1074f78u: goto R_01074f78;
        case 0x1074fa0u: goto R_01074fa0;
        case 0x1074fbcu: goto R_01074fbc;
        case 0x1074fd4u: goto R_01074fd4;
        case 0x1074ff4u: goto R_01074ff4;
        case 0x1075018u: goto R_01075018;
        case 0x107503cu: goto R_0107503c;
        case 0x1075060u: goto R_01075060;
        case 0x1075068u: goto R_01075068;
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
    c.lr = 0x1074cd4u;
    f_801c83ac(c);
R_01074cd4:
    c.r[0] = 0x43300000u;
    c.r[28] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1074cfcu;
    f_8003cc90(c);
R_01074cfc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074d18u;
    wp::call(c, c.ctr);
R_01074d18:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1074d20u;
    f_8003d2d0(c);
R_01074d20:
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
    c.lr = 0x1074d48u;
    wp::call(c, c.ctr);
R_01074d48:
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
    c.lr = 0x1074da0u;
    wp::call(c, c.ctr);
R_01074da0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074dbcu;
    wp::call(c, c.ctr);
R_01074dbc:
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
    c.lr = 0x1074de8u;
    wp::call(c, c.ctr);
R_01074de8:
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
    c.lr = 0x1074e14u;
    wp::call(c, c.ctr);
R_01074e14:
    ea = c.r[27] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074e7c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074e3cu;
    wp::call(c, c.ctr);
R_01074e3c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074e58u;
    wp::call(c, c.ctr);
R_01074e58:
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
    c.lr = 0x1074e7cu;
    wp::call(c, c.ctr);
L_01074e7c:
R_01074e7c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074e98u;
    wp::call(c, c.ctr);
R_01074e98:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074eb0u;
    wp::call(c, c.ctr);
R_01074eb0:
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
    c.lr = 0x1074ed8u;
    f_801cf394(c);
R_01074ed8:
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074ee8;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_01074ee8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1074ef0u;
    f_8003cfb0(c);
R_01074ef0:
    c.r[0] = 0x0u;
    c.r[26] = ((((g_mr051_bases[4] + 0x2598u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr051_bases[4] + 0x2598u) & 0xFFFFu);
    c.r[24] = 0x0u;
    ea = c.r[29] + 0x188u;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ((((g_mr051_bases[5] + 0x275e8u) + 0x8000u) >> 16) << 16);
    goto L_01074f80;
L_01074f14:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x1074f20u;
    f_801cf510(c);
R_01074f20:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01074f6c;
    c.r[0] = c.r[24] * 0xcu;
    c.r[4] = ((((g_mr051_bases[4] + 0x2598u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x194u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x2598u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_01074f8c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + 0xau;
    c.r[4] = wp::rd16(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074f68u;
    wp::call(c, c.ctr);
R_01074f68:
    goto L_01074f8c;
L_01074f6c:
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + wp::sign_extend16((g_mr051_bases[5] + 0x275e8u) & 0xFFFFu);
    c.lr = 0x1074f78u;
    f_801cf510(c);
R_01074f78:
    c.r[26] = c.r[26] + 0xcu;
    c.r[24] = c.r[24] + 0x1u;
L_01074f80:
    ea = c.r[26] + 0x0u;
    c.r[28] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01074f14;
    }
L_01074f8c:
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074ff4;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1074fa0u;
    f_8003d2d0(c);
R_01074fa0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x194u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074fbcu;
    wp::call(c, c.ctr);
R_01074fbc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1074fd4u;
    wp::call(c, c.ctr);
R_01074fd4:
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
    c.lr = 0x1074ff4u;
    wp::call(c, c.ctr);
L_01074ff4:
R_01074ff4:
    ea = c.r[29] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075018;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075018u;
    wp::call(c, c.ctr);
L_01075018:
R_01075018:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107503c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107503cu;
    wp::call(c, c.ctr);
L_0107503c:
R_0107503c:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075060;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075060u;
    wp::call(c, c.ctr);
L_01075060:
R_01075060:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1075068u;
    f_801c83f8(c);
R_01075068:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr051_01075080(wp::Cpu& c) {
    WP_ENTER(0x1075080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10750a8u: goto R_010750a8;
        case 0x10750b0u: goto R_010750b0;
        case 0x10750ccu: goto R_010750cc;
        case 0x10750e4u: goto R_010750e4;
        case 0x107510cu: goto R_0107510c;
        case 0x1075130u: goto R_01075130;
        case 0x1075154u: goto R_01075154;
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
    c.lr = 0x10750a8u;
    f_mr051_01070600(c);
R_010750a8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10750b0u;
    f_mr051_01072a50(c);
R_010750b0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10750ccu;
    wp::call(c, c.ctr);
R_010750cc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10750e4u;
    wp::call(c, c.ctr);
R_010750e4:
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
    c.lr = 0x107510cu;
    f_801cf394(c);
R_0107510c:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075130;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075130u;
    wp::call(c, c.ctr);
L_01075130:
R_01075130:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075154;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075154u;
    wp::call(c, c.ctr);
L_01075154:
R_01075154:
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

void f_mr051_01075170(wp::Cpu& c) {
    WP_ENTER(0x1075170u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10751a4u: goto R_010751a4;
        case 0x10751c4u: goto R_010751c4;
        case 0x10751dcu: goto R_010751dc;
        case 0x1075204u: goto R_01075204;
        case 0x107522cu: goto R_0107522c;
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
    c.lr = 0x10751a4u;
    f_8003cc90(c);
R_010751a4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10751c4u;
    wp::call(c, c.ctr);
R_010751c4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10751dcu;
    wp::call(c, c.ctr);
R_010751dc:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075204;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075204u;
    wp::call(c, c.ctr);
L_01075204:
R_01075204:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107522c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107522cu;
    wp::call(c, c.ctr);
L_0107522c:
R_0107522c:
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

void f_mr051_01075250(wp::Cpu& c) {
    WP_ENTER(0x1075250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075264u: goto R_01075264;
        case 0x1075278u: goto R_01075278;
        case 0x1075290u: goto R_01075290;
        case 0x10752a0u: goto R_010752a0;
        case 0x10752b8u: goto R_010752b8;
        case 0x10752e0u: goto R_010752e0;
        case 0x1075308u: goto R_01075308;
        case 0x1075310u: goto R_01075310;
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
    c.lr = 0x1075264u;
    f_801c83b8(c);
R_01075264:
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[6] | c.r[6];
    c.lr = 0x1075278u;
    f_mr051_01070600(c);
R_01075278:
    c.r[5] = ((((g_mr051_bases[5] + 0x272f8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x272f8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1075290u;
    f_801d34c4(c);
R_01075290:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10752a0u;
    f_mr051_01073950(c);
R_010752a0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10752b8u;
    wp::call(c, c.ctr);
R_010752b8:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010752e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10752e0u;
    wp::call(c, c.ctr);
L_010752e0:
R_010752e0:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075308;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075308u;
    wp::call(c, c.ctr);
L_01075308:
R_01075308:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1075310u;
    f_801c8404(c);
R_01075310:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_01075320(wp::Cpu& c) {
    WP_ENTER(0x1075320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075368u: goto R_01075368;
        case 0x1075388u: goto R_01075388;
        case 0x10753a0u: goto R_010753a0;
        case 0x10753c8u: goto R_010753c8;
        case 0x10753f0u: goto R_010753f0;
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
    c.r[5] = ((((g_mr051_bases[5] + 0x272c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x272c0u) & 0xFFFFu);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1075368u;
    f_801d3590(c);
R_01075368:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x1075388u;
    wp::call(c, c.ctr);
R_01075388:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10753a0u;
    wp::call(c, c.ctr);
R_010753a0:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010753c8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10753c8u;
    wp::call(c, c.ctr);
L_010753c8:
R_010753c8:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010753f0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10753f0u;
    wp::call(c, c.ctr);
L_010753f0:
R_010753f0:
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

void f_mr051_01075410(wp::Cpu& c) {
    WP_ENTER(0x1075410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075444u: goto R_01075444;
        case 0x1075464u: goto R_01075464;
        case 0x107547cu: goto R_0107547c;
        case 0x10754a4u: goto R_010754a4;
        case 0x10754ccu: goto R_010754cc;
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
    c.lr = 0x1075444u;
    f_80010060(c);
R_01075444:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x1075464u;
    wp::call(c, c.ctr);
R_01075464:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107547cu;
    wp::call(c, c.ctr);
R_0107547c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010754a4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10754a4u;
    wp::call(c, c.ctr);
L_010754a4:
R_010754a4:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010754cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10754ccu;
    wp::call(c, c.ctr);
L_010754cc:
R_010754cc:
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

void f_mr051_010754f0(wp::Cpu& c) {
    WP_ENTER(0x10754f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075504u: goto R_01075504;
        case 0x107551cu: goto R_0107551c;
        case 0x1075530u: goto R_01075530;
        case 0x1075558u: goto R_01075558;
        case 0x1075568u: goto R_01075568;
        case 0x107558cu: goto R_0107558c;
        case 0x10755ecu: goto R_010755ec;
        case 0x107566cu: goto R_0107566c;
        case 0x10756d4u: goto R_010756d4;
        case 0x1075708u: goto R_01075708;
        case 0x107571cu: goto R_0107571c;
        case 0x107572cu: goto R_0107572c;
        case 0x107574cu: goto R_0107574c;
        case 0x1075764u: goto R_01075764;
        case 0x107578cu: goto R_0107578c;
        case 0x10757b4u: goto R_010757b4;
        case 0x10757bcu: goto R_010757bc;
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
    c.lr = 0x1075504u;
    f_801c83ac(c);
R_01075504:
    c.r[29] = c.r[5] | c.r[5];
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107551cu;
    f_8006c450(c);
R_0107551c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01075720;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1075530u;
    f_8006c460(c);
R_01075530:
    c.r[25] = ((((g_mr051_bases[5] + 0x272c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mr051_bases[5] + 0x272c8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1075558u;
    f_801c7860(c);
R_01075558:
    c.r[24] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[24] | c.r[24];
    c.lr = 0x1075568u;
    f_mr051_01016cc0(c);
R_01075568:
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
    c.lr = 0x107558cu;
    f_mr051_01016e80(c);
R_0107558c:
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
    if (!wp::cr_get(c, 2)) goto L_010755c8;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010755cc;
L_010755c8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010755cc:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10755ecu;
    f_mr051_01016e80(c);
R_010755ec:
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
    if (!wp::cr_get(c, 2)) goto L_01075648;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0107564c;
L_01075648:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0107564c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x107566cu;
    f_mr051_01016e80(c);
R_0107566c:
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
    if (!wp::cr_get(c, 2)) goto L_010756b0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010756b4;
L_010756b0:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010756b4:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10756d4u;
    f_mr051_01016e80(c);
R_010756d4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010756f0;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010756f4;
L_010756f0:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010756f4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075708u;
    wp::call(c, c.ctr);
R_01075708:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107574c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107571cu;
    f_801c7a8c(c);
R_0107571c:
    goto L_0107574c;
L_01075720:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x107572cu;
    f_8006c4e0(c);
R_0107572c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x107574cu;
    wp::call(c, c.ctr);
L_0107574c:
R_0107574c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075764u;
    wp::call(c, c.ctr);
R_01075764:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107578c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107578cu;
    wp::call(c, c.ctr);
L_0107578c:
R_0107578c:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010757b4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10757b4u;
    wp::call(c, c.ctr);
L_010757b4:
R_010757b4:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10757bcu;
    f_801c83f8(c);
R_010757bc:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_010757d0(wp::Cpu& c) {
    WP_ENTER(0x10757d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10757fcu: goto R_010757fc;
        case 0x1075818u: goto R_01075818;
        case 0x1075830u: goto R_01075830;
        case 0x1075854u: goto R_01075854;
        case 0x1075878u: goto R_01075878;
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
    c.lr = 0x10757fcu;
    f_80010060(c);
R_010757fc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075818u;
    wp::call(c, c.ctr);
R_01075818:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075830u;
    wp::call(c, c.ctr);
R_01075830:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075854;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075854u;
    wp::call(c, c.ctr);
L_01075854:
R_01075854:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075878;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075878u;
    wp::call(c, c.ctr);
L_01075878:
R_01075878:
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

void f_mr051_010758a0(wp::Cpu& c) {
    WP_ENTER(0x10758a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10758b4u: goto R_010758b4;
        case 0x10758c8u: goto R_010758c8;
        case 0x10758dcu: goto R_010758dc;
        case 0x1075904u: goto R_01075904;
        case 0x1075914u: goto R_01075914;
        case 0x1075938u: goto R_01075938;
        case 0x1075998u: goto R_01075998;
        case 0x1075a18u: goto R_01075a18;
        case 0x1075a80u: goto R_01075a80;
        case 0x1075ab0u: goto R_01075ab0;
        case 0x1075ac4u: goto R_01075ac4;
        case 0x1075ad4u: goto R_01075ad4;
        case 0x1075af0u: goto R_01075af0;
        case 0x1075b08u: goto R_01075b08;
        case 0x1075b2cu: goto R_01075b2c;
        case 0x1075b50u: goto R_01075b50;
        case 0x1075b58u: goto R_01075b58;
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
    c.lr = 0x10758b4u;
    f_801c83b0(c);
R_010758b4:
    c.r[30] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10758c8u;
    f_8006c450(c);
R_010758c8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01075ac8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10758dcu;
    f_8006c460(c);
R_010758dc:
    c.r[26] = ((((g_mr051_bases[5] + 0x272c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr051_bases[5] + 0x272c8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1075904u;
    f_801c7860(c);
R_01075904:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x1075914u;
    f_mr051_01016cc0(c);
R_01075914:
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
    c.lr = 0x1075938u;
    f_mr051_01016e80(c);
R_01075938:
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
    if (!wp::cr_get(c, 2)) goto L_01075974;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01075978;
L_01075974:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01075978:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x1075998u;
    f_mr051_01016e80(c);
R_01075998:
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
    if (!wp::cr_get(c, 2)) goto L_010759f4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010759f8;
L_010759f4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010759f8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1075a18u;
    f_mr051_01016e80(c);
R_01075a18:
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
    if (!wp::cr_get(c, 2)) goto L_01075a5c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01075a60;
L_01075a5c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01075a60:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1075a80u;
    f_mr051_01016e80(c);
R_01075a80:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01075a9c;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01075aa0;
L_01075a9c:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01075aa0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075ab0u;
    wp::call(c, c.ctr);
R_01075ab0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01075af0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1075ac4u;
    f_801c7a8c(c);
R_01075ac4:
    goto L_01075af0;
L_01075ac8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1075ad4u;
    f_8006c4e0(c);
R_01075ad4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075af0u;
    wp::call(c, c.ctr);
L_01075af0:
R_01075af0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075b08u;
    wp::call(c, c.ctr);
R_01075b08:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075b2c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075b2cu;
    wp::call(c, c.ctr);
L_01075b2c:
R_01075b2c:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075b50;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075b50u;
    wp::call(c, c.ctr);
L_01075b50:
R_01075b50:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1075b58u;
    f_801c83fc(c);
R_01075b58:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_01075b70(wp::Cpu& c) {
    WP_ENTER(0x1075b70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075bb8u: goto R_01075bb8;
        case 0x1075bdcu: goto R_01075bdc;
        case 0x1075c04u: goto R_01075c04;
        case 0x1075c2cu: goto R_01075c2c;
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
    c.lr = 0x1075bb8u;
    wp::call(c, c.ctr);
R_01075bb8:
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
    c.lr = 0x1075bdcu;
    wp::call(c, c.ctr);
R_01075bdc:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075c04;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075c04u;
    wp::call(c, c.ctr);
L_01075c04:
R_01075c04:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075c2c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075c2cu;
    wp::call(c, c.ctr);
L_01075c2c:
R_01075c2c:
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

void f_mr051_01075c50(wp::Cpu& c) {
    WP_ENTER(0x1075c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mr051_bases[6] + 0x4e88u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr051_bases[6] + 0x4e88u) & 0xFFFFu);
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mr051_01075c70(wp::Cpu& c) {
    WP_ENTER(0x1075c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075ca0u: goto R_01075ca0;
        case 0x1075cc0u: goto R_01075cc0;
        case 0x1075cf0u: goto R_01075cf0;
        case 0x1075cf8u: goto R_01075cf8;
        case 0x1075d0cu: goto R_01075d0c;
        case 0x1075d1cu: goto R_01075d1c;
        case 0x1075d30u: goto R_01075d30;
        case 0x1075d4cu: goto R_01075d4c;
        case 0x1075d54u: goto R_01075d54;
        case 0x1075d68u: goto R_01075d68;
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
    c.lr = 0x1075ca0u;
    wp::call(c, c.ctr);
R_01075ca0:
    c.r[31] = 0x0u;
    goto L_01075cc8;
L_01075ca8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075cc0u;
    wp::call(c, c.ctr);
R_01075cc0:
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_01075cc8:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01075ca8;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075cf0u;
    wp::call(c, c.ctr);
R_01075cf0:
    goto L_01075cf8;
L_01075cf4:
    c.lr = 0x1075cf8u;
    f_8006a940(c);
L_01075cf8:
R_01075cf8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075d0cu;
    wp::call(c, c.ctr);
R_01075d0c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01075cf4;
    }
    goto L_01075d1c;
L_01075d18:
    c.lr = 0x1075d1cu;
    f_8006a940(c);
L_01075d1c:
R_01075d1c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075d30u;
    wp::call(c, c.ctr);
R_01075d30:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01075d18;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xa4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075d4cu;
    wp::call(c, c.ctr);
R_01075d4c:
    goto L_01075d54;
L_01075d50:
    c.lr = 0x1075d54u;
    f_8006a940(c);
L_01075d54:
R_01075d54:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075d68u;
    wp::call(c, c.ctr);
R_01075d68:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01075d50;
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

void f_mr051_01075d90(wp::Cpu& c) {
    WP_ENTER(0x1075d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075db8u: goto R_01075db8;
        case 0x1075ddcu: goto R_01075ddc;
        case 0x1075e00u: goto R_01075e00;
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
    c.lr = 0x1075db8u;
    f_80043290(c);
R_01075db8:
    ea = c.r[31] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075ddc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075ddcu;
    wp::call(c, c.ctr);
L_01075ddc:
R_01075ddc:
    ea = c.r[31] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075e00;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075e00u;
    wp::call(c, c.ctr);
L_01075e00:
R_01075e00:
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

void f_mr051_01075e20(wp::Cpu& c) {
    WP_ENTER(0x1075e20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075e40u: goto R_01075e40;
        case 0x1075e60u: goto R_01075e60;
        case 0x1075e80u: goto R_01075e80;
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
    c.lr = 0x1075e40u;
    f_800402f0(c);
R_01075e40:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075e60;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075e60u;
    wp::call(c, c.ctr);
L_01075e60:
R_01075e60:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075e80;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075e80u;
    wp::call(c, c.ctr);
L_01075e80:
R_01075e80:
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

void f_mr051_01075ea0(wp::Cpu& c) {
    WP_ENTER(0x1075ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075ec8u: goto R_01075ec8;
        case 0x1075ee4u: goto R_01075ee4;
        case 0x1075f14u: goto R_01075f14;
        case 0x1075f34u: goto R_01075f34;
        case 0x1075f48u: goto R_01075f48;
        case 0x1075f78u: goto R_01075f78;
        case 0x1075f98u: goto R_01075f98;
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
    c.lr = 0x1075ec8u;
    f_801c79a4(c);
R_01075ec8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075ee4;
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x1075ee4u;
    f_mr051_01031060(c);
L_01075ee4:
R_01075ee4:
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01075f14;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01075f14;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075f14u;
    wp::call(c, c.ctr);
L_01075f14:
R_01075f14:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr051_bases[5] + 0x27600u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x198u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27600u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1075f34u;
    wp::call(c, c.ctr);
R_01075f34:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[6] = 0x1u;
    c.lr = 0x1075f48u;
    f_80043490(c);
R_01075f48:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01075f78;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075f78u;
    wp::call(c, c.ctr);
L_01075f78:
R_01075f78:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01075f98;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075f98u;
    wp::call(c, c.ctr);
L_01075f98:
R_01075f98:
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

void f_mr051_01075fc0(wp::Cpu& c) {
    WP_ENTER(0x1075fc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1075fe0u: goto R_01075fe0;
        case 0x1075ffcu: goto R_01075ffc;
        case 0x1076010u: goto R_01076010;
        case 0x1076024u: goto R_01076024;
        case 0x1076038u: goto R_01076038;
        case 0x107604cu: goto R_0107604c;
        case 0x1076070u: goto R_01076070;
        case 0x1076088u: goto R_01076088;
        case 0x10760a4u: goto R_010760a4;
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
    c.lr = 0x1075fe0u;
    f_mr051_01070600(c);
R_01075fe0:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1075ffcu;
    wp::call(c, c.ctr);
R_01075ffc:
    c.r[31] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1076010u;
    f_80071fe0(c);
R_01076010:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0107602c;
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1076024u;
    f_80071fe0(c);
R_01076024:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
    goto L_01076050;
L_0107602c:
    c.r[31] = ((((g_mr051_bases[4] + 0x256cu) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x256cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1076038u;
    f_80071fe0(c);
R_01076038:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01076050;
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x256cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107604cu;
    f_80071fe0(c);
R_0107604c:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
L_01076050:
    ea = c.r[29] + 0x194u;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010760a4;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076070u;
    wp::call(c, c.ctr);
R_01076070:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076088u;
    wp::call(c, c.ctr);
R_01076088:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10760a4u;
    wp::call(c, c.ctr);
L_010760a4:
R_010760a4:
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

void f_mr051_010760c0(wp::Cpu& c) {
    WP_ENTER(0x10760c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10760d4u: goto R_010760d4;
        case 0x10760f4u: goto R_010760f4;
        case 0x107611cu: goto R_0107611c;
        case 0x1076160u: goto R_01076160;
        case 0x1076178u: goto R_01076178;
        case 0x107618cu: goto R_0107618c;
        case 0x1076198u: goto R_01076198;
        case 0x10761a0u: goto R_010761a0;
        case 0x10761ccu: goto R_010761cc;
        case 0x1076214u: goto R_01076214;
        case 0x1076260u: goto R_01076260;
        case 0x1076274u: goto R_01076274;
        case 0x107628cu: goto R_0107628c;
        case 0x10762a8u: goto R_010762a8;
        case 0x10762b8u: goto R_010762b8;
        case 0x10762c4u: goto R_010762c4;
        case 0x10762d4u: goto R_010762d4;
        case 0x10762d8u: goto R_010762d8;
        case 0x10762e0u: goto R_010762e0;
        case 0x107630cu: goto R_0107630c;
        case 0x1076318u: goto R_01076318;
        case 0x1076324u: goto R_01076324;
        case 0x1076334u: goto R_01076334;
        case 0x1076338u: goto R_01076338;
        case 0x1076340u: goto R_01076340;
        case 0x1076370u: goto R_01076370;
        case 0x1076398u: goto R_01076398;
        case 0x10763a4u: goto R_010763a4;
        case 0x10763b4u: goto R_010763b4;
        case 0x10763b8u: goto R_010763b8;
        case 0x10763c0u: goto R_010763c0;
        case 0x1076430u: goto R_01076430;
        case 0x1076464u: goto R_01076464;
        case 0x1076480u: goto R_01076480;
        case 0x10764a8u: goto R_010764a8;
        case 0x10764c4u: goto R_010764c4;
        case 0x10764e4u: goto R_010764e4;
        case 0x107650cu: goto R_0107650c;
        case 0x1076548u: goto R_01076548;
        case 0x1076570u: goto R_01076570;
        case 0x10765b0u: goto R_010765b0;
        case 0x10765ccu: goto R_010765cc;
        case 0x1076620u: goto R_01076620;
        case 0x1076628u: goto R_01076628;
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
    c.lr = 0x10760d4u;
    f_801c83ac(c);
R_010760d4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    ea = c.r[12] + 0xa0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x10760f4u;
    wp::call(c, c.ctr);
R_010760f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107611c;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107611c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107611cu;
    wp::call(c, c.ctr);
L_0107611c:
R_0107611c:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010761a0;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076140;
    ea = c.r[28] + 0x186u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107614c;
L_01076140:
    ea = c.r[28] + 0x187u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076164;
L_0107614c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076160u;
    wp::call(c, c.ctr);
R_01076160:
    goto L_01076178;
L_01076164:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076178u;
    wp::call(c, c.ctr);
L_01076178:
R_01076178:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107618cu;
    wp::call(c, c.ctr);
R_0107618c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010761a0;
    c.lr = 0x1076198u;
    f_8004a110(c);
R_01076198:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x10761a0u;
    f_8004a100(c);
L_010761a0:
R_010761a0:
    ea = c.r[28] + 0x140u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01076620;
    ea = c.r[28] + 0x150u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01076224;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10761ccu;
    wp::call(c, c.ctr);
R_010761cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076620;
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010761ec;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[0]);
L_010761ec:
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01076214;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076214u;
    wp::call(c, c.ctr);
L_01076214:
R_01076214:
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01076224;
    goto L_01076620;
L_01076224:
    ea = c.r[28] + 0x16au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107650c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107650c;
    ea = c.r[28] + 0x16cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01076254;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    goto L_01076620;
L_01076254:
    c.r[30] = 0x0u;
    c.r[29] = 0x1u;
    c.lr = 0x1076260u;
    f_8000e2a0(c);
R_01076260:
    c.r[25] = c.r[3] | c.r[3];
    c.r[24] = 0x0u;
    c.r[26] = 0x1u;
L_0107626c:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1076274u;
    f_8000fc20(c);
R_01076274:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = wp::slw(c.r[26], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107628cu;
    wp::call(c, c.ctr);
R_0107628c:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[0] & c.r[27];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010762ec;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010762b0;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10762a8u;
    f_8000fc40(c);
R_010762a8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010762ec;
L_010762b0:
    c.r[29] = 0x0u;
    c.lr = 0x10762b8u;
    f_8000dd70(c);
R_010762b8:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10762c4u;
    f_8000fc20(c);
R_010762c4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010762ec;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10762d4u;
    f_8000fc20(c);
R_010762d4:
    c.lr = 0x10762d8u;
    f_800699d0(c);
R_010762d8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10762e0u;
    f_80066cd0(c);
R_010762e0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010762ec;
    c.r[30] = 0x1u;
L_010762ec:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107626c;
    }
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076358;
    c.r[24] = 0x0u;
L_01076304:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x107630cu;
    f_8000fc40(c);
R_0107630c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107634c;
    c.lr = 0x1076318u;
    f_8000dd70(c);
R_01076318:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1076324u;
    f_8000fc20(c);
R_01076324:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0107634c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1076334u;
    f_8000fc20(c);
R_01076334:
    c.lr = 0x1076338u;
    f_800699d0(c);
R_01076338:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1076340u;
    f_80066cd0(c);
R_01076340:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107634c;
    c.r[30] = 0x1u;
L_0107634c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01076304;
    }
L_01076358:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010763d8;
    c.r[24] = 0x1u;
    c.r[25] = 0x0u;
L_01076368:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1076370u;
    f_8000fc40(c);
R_01076370:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107637c;
    c.r[24] = 0x0u;
L_0107637c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01076368;
    }
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010763d8;
    c.r[24] = 0x0u;
L_01076394:
    c.lr = 0x1076398u;
    f_8000dd70(c);
R_01076398:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10763a4u;
    f_8000fc20(c);
R_010763a4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010763cc;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10763b4u;
    f_8000fc20(c);
R_010763b4:
    c.lr = 0x10763b8u;
    f_800699d0(c);
R_010763b8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10763c0u;
    f_80066cd0(c);
R_010763c0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010763cc;
    c.r[30] = 0x1u;
L_010763cc:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01076394;
    }
L_010763d8:
    ea = c.r[28] + 0x15eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076408;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076408;
    ea = c.r[28] + 0x160u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01076408;
    c.r[30] = 0x1u;
L_01076408:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107650c;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107650c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076430u;
    wp::call(c, c.ctr);
R_01076430:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01076480;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076480;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076480;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076464u;
    wp::call(c, c.ctr);
R_01076464:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076480;
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[31] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1076480u;
    f_80018e30(c);
L_01076480:
R_01076480:
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
    c.lr = 0x10764a8u;
    wp::call(c, c.ctr);
R_010764a8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x180u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10764c4u;
    wp::call(c, c.ctr);
R_010764c4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010764e8;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x17cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10764e4u;
    wp::call(c, c.ctr);
R_010764e4:
    goto L_010764f4;
L_010764e8:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_010764f4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107650cu;
    wp::call(c, c.ctr);
L_0107650c:
R_0107650c:
    ea = c.r[28] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107657c;
    ea = c.r[28] + 0x15du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107657c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107657c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076548u;
    wp::call(c, c.ctr);
R_01076548:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107657c;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107657c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076570u;
    wp::call(c, c.ctr);
R_01076570:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107657c;
    c.r[30] = 0x1u;
L_0107657c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076620;
    ea = c.r[31] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01076600;
    c.r[24] = 0x0u;
    c.r[29] = 0x1u;
L_0107659c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10765b0u;
    wp::call(c, c.ctr);
R_010765b0:
    c.r[3] = c.r[3] & 0xffffu;
    c.r[0] = wp::slw(c.r[29], c.r[24]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010765f4;
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.lr = 0x10765ccu;
    f_8000ffd0(c);
R_010765cc:
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
    goto L_01076600;
L_010765f4:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107659c;
    }
L_01076600:
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
    c.lr = 0x1076620u;
    wp::call(c, c.ctr);
L_01076620:
R_01076620:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1076628u;
    f_801c83f8(c);
R_01076628:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr051_01076640(wp::Cpu& c) {
    WP_ENTER(0x1076640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mr051_01076650(wp::Cpu& c) {
    WP_ENTER(0x1076650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr051_bases[4] + 0x2524u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x2524u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x0u;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01076678;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076678;
    c.r[4] = 0x1u;
L_01076678:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr051_01076680(wp::Cpu& c) {
    WP_ENTER(0x1076680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10766b8u: goto R_010766b8;
        case 0x10766d0u: goto R_010766d0;
        case 0x10766d8u: goto R_010766d8;
        case 0x1076704u: goto R_01076704;
        case 0x107671cu: goto R_0107671c;
        case 0x1076724u: goto R_01076724;
        case 0x1076750u: goto R_01076750;
        case 0x1076768u: goto R_01076768;
        case 0x1076770u: goto R_01076770;
        case 0x107679cu: goto R_0107679c;
        case 0x10767b4u: goto R_010767b4;
        case 0x10767bcu: goto R_010767bc;
        case 0x10767ccu: goto R_010767cc;
        case 0x10767e4u: goto R_010767e4;
        case 0x10767fcu: goto R_010767fc;
        case 0x1076814u: goto R_01076814;
        case 0x107682cu: goto R_0107682c;
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
    if (wp::cr_get(c, 2)) goto L_010766d8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10766b8u;
    wp::call(c, c.ctr);
R_010766b8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10766d0u;
    wp::call(c, c.ctr);
R_010766d0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10766d8u;
    f_80019f20(c);
L_010766d8:
R_010766d8:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076818;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076724;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076704u;
    wp::call(c, c.ctr);
R_01076704:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107671cu;
    wp::call(c, c.ctr);
R_0107671c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1076724u;
    f_80019f20(c);
L_01076724:
R_01076724:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076800;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076770;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076750u;
    wp::call(c, c.ctr);
R_01076750:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076768u;
    wp::call(c, c.ctr);
R_01076768:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1076770u;
    f_80019f20(c);
L_01076770:
R_01076770:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010767e8;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010767bc;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107679cu;
    wp::call(c, c.ctr);
R_0107679c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10767b4u;
    wp::call(c, c.ctr);
R_010767b4:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10767bcu;
    f_80019f20(c);
L_010767bc:
R_010767bc:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010767d0;
    c.lr = 0x10767ccu;
    f_mr051_01076680(c);
R_010767cc:
    goto L_0107682c;
L_010767d0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10767e4u;
    wp::call(c, c.ctr);
R_010767e4:
    goto L_0107682c;
L_010767e8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10767fcu;
    wp::call(c, c.ctr);
R_010767fc:
    goto L_0107682c;
L_01076800:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076814u;
    wp::call(c, c.ctr);
R_01076814:
    goto L_0107682c;
L_01076818:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107682cu;
    wp::call(c, c.ctr);
L_0107682c:
R_0107682c:
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

void f_mr051_01076850(wp::Cpu& c) {
    WP_ENTER(0x1076850u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1076898u: goto R_01076898;
        case 0x10768c8u: goto R_010768c8;
        case 0x10768d0u: goto R_010768d0;
        case 0x10768ecu: goto R_010768ec;
        case 0x10768f4u: goto R_010768f4;
        case 0x1076914u: goto R_01076914;
        case 0x107691cu: goto R_0107691c;
        case 0x1076940u: goto R_01076940;
        case 0x1076964u: goto R_01076964;
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
    c.r[31] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
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
    c.lr = 0x1076898u;
    wp::call(c, c.ctr);
R_01076898:
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010768b0;
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010768d4;
L_010768b0:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10768c8u;
    wp::call(c, c.ctr);
R_010768c8:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10768d0u;
    f_80043120(c);
R_010768d0:
    goto L_010768f4;
L_010768d4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10768ecu;
    wp::call(c, c.ctr);
R_010768ec:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10768f4u;
    f_80043120(c);
L_010768f4:
R_010768f4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107691c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076914u;
    wp::call(c, c.ctr);
R_01076914:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107691cu;
    f_80043060(c);
L_0107691c:
R_0107691c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076940;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076940u;
    wp::call(c, c.ctr);
L_01076940:
R_01076940:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076964;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076964u;
    wp::call(c, c.ctr);
L_01076964:
R_01076964:
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

void f_mr051_01076990(wp::Cpu& c) {
    WP_ENTER(0x1076990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr051_010769a0(wp::Cpu& c) {
    WP_ENTER(0x10769a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1076a30u: goto R_01076a30;
        case 0x1076a54u: goto R_01076a54;
        case 0x1076a90u: goto R_01076a90;
        case 0x1076aa4u: goto R_01076aa4;
        case 0x1076ac8u: goto R_01076ac8;
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
    if (wp::cr_get(c, 2)) goto L_01076ac8;
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076a58;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076a58;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076a08;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01076a10;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01076a34;
    goto L_01076a5c;
L_01076a08:
    c.r[31] = 0x1u;
    goto L_01076a5c;
L_01076a10:
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
    c.lr = 0x1076a30u;
    wp::call(c, c.ctr);
R_01076a30:
    goto L_01076a5c;
L_01076a34:
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
    c.lr = 0x1076a54u;
    wp::call(c, c.ctr);
R_01076a54:
    goto L_01076a5c;
L_01076a58:
    c.r[31] = 0x1u;
L_01076a5c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076ac8;
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076ac8;
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
    c.lr = 0x1076a90u;
    wp::call(c, c.ctr);
R_01076a90:
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076aa4u;
    wp::call(c, c.ctr);
R_01076aa4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01076ac8;
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076ac8u;
    wp::call(c, c.ctr);
L_01076ac8:
R_01076ac8:
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

void f_mr051_01076af0(wp::Cpu& c) {
    WP_ENTER(0x1076af0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076b04;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_01076b04:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076b84;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076b84;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076b3c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01076b5c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01076b70;
    return;
L_01076b3c:
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
L_01076b5c:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01076b70:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01076b84:
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

void f_mr051_01076bb0(wp::Cpu& c) {
    WP_ENTER(0x1076bb0u);
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
    if (!wp::cr_get(c, 2)) goto L_01076bd8;
    return;
L_01076bd8:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076c58;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076c58;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01076c10;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01076c30;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01076c44;
    return;
L_01076c10:
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
L_01076c30:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01076c44:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01076c58:
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

void f_mr051_01076c80(wp::Cpu& c) {
    WP_ENTER(0x1076c80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1076cbcu: goto R_01076cbc;
        case 0x1076cd0u: goto R_01076cd0;
        case 0x1076d58u: goto R_01076d58;
        case 0x1076d74u: goto R_01076d74;
        case 0x1076d90u: goto R_01076d90;
        case 0x1076d9cu: goto R_01076d9c;
        case 0x1076da8u: goto R_01076da8;
        case 0x1076db0u: goto R_01076db0;
        case 0x1076dd8u: goto R_01076dd8;
        case 0x1076e48u: goto R_01076e48;
        case 0x1076e78u: goto R_01076e78;
        case 0x1076e84u: goto R_01076e84;
        case 0x1076e90u: goto R_01076e90;
        case 0x1076e9cu: goto R_01076e9c;
        case 0x1076ea8u: goto R_01076ea8;
        case 0x1076ebcu: goto R_01076ebc;
        case 0x1076ec8u: goto R_01076ec8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr051_bases[5] + 0x277b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[4] | c.r[4];
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr051_bases[5] + 0x277b8u) & 0xFFFFu);
    c.lr = 0x1076cbcu;
    f_mr051_0102a1d0(c);
R_01076cbc:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[29] + 0x2bcu;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x1076cd0u;
    f_80063370(c);
R_01076cd0:
    c.r[3] = ((((g_mr051_bases[5] + 0x27bd0u) + 0x8000u) >> 16) << 16);
    c.r[6] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x27bd0u) & 0xFFFFu);
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
    c.lr = 0x1076d58u;
    f_80053d20(c);
R_01076d58:
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
    c.lr = 0x1076d74u;
    f_80053df0(c);
R_01076d74:
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
    c.lr = 0x1076d90u;
    f_mr051_010211e0(c);
R_01076d90:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1000u;
    c.lr = 0x1076d9cu;
    f_80052170(c);
R_01076d9c:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0xcu;
    c.lr = 0x1076da8u;
    f_80052190(c);
R_01076da8:
    c.r[3] = 0x18u;
    c.lr = 0x1076db0u;
    f_801c79a4(c);
R_01076db0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01076e1c;
    c.r[5] = ((((g_mr051_bases[5] + 0x28378u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x35dcu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x28378u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x35dcu) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1076dd8u;
    f_8003b350(c);
R_01076dd8:
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mr051_bases[5] + 0x2838cu) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x2838cu) & 0xFFFFu);
    c.r[4] = ((((g_mr051_bases[5] + 0x27bb8u) + 0x8000u) >> 16) << 16);
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27bb8u) & 0xFFFFu);
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
L_01076e1c:
    ea = c.r[29] + 0x2d4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01076e48;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x2d4u;
    wp::wr32(ea, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01076e48;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1076e48u;
    wp::call(c, c.ctr);
L_01076e48:
R_01076e48:
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
    c.lr = 0x1076e78u;
    wp::call(c, c.ctr);
R_01076e78:
    ea = c.r[29] + 0x2d4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1076e84u;
    f_mr051_01020b30(c);
R_01076e84:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x1076e90u;
    f_mr051_01020c60(c);
R_01076e90:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x1076e9cu;
    f_mr051_01020c80(c);
R_01076e9c:
    ea = c.r[31] + 0x6cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1076ea8u;
    f_mr051_01020c40(c);
R_01076ea8:
    ea = c.r[29] + 0x2ecu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] + 0x54u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x1076ebcu;
    f_80054e60(c);
R_01076ebc:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x1076ec8u;
    f_80056040(c);
R_01076ec8:
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

void f_mr051_01076ef0(wp::Cpu& c) {
    WP_ENTER(0x1076ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1076f28u: goto R_01076f28;
        case 0x1076f38u: goto R_01076f38;
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
    if (wp::cr_get(c, 2)) goto L_01076f38;
    c.r[4] = ((((g_mr051_bases[5] + 0x2838cu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2838cu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1076f28u;
    f_8003b480(c);
R_01076f28:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01076f38;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1076f38u;
    f_801c7a8c(c);
L_01076f38:
R_01076f38:
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

void f_mr051_01076f60(wp::Cpu& c) {
    WP_ENTER(0x1076f60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1076fa0u: goto R_01076fa0;
        case 0x1076fb0u: goto R_01076fb0;
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
    if (wp::cr_get(c, 2)) goto L_01076fb0;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01076fa0;
    c.r[4] = ((((g_mr051_bases[5] + 0x2838cu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2838cu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1076fa0u;
    f_8003b480(c);
L_01076fa0:
R_01076fa0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01076fb0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1076fb0u;
    f_801c7a8c(c);
L_01076fb0:
R_01076fb0:
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

void f_mr051_01076fd0(wp::Cpu& c) {
    WP_ENTER(0x1076fd0u);
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

void f_mr051_01076ff0(wp::Cpu& c) {
    WP_ENTER(0x1076ff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1077034u: goto R_01077034;
        case 0x1077044u: goto R_01077044;
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
    if (wp::cr_get(c, 2)) goto L_01077044;
    if (wp::cr_get(c, 2)) goto L_01077034;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01077034;
    c.r[4] = ((((g_mr051_bases[5] + 0x2838cu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x2838cu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1077034u;
    f_8003b480(c);
L_01077034:
R_01077034:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01077044;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1077044u;
    f_801c7a8c(c);
L_01077044:
R_01077044:
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

void f_mr051_01077060(wp::Cpu& c) {
    WP_ENTER(0x1077060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10770b0u: goto R_010770b0;
        case 0x10770d8u: goto R_010770d8;
        case 0x10770e4u: goto R_010770e4;
        case 0x10770f0u: goto R_010770f0;
        case 0x1077100u: goto R_01077100;
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
    if (wp::cr_get(c, 2)) goto L_01077100;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010770b0;
    if (wp::cr_get(c, 2)) goto L_010770b0;
    if (wp::cr_get(c, 2)) goto L_010770b0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010770b0;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10770b0u;
    f_801c7a8c(c);
L_010770b0:
R_010770b0:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010770d8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010770d8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10770d8u;
    wp::call(c, c.ctr);
L_010770d8:
R_010770d8:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x10770e4u;
    f_80063bb0(c);
R_010770e4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10770f0u;
    f_mr051_0102a700(c);
R_010770f0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01077100;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1077100u;
    f_801c7a8c(c);
L_01077100:
R_01077100:
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

void f_mr051_01077120(wp::Cpu& c) {
    WP_ENTER(0x1077120u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1077134u: goto R_01077134;
        case 0x1077154u: goto R_01077154;
        case 0x10771ecu: goto R_010771ec;
        case 0x1077234u: goto R_01077234;
        case 0x1077290u: goto R_01077290;
        case 0x1077324u: goto R_01077324;
        case 0x107736cu: goto R_0107736c;
        case 0x10773c8u: goto R_010773c8;
        case 0x107740cu: goto R_0107740c;
        case 0x1077444u: goto R_01077444;
        case 0x10774e0u: goto R_010774e0;
        case 0x1077524u: goto R_01077524;
        case 0x1077584u: goto R_01077584;
        case 0x10775c8u: goto R_010775c8;
        case 0x1077624u: goto R_01077624;
        case 0x1077640u: goto R_01077640;
        case 0x1077648u: goto R_01077648;
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
    c.lr = 0x1077134u;
    f_801c83ac(c);
R_01077134:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x1077154u;
    wp::call(c, c.ctr);
R_01077154:
    c.r[4] = ((((g_mr051_bases[5] + 0x277e0u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x277e0u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107719c;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107719c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107719c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077290;
L_0107719c:
    c.r[3] = ((((g_mr051_bases[5] + 0x277e0u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x277e0u) & 0xFFFFu);
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
    c.lr = 0x10771ecu;
    wp::call(c, c.ctr);
R_010771ec:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077234;
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
    c.lr = 0x1077234u;
    wp::call(c, c.ctr);
L_01077234:
R_01077234:
    c.r[3] = ((((g_mr051_bases[5] + 0x277e0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x277e0u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077290;
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
    c.lr = 0x1077290u;
    wp::call(c, c.ctr);
L_01077290:
R_01077290:
    c.r[4] = ((((g_mr051_bases[5] + 0x27840u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27840u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010772d0;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010772d0;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010772d0;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077444;
L_010772d0:
    c.r[3] = ((((g_mr051_bases[5] + 0x27840u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x27840u) & 0xFFFFu);
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
    c.lr = 0x1077324u;
    wp::call(c, c.ctr);
R_01077324:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0107736c;
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
    c.lr = 0x107736cu;
    wp::call(c, c.ctr);
L_0107736c:
R_0107736c:
    c.r[3] = ((((g_mr051_bases[5] + 0x27840u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x27840u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010773c8;
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
    c.lr = 0x10773c8u;
    wp::call(c, c.ctr);
L_010773c8:
R_010773c8:
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
    c.lr = 0x107740cu;
    wp::call(c, c.ctr);
R_0107740c:
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
    c.lr = 0x1077444u;
    wp::call(c, c.ctr);
L_01077444:
R_01077444:
    c.r[4] = ((((g_mr051_bases[5] + 0x278a0u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x278a0u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107748c;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107748c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0107748c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010775c8;
L_0107748c:
    c.r[4] = ((((g_mr051_bases[5] + 0x278a0u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x278a0u) & 0xFFFFu);
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
    c.lr = 0x10774e0u;
    wp::call(c, c.ctr);
R_010774e0:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077524;
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
    c.lr = 0x1077524u;
    wp::call(c, c.ctr);
L_01077524:
R_01077524:
    c.r[3] = ((((g_mr051_bases[5] + 0x278a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x278a0u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077584;
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
    c.lr = 0x1077584u;
    wp::call(c, c.ctr);
L_01077584:
R_01077584:
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
    c.lr = 0x10775c8u;
    wp::call(c, c.ctr);
L_010775c8:
R_010775c8:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01077624;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01077624;
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
    c.lr = 0x1077624u;
    wp::call(c, c.ctr);
L_01077624:
R_01077624:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1077640u;
    wp::call(c, c.ctr);
R_01077640:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x1077648u;
    f_801c83f8(c);
R_01077648:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mr051_01077660(wp::Cpu& c) {
    WP_ENTER(0x1077660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107771cu: goto R_0107771c;
        case 0x1077720u: goto R_01077720;
        case 0x1077780u: goto R_01077780;
        case 0x1077784u: goto R_01077784;
        case 0x1077844u: goto R_01077844;
        case 0x1077848u: goto R_01077848;
        case 0x1077850u: goto R_01077850;
        case 0x1077878u: goto R_01077878;
        case 0x107787cu: goto R_0107787c;
        case 0x10779d4u: goto R_010779d4;
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
    if (!wp::cr_get(c, 0)) goto L_010776ec;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010776dc;
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
L_010776dc:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_010779d4;
L_010776ec:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01077720;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27354u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27354u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x107771cu;
    f_801cee24(c);
R_0107771c:
    c.lr = 0x1077720u;
    f_801d3940(c);
L_01077720:
R_01077720:
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
    if (!wp::cr_get(c, 1)) goto L_01077784;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27354u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27354u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1077780u;
    f_801cee24(c);
R_01077780:
    c.lr = 0x1077784u;
    f_801d3940(c);
L_01077784:
R_01077784:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010777d4;
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
    if (!wp::cr_get(c, 0)) goto L_010777c8;
    c.r[3] = c.r[1] + 0x10u;
L_010777c8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01077818;
L_010777d4:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01077810;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01077804;
    c.r[3] = c.r[1] + 0x10u;
L_01077804:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_01077818;
L_01077810:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_01077818:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01077848;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27354u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27354u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1077844u;
    f_801cee24(c);
R_01077844:
    c.lr = 0x1077848u;
    f_801d3940(c);
L_01077848:
R_01077848:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x1077850u;
    f_801c79a4(c);
R_01077850:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0107787c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x28420u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28420u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1077878u;
    f_801cee24(c);
R_01077878:
    c.lr = 0x107787cu;
    f_801d3940(c);
L_0107787c:
R_0107787c:
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
    if (wp::cr_get(c, 2)) goto L_010778dc;
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
L_010778dc:
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
    if (!wp::cr_get(c, 1)) goto L_01077988;
    c.r[0] = c.r[0] | 0x0u;
L_01077928:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_0107796c;
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
L_0107796c:
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
    goto L_01077928;
    }
L_01077988:
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
    if (wp::cr_get(c, 2)) goto L_010779d4;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010779d4;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10779d4u;
    f_801c7a8c(c);
L_010779d4:
R_010779d4:
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

void f_mr051_01077a00(wp::Cpu& c) {
    WP_ENTER(0x1077a00u);
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

void f_mr051_01077a20(wp::Cpu& c) {
    WP_ENTER(0x1077a20u);
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
    if (wp::cr_get(c, 2)) goto L_01077d14;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_01077d14;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_01077cb4;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_01077ac4;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_01077ab8;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01077ab8;
    c.r[9] = 0x0u;
L_01077ab8:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01077ac4;
    c.r[7] = 0x1u;
L_01077ac4:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01077cb4;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01077cb4;
L_01077ae8:
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
    goto L_01077ae8;
    }
L_01077cb4:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01077d14;
L_01077cd0:
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
    goto L_01077cd0;
    }
L_01077d14:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr051_01077d30(wp::Cpu& c) {
    WP_ENTER(0x1077d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr051_01077d40(wp::Cpu& c) {
    WP_ENTER(0x1077d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mr051_01077d50(wp::Cpu& c) {
    WP_ENTER(0x1077d50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1077e50u: goto R_01077e50;
        case 0x1077e80u: goto R_01077e80;
        case 0x1077e9cu: goto R_01077e9c;
        case 0x1077eb8u: goto R_01077eb8;
        case 0x1077ef8u: goto R_01077ef8;
        case 0x1077f00u: goto R_01077f00;
        case 0x1077f0cu: goto R_01077f0c;
        case 0x1077f10u: goto R_01077f10;
        case 0x1077f8cu: goto R_01077f8c;
        case 0x1077f9cu: goto R_01077f9c;
        case 0x1077fb8u: goto R_01077fb8;
        case 0x1077fccu: goto R_01077fcc;
        case 0x1078014u: goto R_01078014;
        case 0x1078048u: goto R_01078048;
        case 0x107805cu: goto R_0107805c;
        case 0x107806cu: goto R_0107806c;
        case 0x1078080u: goto R_01078080;
        case 0x10780a0u: goto R_010780a0;
        case 0x10780d0u: goto R_010780d0;
        case 0x1078100u: goto R_01078100;
        case 0x1078120u: goto R_01078120;
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
    c.r[31] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01077de4;
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
    if (!wp::cr_get(c, 1)) goto L_01077dd8;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01077dd8:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_01077e34;
L_01077de4:
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
    if (!wp::cr_get(c, 0)) goto L_01077e34;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01077e34:
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
    c.lr = 0x1077e50u;
    f_mr051_010211e0(c);
R_01077e50:
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
    if (!wp::cr_get(c, 1)) goto L_010780d4;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01077f18;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1077e80u;
    f_80053d40(c);
R_01077e80:
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
    c.lr = 0x1077e9cu;
    f_8006b460(c);
R_01077e9c:
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
    c.lr = 0x1077eb8u;
    f_8006b460(c);
R_01077eb8:
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
    c.lr = 0x1077ef8u;
    wp::call(c, c.ctr);
R_01077ef8:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1077f00u;
    f_80071fe0(c);
R_01077f00:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x1077f0cu;
    f_80071fe0(c);
R_01077f0c:
    c.lr = 0x1077f10u;
    f_8006b590(c);
R_01077f10:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_01077f18:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010780a0;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_010780a0;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077f44;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_01077f44:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01077f78;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01077f84;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01077fbc;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_01078060;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01078084;
    goto L_010780a0;
L_01077f78:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_010780a0;
L_01077f84:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1077f8cu;
    f_80055bb0(c);
R_01077f8c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010780a0;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1077f9cu;
    f_80055d80(c);
R_01077f9c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010780a0;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1077fb8u;
    wp::call(c, c.ctr);
R_01077fb8:
    goto L_010780a0;
L_01077fbc:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01077fcc;
    c.lr = 0x1077fccu;
    f_80019fa0(c);
L_01077fcc:
R_01077fcc:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01078020;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01078020;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_01077ff8;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_01077ffc;
L_01077ff8:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_01077ffc:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x1078014u;
    f_80055290(c);
R_01078014:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_01078020:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01078048;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078048u;
    wp::call(c, c.ctr);
L_01078048:
R_01078048:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107805cu;
    wp::call(c, c.ctr);
R_0107805c:
    goto L_010780a0;
L_01078060:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x107806cu;
    f_80019f20(c);
R_0107806c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078080u;
    wp::call(c, c.ctr);
R_01078080:
    goto L_010780a0;
L_01078084:
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
    c.lr = 0x10780a0u;
    wp::call(c, c.ctr);
L_010780a0:
R_010780a0:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010780b4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_010780b4:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10780d0u;
    f_mr051_01020c80(c);
R_010780d0:
    goto L_01078124;
L_010780d4:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01078124;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01078124;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x1078100u;
    f_80055290(c);
R_01078100:
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
    c.lr = 0x1078120u;
    wp::call(c, c.ctr);
R_01078120:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_01078124:
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

void f_mr051_01078150(wp::Cpu& c) {
    WP_ENTER(0x1078150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078174u: goto R_01078174;
        case 0x107819cu: goto R_0107819c;
        case 0x10781acu: goto R_010781ac;
        case 0x10781c4u: goto R_010781c4;
        case 0x10781d8u: goto R_010781d8;
        case 0x10781f4u: goto R_010781f4;
        case 0x10781fcu: goto R_010781fc;
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
    c.lr = 0x1078174u;
    f_8001b910(c);
R_01078174:
    c.r[3] = ((((g_mr051_bases[6] + 0x4e8cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x27cb0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[6] + 0x4e8cu) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x27cb0u) & 0xFFFFu);
    c.r[0] = c.r[4] + 0x14u;
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x1u;
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107819cu;
    f_8001c510(c);
R_0107819c:
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10781acu;
    f_8001c520(c);
R_010781ac:
    c.r[31] = ((((g_mr051_bases[4] + 0x2524u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x2524u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x10781c4u;
    f_8001e440(c);
R_010781c4:
    ea = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x2524u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x10781d8u;
    f_8001eb90(c);
R_010781d8:
    c.r[3] = ((((g_mr051_bases[5] + 0x27900u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x27900u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.lr = 0x10781f4u;
    f_8001fb40(c);
R_010781f4:
    c.r[3] = 0x1000u;
    c.lr = 0x10781fcu;
    f_8004a120(c);
R_010781fc:
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

void f_mr051_01078220(wp::Cpu& c) {
    WP_ENTER(0x1078220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078234u: goto R_01078234;
        case 0x107825cu: goto R_0107825c;
        case 0x1078298u: goto R_01078298;
        case 0x10782e0u: goto R_010782e0;
        case 0x10782fcu: goto R_010782fc;
        case 0x1078360u: goto R_01078360;
        case 0x107837cu: goto R_0107837c;
        case 0x10783acu: goto R_010783ac;
        case 0x10783c8u: goto R_010783c8;
        case 0x10783dcu: goto R_010783dc;
        case 0x10783fcu: goto R_010783fc;
        case 0x1078414u: goto R_01078414;
        case 0x1078420u: goto R_01078420;
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
    c.lr = 0x1078234u;
    f_801c83b4(c);
R_01078234:
    c.r[28] = ((((g_mr051_bases[5] + 0x272c0u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[5] | c.r[5];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr051_bases[5] + 0x272c0u) & 0xFFFFu);
    c.r[26] = c.r[4] | c.r[4];
    c.r[7] = c.r[6] | c.r[6];
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] + 0x644u;
    c.r[4] = c.r[28] + 0x658u;
    c.lr = 0x107825cu;
    f_8003f8f0(c);
R_0107825c:
    c.r[4] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x10000u;
    c.r[29] = 0x0u;
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
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
    c.lr = 0x1078298u;
    f_80069af0(c);
R_01078298:
    c.r[3] = ((((g_mr051_bases[5] + 0x27970u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x27970u) & 0xFFFFu);
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
    c.lr = 0x10782e0u;
    wp::call(c, c.ctr);
R_010782e0:
    ea = c.r[31] + 0x2d8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] + 0x684u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10782fcu;
    wp::call(c, c.ctr);
R_010782fc:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x2e6u;
    c.r[4] = wp::rd16(ea);
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    ea = c.r[31] + 0x2dcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[29] = 0xffffffffu;
    if (!wp::cr_get(c, 2)) goto L_0107831c;
    c.r[29] = 0x0u;
L_0107831c:
    c.r[0] = 0x1u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01078330;
    c.r[29] = 0x1u;
L_01078330:
    c.r[0] = 0x2u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01078344;
    c.r[29] = 0x2u;
L_01078344:
    c.r[0] = 0x3u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01078358;
    c.r[29] = 0x3u;
L_01078358:
    c.r[3] = 0x350u;
    c.lr = 0x1078360u;
    f_801c79a4(c);
R_01078360:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107837c;
    c.r[0] = c.r[27] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x107837cu;
    f_mr051_01031060(c);
L_0107837c:
R_0107837c:
    ea = c.r[31] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010783ac;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x2ecu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010783ac;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10783acu;
    wp::call(c, c.ctr);
L_010783ac:
R_010783ac:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x6a0u;
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x2ecu;
    c.r[28] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10783c8u;
    wp::call(c, c.ctr);
R_010783c8:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = 0x1u;
    c.lr = 0x10783dcu;
    f_80043490(c);
R_010783dc:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010783fc;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x314u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10783fcu;
    wp::call(c, c.ctr);
L_010783fc:
R_010783fc:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078414u;
    wp::call(c, c.ctr);
R_01078414:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1078420u;
    f_801c8400(c);
R_01078420:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_01078430(wp::Cpu& c) {
    WP_ENTER(0x1078430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107847cu: goto R_0107847c;
        case 0x1078488u: goto R_01078488;
        case 0x10784c0u: goto R_010784c0;
        case 0x10784fcu: goto R_010784fc;
        case 0x1078508u: goto R_01078508;
        case 0x1078518u: goto R_01078518;
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
    if (wp::cr_get(c, 2)) goto L_01078518;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107847c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107847c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107847cu;
    wp::call(c, c.ctr);
L_0107847c:
R_0107847c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1078488u;
    f_80069c40(c);
R_01078488:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078508;
    c.r[3] = ((((g_mr051_bases[5] + 0x28180u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x28180u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_010784c0;
L_010784a0:
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
    c.lr = 0x10784c0u;
    wp::call(c, c.ctr);
L_010784c0:
R_010784c0:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010784a0;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010784fc;
    if (wp::cr_get(c, 2)) goto L_010784fc;
    if (wp::cr_get(c, 2)) goto L_010784fc;
    if (wp::cr_get(c, 2)) goto L_010784fc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010784fc;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10784fcu;
    f_801c7a8c(c);
L_010784fc:
R_010784fc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1078508u;
    f_8003fb90(c);
L_01078508:
R_01078508:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01078518;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1078518u;
    f_801c7a8c(c);
L_01078518:
R_01078518:
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

void f_mr051_01078540(wp::Cpu& c) {
    WP_ENTER(0x1078540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107856cu: goto R_0107856c;
        case 0x1078578u: goto R_01078578;
        case 0x1078584u: goto R_01078584;
        case 0x1078590u: goto R_01078590;
        case 0x10785a8u: goto R_010785a8;
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
    if (wp::cr_get(c, 2)) goto L_0107857c;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x107856cu;
    f_80069e30(c);
R_0107856c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1078578u;
    f_800403b0(c);
R_01078578:
    goto L_01078590;
L_0107857c:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1078584u;
    f_80069e40(c);
R_01078584:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1078590u;
    f_800403a0(c);
L_01078590:
R_01078590:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10785a8u;
    wp::call(c, c.ctr);
R_010785a8:
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

void f_mr051_010785c0(wp::Cpu& c) {
    WP_ENTER(0x10785c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10785e0u: goto R_010785e0;
        case 0x1078600u: goto R_01078600;
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
    c.lr = 0x10785e0u;
    f_800402c0(c);
R_010785e0:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078600;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078600u;
    wp::call(c, c.ctr);
L_01078600:
R_01078600:
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

void f_mr051_01078620(wp::Cpu& c) {
    WP_ENTER(0x1078620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078670u: goto R_01078670;
        case 0x107868cu: goto R_0107868c;
        case 0x10786ccu: goto R_010786cc;
        case 0x10786e4u: goto R_010786e4;
        case 0x10786ecu: goto R_010786ec;
        case 0x1078704u: goto R_01078704;
        case 0x107870cu: goto R_0107870c;
        case 0x1078738u: goto R_01078738;
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
    c.r[31] = ((((g_mr051_bases[4] + 0x24f0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x24f0u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01078738;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01078674;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1078670u;
    f_80071fe0(c);
R_01078670:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_01078674:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107868cu;
    wp::call(c, c.ctr);
R_0107868c:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010786a4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010786ac;
L_010786a4:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_010786ac:
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
    c.lr = 0x10786ccu;
    wp::call(c, c.ctr);
R_010786cc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10786e4u;
    wp::call(c, c.ctr);
R_010786e4:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10786ecu;
    f_80043060(c);
R_010786ec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078704u;
    wp::call(c, c.ctr);
R_01078704:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107870cu;
    f_80043120(c);
R_0107870c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01078738;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078738;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078738u;
    wp::call(c, c.ctr);
L_01078738:
R_01078738:
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

void f_mr051_01078760(wp::Cpu& c) {
    WP_ENTER(0x1078760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mr051_01078770(wp::Cpu& c) {
    WP_ENTER(0x1078770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr051_01078780(wp::Cpu& c) {
    WP_ENTER(0x1078780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr051_01078790(wp::Cpu& c) {
    WP_ENTER(0x1078790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10787b8u: goto R_010787b8;
        case 0x10787c0u: goto R_010787c0;
        case 0x10787d4u: goto R_010787d4;
        case 0x10787e4u: goto R_010787e4;
        case 0x10787f8u: goto R_010787f8;
        case 0x1078818u: goto R_01078818;
        case 0x1078820u: goto R_01078820;
        case 0x1078834u: goto R_01078834;
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
    c.lr = 0x10787b8u;
    wp::call(c, c.ctr);
R_010787b8:
    goto L_010787c0;
L_010787bc:
    c.lr = 0x10787c0u;
    f_8006a940(c);
L_010787c0:
R_010787c0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10787d4u;
    wp::call(c, c.ctr);
R_010787d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010787bc;
    }
    goto L_010787e4;
L_010787e0:
    c.lr = 0x10787e4u;
    f_8006a940(c);
L_010787e4:
R_010787e4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10787f8u;
    wp::call(c, c.ctr);
R_010787f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010787e0;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078818u;
    wp::call(c, c.ctr);
R_01078818:
    goto L_01078820;
L_0107881c:
    c.lr = 0x1078820u;
    f_8006a940(c);
L_01078820:
R_01078820:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078834u;
    wp::call(c, c.ctr);
R_01078834:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107881c;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01078850(wp::Cpu& c) {
    WP_ENTER(0x1078850u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078864u: goto R_01078864;
        case 0x1078884u: goto R_01078884;
        case 0x10788d4u: goto R_010788d4;
        case 0x10788f8u: goto R_010788f8;
        case 0x1078904u: goto R_01078904;
        case 0x1078918u: goto R_01078918;
        case 0x1078938u: goto R_01078938;
        case 0x1078948u: goto R_01078948;
        case 0x1078954u: goto R_01078954;
        case 0x1078964u: goto R_01078964;
        case 0x1078968u: goto R_01078968;
        case 0x1078970u: goto R_01078970;
        case 0x107899cu: goto R_0107899c;
        case 0x10789a8u: goto R_010789a8;
        case 0x10789b4u: goto R_010789b4;
        case 0x10789c4u: goto R_010789c4;
        case 0x10789c8u: goto R_010789c8;
        case 0x10789d0u: goto R_010789d0;
        case 0x1078a00u: goto R_01078a00;
        case 0x1078a28u: goto R_01078a28;
        case 0x1078a34u: goto R_01078a34;
        case 0x1078a44u: goto R_01078a44;
        case 0x1078a48u: goto R_01078a48;
        case 0x1078a50u: goto R_01078a50;
        case 0x1078a8cu: goto R_01078a8c;
        case 0x1078aa8u: goto R_01078aa8;
        case 0x1078ab8u: goto R_01078ab8;
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
    c.lr = 0x1078864u;
    f_801c83b0(c);
R_01078864:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01078898;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078884u;
    wp::call(c, c.ctr);
R_01078884:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078ab0;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_01078ab0;
L_01078898:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078ab0;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01078ab0;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01078ab0;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10788d4u;
    wp::call(c, c.ctr);
R_010788d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010788f8;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10788f8u;
    wp::call(c, c.ctr);
L_010788f8:
R_010788f8:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x1078904u;
    f_8000e2a0(c);
R_01078904:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_01078910:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1078918u;
    f_8000fc20(c);
R_01078918:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107897c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01078940;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1078938u;
    f_8000fc40(c);
R_01078938:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107897c;
L_01078940:
    c.r[26] = 0x0u;
    c.lr = 0x1078948u;
    f_8000dd70(c);
R_01078948:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1078954u;
    f_8000fc20(c);
R_01078954:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0107897c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1078964u;
    f_8000fc20(c);
R_01078964:
    c.lr = 0x1078968u;
    f_800699d0(c);
R_01078968:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1078970u;
    f_80066cd0(c);
R_01078970:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107897c;
    c.r[27] = 0x1u;
L_0107897c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01078910;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010789e8;
    c.r[25] = 0x0u;
L_01078994:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x107899cu;
    f_8000fc40(c);
R_0107899c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010789dc;
    c.lr = 0x10789a8u;
    f_8000dd70(c);
R_010789a8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10789b4u;
    f_8000fc20(c);
R_010789b4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_010789dc;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10789c4u;
    f_8000fc20(c);
R_010789c4:
    c.lr = 0x10789c8u;
    f_800699d0(c);
R_010789c8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10789d0u;
    f_80066cd0(c);
R_010789d0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010789dc;
    c.r[27] = 0x1u;
L_010789dc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01078994;
    }
L_010789e8:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078a68;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_010789f8:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1078a00u;
    f_8000fc40(c);
R_01078a00:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01078a0c;
    c.r[25] = 0x0u;
L_01078a0c:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010789f8;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078a68;
    c.r[25] = 0x0u;
L_01078a24:
    c.lr = 0x1078a28u;
    f_8000dd70(c);
R_01078a28:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1078a34u;
    f_8000fc20(c);
R_01078a34:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01078a5c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1078a44u;
    f_8000fc20(c);
R_01078a44:
    c.lr = 0x1078a48u;
    f_800699d0(c);
R_01078a48:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1078a50u;
    f_80066cd0(c);
R_01078a50:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01078a5c;
    c.r[27] = 0x1u;
L_01078a5c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01078a24;
    }
L_01078a68:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01078ab0;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078a8cu;
    wp::call(c, c.ctr);
R_01078a8c:
    c.r[3] = ((((g_mr051_bases[4] + 0x254cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[4] + 0x2524u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x254cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x2524u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1078aa8u;
    f_80018e30(c);
R_01078aa8:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_01078ab0:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x1078ab8u;
    f_801c83fc(c);
R_01078ab8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr051_01078ad0(wp::Cpu& c) {
    WP_ENTER(0x1078ad0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078af8u: goto R_01078af8;
        case 0x1078afcu: goto R_01078afc;
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
L_01078ae4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078af8u;
    wp::call(c, c.ctr);
R_01078af8:
    c.lr = 0x1078afcu;
    f_8006a940(c);
R_01078afc:
    WP_POLL(c);
    goto L_01078ae4;
}

void f_mr051_01078b00(wp::Cpu& c) {
    WP_ENTER(0x1078b00u);
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

void f_mr051_01078b20(wp::Cpu& c) {
    WP_ENTER(0x1078b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078b44u: goto R_01078b44;
        case 0x1078b68u: goto R_01078b68;
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
    c.lr = 0x1078b44u;
    f_80010060(c);
R_01078b44:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr051_bases[5] + 0x28494u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28494u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1078b68u;
    wp::call(c, c.ctr);
R_01078b68:
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

void f_mr051_01078b80(wp::Cpu& c) {
    WP_ENTER(0x1078b80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078b94u: goto R_01078b94;
        case 0x1078ba8u: goto R_01078ba8;
        case 0x1078bbcu: goto R_01078bbc;
        case 0x1078be4u: goto R_01078be4;
        case 0x1078bf4u: goto R_01078bf4;
        case 0x1078c18u: goto R_01078c18;
        case 0x1078c78u: goto R_01078c78;
        case 0x1078cf8u: goto R_01078cf8;
        case 0x1078d60u: goto R_01078d60;
        case 0x1078d98u: goto R_01078d98;
        case 0x1078dacu: goto R_01078dac;
        case 0x1078dbcu: goto R_01078dbc;
        case 0x1078de0u: goto R_01078de0;
        case 0x1078de8u: goto R_01078de8;
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
    c.lr = 0x1078b94u;
    f_801c83b4(c);
R_01078b94:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1078ba8u;
    f_8006c450(c);
R_01078ba8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01078db0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1078bbcu;
    f_8006c460(c);
R_01078bbc:
    c.r[27] = ((((g_mr051_bases[5] + 0x272c8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr051_bases[5] + 0x272c8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1078be4u;
    f_801c7860(c);
R_01078be4:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x1078bf4u;
    f_mr051_01016cc0(c);
R_01078bf4:
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
    c.lr = 0x1078c18u;
    f_mr051_01016e80(c);
R_01078c18:
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
    if (!wp::cr_get(c, 2)) goto L_01078c54;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01078c58;
L_01078c54:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01078c58:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x1078c78u;
    f_mr051_01016e80(c);
R_01078c78:
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
    if (!wp::cr_get(c, 2)) goto L_01078cd4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01078cd8;
L_01078cd4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01078cd8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1078cf8u;
    f_mr051_01016e80(c);
R_01078cf8:
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
    if (!wp::cr_get(c, 2)) goto L_01078d3c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01078d40;
L_01078d3c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01078d40:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1078d60u;
    f_mr051_01016e80(c);
R_01078d60:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr051_bases[5] + 0x284a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x284a0u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_01078d80;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01078d84;
L_01078d80:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01078d84:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1078d98u;
    wp::call(c, c.ctr);
R_01078d98:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01078de0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1078dacu;
    f_801c7a8c(c);
R_01078dac:
    goto L_01078de0;
L_01078db0:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1078dbcu;
    f_8006c4e0(c);
R_01078dbc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr051_bases[5] + 0x284a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x284a0u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x1078de0u;
    wp::call(c, c.ctr);
L_01078de0:
R_01078de0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1078de8u;
    f_801c8400(c);
R_01078de8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_01078e00(wp::Cpu& c) {
    WP_ENTER(0x1078e00u);
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

void f_mr051_01078e20(wp::Cpu& c) {
    WP_ENTER(0x1078e20u);
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

void f_mr051_01078e40(wp::Cpu& c) {
    WP_ENTER(0x1078e40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078e6cu: goto R_01078e6c;
        case 0x1078e84u: goto R_01078e84;
        case 0x1078e94u: goto R_01078e94;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr051_bases[5] + 0x2847cu) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mr051_bases[5] + 0x2847cu) & 0xFFFFu);
    c.lr = 0x1078e6cu;
    f_mr051_01070600(c);
R_01078e6c:
    c.r[5] = ((((g_mr051_bases[5] + 0x272f8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x272f8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1078e84u;
    f_801d34c4(c);
R_01078e84:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x1078e94u;
    f_mr051_01073950(c);
R_01078e94:
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

void f_mr051_01078eb0(wp::Cpu& c) {
    WP_ENTER(0x1078eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078ee8u: goto R_01078ee8;
        case 0x1078f0cu: goto R_01078f0c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mr051_bases[5] + 0x272c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mr051_bases[5] + 0x272c0u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1078ee8u;
    f_801d3590(c);
R_01078ee8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mr051_bases[5] + 0x28488u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28488u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x1078f0cu;
    wp::call(c, c.ctr);
R_01078f0c:
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

void f_mr051_01078f30(wp::Cpu& c) {
    WP_ENTER(0x1078f30u);
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

void f_mr051_01078f50(wp::Cpu& c) {
    WP_ENTER(0x1078f50u);
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

void f_mr051_01078f70(wp::Cpu& c) {
    WP_ENTER(0x1078f70u);
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

void f_mr051_01078f90(wp::Cpu& c) {
    WP_ENTER(0x1078f90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1078fb0u: goto R_01078fb0;
        case 0x1078fb8u: goto R_01078fb8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[5] + 0x28464u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mr051_bases[5] + 0x28464u) & 0xFFFFu);
    c.lr = 0x1078fb0u;
    f_mr051_01070600(c);
R_01078fb0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1078fb8u;
    f_mr051_01072a50(c);
R_01078fb8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_01078fd0(wp::Cpu& c) {
    WP_ENTER(0x1078fd0u);
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

void f_mr051_01078ff0(wp::Cpu& c) {
    WP_ENTER(0x1078ff0u);
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

void f_mr051_01079010(wp::Cpu& c) {
    WP_ENTER(0x1079010u);
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

void f_mr051_01079030(wp::Cpu& c) {
    WP_ENTER(0x1079030u);
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

void f_mr051_01079050(wp::Cpu& c) {
    WP_ENTER(0x1079050u);
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

void f_mr051_01079070(wp::Cpu& c) {
    WP_ENTER(0x1079070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr051_bases[4] + 0x2690u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x2690u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010790a0;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010790a0;
    c.r[4] = 0x1u;
L_010790a0:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mr051_010790b0(wp::Cpu& c) {
    WP_ENTER(0x10790b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10790f4u: goto R_010790f4;
        case 0x1079104u: goto R_01079104;
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
    if (wp::cr_get(c, 2)) goto L_01079104;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010790e8;
    c.r[3] = ((((g_mr051_bases[6] + 0x4e8cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[6] + 0x4e8cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010790e8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10790f4u;
    f_8001bfe0(c);
R_010790f4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01079104;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1079104u;
    f_801c7a8c(c);
L_01079104:
R_01079104:
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

void f_mr051_01079120(wp::Cpu& c) {
    WP_ENTER(0x1079120u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr051_010760c0(c);
    return;
}

void f_mr051_01079130(wp::Cpu& c) {
    WP_ENTER(0x1079130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr051_01074440(c);
    return;
}

void f_mr051_01079140(wp::Cpu& c) {
    WP_ENTER(0x1079140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mr051_01079150(wp::Cpu& c) {
    WP_ENTER(0x1079150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mr051_010790b0(c);
    return;
}

void f_mr051_01079160(wp::Cpu& c) {
    WP_ENTER(0x1079160u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mr051_01077060(c);
    return;
}

void f_mr051_01079170(wp::Cpu& c) {
    WP_ENTER(0x1079170u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mr051_01077060(c);
    return;
}

void f_mr051_01079180(wp::Cpu& c) {
    WP_ENTER(0x1079180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mr051_01077060(c);
    return;
}

void f_mr051_01079190(wp::Cpu& c) {
    WP_ENTER(0x1079190u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr051_01077d50(c);
    return;
}

void f_mr051_010791a0(wp::Cpu& c) {
    WP_ENTER(0x10791a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mr051_01077060(c);
    return;
}

void f_mr051_010791b0(wp::Cpu& c) {
    WP_ENTER(0x10791b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr051_01078ad0(c);
    return;
}

void f_mr051_010791c0(wp::Cpu& c) {
    WP_ENTER(0x10791c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mr051_01078430(c);
    return;
}

void f_mr051_010791d0(wp::Cpu& c) {
    WP_ENTER(0x10791d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10791f0u: goto R_010791f0;
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
    c.lr = 0x10791f0u;
    f_8011bd40(c);
R_010791f0:
    c.r[3] = ((((g_mr051_bases[4] + 0x2698u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x285a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x2698u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x285a8u) & 0xFFFFu);
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

void f_mr051_01079230(wp::Cpu& c) {
    WP_ENTER(0x1079230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107925cu: goto R_0107925c;
        case 0x107926cu: goto R_0107926c;
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
    if (wp::cr_get(c, 2)) goto L_0107926c;
    c.r[4] = 0x0u;
    c.lr = 0x107925cu;
    f_8011bd50(c);
R_0107925c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107926c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107926cu;
    f_801c7a8c(c);
L_0107926c:
R_0107926c:
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

void f_mr051_01079290(wp::Cpu& c) {
    WP_ENTER(0x1079290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10792c4u: goto R_010792c4;
        case 0x107939cu: goto R_0107939c;
        case 0x107951cu: goto R_0107951c;
        case 0x1079530u: goto R_01079530;
        case 0x1079590u: goto R_01079590;
        case 0x107959cu: goto R_0107959c;
        case 0x10795c4u: goto R_010795c4;
        case 0x10795dcu: goto R_010795dc;
        case 0x10795fcu: goto R_010795fc;
        case 0x1079608u: goto R_01079608;
        case 0x1079630u: goto R_01079630;
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
    c.lr = 0x10792c4u;
    f_801c83ac(c);
R_010792c4:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mr051_bases[4] + 0x2698u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x2698u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010792e4;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010793b0;
    goto L_01079604;
L_010792e4:
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
    if (wp::cr_get(c, 2)) goto L_01079360;
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
L_01079360:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107939c;
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
    c.lr = 0x107939cu;
    f_8011eeb0(c);
L_0107939c:
R_0107939c:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01079608;
L_010793b0:
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
    if (!wp::cr_get(c, 2)) goto L_010793dc;
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
L_010793dc:
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
    c.lr = 0x107951cu;
    f_801225e0(c);
R_0107951c:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1079530u;
    f_801225e0(c);
R_01079530:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01079570;
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
L_01079570:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01079588;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_01079588:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1079590u;
    f_8011eaa0(c);
R_01079590:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107959cu;
    f_8011ea40(c);
R_0107959c:
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
    c.lr = 0x10795c4u;
    f_80122d80(c);
R_010795c4:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x10795dcu;
    f_80122d80(c);
R_010795dc:
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
    c.lr = 0x10795fcu;
    f_80121cf0(c);
R_010795fc:
    c.r[3] = 0x2u;
    goto L_01079608;
L_01079604:
    c.lr = 0x1079608u;
    f_8011bd90(c);
L_01079608:
R_01079608:
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
    c.lr = 0x1079630u;
    f_801c83f8(c);
R_01079630:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mr051_01079640(wp::Cpu& c) {
    WP_ENTER(0x1079640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107965cu: goto R_0107965c;
        case 0x10797e0u: goto R_010797e0;
        case 0x1079834u: goto R_01079834;
        case 0x1079858u: goto R_01079858;
        case 0x1079864u: goto R_01079864;
        case 0x1079874u: goto R_01079874;
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
    c.lr = 0x107965cu;
    f_801c83b0(c);
R_0107965c:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_01079678;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_0107968c;
    goto L_01079860;
L_01079678:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01079864;
L_0107968c:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mr051_bases[4] + 0x26a4u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mr051_bases[4] + 0x26a8u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mr051_bases[4] + 0x26a4u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mr051_bases[4] + 0x26a8u) & 0xFFFFu);
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
    c.lr = 0x10797e0u;
    f_801225e0(c);
R_010797e0:
    ea = c.r[26] + wp::sign_extend16((g_mr051_bases[4] + 0x26a8u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_010797f0;
    goto L_010797f4;
L_010797f0:
    c.f[2] = c.f[1];
L_010797f4:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01079804;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_0107980c;
L_01079804:
    c.r[3] = ((((g_mr051_bases[4] + 0x26a8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x26a8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_0107980c:
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
    c.lr = 0x1079834u;
    f_8011e9e0(c);
R_01079834:
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
    c.lr = 0x1079858u;
    f_80121cf0(c);
R_01079858:
    c.r[3] = 0x2u;
    goto L_01079864;
L_01079860:
    c.lr = 0x1079864u;
    f_8011bec0(c);
L_01079864:
R_01079864:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1079874u;
    f_801c83fc(c);
R_01079874:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr051_01079890(wp::Cpu& c) {
    WP_ENTER(0x1079890u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10798a4u: goto R_010798a4;
        case 0x10798d4u: goto R_010798d4;
        case 0x10799ecu: goto R_010799ec;
        case 0x1079a74u: goto R_01079a74;
        case 0x1079a80u: goto R_01079a80;
        case 0x1079a8cu: goto R_01079a8c;
        case 0x1079ba4u: goto R_01079ba4;
        case 0x1079cecu: goto R_01079cec;
        case 0x1079d08u: goto R_01079d08;
        case 0x1079d10u: goto R_01079d10;
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
    c.lr = 0x10798a4u;
    f_801c83b4(c);
R_010798a4:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mr051_bases[4] + 0x2698u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x2698u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010798cc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01079a84;
    goto L_01079d08;
L_010798cc:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x10798d4u;
    f_80132a30(c);
R_010798d4:
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
    if (!wp::cr_get(c, 2)) goto L_010799ec;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x10799ecu;
    f_8014b090(c);
L_010799ec:
R_010799ec:
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
    c.lr = 0x1079a74u;
    f_8012be60(c);
R_01079a74:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1079a80u;
    f_80132ab0(c);
R_01079a80:
    goto L_01079d08;
L_01079a84:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x1079a8cu;
    f_80132a30(c);
R_01079a8c:
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
    if (!wp::cr_get(c, 2)) goto L_01079ba4;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x1079ba4u;
    f_8014b090(c);
L_01079ba4:
R_01079ba4:
    c.r[5] = ((((g_mr051_bases[6] + 0x4e90u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[6] + 0x4e90u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01079c10;
    c.r[4] = ((((g_mr051_bases[6] + 0x4e98u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr051_bases[6] + 0x4e98u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[6] + 0x4e98u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[6] + 0x4e90u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01079c10:
    c.r[26] = ((((g_mr051_bases[6] + 0x4e98u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mr051_bases[6] + 0x4e98u) & 0xFFFFu);
L_01079c1c:
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
    c.lr = 0x1079cecu;
    f_8012be60(c);
R_01079cec:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01079c1c;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1079d08u;
    f_80132ab0(c);
L_01079d08:
R_01079d08:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x1079d10u;
    f_801c8400(c);
R_01079d10:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mr051_01079d20(wp::Cpu& c) {
    WP_ENTER(0x1079d20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mr051_01079d30(wp::Cpu& c) {
    WP_ENTER(0x1079d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mr051_01079d40(wp::Cpu& c) {
    WP_ENTER(0x1079d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1079d60u: goto R_01079d60;
        case 0x1079d84u: goto R_01079d84;
        case 0x1079dbcu: goto R_01079dbc;
        case 0x1079dd0u: goto R_01079dd0;
        case 0x1079de4u: goto R_01079de4;
        case 0x1079df4u: goto R_01079df4;
        case 0x1079e00u: goto R_01079e00;
        case 0x1079e30u: goto R_01079e30;
        case 0x1079e50u: goto R_01079e50;
        case 0x1079e58u: goto R_01079e58;
        case 0x1079e60u: goto R_01079e60;
        case 0x1079e68u: goto R_01079e68;
        case 0x1079e6cu: goto R_01079e6c;
        case 0x1079e74u: goto R_01079e74;
        case 0x1079e80u: goto R_01079e80;
        case 0x1079eb0u: goto R_01079eb0;
        case 0x1079eb8u: goto R_01079eb8;
        case 0x1079ebcu: goto R_01079ebc;
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
    c.lr = 0x1079d60u;
    f_80069af0(c);
R_01079d60:
    c.r[3] = ((((g_mr051_bases[6] + 0x18u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr051_bases[5] + 0x285d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[6] + 0x18u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x285d8u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x1079d84u;
    f_801c79a4(c);
R_01079d84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01079da0;
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
L_01079da0:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1079dbcu;
    f_801c79a4(c);
R_01079dbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01079e34;
    c.r[29] = 0x0u;
    c.lr = 0x1079dd0u;
    f_8000dd70(c);
R_01079dd0:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01079df0;
    c.r[3] = 0xffffffffu;
    c.lr = 0x1079de4u;
    f_8000e240(c);
R_01079de4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01079df0;
    c.r[29] = 0x1u;
L_01079df0:
    c.lr = 0x1079df4u;
    f_8000dd70(c);
R_01079df4:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1079e00u;
    f_80007570(c);
R_01079e00:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_01079e20;
    c.r[4] = c.r[1] + 0xcu;
L_01079e20:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x1079e30u;
    f_mr051_01029f20(c);
R_01079e30:
    c.r[30] = c.r[3] | c.r[3];
L_01079e34:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01079e50;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x1079e50u;
    f_mr051_0102a0f0(c);
L_01079e50:
R_01079e50:
    c.r[3] = 0x0u;
    c.lr = 0x1079e58u;
    f_8006a800(c);
R_01079e58:
    c.r[3] = 0x0u;
    c.lr = 0x1079e60u;
    f_80065040(c);
R_01079e60:
    c.r[3] = 0x0u;
    c.lr = 0x1079e68u;
    f_8006c8b0(c);
R_01079e68:
    c.lr = 0x1079e6cu;
    f_80066250(c);
R_01079e6c:
    c.r[3] = 0x128u;
    c.lr = 0x1079e74u;
    f_801c79a4(c);
R_01079e74:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01079e80;
    c.lr = 0x1079e80u;
    f_mr051_01078150(c);
L_01079e80:
R_01079e80:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01079eb0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01079eb0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1079eb0u;
    wp::call(c, c.ctr);
L_01079eb0:
R_01079eb0:
    c.r[3] = 0x1u;
    c.lr = 0x1079eb8u;
    f_8001b020(c);
R_01079eb8:
    c.lr = 0x1079ebcu;
    f_8000dd30(c);
R_01079ebc:
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

void f_mr051_01079ef0(wp::Cpu& c) {
    WP_ENTER(0x1079ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1079f2cu: goto R_01079f2c;
        case 0x1079f58u: goto R_01079f58;
        case 0x1079f5cu: goto R_01079f5c;
        case 0x1079f6cu: goto R_01079f6c;
        case 0x1079f70u: goto R_01079f70;
        case 0x1079f74u: goto R_01079f74;
        case 0x1079fa0u: goto R_01079fa0;
        case 0x1079fb4u: goto R_01079fb4;
        case 0x1079fdcu: goto R_01079fdc;
        case 0x107a004u: goto R_0107a004;
        case 0x107a02cu: goto R_0107a02c;
        case 0x107a034u: goto R_0107a034;
        case 0x107a038u: goto R_0107a038;
        case 0x107a03cu: goto R_0107a03c;
        case 0x107a044u: goto R_0107a044;
        case 0x107a048u: goto R_0107a048;
        case 0x107a04cu: goto R_0107a04c;
        case 0x107a074u: goto R_0107a074;
        case 0x107a088u: goto R_0107a088;
        case 0x107a0b0u: goto R_0107a0b0;
        case 0x107a0d8u: goto R_0107a0d8;
        case 0x107a100u: goto R_0107a100;
        case 0x107a108u: goto R_0107a108;
        case 0x107a130u: goto R_0107a130;
        case 0x107a150u: goto R_0107a150;
        case 0x107a160u: goto R_0107a160;
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
    if (wp::cr_get(c, 2)) goto L_0107a160;
    c.r[4] = ((((g_mr051_bases[5] + 0x285d8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x285d8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x1079f2cu;
    f_mr051_0102a180(c);
R_01079f2c:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01079f58;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01079f58;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1079f58u;
    wp::call(c, c.ctr);
L_01079f58:
R_01079f58:
    c.lr = 0x1079f5cu;
    f_8001aac0(c);
R_01079f5c:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01079f6c;
    c.lr = 0x1079f6cu;
    f_8001b0c0(c);
L_01079f6c:
R_01079f6c:
    c.lr = 0x1079f70u;
    f_8004abf0(c);
R_01079f70:
    c.lr = 0x1079f74u;
    f_80066250(c);
R_01079f74:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a034;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a034;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01079fa0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1079fa0u;
    f_mr051_01025150(c);
L_01079fa0:
R_01079fa0:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01079fb4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1079fb4u;
    f_mr051_0102a0f0(c);
L_01079fb4:
R_01079fb4:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01079fdc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01079fdc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1079fdcu;
    wp::call(c, c.ctr);
L_01079fdc:
R_01079fdc:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a004;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a004;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a004u;
    wp::call(c, c.ctr);
L_0107a004:
R_0107a004:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a02c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a02c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a02cu;
    wp::call(c, c.ctr);
L_0107a02c:
R_0107a02c:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107a034u;
    f_801c7a8c(c);
L_0107a034:
R_0107a034:
    c.lr = 0x107a038u;
    f_80041c20(c);
R_0107a038:
    c.lr = 0x107a03cu;
    f_8002d270(c);
R_0107a03c:
    c.r[3] = 0x0u;
    c.lr = 0x107a044u;
    f_80076130(c);
R_0107a044:
    c.lr = 0x107a048u;
    f_800656f0(c);
R_0107a048:
    c.lr = 0x107a04cu;
    f_80011270(c);
R_0107a04c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a108;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a108;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a074;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107a074u;
    f_mr051_01025150(c);
L_0107a074:
R_0107a074:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a088;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107a088u;
    f_mr051_0102a0f0(c);
L_0107a088:
R_0107a088:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a0b0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a0b0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a0b0u;
    wp::call(c, c.ctr);
L_0107a0b0:
R_0107a0b0:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a0d8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a0d8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a0d8u;
    wp::call(c, c.ctr);
L_0107a0d8:
R_0107a0d8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a100;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a100;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a100u;
    wp::call(c, c.ctr);
L_0107a100:
R_0107a100:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107a108u;
    f_801c7a8c(c);
L_0107a108:
R_0107a108:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a130;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a130;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a130u;
    wp::call(c, c.ctr);
L_0107a130:
R_0107a130:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a144;
    c.r[3] = ((((g_mr051_bases[6] + 0x18u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mr051_bases[6] + 0x18u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_0107a144:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x107a150u;
    f_80069c40(c);
R_0107a150:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107a160;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107a160u;
    f_801c7a8c(c);
L_0107a160:
R_0107a160:
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

void f_mr051_0107a180(wp::Cpu& c) {
    WP_ENTER(0x107a180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107a1acu: goto R_0107a1ac;
        case 0x107a1b4u: goto R_0107a1b4;
        case 0x107a1ccu: goto R_0107a1cc;
        case 0x107a200u: goto R_0107a200;
        case 0x107a220u: goto R_0107a220;
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
    if (!wp::cr_get(c, 2)) goto L_0107a220;
    c.r[3] = 0x0u;
    c.lr = 0x107a1acu;
    f_mr051_0102a170(c);
R_0107a1ac:
    c.r[3] = 0x1a8u;
    c.lr = 0x107a1b4u;
    f_801c79a4(c);
R_0107a1b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a1cc;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x107a1ccu;
    f_mr051_01033120(c);
L_0107a1cc:
R_0107a1cc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a200;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a200;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a200u;
    wp::call(c, c.ctr);
L_0107a200:
R_0107a200:
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
    c.lr = 0x107a220u;
    wp::call(c, c.ctr);
L_0107a220:
R_0107a220:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_0107a240(wp::Cpu& c) {
    WP_ENTER(0x107a240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr051_0107a250(wp::Cpu& c) {
    WP_ENTER(0x107a250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr051_0107a260(wp::Cpu& c) {
    WP_ENTER(0x107a260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107a2acu: goto R_0107a2ac;
        case 0x107a2b0u: goto R_0107a2b0;
        case 0x107a2c0u: goto R_0107a2c0;
        case 0x107a2e8u: goto R_0107a2e8;
        case 0x107a2f0u: goto R_0107a2f0;
        case 0x107a304u: goto R_0107a304;
        case 0x107a32cu: goto R_0107a32c;
        case 0x107a334u: goto R_0107a334;
        case 0x107a33cu: goto R_0107a33c;
        case 0x107a350u: goto R_0107a350;
        case 0x107a36cu: goto R_0107a36c;
        case 0x107a374u: goto R_0107a374;
        case 0x107a388u: goto R_0107a388;
        case 0x107a3a4u: goto R_0107a3a4;
        case 0x107a3b8u: goto R_0107a3b8;
        case 0x107a3c0u: goto R_0107a3c0;
        case 0x107a3ccu: goto R_0107a3cc;
        case 0x107a3e4u: goto R_0107a3e4;
        case 0x107a3e8u: goto R_0107a3e8;
        case 0x107a3f0u: goto R_0107a3f0;
        case 0x107a3fcu: goto R_0107a3fc;
        case 0x107a404u: goto R_0107a404;
        case 0x107a408u: goto R_0107a408;
        case 0x107a410u: goto R_0107a410;
        case 0x107a41cu: goto R_0107a41c;
        case 0x107a42cu: goto R_0107a42c;
        case 0x107a434u: goto R_0107a434;
        case 0x107a450u: goto R_0107a450;
        case 0x107a454u: goto R_0107a454;
        case 0x107a464u: goto R_0107a464;
        case 0x107a46cu: goto R_0107a46c;
        case 0x107a47cu: goto R_0107a47c;
        case 0x107a498u: goto R_0107a498;
        case 0x107a4c4u: goto R_0107a4c4;
        case 0x107a4e0u: goto R_0107a4e0;
        case 0x107a514u: goto R_0107a514;
        case 0x107a520u: goto R_0107a520;
        case 0x107a540u: goto R_0107a540;
        case 0x107a574u: goto R_0107a574;
        case 0x107a580u: goto R_0107a580;
        case 0x107a59cu: goto R_0107a59c;
        case 0x107a5d0u: goto R_0107a5d0;
        case 0x107a5ecu: goto R_0107a5ec;
        case 0x107a604u: goto R_0107a604;
        case 0x107a614u: goto R_0107a614;
        case 0x107a634u: goto R_0107a634;
        case 0x107a668u: goto R_0107a668;
        case 0x107a680u: goto R_0107a680;
        case 0x107a6acu: goto R_0107a6ac;
        case 0x107a6e0u: goto R_0107a6e0;
        case 0x107a6e4u: goto R_0107a6e4;
        case 0x107a6fcu: goto R_0107a6fc;
        case 0x107a734u: goto R_0107a734;
        case 0x107a73cu: goto R_0107a73c;
        case 0x107a748u: goto R_0107a748;
        case 0x107a768u: goto R_0107a768;
        case 0x107a774u: goto R_0107a774;
        case 0x107a780u: goto R_0107a780;
        case 0x107a78cu: goto R_0107a78c;
        case 0x107a7a4u: goto R_0107a7a4;
        case 0x107a7e0u: goto R_0107a7e0;
        case 0x107a7e4u: goto R_0107a7e4;
        case 0x107a7e8u: goto R_0107a7e8;
        case 0x107a7fcu: goto R_0107a7fc;
        case 0x107a830u: goto R_0107a830;
        case 0x107a834u: goto R_0107a834;
        case 0x107a840u: goto R_0107a840;
        case 0x107a850u: goto R_0107a850;
        case 0x107a858u: goto R_0107a858;
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
    goto L_0107a2b0;
L_0107a28c:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107a2ac;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a2acu;
    wp::call(c, c.ctr);
L_0107a2ac:
R_0107a2ac:
    c.lr = 0x107a2b0u;
    f_8006a940(c);
L_0107a2b0:
R_0107a2b0:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107a28c;
    }
    c.lr = 0x107a2c0u;
    f_800760f0(c);
R_0107a2c0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107a28c;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a2e8;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x107a2e8u;
    f_mr051_0102a0f0(c);
L_0107a2e8:
R_0107a2e8:
    c.r[3] = 0x1u;
    c.lr = 0x107a2f0u;
    f_80076130(c);
R_0107a2f0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a304u;
    wp::call(c, c.ctr);
R_0107a304:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a38c;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107a32cu;
    f_800104d0(c);
R_0107a32c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107a334u;
    f_8000a7f0(c);
R_0107a334:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107a33cu;
    f_8000e240(c);
R_0107a33c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107a37c;
    c.r[30] = 0x0u;
    goto L_0107a370;
L_0107a34c:
    c.lr = 0x107a350u;
    f_8000dd70(c);
R_0107a350:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x107a36cu;
    f_8000fc60(c);
R_0107a36c:
    c.r[30] = c.r[30] + 0x1u;
L_0107a370:
    c.lr = 0x107a374u;
    f_80007570(c);
R_0107a374:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107a34c;
    }
L_0107a37c:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x107a388u;
    f_800293c0(c);
R_0107a388:
    goto L_0107a850;
L_0107a38c:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a3d0;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107a3a4u;
    f_8000e070(c);
R_0107a3a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_0107a3b4;
    c.r[3] = 0x6u;
L_0107a3b4:
    c.lr = 0x107a3b8u;
    f_8000e080(c);
R_0107a3b8:
    c.r[3] = 0x1u;
    c.lr = 0x107a3c0u;
    f_80029330(c);
R_0107a3c0:
    c.r[3] = ((((g_mr051_bases[5] + 0x285c8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[5] + 0x285c8u) & 0xFFFFu);
    c.lr = 0x107a3ccu;
    f_80029270(c);
R_0107a3cc:
    goto L_0107a850;
L_0107a3d0:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a414;
    c.r[29] = ((((g_mr051_bases[4] + 0x26d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_mr051_bases[4] + 0x26d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107a3e4u;
    f_80071fe0(c);
R_0107a3e4:
    c.lr = 0x107a3e8u;
    f_8001a890(c);
R_0107a3e8:
    c.r[3] = 0x0u;
    c.lr = 0x107a3f0u;
    f_80076130(c);
R_0107a3f0:
    ea = c.r[29] + wp::sign_extend16((g_mr051_bases[4] + 0x26d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x107a3fcu;
    f_80075f20(c);
R_0107a3fc:
    c.r[3] = 0x1u;
    c.lr = 0x107a404u;
    f_80076130(c);
R_0107a404:
    c.lr = 0x107a408u;
    f_80076100(c);
R_0107a408:
    c.r[3] = 0x1u;
    c.lr = 0x107a410u;
    f_80029330(c);
R_0107a410:
    goto L_0107a850;
L_0107a414:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107a41cu;
    f_80007f20(c);
R_0107a41c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x107a42cu;
    f_mr051_0107a880(c);
R_0107a42c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x107a434u;
    f_80041f70(c);
R_0107a434:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a450;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x107a450u;
    f_800402c0(c);
L_0107a450:
R_0107a450:
    c.lr = 0x107a454u;
    f_80076140(c);
R_0107a454:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a484;
    c.r[3] = 0x0u;
    c.lr = 0x107a464u;
    f_8004a100(c);
R_0107a464:
    c.r[3] = 0x1u;
    c.lr = 0x107a46cu;
    f_80072020(c);
R_0107a46c:
    c.r[4] = ((((g_mr051_bases[4] + 0x26d4u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x26d4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107a47cu;
    f_80075ed0(c);
R_0107a47c:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_0107a484:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a680;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x107a498u;
    f_80007530(c);
R_0107a498:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0107a4bc;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_0107a518;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_0107a578;
    goto L_0107a5ec;
L_0107a4bc:
    c.r[3] = 0x1acu;
    c.lr = 0x107a4c4u;
    f_801c79a4(c);
R_0107a4c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a4e0;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x107a4e0u;
    f_mr051_01043d20(c);
L_0107a4e0:
R_0107a4e0:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a5ec;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a5ec;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a514u;
    wp::call(c, c.ctr);
R_0107a514:
    goto L_0107a5ec;
L_0107a518:
    c.r[3] = 0x1acu;
    c.lr = 0x107a520u;
    f_801c79a4(c);
R_0107a520:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a540;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x107a540u;
    f_mr051_01044d60(c);
L_0107a540:
R_0107a540:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a5ec;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a5ec;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a574u;
    wp::call(c, c.ctr);
R_0107a574:
    goto L_0107a5ec;
L_0107a578:
    c.r[3] = 0x1bcu;
    c.lr = 0x107a580u;
    f_801c79a4(c);
R_0107a580:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a59c;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x107a59cu;
    f_mr051_01045960(c);
L_0107a59c:
R_0107a59c:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a5d0;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a5d0;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a5d0u;
    wp::call(c, c.ctr);
L_0107a5d0:
R_0107a5d0:
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
    c.lr = 0x107a5ecu;
    wp::call(c, c.ctr);
L_0107a5ec:
R_0107a5ec:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a668;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107a604u;
    f_mr051_0107aac0(c);
R_0107a604:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_0107a668;
    c.r[3] = 0x1acu;
    c.lr = 0x107a614u;
    f_801c79a4(c);
R_0107a614:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a634;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x107a634u;
    f_mr051_01044d60(c);
L_0107a634:
R_0107a634:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a668;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107a668;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a668u;
    wp::call(c, c.ctr);
L_0107a668:
R_0107a668:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a680;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107a680u;
    f_mr051_0107aac0(c);
L_0107a680:
R_0107a680:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a734;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a6acu;
    wp::call(c, c.ctr);
R_0107a6ac:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107a6e4;
L_0107a6b4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107a6e0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a6e0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a6e0u;
    wp::call(c, c.ctr);
L_0107a6e0:
R_0107a6e0:
    c.lr = 0x107a6e4u;
    f_8006a940(c);
L_0107a6e4:
R_0107a6e4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a6fcu;
    wp::call(c, c.ctr);
R_0107a6fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107a6b4;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a734;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a734;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a734u;
    wp::call(c, c.ctr);
L_0107a734:
R_0107a734:
    c.r[3] = 0x4u;
    c.lr = 0x107a73cu;
    f_801c79a4(c);
R_0107a73c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a748;
    c.lr = 0x107a748u;
    f_mr051_010250b0(c);
L_0107a748:
R_0107a748:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a768;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x107a768u;
    f_mr051_01025150(c);
L_0107a768:
R_0107a768:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107a774u;
    f_mr051_010251f0(c);
R_0107a774:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107a780u;
    f_mr051_010251e0(c);
R_0107a780:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107a78cu;
    f_mr051_010251d0(c);
R_0107a78c:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0107a7f0;
    c.r[3] = 0x1u;
    c.lr = 0x107a7a4u;
    f_mr051_01023b70(c);
R_0107a7a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107a7f0;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107a7e4;
L_0107a7b4:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107a7e0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a7e0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a7e0u;
    wp::call(c, c.ctr);
L_0107a7e0:
R_0107a7e0:
    c.lr = 0x107a7e4u;
    f_8006a940(c);
L_0107a7e4:
R_0107a7e4:
    c.lr = 0x107a7e8u;
    f_8006b760(c);
R_0107a7e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107a7b4;
    }
L_0107a7f0:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107a7fcu;
    f_mr051_01025200(c);
R_0107a7fc:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107a834;
L_0107a804:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107a830;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a830;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107a830u;
    wp::call(c, c.ctr);
L_0107a830:
R_0107a830:
    c.lr = 0x107a834u;
    f_8006a940(c);
L_0107a834:
R_0107a834:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107a840u;
    f_mr051_01025220(c);
R_0107a840:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107a804;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107a850u;
    f_mr051_0107ad10(c);
L_0107a850:
R_0107a850:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107a858u;
    f_8006a8f0(c);
R_0107a858:
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

void f_mr051_0107a880(wp::Cpu& c) {
    WP_ENTER(0x107a880u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107a894u: goto R_0107a894;
        case 0x107a8a4u: goto R_0107a8a4;
        case 0x107a8b0u: goto R_0107a8b0;
        case 0x107a8ccu: goto R_0107a8cc;
        case 0x107a8d4u: goto R_0107a8d4;
        case 0x107a8dcu: goto R_0107a8dc;
        case 0x107a940u: goto R_0107a940;
        case 0x107a95cu: goto R_0107a95c;
        case 0x107a978u: goto R_0107a978;
        case 0x107a9b0u: goto R_0107a9b0;
        case 0x107a9ccu: goto R_0107a9cc;
        case 0x107a9e8u: goto R_0107a9e8;
        case 0x107aa04u: goto R_0107aa04;
        case 0x107aa1cu: goto R_0107aa1c;
        case 0x107aa54u: goto R_0107aa54;
        case 0x107aa70u: goto R_0107aa70;
        case 0x107aa8cu: goto R_0107aa8c;
        case 0x107aaa8u: goto R_0107aaa8;
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
    c.lr = 0x107a894u;
    f_801c83b8(c);
R_0107a894:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x107a8a4u;
    f_8000fc40(c);
R_0107a8a4:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x107a8b0u;
    f_8000fc40(c);
R_0107a8b0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a8c8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107a8c8;
    c.r[3] = 0x0u;
    goto L_0107aaa0;
L_0107a8c8:
    c.lr = 0x107a8ccu;
    f_80007530(c);
R_0107a8cc:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x107a8d4u;
    f_800075a0(c);
R_0107a8d4:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x107a8dcu;
    f_8000dd00(c);
R_0107a8dc:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a910;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_0107a980;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_0107a9f0;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_0107aa24;
    goto L_0107aa94;
L_0107a910:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a92c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107a948;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107a964;
    goto L_0107aa9c;
L_0107a92c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107a940u;
    f_8000b780(c);
R_0107a940:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107a948:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107a95cu;
    f_8000b780(c);
R_0107a95c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107a964:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107a978u;
    f_8000b780(c);
R_0107a978:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107a980:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107a99c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107a9b8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107a9d4;
    goto L_0107aa9c;
L_0107a99c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107a9b0u;
    f_8000b780(c);
R_0107a9b0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107a9b8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107a9ccu;
    f_8000b780(c);
R_0107a9cc:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107a9d4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107a9e8u;
    f_8000b780(c);
R_0107a9e8:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107a9f0:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107aa04u;
    f_8000b780(c);
R_0107aa04:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107aa1cu;
    f_8000b780(c);
R_0107aa1c:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107aa24:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107aa40;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107aa5c;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107aa78;
    goto L_0107aa9c;
L_0107aa40:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107aa54u;
    f_8000b780(c);
R_0107aa54:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107aa5c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107aa70u;
    f_8000b780(c);
R_0107aa70:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107aa78:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x107aa8cu;
    f_8000b780(c);
R_0107aa8c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0107aa9c;
L_0107aa94:
    c.r[3] = 0x0u;
    goto L_0107aaa0;
L_0107aa9c:
    c.r[3] = 0x1u;
L_0107aaa0:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x107aaa8u;
    f_801c8404(c);
R_0107aaa8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_0107aac0(wp::Cpu& c) {
    WP_ENTER(0x107aac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107aad4u: goto R_0107aad4;
        case 0x107aaf8u: goto R_0107aaf8;
        case 0x107ab30u: goto R_0107ab30;
        case 0x107ab34u: goto R_0107ab34;
        case 0x107ab4cu: goto R_0107ab4c;
        case 0x107ab84u: goto R_0107ab84;
        case 0x107ab9cu: goto R_0107ab9c;
        case 0x107aba0u: goto R_0107aba0;
        case 0x107aba8u: goto R_0107aba8;
        case 0x107abf4u: goto R_0107abf4;
        case 0x107abf8u: goto R_0107abf8;
        case 0x107ac34u: goto R_0107ac34;
        case 0x107ac54u: goto R_0107ac54;
        case 0x107ac8cu: goto R_0107ac8c;
        case 0x107ac90u: goto R_0107ac90;
        case 0x107aca8u: goto R_0107aca8;
        case 0x107acecu: goto R_0107acec;
        case 0x107acf4u: goto R_0107acf4;
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
    c.lr = 0x107aad4u;
    f_801c83b8(c);
R_0107aad4:
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
    c.lr = 0x107aaf8u;
    wp::call(c, c.ctr);
R_0107aaf8:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107ab34;
L_0107ab04:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ab30;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ab30;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ab30u;
    wp::call(c, c.ctr);
L_0107ab30:
R_0107ab30:
    c.lr = 0x107ab34u;
    f_8006a940(c);
L_0107ab34:
R_0107ab34:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ab4cu;
    wp::call(c, c.ctr);
R_0107ab4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ab60;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107ab04;
    }
L_0107ab60:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107abf8;
L_0107ab74:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_0107ab7c:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x107ab84u;
    f_8000fc40(c);
R_0107ab84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ab94;
    c.r[0] = 0x0u;
    goto L_0107abb4;
L_0107ab94:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x107ab9cu;
    f_8000fc20(c);
R_0107ab9c:
    c.lr = 0x107aba0u;
    f_800699d0(c);
R_0107aba0:
    c.r[4] = 0x800u;
    c.lr = 0x107aba8u;
    f_80066cd0(c);
R_0107aba8:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_0107abb4:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107ab7c;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107abf4;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107abf4;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107abf4u;
    wp::call(c, c.ctr);
L_0107abf4:
R_0107abf4:
    c.lr = 0x107abf8u;
    f_8006a940(c);
L_0107abf8:
R_0107abf8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ac1c;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ac1c;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107ab74;
    }
L_0107ac1c:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ac34u;
    wp::call(c, c.ctr);
R_0107ac34:
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
    c.lr = 0x107ac54u;
    wp::call(c, c.ctr);
R_0107ac54:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107ac90;
L_0107ac60:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ac8c;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ac8c;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ac8cu;
    wp::call(c, c.ctr);
L_0107ac8c:
R_0107ac8c:
    c.lr = 0x107ac90u;
    f_8006a940(c);
L_0107ac90:
R_0107ac90:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107aca8u;
    wp::call(c, c.ctr);
R_0107aca8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107acbc;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107ac60;
    }
L_0107acbc:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107acec;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107acec;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107acecu;
    wp::call(c, c.ctr);
L_0107acec:
R_0107acec:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x107acf4u;
    f_801c8404(c);
R_0107acf4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr051_0107ad10(wp::Cpu& c) {
    WP_ENTER(0x107ad10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107ad24u: goto R_0107ad24;
        case 0x107ad3cu: goto R_0107ad3c;
        case 0x107ad48u: goto R_0107ad48;
        case 0x107ad58u: goto R_0107ad58;
        case 0x107ad64u: goto R_0107ad64;
        case 0x107ad74u: goto R_0107ad74;
        case 0x107ad8cu: goto R_0107ad8c;
        case 0x107ada8u: goto R_0107ada8;
        case 0x107adc4u: goto R_0107adc4;
        case 0x107adf4u: goto R_0107adf4;
        case 0x107ae2cu: goto R_0107ae2c;
        case 0x107ae30u: goto R_0107ae30;
        case 0x107aec0u: goto R_0107aec0;
        case 0x107aeecu: goto R_0107aeec;
        case 0x107aef4u: goto R_0107aef4;
        case 0x107af00u: goto R_0107af00;
        case 0x107af08u: goto R_0107af08;
        case 0x107af0cu: goto R_0107af0c;
        case 0x107af14u: goto R_0107af14;
        case 0x107af28u: goto R_0107af28;
        case 0x107af44u: goto R_0107af44;
        case 0x107af4cu: goto R_0107af4c;
        case 0x107af60u: goto R_0107af60;
        case 0x107af6cu: goto R_0107af6c;
        case 0x107af74u: goto R_0107af74;
        case 0x107af80u: goto R_0107af80;
        case 0x107af88u: goto R_0107af88;
        case 0x107af8cu: goto R_0107af8c;
        case 0x107af90u: goto R_0107af90;
        case 0x107afa4u: goto R_0107afa4;
        case 0x107afacu: goto R_0107afac;
        case 0x107afb8u: goto R_0107afb8;
        case 0x107afbcu: goto R_0107afbc;
        case 0x107afc4u: goto R_0107afc4;
        case 0x107afd0u: goto R_0107afd0;
        case 0x107afd8u: goto R_0107afd8;
        case 0x107afdcu: goto R_0107afdc;
        case 0x107afe4u: goto R_0107afe4;
        case 0x107afecu: goto R_0107afec;
        case 0x107aff8u: goto R_0107aff8;
        case 0x107affcu: goto R_0107affc;
        case 0x107b004u: goto R_0107b004;
        case 0x107b010u: goto R_0107b010;
        case 0x107b018u: goto R_0107b018;
        case 0x107b01cu: goto R_0107b01c;
        case 0x107b024u: goto R_0107b024;
        case 0x107b02cu: goto R_0107b02c;
        case 0x107b034u: goto R_0107b034;
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
    c.lr = 0x107ad24u;
    f_801c83b4(c);
R_0107ad24:
    c.r[27] = ((((g_mr051_bases[4] + 0x26d0u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_mr051_bases[4] + 0x26d0u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x107ad3cu;
    f_800699d0(c);
R_0107ad3c:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x107ad48u;
    f_80066e70(c);
R_0107ad48:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x107ad58u;
    f_80066db0(c);
R_0107ad58:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x107ad64u;
    f_801c79a4(c);
R_0107ad64:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107adc8;
    c.lr = 0x107ad74u;
    f_80007530(c);
R_0107ad74:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0107ad88;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_0107ada0;
L_0107ad88:
    c.lr = 0x107ad8cu;
    f_8000dc30(c);
R_0107ad8c:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_0107ada4;
L_0107ada0:
    c.r[26] = 0x0u;
L_0107ada4:
    c.lr = 0x107ada8u;
    f_8000e070(c);
R_0107ada8:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x107adc4u;
    f_mr051_0105bca0(c);
R_0107adc4:
    c.r[29] = c.r[3] | c.r[3];
L_0107adc8:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107adf4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_0107adf4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107adf4u;
    wp::call(c, c.ctr);
L_0107adf4:
R_0107adf4:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_0107ae30;
L_0107ae00:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ae2c;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ae2c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ae2cu;
    wp::call(c, c.ctr);
L_0107ae2c:
R_0107ae2c:
    c.lr = 0x107ae30u;
    f_8006a940(c);
L_0107ae30:
R_0107ae30:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_0107ae50;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0107ae00;
    }
L_0107ae50:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ae78;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107ae80;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107ae88;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_0107ae90;
    goto L_0107ae94;
L_0107ae78:
    c.r[31] = 0x0u;
    goto L_0107ae94;
L_0107ae80:
    c.r[31] = 0x1u;
    goto L_0107ae94;
L_0107ae88:
    c.r[31] = 0x2u;
    goto L_0107ae94;
L_0107ae90:
    c.r[31] = 0x3u;
L_0107ae94:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107aec0;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107aec0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107aec0u;
    wp::call(c, c.ctr);
L_0107aec0:
R_0107aec0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107aee4;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0107af64;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0107afb0;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_0107aff0;
    goto L_0107b02c;
L_0107aee4:
    c.r[3] = 0x5u;
    c.lr = 0x107aeecu;
    f_8001a890(c);
R_0107aeec:
    c.r[3] = 0x0u;
    c.lr = 0x107aef4u;
    f_80076130(c);
R_0107aef4:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x107af00u;
    f_80075f20(c);
R_0107af00:
    c.r[3] = 0x1u;
    c.lr = 0x107af08u;
    f_80076130(c);
R_0107af08:
    c.lr = 0x107af0cu;
    f_80076100(c);
R_0107af0c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x107af14u;
    f_8000e240(c);
R_0107af14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107af54;
    c.r[26] = 0x0u;
    goto L_0107af48;
L_0107af24:
    c.lr = 0x107af28u;
    f_8000dd70(c);
R_0107af28:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x107af44u;
    f_8000fc60(c);
R_0107af44:
    c.r[26] = c.r[26] + 0x1u;
L_0107af48:
    c.lr = 0x107af4cu;
    f_80007570(c);
R_0107af4c:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107af24;
    }
L_0107af54:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x107af60u;
    f_800293c0(c);
R_0107af60:
    goto L_0107b02c;
L_0107af64:
    c.r[3] = 0x5u;
    c.lr = 0x107af6cu;
    f_8001a890(c);
R_0107af6c:
    c.r[3] = 0x0u;
    c.lr = 0x107af74u;
    f_80076130(c);
R_0107af74:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x107af80u;
    f_80075f20(c);
R_0107af80:
    c.r[3] = 0x1u;
    c.lr = 0x107af88u;
    f_80076130(c);
R_0107af88:
    c.lr = 0x107af8cu;
    f_80076100(c);
R_0107af8c:
    c.lr = 0x107af90u;
    f_8000e070(c);
R_0107af90:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_0107afa0;
    c.r[3] = 0x6u;
L_0107afa0:
    c.lr = 0x107afa4u;
    f_8000e080(c);
R_0107afa4:
    c.r[3] = 0x1u;
    c.lr = 0x107afacu;
    f_80029330(c);
R_0107afac:
    goto L_0107b02c;
L_0107afb0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107afb8u;
    f_80071fe0(c);
R_0107afb8:
    c.lr = 0x107afbcu;
    f_8001a890(c);
R_0107afbc:
    c.r[3] = 0x0u;
    c.lr = 0x107afc4u;
    f_80076130(c);
R_0107afc4:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x107afd0u;
    f_80075f20(c);
R_0107afd0:
    c.r[3] = 0x1u;
    c.lr = 0x107afd8u;
    f_80076130(c);
R_0107afd8:
    c.lr = 0x107afdcu;
    f_80076100(c);
R_0107afdc:
    c.r[3] = 0x4u;
    c.lr = 0x107afe4u;
    f_8000e080(c);
R_0107afe4:
    c.r[3] = 0x1u;
    c.lr = 0x107afecu;
    f_80029330(c);
R_0107afec:
    goto L_0107b02c;
L_0107aff0:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107aff8u;
    f_80071fe0(c);
R_0107aff8:
    c.lr = 0x107affcu;
    f_8001a890(c);
R_0107affc:
    c.r[3] = 0x0u;
    c.lr = 0x107b004u;
    f_80076130(c);
R_0107b004:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x107b010u;
    f_80075f20(c);
R_0107b010:
    c.r[3] = 0x1u;
    c.lr = 0x107b018u;
    f_80076130(c);
R_0107b018:
    c.lr = 0x107b01cu;
    f_80076100(c);
R_0107b01c:
    c.r[3] = 0x8u;
    c.lr = 0x107b024u;
    f_8000e080(c);
R_0107b024:
    c.r[3] = 0x1u;
    c.lr = 0x107b02cu;
    f_80029330(c);
L_0107b02c:
R_0107b02c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x107b034u;
    f_801c8400(c);
R_0107b034:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr051_0107b050(wp::Cpu& c) {
    WP_ENTER(0x107b050u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107b088u: goto R_0107b088;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr051_bases[5] + 0x285f0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr051_bases[6] + 0x1cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x285f0u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[6] + 0x1cu) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    c.lr = 0x107b088u;
    f_80030b40(c);
R_0107b088:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr051_0107b0a0(wp::Cpu& c) {
    WP_ENTER(0x107b0a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    f_800315f0(c);
    return;
}

void f_mr051_0107b0b0(wp::Cpu& c) {
    WP_ENTER(0x107b0b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107b0e0u: goto R_0107b0e0;
        case 0x107b0e8u: goto R_0107b0e8;
        case 0x107b114u: goto R_0107b114;
        case 0x107b120u: goto R_0107b120;
        case 0x107b144u: goto R_0107b144;
        case 0x107b16cu: goto R_0107b16c;
        case 0x107b184u: goto R_0107b184;
        case 0x107b1a0u: goto R_0107b1a0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr051_bases[4] + 0x2708u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mr051_bases[4] + 0x2708u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x107b0e0u;
    f_80153530(c);
R_0107b0e0:
    c.r[3] = 0x6u;
    c.lr = 0x107b0e8u;
    f_80153920(c);
R_0107b0e8:
    c.r[31] = ((((g_mr051_bases[4] + 0x2710u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr051_bases[4] + 0x2710u) & 0xFFFFu);
L_0107b0f4:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x107b114u;
    f_801537c0(c);
R_0107b114:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107b120u;
    f_80153590(c);
R_0107b120:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0107b134;
    c.r[4] = 0xfu;
L_0107b134:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x107b144u;
    f_80153320(c);
R_0107b144:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_0107b160;
    c.r[6] = 0x3u;
L_0107b160:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107b16cu;
    f_801533a0(c);
R_0107b16c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x107b184u;
    f_80153360(c);
R_0107b184:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x107b1a0u;
    f_80153400(c);
R_0107b1a0:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107b0f4;
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

void f_mr051_0107b1d0(wp::Cpu& c) {
    WP_ENTER(0x107b1d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107b204u: goto R_0107b204;
        case 0x107b20cu: goto R_0107b20c;
        case 0x107b214u: goto R_0107b214;
        case 0x107b21cu: goto R_0107b21c;
        case 0x107b22cu: goto R_0107b22c;
        case 0x107b244u: goto R_0107b244;
        case 0x107b258u: goto R_0107b258;
        case 0x107b25cu: goto R_0107b25c;
        case 0x107b268u: goto R_0107b268;
        case 0x107b278u: goto R_0107b278;
        case 0x107b27cu: goto R_0107b27c;
        case 0x107b280u: goto R_0107b280;
        case 0x107b2a4u: goto R_0107b2a4;
        case 0x107b2ecu: goto R_0107b2ec;
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
    c.lr = 0x107b204u;
    f_80150850(c);
R_0107b204:
    c.r[3] = 0x1u;
    c.lr = 0x107b20cu;
    f_80153e40(c);
R_0107b20c:
    c.r[3] = 0x0u;
    c.lr = 0x107b214u;
    f_80153e90(c);
R_0107b214:
    c.r[3] = 0x1u;
    c.lr = 0x107b21cu;
    f_80153f20(c);
R_0107b21c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x107b22cu;
    f_80153ee0(c);
R_0107b22c:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x107b244u;
    f_801536f0(c);
R_0107b244:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x107b258u;
    f_80153df0(c);
R_0107b258:
    c.lr = 0x107b25cu;
    f_8014f020(c);
R_0107b25c:
    c.r[3] = ((((g_mr051_bases[4] + 0x2730u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr051_bases[4] + 0x2730u) & 0xFFFFu);
    c.lr = 0x107b268u;
    f_8014e9e0(c);
R_0107b268:
    c.r[4] = ((((g_mr051_bases[4] + 0x2748u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[4] + 0x2748u) & 0xFFFFu);
    c.lr = 0x107b278u;
    f_8014f200(c);
R_0107b278:
    c.lr = 0x107b27cu;
    f_8004aa80(c);
R_0107b27c:
    c.lr = 0x107b280u;
    f_800ee3c0(c);
R_0107b280:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x107b2a4u;
    f_800e95b0(c);
R_0107b2a4:
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
    c.lr = 0x107b2ecu;
    f_80150560(c);
R_0107b2ec:
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

void f_mr051_0107b370(wp::Cpu& c) {
    WP_ENTER(0x107b370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107b3b0u: goto R_0107b3b0;
        case 0x107b3c4u: goto R_0107b3c4;
        case 0x107b3d4u: goto R_0107b3d4;
        case 0x107b3e4u: goto R_0107b3e4;
        case 0x107b3f0u: goto R_0107b3f0;
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
    c.lr = 0x107b3b0u;
    f_8003d6b0(c);
R_0107b3b0:
    c.r[4] = ((((g_mr051_bases[5] + 0x28600u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr051_bases[5] + 0x28600u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x107b3c4u;
    f_801c79a4(c);
R_0107b3c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0107b3d4;
    c.lr = 0x107b3d4u;
    f_80034ac0(c);
L_0107b3d4:
R_0107b3d4:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x107b3e4u;
    f_80052170(c);
R_0107b3e4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x107b3f0u;
    f_80052190(c);
R_0107b3f0:
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

void f_mr051_0107b420(wp::Cpu& c) {
    WP_ENTER(0x107b420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107b468u: goto R_0107b468;
        case 0x107b470u: goto R_0107b470;
        case 0x107b484u: goto R_0107b484;
        case 0x107b494u: goto R_0107b494;
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
    if (wp::cr_get(c, 2)) goto L_0107b494;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107b470;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107b470;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x107b468u;
    f_80034b10(c);
R_0107b468:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x107b470u;
    f_801c7a8c(c);
L_0107b470:
R_0107b470:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107b484;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x107b484u;
    f_80051600(c);
L_0107b484:
R_0107b484:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0107b494;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107b494u;
    f_801c7a8c(c);
L_0107b494:
R_0107b494:
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

void f_mr051_0107b4c0(wp::Cpu& c) {
    WP_ENTER(0x107b4c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107b504u: goto R_0107b504;
        case 0x107b530u: goto R_0107b530;
        case 0x107b53cu: goto R_0107b53c;
        case 0x107b544u: goto R_0107b544;
        case 0x107b550u: goto R_0107b550;
        case 0x107b558u: goto R_0107b558;
        case 0x107b560u: goto R_0107b560;
        case 0x107b580u: goto R_0107b580;
        case 0x107b5a0u: goto R_0107b5a0;
        case 0x107b5a8u: goto R_0107b5a8;
        case 0x107b5b4u: goto R_0107b5b4;
        case 0x107b5e4u: goto R_0107b5e4;
        case 0x107b600u: goto R_0107b600;
        case 0x107b648u: goto R_0107b648;
        case 0x107b664u: goto R_0107b664;
        case 0x107b67cu: goto R_0107b67c;
        case 0x107b698u: goto R_0107b698;
        case 0x107b6a8u: goto R_0107b6a8;
        case 0x107b6acu: goto R_0107b6ac;
        case 0x107b6e4u: goto R_0107b6e4;
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
    c.lr = 0x107b504u;
    f_801c83b8(c);
R_0107b504:
    c.r[29] = ((((g_mr051_bases[4] + 0x26e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr051_bases[4] + 0x26e8u) & 0xFFFFu);
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
    c.lr = 0x107b530u;
    f_8014c050(c);
R_0107b530:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x107b53cu;
    f_80154c30(c);
R_0107b53c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x107b544u;
    f_8014b090(c);
R_0107b544:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x107b550u;
    f_80154d30(c);
R_0107b550:
    c.r[3] = 0x0u;
    c.lr = 0x107b558u;
    f_80154e50(c);
R_0107b558:
    c.r[3] = 0x0u;
    c.lr = 0x107b560u;
    f_80151a30(c);
R_0107b560:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x107b580u;
    f_80151a60(c);
R_0107b580:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x107b5a0u;
    f_80151a60(c);
R_0107b5a0:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x107b5a8u;
    f_80034f00(c);
R_0107b5a8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x107b5b4u;
    f_80034f20(c);
R_0107b5b4:
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
    c.lr = 0x107b5e4u;
    f_8014f9d0(c);
R_0107b5e4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x107b600u;
    f_8014f780(c);
R_0107b600:
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
L_0107b61c:
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
    c.lr = 0x107b648u;
    f_80126450(c);
R_0107b648:
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
    c.lr = 0x107b664u;
    f_8014b7e0(c);
R_0107b664:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x107b67cu;
    f_80154e70(c);
R_0107b67c:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x107b698u;
    f_8014f780(c);
R_0107b698:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107b61c;
    }
    c.lr = 0x107b6a8u;
    f_mr051_0107b0b0(c);
R_0107b6a8:
    c.lr = 0x107b6acu;
    f_mr051_0107b1d0(c);
R_0107b6ac:
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
    c.lr = 0x107b6e4u;
    f_801c8404(c);
R_0107b6e4:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

